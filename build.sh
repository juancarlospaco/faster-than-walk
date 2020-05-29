#!/bin/bash
nim compileToC --compileOnly -d:danger --app:lib --opt:speed --gc:markAndSweep --nimcache:. --out:faster_than_walk.so src/faster_than_walk.nim

cp --verbose --force ~/.choosenim/toolchains/nim-1.0.4/lib/nimbase.h nimbase.h

rm --verbose --force faster_than_walk.json
