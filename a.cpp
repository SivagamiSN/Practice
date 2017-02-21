/*
TASK: A
LANG: C++
*/
#include<bits/stdc++.h>
int group(char a)
{
	switch(a)
	{

     case 'a':case 'b':case 'c':return 2;
     case 'd':case 'e':case 'f':return 3;
     case 'g':case 'h':case 'i':return 4;
     case 'j':case 'k':case 'l':return 5;
     case 'm':case 'n':case 'o':return 6;
     case 'p':case 'q':case 'r':case 's':return 7;
     case 't':case 'u':case 'v':return 8;
     case 'w':case 'x':case 'y':case 'z':return 9;
     case ' ':return 0;

	}
}

int map(char a)
{

  switch(a)
  {

   case 'a':return 2;
   case 'b':return 22;
   case 'c':return 222;
   case 'd':return 3;
   case 'e':return 33;
   case 'f':return 333;
   case 'g':return 4;
   case 'h':return 44;
   case 'i':return 444;
   case 'j':return 5;
   case 'k':return 55;
   case 'l':return 555;
   case 'm':return 6;
   case 'n':return 66;
   case 'o':return 666;
   case 'p':return 7;
   case 'q':return 77;
   case 'r':return 777;
   case 's':return 7777;
   case 't':return 8;
   case 'u':return 88;
   case 'v':return 888;
   case 'w':return 9;
   case 'x':return 99;
   case 'y':return 999;
   case 'z':return 9999;
   case ' ':return 0;
     }
 

}	
int main()
{  
   freopen("C-small-practice.in","rt",stdin);
   freopen("A.out","wt",stdout);
  int N,i,j;

  scanf("%d",&N);
  char str[1005];
    gets(str);

  for(i=0;i<N+1;++i)
{  printf("Case #%d: ",i);
  gets(str);
  for(j=0;str[j]!='\0';++j)
  	{
  		std::cout<<map(str[j]);
   if(str[j+1]!='\0')
      if(group(str[j])==group(str[j+1]))
  	    std::cout<<" ";
  }

  std::cout<<"\n";


}
}

