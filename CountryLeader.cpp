/*
TASK: A
LANG: C++
*/

//https://code.google.com/codejam/contest/6304486/dashboard#s=p0
#include<bits/stdc++.h>

std::map<std::string,int> mapp;
std::set<char> sett;
std::map<std::string,int>::iterator iter;
int main()
{  
   freopen("Large.in","rt",stdin);
   freopen("A.out","wt",stdout);
  long long int N,i,j,n,k;
  std::cin>>N;
 for(i=0;i<N;++i)  // no of cases
 {  std::cin>>n;
 for(j=0;j<n;++j)  //count
  { std::string name;
  sett.clear();
  if(j==0)
  char c=getchar();
  std::getline(std::cin,name);
  for(k=0;name[k]!='\0';++k) if(name[k]!=' ') sett.insert(name[k]);
  mapp[name]=sett.size(); 
}
int count=0;
std::string na;
 for(iter=mapp.begin(); iter!=mapp.end();++iter)
 {
     if(iter->second>count){
        count=iter->second;
        na=iter->first;
      }
 }
   printf("Case #%lld: ",i+1);
   std::cout<<na<<"\n";
   mapp.clear();
}
}

