#include <bits/stdc++.h>
using namespace std;
int main()
{  int t;
   cin >> t;
   while(t-->0)
   { int n;
     string s;
     int i,med_a=0,med_b=0,a_size,b_size;
     long long count_a=0,count_b=0;
     vector<int> a,b,d_a,d_b;
     cin >> n;
     cin >> s;
     for(i=0;i<n;i++)
      { if(s[i]=='a')
         a.push_back(i);
        else
         b.push_back(i);
      }
      a_size=a.size();
      b_size=n-a_size;
      for(i=0;i<a_size;i++)
       { d_a.push_back(a[i]-i);
       }
      for(i=0;i<b_size;i++)
       { d_b.push_back(b[i]-i);
       }
      a_size=d_a.size();
      b_size=n-a_size;
      if(a_size!=0)
       med_a=d_a[a_size/2];
      if(b_size!=0)
       med_b=d_b[b_size/2];
      for(i=0;i<a_size;i++)
       { count_a+=abs(med_a-d_a[i]);
       }
      for(i=0;i<b_size;i++)
       { count_b+=abs(med_b-d_b[i]);
       }
      cout << min(count_a,count_b)<<endl;
   }
}