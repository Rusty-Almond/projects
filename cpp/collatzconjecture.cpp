#include <bits/stdc++.h>
using namespace std;
int main()
{ int t,k,x;
   cin >>t;
   while(t-->0)
    { cin>>k>>x;
      cout << x*(int)(pow(2,k))<<endl;
    }
}