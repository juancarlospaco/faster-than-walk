#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import timeit
import time
import string
import argparse
import csv

def run_test(library, repetitions, setup_test, run_test, timer=None):
    TIMER = timeit.default_timer
    if timer and timer.lower() == 'cpu':
        TIMER = time.clock
    mytime = timeit.timeit(stmt=run_test, setup=setup_test, number=repetitions, timer=TIMER)
    print(f"{library.upper()} =\t{round(mytime, 4)}\n")
    result = [library, repetitions, mytime]
    return result


def run_all_benchmarks(repetitions=10_000, output_file="results.csv", **kwargs):
    results = []
    tests = []
    timer_type = kwargs.get('timer')

    tests.append(('os.walk', 'import os', "list(os.walk('/usr/share'))"))
    tests.append(('faster_than_walk', 'import faster_than_walk', "faster_than_walk.walks_simple('/usr/share')"))

    for test in tests:
        my_result = run_test(test[0], repetitions, test[1], test[2], timer=timer_type)
        results.append((test[0], my_result[-1]))

    if output_file:
        with open(output_file, 'w') as csvfile:
            outwriter = csv.writer(csvfile, dialect=csv.excel)
            outwriter.writerow(('library', 'time'))
            for result in results:
                outwriter.writerow(result)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description="Benchmarks for CSV libs")
    parser.add_argument('--repetitions', metavar='c', type=int, default=10_000, help="Repetitions")
    parser.add_argument('--timer', type=str, default="real", choices=('real','cpu'), help="Timer type: real [default] or cpu")
    args = vars(parser.parse_args())
    assert args.get('repetitions') > 100, "Repetitions must be > 100."
    print(args)
    run_all_benchmarks(**args)
