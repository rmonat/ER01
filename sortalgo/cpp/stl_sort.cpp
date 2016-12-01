#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
    int n;
    vector<int> tab;
    cin >> n;
    tab.resize(n);
    for(int i = 0; i < n; i++)
	cin >> tab[i];
    sort(tab.begin(), tab.end());
    for(int i = 0; i < n; i++)
	cout << tab[i] << " ";
    cout << endl;
}
