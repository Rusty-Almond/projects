#include <iostream>
#include <vector>
using namespace std;
int main()
{ int n;
  cin >> n;
  int i,group=0;
  vector<string> a(n);
  cin >> a[0];
  for(i=1;i<n;i++)
   { cin >> a[i];
     if(a[i]!=a[i-1])
       group++;
   }
  cout << (group+1) <<endl;
}