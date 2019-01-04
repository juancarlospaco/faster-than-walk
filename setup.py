#!/usr/bin/env python3
# -*- coding: utf-8 -*-

from setuptools import Extension
from setuptools import setup


sources = """faster_than_walk_faster_than_walk.c
stdlib_algorithm.c
stdlib_json.c
stdlib_os.c
stdlib_sequtils.c
stdlib_system.c
nimpy_nimpy.c
stdlib_bitops.c
stdlib_lexbase.c
stdlib_ospaths.c
stdlib_streams.c
stdlib_tables.c
nimpy_py_lib.c
stdlib_complex.c
stdlib_macros.c
stdlib_parsejson.c
stdlib_strformat.c
stdlib_times.c
nimpy_py_types.c
stdlib_dynlib.c
stdlib_math.c
stdlib_parseutils.c
stdlib_strscans.c
stdlib_typetraits.c
nimpy_py_utils.c
stdlib_hashes.c
stdlib_options.c
stdlib_posix.c
stdlib_strutils.c
stdlib_unicode.c""".splitlines()


setup(
    ext_modules = [
        Extension(
            name               = "faster_than_walk",
            sources            = sources,
            extra_compile_args = ["-flto", "-ffast-math", "-march=native", "-O3"],
            extra_link_args    = ["-flto", "-ffast-math", "-march=native", "-O3"],
            include_dirs       = ["."],
        )
    ]
)
