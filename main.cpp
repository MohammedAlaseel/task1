
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define tt int t; cin>>t;while(t--)
void solve() {
    int n;cin>>n;
    vector<ll> v(n);
    int cnt=0;
    for (auto i=0;i<n;++i) {
        while (v[i]%2==0) {
            cnt++;
            v[i]/=2;
        }
    }
    if (cnt==0)
        cout<<"0\n";
    else {
        vector<int>vec;
        for (int i=1;i<=n;++i) {
            int temp=i,c=0;
            while (temp%2==0) {
                c++;
                temp/=2;
            }
            vec.push_back(c);
        }
        sort(vec.begin(),vec.end());
        int res=0;
        for (int i=0;i<vec.size();i++) {
            cnt+=v[i];
            res++;
            if (cnt>=n)
                break;
        }

        if (n>cnt)
            cout<<"-1\n";
        else
            cout<<res<<"\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // tt
    solve();
    return 0;
}
