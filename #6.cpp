#include <bits/stdc++.h>
using namespace std;
pair <int, int> p = {-1, 0};
bool a[101][101];
 
int main()
{
    string sim;
    cin >> sim;
    int x = 51, y = 51, ans = 0;
    a[x][y] = 1;
 
    for(auto s : sim){
        if(s == 'R'){
            if(p == make_pair(-1, 0))
            p = {0, 1};
            else if(p == make_pair(0, 1))
            p = {1, 0};
            else if(p == make_pair(1, 0))
            p = {0, -1};
            else if(p == make_pair(0, -1))
            p = {-1, 0};
            continue;
        }
        if(s == 'L'){
           if(p == make_pair(-1, 0))
            p = {0, -1};
            else if(p == make_pair(0, -1))
            p = {1, 0};
            else if(p == make_pair(1, 0))
            p = {0, 1};
            else if(p == make_pair(0, 1))
            p = {-1, 0};
            continue;
        }
        if(s == 'S') ans++;
        x += p.first;
        y += p.second;
        if(a[x][y]){
            cout << ans;
            return 0;
        }
        a[x][y] = 1;
    }
    cout << -1;
    return 0;
}
