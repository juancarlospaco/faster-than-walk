## Faster Than Walk
## ================
##
## - Faster recursive directory walk for Python.
##
## API
## ---
##
## - ``faster_than_walk.walks()`` Recursive directory walk from path to list of strings.
## - ``faster_than_walk.walks_glob()`` Recursive directory walk from Glob Pattern to list of strings.
## - ``faster_than_walk.walks_simple()`` Recursive directory walk from path to list of strings.
import os, strutils, nimpy
{.passL: "-s", optimization: speed.}

proc walks*(folderpath: string, extensions: seq[string] = @[""], followlinks : bool = false, yieldfiles: bool = true, debugs: bool = false): seq[string] {.exportpy.} =
  ## Faster os.walk(), followlinks follows SymLinks, yieldfiles yields files else folders, return 1 list of strings.
  let extused = extensions != @[""] and extensions.len > 1 # Optimization.
  for item in walkDirRec(folderpath, {if yieldfiles: pcFile else: pcDir}, {if followlinks: pcLinkToDir else: pcDir}):
    if unlikely(debugs): echo item
    if unlikely(extused):
      for ext in extensions:
        if item.normalize.endsWith(ext):
          result.add item
    else:
      result.add item

proc walks_glob*(globpattern: string): seq[string] {.exportpy.} =
  ## Faster os.walk() using 1 standard POSIX like Glob Pattern string, return 1 list of strings.
  for item in walkPattern(globpattern):
    result.add item

proc walks_simple*(folderpath: string): seq[string] {.exportpy.} =
  ## Faster os.walk(), it only takes the path, return 1 list of strings.
  for item in walkDirRec(folderpath):
    result.add item
