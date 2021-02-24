rm --verbose --force dist/*.zip
rm --verbose --force --recursive dist/faster_than_walk/faster_than_walk/
rm --verbose --force --recursive dist/faster_than_walk/faster_than_walk/__pycache__/
cp --verbose --recursive faster_than_walk dist/faster_than_walk/
cd dist && zip -9 -T -v -r faster_than_walk.zip *
