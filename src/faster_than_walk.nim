import nimpy
from strutils import normalize, endsWith
from os import walkDirRec, walkPattern, pcFile, pcDir, pcLinkToDir, walkFiles, walkDirs, walkDir


proc walks*(folderpath: string, extensions: seq[string] = @[""],
  followlinks : bool = false, yieldfiles: bool = true, debugs: bool = false): seq[string] {.exportpy.} =
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


proc walks_simple*(folderpath: string, recursive: bool = true, relative: bool = false): seq[string] {.exportpy.} =
  ## Faster os.walk(), it only takes the path, return 1 list of strings.
  if likely(recursive):
    for item in walkDirRec(folderpath):
      result.add item
  else:
    for item in walkDir(folderpath, relative):
      result.add item.path


proc walks_files*(globpattern: string, folders_only: bool = false): seq[string] {.exportpy.} =
  ## Faster os.walk(), similar to walks but optimized for Files or Folders only.
  if unlikely(folders_only):
    for item in walkDirs(globpattern):
      result.add item
  else:
    for item in walkFiles(globpattern):
      result.add item
