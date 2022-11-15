#include <bits/stdc++.h>
using namespace std;

int main()
{
    int even[] = {2, 4, 6, 8, 10};
    set <int> odd;
    odd.insert(1);
    odd.insert(3);
    odd.insert(5);
    odd.insert(7);
    odd.insert(9);
    vector <int> Merge;
    merge(even, even + 5, odd.begin(), odd.end(), back_inserter(Merge));
    for(auto it: Merge) 
        cout << it << " ";
    return 0;
}