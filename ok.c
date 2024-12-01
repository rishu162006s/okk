#include <math.h>
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int m=n,p=10;
    while(n!=0)
    {
        int a= n%10;
        m%=p;
        if(a==0)
        {
            m*=p;
            a=1;
            m+=a;
        }
        else if(a==1)
        {
            m*=p;
            a=0;
            m+=a;
        }
        else
            continue;
            n/=10;
            p*=10;
    }
    printf("%d",m);

}
