#include <iostream>
using namespace std;
int main()
{ ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int i,t,n,a,b;
  cin >>t;
  for(i=0;i<t;i++)
   { cin >>n >>a>>b;
     if(n%2==0)
      { if(a%2==0)
        { if(b%2==0)
         cout << "YES"<<endl;
         else
         cout << "NO" <<endl;
        }
        else
         { if(b%2==0)
            { if(b>=a)
               cout <<"YES"<<endl;
              else
               cout <<"NO"<<endl;
            }
           else
            cout <<"NO"<<endl;
         }
      }
     else
      { if(a%2!=0)
        {  if(b%2!=0)
         cout <<"YES" <<endl;
        else
         cout << "NO"<<endl;
        }
        else 
        { if(b%2!=0)
           { if(b>=a)
              cout <<"YES"<<endl;
            else
             cout << "NO"<<endl;
          }
          else
           cout <<"NO"<<endl;
        }
      }
    }

}