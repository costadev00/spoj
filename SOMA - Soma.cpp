#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, x, res = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        res += x;
    }
    printf("%d\n", res);
    return 0;
}