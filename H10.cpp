#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        sort(a, a + n);
        int g = 1, ag = 0;
        bool alive = 1;
        for (int i = 0; i < n; i++)
        {
            if (g > a[i])
            {
                alive = 0;
                break;
            }
            else
            {
                ag += 1;
                g += 1;
                if (ag % 6 == 0)
                    g += 1;
            }
        }
        if (alive)
            puts("Rick now go and save Carl and Judas");
        else
        {
            puts("Goodbye Rick");
            printf("%d\n", ag);
        }
    }
    return 0;
}