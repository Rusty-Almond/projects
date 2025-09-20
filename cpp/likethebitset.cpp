#include <bits/stdc++.h>
using namespace std;
int main()
{ int t,n,k;
  cin >> t;
  int i,j,best,sum,num,l;
  vector<int> v;
  char c;
  string s;
  while(t-->0)
  { cin >> n >> k;
    cin >> s;
    best=0;
    sum=0;
    num=0;
    l=1;
    for(i=0;i<n;i++)
     { c=s[i];
       if(c=='1')
        { sum++;
          best=max(best,sum);
        }
       else
        { 
          sum=0;
        }
     }
    if(best>=k)
     cout << "NO\n";
    else
     { num=n;
       cout << "YES\n";
       for(i=0;i<n;i++)
        { c=s[i];
          if(c=='1')
           { cout << l << " ";
             l++;
           }
          else
          { cout << num << " ";
            num--;
          }
         }
        cout<<endl;}
}
}