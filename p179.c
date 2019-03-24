#include<stdio.h>
int main()
{
    int a,b,i,k,c=0,r,bin=1,base=0;
    scanf("%d%d",&a,&b);
       k=a^b;
       while(k)
    {
        r=k%2;
        if(r==1)
        {
            c++;
        }
        bin=bin+(r*base);
        k=k/2;
        base=base*10;
    }
    printf("%d",c);
}
