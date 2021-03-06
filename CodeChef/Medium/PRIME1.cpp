#include "bits/stdc++.h"
using namespace std;

# define s(n)                        scanf("%d",&n)
# define sc(n)                       scanf("%c",&n)
# define sl(n)                       scanf("%lld",&n)
# define sf(n)                       scanf("%lf",&n)
# define ss(n)                       scanf("%s",n)

#define R(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)

# define INF                         (int)1e9
# define EPS                         1e-9
# define MOD 1000000007


typedef long long ll;

bool fun(ll i ){
  if(i==2)
    return true;
  if(i%2==0 || i==1)
    return false;
  for(ll j = 3 ; j*j<=i;j+=2){
    if(i%j==0)
      return false;
  }
  return true;
}

int main()
{
  int t;
  cin >> t;
  while(t--){
    ll n , m;
    sl(n); sl(m);
    for(ll i =n ; i<m+1 ;i++){
       if(fun(i)){
        printf("%lld\n",i );
       }
    }
    printf("\n");
  }
  
  return 0;
}