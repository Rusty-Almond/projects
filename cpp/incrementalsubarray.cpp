#include <bits/stdc++.h>
using namespace std;
int main()
{ int t,i;
  int n,m;
  cin>> t;
  while(t-->0)
  { cin >> n>>m;
    vector<long long> a(m);
    for(i=0;i<m;i++)
      cin >> a[i];
    int ans=n-a[m-1]+1;
    for(i=1;i<m;i++)
     { if(a[i]==1)
        { ans=1;
           break;
        }
     }
    cout << ans<<endl;
    }
}