#include "bits/stdc++.h"
using namespace std;

# define MOD 1000000007
# define GETCHAR getchar_unlocked
typedef long long ll;

inline ll  readllInt() {
    ll  n = 0;
    char c;
    while (1){ 
      c=GETCHAR();
      if(c=='\n'||c==' ') break;
       n = n * 10 + c - '0';
    }
    return n;
}

inline int readInt() {
    int n = 0;
    char c;
    while (1){ 
      c=GETCHAR();
      if(c=='\n'||c==' ') break;
       n = n * 10 + c - '0';
    }
    return n;
}

int main()
{
  //int t=readInt();
	int t=1;
  while(t--){
  ll i,j,n,k;
  cin >> n >> k;
  int a[n];
  ll b[n];
  for(i=0;i<n;i++){
  	cin >> a[i];
  }
  b[0]=a[0];

  for(i=1;i<n;i++){
  	ll min=100000000;
  	int start=i-k>0?i-k:0;
  	for(j=start;j<i;j++){
  		if(min>b[j]%MOD){
  			min=b[j]%MOD;
  		}
  	}
  	b[i]=((min%MOD)*(a[i]%MOD))%MOD;
  }
 	/*for(i=0;i<n;i++){
 		printf("%lld\n",b[i] );
 	}*/
 		printf("%lld\n",b[n-1]);


  }
	
	return 0;
}
	