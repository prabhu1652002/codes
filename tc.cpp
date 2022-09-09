    #pragma GCC optimize("O3,unroll-loops")

    #include<bits/stdc++.h>
    // #include<ext/pb_ds/assoc_container.hpp>
    // #include<ext/pb_ds/tree_policy.hpp>

    using namespace std;
    using namespace chrono;
    // using namespace __gnu_pbds;

    #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
    #define MOD 1000000007
    #define MOD1 998244353
    #define INF 1e18
    #define nline "\n"
    #define pb push_back
    #define ppb pop_back
    #define mp make_pair
    #define ff first
    #define ss second
    #define PI 3.141592653589793238462
    #define set_bits __builtin_popcountll
    #define sz(x) ((int)(x).size())
    #define all(x) (x).begin(), (x).end()



    // typedef int ll;
    typedef long long ll;
    typedef unsigned long long ull;
    typedef long double lld;

    // typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
    #define F first
    #define S second
    #define endl '\n'
    #define vec vector<long long int>
    #define input(v) for(auto &x : v){cin>>x;}     
    #define display(v)  for(auto x:v){cout<<x<<" ";} cout<<endl
    #define sortall(v) sort(v.begin(), v.end())
    #define revsortall(v) sort(v.rbegin(), v.rend())
    #define repn(n) for (ll i = 0; i < n; i++)
    #define rep(i,a,b) for (ll i = a; i < b; i++)
    #define maxof(v) *max_element(v.begin(), v.end())
    #define minof(v) *min_element(v.begin(), v.end())
    // #define count(v, n) count(v.begin(), v.end(), n)
    #define reverseall(v) reverse(v.begin(), v.end())
    #define unique(s) unique(v.begin(), v.end()) - v.begin();v.resize(std::distance(v.begin(), ip));
    #define cBits(x) __builtin_popcountll(x) //returns no of set bits in x
    #define inp(x) ll x;cin >> x;
    #define inpstr(x) string x;cin >> x;
    #define dline cout<<"------------------------------------------"<<endl;
    /*---------------------------------------------------------------------------------------------------------------------------*/
    ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
    ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
    void extendgcd(ll a, ll b, vec &v) {if (b == 0) {v[0] = 1; v[1] = 10; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
    ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
    ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
    ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
    ll mminv(ll a, ll b) {vec v(3,0); extendgcd(a, b, v); return mod_add(v[0], 0, b);} //for non prime b
    ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
    bool revsort(ll a, ll b) {return a > b;}
    ll sumv(vector<ll> v){ll ans=0;for(auto x:v){ans+=x;}return ans;}
    ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
    ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
    void google(int t) {cout << "Case #" << t << ": ";}
    vector<ll> sieve(ll n) {ll*arr = new ll[n + 1](); vector<ll> vect; for (ll i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (ll j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
    vector<pair<char,ll>> rle(string s){vector<pair<char,ll>> ans;ll n=s.length();repn(n){if(ans.size()==0 || ans.back().F!=s[i]){ans.push_back({s[i],1});}else{(ans.back().S)++;}}return ans;}
    ll modFact(ll n, ll p){if (n >= p)return 0; ll result = 1;for (ll i = 1; i <= n; i++){result = (result * i) % p;}return result;}
    bool valid(ll x,ll y,ll n,ll m){return (x>=0 && x<=n-1 && y>=0 && y<=m-1 );}
    
    /*--------------------------------------------------------------------------------------------------------------------------*/
    ll dist(ll i,ll j,ll sx,ll sy){
        return abs(sx-i)+abs(sy-j);
    }
     

    void solve(){
        inp(n);
        vec v(n);
        input(v);
        ll total=0;
        for(auto x:v){total+=x;}
        ll till=(1<<n);
        ll ans=INT32_MAX;
         for(ll i=1;i<=till;i++){
            ll sum=0;
            for(ll j=1;j<=n;j++){
                if(i & (1<<(j-1))){
                    sum+=v[j-1];
                }
            }
            // cout<<sum<<endl;
            ans=min(ans,abs(total-sum-sum));
        }
        cout<<ans<<endl;







    

    }   

    int main() {
        // freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        // 
         ll _=1;
            // inp(_);
        // ll tn=1;
        // ll tc=_;
    
        while (_--)
        {
            // cout<<"Case #"<<tn<<": ";    
        solve();
        // tn++;

        }
        
        return 0;
    }