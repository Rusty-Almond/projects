#include <bits/stdc++.h>
using namespace std;
void solve(int n)
 { }
int main()
{ int t;
  cin >> t;
  while(t-->0)
   { int n;
     cin >> n;
     if(n%2!=0)
      cout << "0"<<endl;
     else
      { cout << floor(n/4)+1<<endl;
      }
    }
  }