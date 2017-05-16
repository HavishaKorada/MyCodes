#include <stdio.h>
int base(int k,int n);
int main()
{
    int t,n,sum,dr,k;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        sum=0;
        dr=n-2;
        for(int j=2;j<=n-1;j++){
            
            sum=sum+base(k,n);
        }
        for(k=n-1;k>=2;k--){
            if(sum%k==0 && dr%k==0)
            {
                sum=sum/k;
                dr=dr/k;
            }
        }
        printf("%d\n",dr);
        
    }
    return 0;
}
int base(int k,int n){
	int nsum=0,r;
            while(n>0){
                r=n%j;
                nsum=nsum+r;
                n=n/j;
            }
	return nsum;
}
