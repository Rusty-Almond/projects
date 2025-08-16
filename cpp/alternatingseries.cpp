#include <iostream>
int main()
 { int i,j,t;
   std::cin >> t;
   int in[t];
   for(i=0;i<t;i++)
    { std::cin >> in[i];}
   for(i=0;i<t;i++)
    { for(j=1;j<=in[i];j++)
       { if((j%2)==0)
          { if(j==in[i])
             std::cout << "2";
            else
             std::cout <<"3 ";
          }
         else
          std::cout << "-1 ";
        }
       std::cout << "\n";
    }
    return 0;//returning 0 means success
 }