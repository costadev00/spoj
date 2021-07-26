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
    int cont = 0;
    int n;
    string gab, res;
    cin >> n;
    cin >> gab;
    cin >> res;
    for (int i = 0; i < n; i++)
    {
        if (gab[i] == res[i])
            cont++;
    }
    cout << cont << endl;

    return 0;
}