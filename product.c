 #include <stdio.h>

int main()
{
   int N,i;
   long long int ans=1;
   int A[1000];
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
   scanf("%d",&A[i]);
   }
    for(i=0;i<N;i++)
   {
       ans=(ans*A[i])%1000000007;
   }
   printf("%lli",ans);

    return 0;
}
