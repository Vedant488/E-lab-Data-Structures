
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string str;
    for (int i = 0; i < t; i++)
    {
        cin >> str;
        int x = 0, y = 0, z = 0, w = 0;
        for (int j = 0; j < str.size(); j++)
        {
            if (str[j] == 'r')
                x++;
            if (str[j] == 'u')
                y++;
            if (str[j] == 'b')
                z++;
            if (str[j] == 'y')
                w++;
        }
        //aayan
        int a = min(x, y);
        int b = min(z, w);
        int c = min(a, b);
        cout << c << endl;
    }
}