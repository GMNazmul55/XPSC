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
        int a,b,c;
        cin>>a>>b>>c;
        int ans=ceil((1.0*a+(c/30))/b);
        cout<<ans<<endl;
    }

    return 0;
}