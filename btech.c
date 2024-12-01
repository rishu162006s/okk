#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a=3;
    int b[a];
    int c[a];
    int i=0;
    int j=0;
    int temp=0;
    int k=0;
    int q,e=0;
    for( i=0;i<a;i++)
    {
        scanf("%d ",&b[i]);
    }
    for(j=0;j<a;j++)
    {
        scanf("%d ",&c[j]);
    }
    for(q=0;q<a-1;q++)
    {
        for(e=0;e<a-i-1;e++)
        {
            if(c[e]<c[e+1])
                c[e]=temp;
            c[e]=c[e+1];
            c[e+1]=temp;
        }
    }
    for(i=0;i<a;i++)
    {
        printf("%d ",c[i]);
    }
}
