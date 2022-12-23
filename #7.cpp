#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    long long res = 2 % m;
    for(int i = 1; i <= n; ++i){
        res = (res * res) % m;
    }
    cout << res;
    return 0;
}
