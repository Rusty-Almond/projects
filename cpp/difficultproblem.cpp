#include <iostream>
int main()
{ int t,i,j,len,temp;
  std::cin >> t;
  temp=t;
  std::string s;
  std::string ou[t];
  while(t>0)
   { std::cin >> s;
    len=s.size();
     for(i=0;i<len-2;i++)
      { if(s.substr(i,3)=="FFT")
         s=s.substr(0,i)+"FTF"+s.substr(i+3,len-i-3);
        else if(s.substr(i,i+3)=="NTT")
         s=s.substr(0,i)+"TNT"+s.substr(i+3,len-i-3);
      }
    ou[t-1]=s;
    t--;
    }
  for(i=temp-1;i>=0;i--)
   std::cout << ou[i] << "\n";
}