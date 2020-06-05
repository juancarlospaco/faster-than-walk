import os, sys, pathlib, setuptools

if sys.platform.startswith("lin"):
  folder = "lin" # OS is Linux
elif sys.platform.startswith("win"):
  folder = "win" # OS is Windows
else:
  folder = "mac" # OS is Mac

sources = []
for c_source_file in os.listdir(folder): # Walk the folder with C files.
  if c_source_file.endswith(".c"):       # Collect all C files.
    sources.append(str(pathlib.Path(folder) / c_source_file))

setuptools.setup(
  ext_modules = [
    setuptools.Extension(
      name = "faster_than_walk",
      sources = sources,
      include_dirs = [folder],
      extra_link_args = ["-s"],
      extra_compile_args = ["-flto", "-ffast-math", "-march=native", "-mtune=native", "-O3", "-fsingle-precision-constant"],
    )
  ]
)
