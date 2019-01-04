FROM nimlang/nim
RUN rm -rf /tmp/*
RUN apt-get update -y --quiet
RUN apt-get install -y python3-pip
RUN nimble -y refresh
RUN nimble -y install nimpy@0.1.0
ADD src/faster_than_walk.nim /tmp/
RUN nim c -d:release --app:lib --out:/tmp/faster_than_walk.so /tmp/faster_than_walk.nim
ADD benchmark.py /tmp/
ADD run-benchmark.sh /tmp/
RUN rm -rf /var/lib/apt/lists/* /var/tmp/* /tmp/nimblecache/ /tmp/*.nim
