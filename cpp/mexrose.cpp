#include <bits/stdc++.h>
using namespace std;
int main()
{ ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while(t-->0)
   { int n,k;
     cin >> n >> k;
     vector<int> a(n),b(n+1);
     int i,count=0,temp=0;
     for(i=0;i<n;i++)
      { cin >> a[i];
        b[a[i]]++;
      }
     for(i=0;i<k;i++)
      { if(b[i]==0)
         count++;
      }
     count=max(count,b[k]);
     cout << count <<endl;
   }
   }