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
  int t=readInt();
  while(t--){
  	int z=0,o=0,n,j;
  		cin >> n;
  		for(int i=0;i<n;i++)
  		{
  			cin >> j;
  			if(j==0)
  				z++;
  			else
  				o++;
  		}
  		int ans=0;
  		if(o%2==1)
  			printf("%d\n",o );
  		else
  			printf("%d\n",z );

  }
	
	return 0;
}
	