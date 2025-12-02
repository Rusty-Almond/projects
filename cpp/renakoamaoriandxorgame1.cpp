#include <bits/stdc++.h>
using namespace std;
int main()
 { int t;
   cin >> t;
   while(t-->0)
    { int n;
      cin >> n;
      vector<int> a(n),b(n);
      int aj=0,ma=0;
      int i,j,d=-1;
      for(i=0;i<n;i++)
       { cin >>a[i];
         if(a[i]==1)
          aj++;
       }
      for(i=0;i<n;i++)
       { cin >> b[i];
         if(b[i]==1)
          ma++;
       }
      if((aj+ma)%2==0)
       cout << "Tie"<<endl;
      else {
      aj=ma=0;
      for(i=0;i<n;i++)
       { if(a[i]==b[i])
          continue;
         else
          { if(i%2==0)
             { aj=1; ma=0; }
            else 
             { ma=1; aj=0;}
          }}
        { if(ma==1)
           cout <<"MAI"<<endl;
          else 
           cout << "Ajisai" <<endl;
      }}
 }
 }