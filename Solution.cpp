#include <bits/stdc++.h>
#define mp make_pair
#define eb emplace_back
#define ll             long long int
#define pii             pair<int, int>
#define vii              vector<long long int>
#define vi               vector<int>
#define vs              vector<string>
#define mii             map<int,int>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define MOD             1000000007  //1e9+7
#define INF             1e18
#define PI              acos(-1)
#define fprecision(x,y) fixed<<setprecision(y)<<x
#define T()            int x; cin>>x; while(x--)
#define mk(arr,n,type)  type *arr = new type[n]; //dynamic
using namespace std;

void a_s_c() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}



int main() {
    a_s_c();
    int n; cin >> n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << "NOT PRIME";
            return 0;
        }
    }
    cout << "PRIME";
    return 0;
}