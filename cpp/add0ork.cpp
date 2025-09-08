#include <iostream>
#include <vector>
using namespace std;
int main()
{ ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t,n;
  long long k,l;
  cin >>t;
  int i,j;
  for(i=0;i<t;i++)
   { cin >>n>>k;
    vector <long long> a(n);
     for(j=0;j<n;j++)
      cin >> a[j];
     for(j=0;j<n;j++)
      { l=a[j]%(k+1);
        a[j]=a[j]+k*l;
        cout << a[j]<<" ";
      }
      cout<<endl;
      l=0;
    }
}