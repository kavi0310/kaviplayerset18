#include<stdio.h>
int main()
{
int n,i,r,b[1000],j=0,m=0,c,t;
scanf("%d",&n);
while(n)
{
r=n%10;
b[j]=r;
j++;
n=n/10;
m++;
}
for(j=0;j<m;j++)
{
for(c=j+1;c<m;c++)
{
if(b[j]<b[c])
{
t=b[j];
b[j]=b[c];
b[c]=t;
}
}
printf("%d",b[j]);
}
}
