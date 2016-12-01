#! /usr/bin/env python3
import fileinput

tosort=list(map(int, fileinput.input()[0].split()[1:]))
tosort.sort()
print(" ".join(map(str, tosort)))
