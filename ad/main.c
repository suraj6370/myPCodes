#include<stdio.h>
int make(int i,int k)
{
    int j,l=1;
    for(j=0;j<k;j++)
    {
        l=l*i;
    }
    return(l);
}
int checka(int n,int k)
{
    int i,l;
    for(i=1;i<=(n/2);i++)
    {
       if(make(i,k)>=n)
         break;
    }
    if(make(i,k)==n)
      return(1);
    else 
      return(0);
}
int sum(int n,int k)
{
    int i,l=0,p;
    for(i=1;i<=(n/2);i++)
    {
       if((n-make(i,k))>0)
       {
           if(checka(n-make(i,k),k)==1)
             l++;
       }
    }
    return(l/2);
}
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",sum(a,b));
}