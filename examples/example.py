import faster_than_walk as ftw

print(ftw.walk("/tmp"))

print(ftw.walk_glob("/tmp/*.csv"))

print(ftw.walk_simple("/tmp"))
