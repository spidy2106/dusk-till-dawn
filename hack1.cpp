#include<bits/stdc++.h>
using namespace std;
 
#define ff              first
#define ss              second
#define ll             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)

 
 
void fast()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
 
int main()
{
    fast();

   
    int n;cin>>n;
     int d;cin>>d;
    vi ans(n);

    for(int i=0;i<n;i++)
    	cin>>ans[i];

    vi res;
    for(int i=0;i<d;i++){				//3 4 5 1 2
    	ans.push_back(ans[i]);
    }

    for(int i=d;i<n+d;i++)
    	res.push_back(ans[i]);

    for(int i:res)
    	cout<<i<<" ";



    return 0;
   }
