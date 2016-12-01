#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <cmath>
#include <chrono>

using namespace std;


template <class TimeT>
unsigned long time_ms (TimeT before, TimeT after) {
	auto diff = after-before;
	
	auto doubledur = chrono::duration <double, milli> (diff).count();
	auto uldur = static_cast<unsigned long>(round(doubledur));
	
	return uldur;
}


int main() {
	unsigned long len;
	cin >> len;
	
	vector<int_fast32_t> arr(len);
	for (unsigned long i = 0; i < len; ++i)
		cin >> arr[i];
	
	auto before = chrono::high_resolution_clock::now();
	sort(arr.begin(), arr.end());
	auto after = chrono::high_resolution_clock::now();
	
	cout << time_ms(before, after) << endl;
	
	return 0;
}
