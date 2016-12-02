all: sort quicksort

sort: sort.d
	gdc -O0 sort.d -o sortO0
	gdc -O1 sort.d -o sortO1
	gdc -O2 sort.d -o sortO2
	gdc -O3 sort.d -o sortO3

quicksort: quicksort.d
	gdc -O0 quicksort.d -o quicksortO0
	gdc -O1 quicksort.d -o quicksortO1
	gdc -O2 quicksort.d -o quicksortO2
	gdc -O3 quicksort.d -o quicksortO3

.PHONY: clean

clean:
	rm -f sortO0 sortO1 sortO2 sortO3 quicksortO0 quicksortO1 quicksortO2 quicksortO3
