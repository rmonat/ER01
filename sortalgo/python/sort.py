import fileinput

tosort=fileinput.input()[0].split()[1:]
tosort.sort()
print(" ".join(map(str,tosort)))
