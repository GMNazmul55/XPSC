#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, i;
        cin >> n;
        int a, od = 0, ev = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a;
            if (a == 1)
                od++;
            else
                ev++;
        }
        if ((od % 2 == 0 && ev % 2 == 0) || (ev % 2 == 1 && od % 2 == 0 && od > 0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}