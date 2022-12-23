#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int a, b, c, a1, b1, c1, sum1,a2, b2, c2, sum2;
    vector<int>list(10,0);
    a1 = (s1[0] - 48) * 10 + s1[1] - 48;
    b1 = (s1[3] - 48) * 10 + s1[4] - 48;
    c1 = (s1[6] - 48) * 10 + s1[7] - 48;
    sum1 = a1 * 3600 + b1 * 60 + c1;
    a2 = (s2[0] - 48) * 10 + s2[1] - 48;
    b2 = (s2[3] - 48) * 10 + s2[4] - 48;
    c2 = (s2[6] - 48) * 10 + s2[7] - 48;
    sum2 = a2 * 3600 + b2 * 60 + c2;
    while(sum1 <= sum2){
        sum1;
        a = sum1 / 3600;
        b = (sum1 - (a * 3600)) / 60;
        c = sum1 - ((a * 3600) + (b * 60));
        list[a % 10] += 1;
        list[a / 10] += 1;
        list[b % 10] += 1;
        list[b / 10] += 1;
        list[c % 10] += 1;
        list[c / 10] += 1;
        sum1++;
    }
    for(auto i  : list) cout << i << endl;
    return 0;
}
