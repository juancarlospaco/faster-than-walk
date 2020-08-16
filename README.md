<meta name='keywords' content='walk, os.walk, python, faster, speed, benchmark, rapido, velocidad, optimizacion, cython, pypy, cpython, docker, json, ndjson, rapido, veloz, performance, critical, compiled, module, modulo, loc, minimalismo, minimalism, simple, small, tiny, argentina, spanish, compare, mejora'>

# Faster-than-Walk

[![screenshot](https://source.unsplash.com/eH_ftJYhaTY/800x402)](https://youtu.be/QiKwnlyhKrk?t=5)

![](https://img.shields.io/github/languages/top/juancarlospaco/faster-than-walk?style=for-the-badge)
![](https://img.shields.io/github/languages/count/juancarlospaco/faster-than-walk?logoColor=green&style=for-the-badge)
![](https://img.shields.io/github/stars/juancarlospaco/faster-than-walk?style=for-the-badge "Star faster-than-walk on GitHub!")
![](https://img.shields.io/maintenance/yes/2020?style=for-the-badge)
![](https://img.shields.io/github/languages/code-size/juancarlospaco/faster-than-walk?style=for-the-badge)
![](https://img.shields.io/github/issues-raw/juancarlospaco/faster-than-walk?style=for-the-badge "Bugs")
![](https://img.shields.io/github/issues-pr-raw/juancarlospaco/faster-than-walk?style=for-the-badge "PRs")
![](https://img.shields.io/github/commit-activity/y/juancarlospaco/faster-than-walk?style=for-the-badge)
![](https://img.shields.io/github/last-commit/juancarlospaco/faster-than-walk?style=for-the-badge "Commits")

| Library                       | Speed    |
|-------------------------------|----------|
| os.walk (std lib)             | `225.98` |
| faster_than_walk              | `69.0`   |

<details>

- Benchmarks run on Docker from Dockerfile on this repo.
- Speed is IRL time to complete 10000 full recursive directory walks to `/usr/share/`.
- This depends a lot on I/O but overall most of times is faster.
- Stats as of year 2019.
- x86_64 64Bit AMD, SSD, Arch Linux.

</details>


# Use

```python
import faster_than_walk as ftw

print(ftw.walk("/path/to/some/folder"))                   # From path string
print(ftw.walk("/path/to/some/folder", [".py", ".txt"]))  # Filter by Extension
print(ftw.walk("/path/to/some/folder", [".py"], followlinks=True))  # Follow SymLinks
print(ftw.walk("/path/to/some/folder", [".py"], followlinks=True, yieldfiles=False)) # Folders only
print(ftw.walk_glob("*.txt"))           # Standard POSIX Globs
print(ftw.walk_glob("**/*.txt"))        # Recursive standard POSIX Globs
```


# walk()
<details>

**Description:**
Takes a path string, makes a full recursive walk of folders and returns a list with the result.
Recursive directory walk from path to list of strings.

**Arguments:**
- `folderpath` A local path, `str` type, required, must not be empty string.
- `extensions` list of file Extensions, `list` type, optional, list must contain `str`, must not be empty list.
- `followlinks` Set to `True` to follow SymLinks, `bool` type, optional.
- `yieldfiles` Set to `False` to return folders only, `bool` type, optional.
- `debugs` Set to `True` for Debug mode, `bool` type, optional, not needed for normal usage.

**Returns:**
Result, `list` type, values of the list are `str` type.

</details>


# walk_glob()
<details>

**Description:**
Takes a path string, makes a full recursive walk of folders and returns a list with the result.
Recursive directory walk from standard POSIX like Glob Pattern string to list of strings, allows Recursive and Non-Recursive Globs.

**Arguments:**
- `globpattern` A standard POSIX like Glob Pattern string, `str` type, required, must not be empty string.

**Returns:**
Result, `list` type, values of the list are `str` type.

</details>


# walk_simple()
<details>

**Description:**
Takes a path string, makes a full recursive walk of folders and returns a list with the result.
Recursive directory walk from path to list of strings.

**Arguments:**
- `folderpath` A local path, `str` type, required, must not be empty string.
- `recursive` Set to `True` to be Recursive, `bool` type, optional.
- `relative` Set to `True` to Relative paths, `bool` type, optional.

**Returns:**
Result, `list` type, values of the list are `str` type.

</details>


# walk_files()
<details>

**Description:**
Takes a path string, makes a full recursive walk of folders and returns a list with the result.
Recursive directory walk from path to list of strings.

**Arguments:**
- `globpattern` A standard POSIX like Glob Pattern string, `str` type, required, must not be empty string.
- `folders_only` Set to `True` to be only return Folders, `bool` type, optional.

**Returns:**
Result, `list` type, values of the list are `str` type.

</details>


[**For more Examples check the Examples.**](https://github.com/juancarlospaco/faster-than-walk/blob/master/examples/example.py)

Instead of having a pair of functions with a lot of arguments that you should provide to make it work,
we have tiny functions with very few arguments that do one thing and do it as fast as possible.


# Install

- `pip install faster_than_walk`


# Dependencies

- **None**


# Docker

- Make a quick test drive on Docker!.

```bash
$ ./build-docker.sh
$ ./run-docker.sh
$ ./run-benchmark.sh  # Inside Docker.
```


# Platforms

- ✅ Linux
- ✅ Windows
- ✅ Mac
- ✅ Android
- ✅ Raspberry Pi
- ✅ BSD


# Extras

More Faster Libraries...

- https://github.com/juancarlospaco/faster-than-csv#faster-than-csv
- https://github.com/juancarlospaco/faster-than-requests#faster-than-requests
- We want to make Open Source faster, better, stronger.


# Requisites

- Python 3.
- GCC.
- 64 Bit.


# Stars

![Star faster-than-walk on GitHub](https://starchart.cc/juancarlospaco/faster-than-walk.svg "Star faster-than-walk on GitHub!")


# FAQ

- Whats the idea, inspiration, reason, etc ?.

[Feel free to Fork, Clone, Download, Improve, Reimplement, Play with this Open Source. Make it 10 times faster, 10 times smaller.](http://tonsky.me/blog/disenchantment)

- This requires Cython ?.

No.

- This runs on PyPy ?.

No.

- This runs on Python2 ?.

I dunno. (Not supported)

- This runs on 32Bit ?.

No.

- This runs with Clang ?.

No.

- How can I Install it ?.

`pip install faster_than_walk`

- How can be faster than `os.walk` ?.

I dunno.

- How to Filter by File Extensions ?.

`extensions = [".py", ".txt", ".tar.gz"]`

(Glob Pattern may be faster for several file extensions than the extensions argument)

- How to force Follow SymLinks ?.

`followlinks = True`

- How to force return Folders only and Not Files ?.

`yieldfiles = False`

- How to enable Debug ?.

`debugs = True`

- How to use a Glob Pattern ?.

`globpattern = "*.txt"`

- How to use a Recursive Glob Pattern ?.

`globpattern = "**/*.txt"`

- I need to `import glob` on my code to use a Glob Pattern ?.

No.

- Whats a Glob Pattern ?.

https://en.wikipedia.org/wiki/Glob_%28programming%29

- Why needs 64Bit ?.

Maybe it works on 32Bit, but is not supported, integer sizes are too small, and performance can be worse.

- Why needs Python 3 ?.

Maybe it works on Python 2, but is not supported, and performance can be worse, we suggest to migrate to Python3.

- Can I wrap the functions on a `try: except:` block ?.

Functions do not have internal `try: except:` blocks,
so you can wrap them inside `try: except:` blocks if you need very resilient code.

- PIP fails to install or fails build the wheel ?.

Add at the end of the PIP install command:

` --isolated --disable-pip-version-check --no-cache-dir --no-binary :all: `

Not my Bug.

- How to Build the project ?.

`build.sh`

- How to Package the project ?.

`package.sh`

- This requires Nimble ?.

No.

- Whats the unit of measurement for speed ?.

Unmmodified raw output of Python `timeit` module.

Please send Pull Request to Python to improve the output of `timeit`.

- How does this compare to `scandir` ?.

**Scandir:**
- Not Recursive.
- Returns iterator.
- Items yielded in random order.
- Lenght of return unknown, you can not assert it return something or nothing.

**ftw:**
- Recursive.
- Returns `list`.
- Items preserve order.
- Lenght of return known, you can assert it returns something.
