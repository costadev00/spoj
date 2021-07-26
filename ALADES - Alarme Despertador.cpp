#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fastio;
    int h1, m1, h2, m2, inicio = 0, fim = 0;
    while (cin >> h1 >> m1 >> h2 >> m2 && (h1 || m1 || h2 || m2))
    {
        if (h1 == 0)
        {
            inicio = 24 * 60 + m1;
        }
        else
        {
            inicio = h1 * 60 + m1;
        }

        if (h2 == 0)
        {
            fim = 24 * 60 + m2;
        }
        else
        {
            fim = h2 * 60 + m2;
        }
        if (fim > inicio)
            printf("%d\n", fim - inicio);
        else
            printf("%d\n", 24 * 60 - (inicio - fim));
    }
    return 0;
}