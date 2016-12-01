#include <algorithm>
#include <random>
#include <chrono>
#include <limits>
#include <cinttypes>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
	if (argc != 2) {
		std::cerr << "Error: one argument expected, size of the array." << std::endl;
		return 1;
	}
	unsigned long size;
	try {
		size = std::stoul(argv[1]);
	} catch(...) {
		std::cerr << "Error: positive integer expected as argument, size of the array." << std::endl;
		return 2;
	}
	
	
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine eng(seed);
	std::uniform_int_distribution<int32_t> intdist(std::numeric_limits<int32_t>::min(), std::numeric_limits<int32_t>::max());
	
	std::cout << size;
	
	for (unsigned long i=0; i<size; ++i) {
		std::cout << " " << intdist(eng);
	}
	std::cout << "\n";
	
	return 0;
}
