#! /usr/bin/env python3
import fileinput, time

tosort=list(map(int, fileinput.input()[0].split()[1:]))
before = time.perf_counter()
tosort.sort()
after = time.perf_counter()
print(int(1000*(after-before)))
