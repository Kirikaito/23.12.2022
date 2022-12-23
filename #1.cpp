#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,turn = 0,up,down,left,right,prev = 0;
    cin >> n >> m;
    int bugx = 1, bugy = 1, finx = m - 2, finy = n - 2;
    string in;
    vector<vector<int>> counter(n + 1);
    for(int i = 0; i < n + 1; i++){
        getline(cin,in);
        for(auto e : in){
            if(e == '@') counter[i].push_back(10000002);
            if(e == ' ') counter[i].push_back(0);
        }
    }
    counter.erase(counter.begin());
    while(not((bugx == finx) and (bugy == finy)) and (turn <= 10000002)){
        turn++;
        counter[bugy][bugx]++;
        left = counter[bugy][bugx - 1];
        right = counter[bugy][bugx + 1];
        up = counter[bugy - 1][bugx];
        down = counter[bugy + 1][bugx];
        if((left == down) && (left == up) && (left == right) && (left == down) && (left == 10000002)){
            cout << -1;
            return 0;
        }
        if( (left <= down) && (left <= right) && (left <= up) && (prev == 1)){
            bugx--;
            prev = 1;
            continue;
        }
        if( (up <= down) && (up <= right) && (up <= left) && (prev == 2)){
            bugy--;
            prev = 2;
            continue;
        }
        if( (right <= down) && (right <= left) && (right <= up) && (prev == 3)){
            bugx++;
            prev = 3;
            continue;
        }
        if( (down <= left) && (down <= right) && (down <= up) && (prev == 4)){
            bugy++;
            prev = 4;
            continue;
        }
        if( (left < down) && (left < right) && (left < up)){
            bugx--;
            prev = 1;
            continue;
        }
        if( (up < down) && (up < right) && (up <= left)){
            bugy--;
            prev = 2;
            continue;
        }
        if( (right < down) && (right <= left) && (right <= up)){
            bugx++;
            prev = 3;
            continue;
        }
        if( (down <= left) && (down <= right) && (down <= up)){
            bugy++;
            prev = 4;
            continue;
        }
        

    }
    if( turn > 10000000){
        cout << -1;
        return 0;
    }
    cout << turn;
}
