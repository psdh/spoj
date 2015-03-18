#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
   int t,k,i,p;
   scanf("%d",&t);
   long long int m,n,num,j,y;
   for(k=1;k<=t;k++)
   {
      scanf("%lld",&m);
      scanf("%lld",&n);
      int arr[n];
      for(y=0;y<n;y++)
      {
          arr[y]=1;
      }
      arr[0]=0;
      p=2;
      while(p<=sqrt(n))
      {
         i=2;
         while(p*i<=n)
         {
            arr[p*i-1]=0;
            i++;
         }
         while(1)
         {
             if(arr[p]==1)
             {
                p=p+1;
                break;
             }
             else
                p++;
         }
      }
      for(num=m;num<=n;num++)
      {
         if(arr[num-1]==1)
         printf("%lld\n",(num));
      }
   }
}
