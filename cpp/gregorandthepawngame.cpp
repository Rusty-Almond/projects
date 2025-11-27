#include <bits/stdc++.h>
using namespace std;
int main()
 { int t;
   cin >> t;
   while(t-->0)
    { int n;
      cin >> n;
      string a,b;
      cin >> b;
      cin >> a;
      int i,k=0;
      for(i=0;i<n;i++)
       { if(a[i] == '0') continue;

            if(b[i] == '0') {
                k++;
            }
            else if(i > 0 && b[i-1] == '1') {
                k++;
                b[i-1] = '2';
            }
            else if(i + 1 < n && b[i+1] == '1') {
                k++;
                b[i+1] = '2';
            }
        }
    cout << k<<endl;   
   }
}