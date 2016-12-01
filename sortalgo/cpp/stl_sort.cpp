#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdint>

using namespace std;


int main() {
	unsigned long len;
	cin >> len;
	vector<int_fast32_t> arr(len);
	for (unsigned long i = 0; i < len; ++i)
		cin >> arr[i];
	sort(arr.begin(), arr.end());
	for(unsigned long i = 0; i < len; ++i)
		cout << arr[i] << " ";
	cout << endl;
	
	return 0;
}
