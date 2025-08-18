#include <iostream>
using namespace std;
int main()
 { int n;
   cin >> n;
   int a[n];
   int b[n];
   int i,ma=0,liv=0;
   for(i=0;i<n;i++)
     cin >> a[i] >>b[i];
   for(i=0;i<n;i++)
    { liv=liv+b[i]-a[i];
      if(liv>ma)
       ma=liv;
    }
   cout << ma <<endl;
 }