all: quicksort_stupid stl_sort

quicksort_stupid: quicksort_stupid.cpp
	g++ -std=c++11 quicksort_stupid.cpp -o quicksort_stupid

stl_sort: stl_sort.cpp
	g++ -std=c++11 stl_sort.cpp -o stl_sort


.PHONY: clean

clean:
	rm -f quicksort_stupid stl_sort
