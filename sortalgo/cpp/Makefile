all: stupid_quicksort stl_sort

stupid_quicksort: stupid_quicksort.cpp
	g++ -O0 -std=c++11 stupid_quicksort.cpp -o stupid_quicksortO0
	g++ -O1 -std=c++11 stupid_quicksort.cpp -o stupid_quicksortO1
	g++ -O2 -std=c++11 stupid_quicksort.cpp -o stupid_quicksortO2
	g++ -O3 -std=c++11 stupid_quicksort.cpp -o stupid_quicksortO3

stl_sort: stl_sort.cpp
	g++ -O0 -std=c++11 stl_sort.cpp -o stl_sortO0
	g++ -O1 -std=c++11 stl_sort.cpp -o stl_sortO1
	g++ -O2 -std=c++11 stl_sort.cpp -o stl_sortO2
	g++ -O3 -std=c++11 stl_sort.cpp -o stl_sortO3


.PHONY: clean

clean:
	rm -f stupid_quicksortO0 stupid_quicksortO1 stupid_quicksortO2 stupid_quicksortO3 stl_sortO0 stl_sortO1 stl_sortO2 stl_sortO3
