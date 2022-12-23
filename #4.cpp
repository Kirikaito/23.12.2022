#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if((c % a) == 0){
        cout << (c/a)*2*b;
        return 0;
    }
    cout << ((c/a) + 1)*2*b;
}
