import os, strutils, nimpy


proc walk*(folderpath: string, extensions: seq[string] = @[""], followlinks : bool = false, yieldfiles: bool = true, debugs: bool = false, check_folders: bool = false): seq[string] {.exportpy.} =
  ## Faster os.walk(), followlinks follows SymLinks, yieldfiles yields files else folders, return 1 list of strings.
  let extused {.noalias.} = create(bool, sizeOf(bool))  # Optimization.
  extused[] = extensions != @[""] and extensions.len > 0
  for item in walkDirRec(folderpath, {if yieldfiles: pcFile else: pcDir}, {if followlinks: pcLinkToDir else: pcDir}, checkDir=check_folders):
    if unlikely(debugs): echo item
    if unlikely(extused[]):
      for ext in extensions:
        if item.normalize.endsWith(ext): result.add item
    else: result.add item
  dealloc extused


proc walk_glob*(globpattern: string): seq[string] {.exportpy.} =
  ## Faster os.walk() using 1 standard POSIX like Glob Pattern string, return 1 list of strings.
  for item in walkPattern(globpattern): result.add item


proc walk_simple*(folderpath: string, relative: bool = false, check_folders: bool = false): seq[string] {.exportpy.} =
  ## Faster os.walk(), it only takes the path, return 1 list of strings.
  for item in walkDirRec(folderpath, relative=relative, checkDir=check_folders): result.add item


proc walk_folders*(globpattern: string): seq[string] {.exportpy.} =
  ## Faster os.walk(), similar to walks but optimized for Files or Folders only.
  for item in walkDirs(globpattern): result.add item


proc walk_files*(globpattern: string): seq[string] {.exportpy.} =
  ## Faster os.walk(), similar to walks but optimized for Files or Folders only.
  for item in walkFiles(globpattern): result.add item
