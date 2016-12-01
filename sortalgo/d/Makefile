all: sort.
	gdc -O0 sort.d -o sortgdcO0
	gdc -O1 sort.d -o sortgdcO1
	gdc -O2 sort.d -o sortgdcO2
	gdc -O3 sort.d -o sortgdcO3

.PHONY: clean

clean:
	rm -f sortdmd.o sortdmd sortgdcO0 sortgdcO1 sortgdcO2 sortgdcO3
