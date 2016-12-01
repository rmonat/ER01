// Stupid quicksort with pivot being the last element
#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> tab;


void quicksort(int begin, int end)
{
    if(begin < end)
    {
	int i = begin;
	int pivot = tab[begin];

	for(int j = begin+1; j <= end; j++)
	{
	    if(tab[j] <= pivot)
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
    quicksort(0, tab.size()-1);
    for(int i = 0; i < n; i++)
	cout << tab[i] << " ";
    cout << endl;
}
