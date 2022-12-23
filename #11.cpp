#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,answ = 0;
    cin >> i;
    for(int n = pow(10,i - 1); n < pow(10,i);n++){
        answ += n;
    }
    cout << answ;
}
