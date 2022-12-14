//Auth:Shakil Mahmud Arafat, AUST, Dept. of EEE

#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define arrIn(a,n) for(int x = 0; x < n; x++) cin>>a[x]
#define arrOut(a,n) for(int x = 0; x < n; x++) cout<<a[x]<<endl
#define loop(x,n) for(int x = 0; x < n; x++)
#define print(x) cout<<x<<endl

using namespace std;

void soln()
{
    ll n;
    cin>>n;
    vector<int> b(1003);
    int ans = -1,x;
    loop(i,n){
        cin>>x;
        b[x] = i+1;
    }
    for(int i=1; i<=1000; i++){
        for(int j=1; j<=1000; j++){
            if(b[i] && b[j]) if(__gcd(i,j) == 1)ans = max(ans, b[i]+b[j]);
        }
    }
    if(ans == -1)print(ans);
    else print(ans);
}
int main()
{
    ios::sync_with_stdio(false);

    int tests;
    cin>>tests;
    while(tests--)
        soln();
    return 0;
}
