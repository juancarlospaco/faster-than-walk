import faster_than_walk as ftw

print(ftw.walks("/tmp"))

print(ftw.walks_glob("/tmp/*.csv"))

print(ftw.walks_simple("/tmp"))
