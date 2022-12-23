#include <bits/stdc++.h>
using namespace std;
int main()
{
    long double n,r=4000,l=30,m=0,p=0,cur=0;
    cin >> n;
    long long h;
    string s;
    cin >> p;
    for(int i = 1; i < n; i++){
        cin >> cur >> s;
        if(cur == p) continue;
        m = (p + cur) / 2;
        if(cur>p and s=="closer") l=max(l,m);
        if(cur<p and s=="closer") r=min(r,m);
        if(cur<p and s=="further") l=max(l,m);
        if(cur>p and s=="further") r=min(r,m);
        p=cur;
    }
    cout << fixed << setprecision(6) << l<<" "<< r;
}
