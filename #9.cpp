#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    int n, b;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> b;
        a.push_back(b);
    } 
    cout << a[a.size()/2];
    return 0;
}
