#include <algorithm>
#include <random>
#include <chrono>
#include <limits>
#include <cinttypes>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
	if (argc == 1) {
		std::cerr << "Usage: " << argv[0] << " <seed> <nb elements>" << std::endl;
		return 1;
	}
	if (argc != 3) {
		std::cerr << "Error: two arguments expected, seed and size of the array." << std::endl;
		return 2;
	}
	int32_t seed;
	unsigned long size;
	try {
		seed = static_cast<int32_t>(std::stoi(argv[1]));
		size = std::stoul(argv[2]);
	} catch(...) {
		std::cerr << "Error: the seed should be an integer and the number of elements a positive integer." << std::endl;
		return 3;
	}
	
	std::default_random_engine eng(seed);
	std::uniform_int_distribution<int32_t> intdist(std::numeric_limits<int32_t>::min(), std::numeric_limits<int32_t>::max());
	
	std::cout << size;
	
	for (unsigned long i=0; i<size; ++i) {
		std::cout << " " << intdist(eng);
	}
	std::cout << "\n";
	
	return 0;
}
