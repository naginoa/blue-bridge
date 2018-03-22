#include<cstdio>  
#include<cmath>  
using namespace std;  
  
int gcd(int x,int y)  
{  
  int t;  
  while(x%y)t=x%y,x=y,y=t;  
  return y;  
}  
  
int main()  
{  
  int a0,a1,b0,b1;  
  int i,j,k,n,x,y,z,sum;  
  scanf("%d",&n);  
  for(i=1;i<=n;i++)  
    {  
      scanf("%d%d%d%d",&a0,&a1,&b0,&b1);  
      x=a0/a1,y=b1/b0,z=(int)sqrt(b1*1.0);  
      for(sum=0,j=1;j<=z;j++)if(b1%j==0)  
        {  
          if(j%a1==0 && gcd(j/a1,x)==1 && gcd(b1/j,y)==1)sum++;  
          if((b1/j)%a1==0 && gcd((b1/j)/a1,x)==1 && gcd(j,y)==1)sum++;  
        }  
      if(z*z==b1 && z%a1==0 && gcd(z/a1,x)==1 && gcd(z,y)==1)sum--;    
      printf("%d\n",sum);         
    }  
  return 0;  
}  