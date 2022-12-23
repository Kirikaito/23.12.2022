#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(abs(x1 - x2) == abs(y1 - y2))
        cout << 1;
    else
        if((x1 + y1) % 2 == (x2 + y2) % 2)
            cout << 2;
    else
        cout << 0;
    return 0;
}
