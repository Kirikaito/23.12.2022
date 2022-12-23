#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,as = "",answ = "";
    getline(cin,s);
    int a = 0,sum = 0,d,prsum,c;
    vector<int> list,summ;
    
    for(auto e : s){
        if(e != ' '){
            as = as + e;
            continue;
        }
        for(int i = 0; i < as.size();i++){
            a += ((int)(as[i] - '0'))*((int)(pow(10,as.size() - 1 - i)));
            sum += ((int)(as[i] - '0'));
        }
        list.push_back(a);
        summ.push_back(sum);
        sum = 0;
        a = 0;
        as = "";
    }
    for(int i = 0; i < as.size();i++){
        a += ((int)(as[i] - '0'))*((int)(pow(10,as.size() - 1 - i)));
        sum += ((int)(as[i] - '0'));
    }
    list.push_back(a);
    summ.push_back(sum);
    for(int i = 0; i < list.size();i++){
        a = list[i];
        c = a;
        d = 2;
        prsum = 0;
        while ((a > 1) and (d < c)){
            while (a % d == 0){
                for(auto j : to_string(d)) prsum += (int)(j - '0');
                a = a / d;
            }
            d++;
        }
        if(prsum == summ[i]) answ = answ + '1';
        if(prsum != summ[i]) answ = answ + '0';
    }
    cout << answ;
}
