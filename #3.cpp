#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if((a >= b) && (a >= c)){
        cout << a;
        return 0;
    }
    if((b >= a) && (b >= c)){
        cout << b;
        return 0;
    }
    if((c >= b) && (c >= a)){
        cout << c;
        return 0;
    }
}
