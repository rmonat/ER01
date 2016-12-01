// Stupid quicksort with pivot being the last element
#include <iostream>
#include <vector>
#include <cstdint>
#include <cmath>
#include <chrono>

using namespace std;

int n;
vector<int_fast32_t> tab;

template <class TimeT>
unsigned long time_ms (TimeT before, TimeT after) {
	auto diff = after-before;
	
	auto doubledur = chrono::duration <double, milli> (diff).count();
	auto uldur = static_cast<unsigned long>(round(doubledur));
	
	return uldur;
}


void quicksort(int begin, int end)
{
	if (begin < end)
	{
		int i = begin;
		int pivot = tab[begin];

		for (int j = begin+1; j <= end; j++)
		{
		    if (tab[j] <= pivot)
		    {
				i++;
				swap(tab[i], tab[j]);
		    }
		}
		swap(tab[i], tab[begin]);
		quicksort(begin, i-1);
		quicksort(i+1, end);
	}
}


int main()
{
	cin >> n;
	tab.resize(n);
	for(int i = 0; i < n; i++)
		cin >> tab[i];
	
	auto before = chrono::high_resolution_clock::now();
	quicksort(0, tab.size()-1);
	auto after = chrono::high_resolution_clock::now();
	
	cout << time_ms(before, after) << endl;
}
