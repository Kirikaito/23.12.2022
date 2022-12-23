#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n = 0,k;
    string a2 = "";
    set<string> list;
    char t;
    cin >> a;
    b = a;
    while(a > 0){
        a2 = to_string(a%2) + a2;
        a = a/2;
        n++;
    }
    list.insert(list.end(),a2);
    for(int e = 0; e < n + 1;e++){
        t = a2[n - 1];
        for(int i = n - 1; i >= 0;i--){
            a2[i] = a2[i - 1];
        }
        a2[0] = t;
        list.insert(list.end(),a2);
    }
    for(auto i : list){
        k = 0;
        a = 0;
        for(int e = n - 1; e >= 0; e--){
            a += pow(2,k) * (int)(i[e] - '0');
            k++;
        }
        if( a > b) b = a;
    }
    cout << b;
}
