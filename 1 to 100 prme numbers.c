#include<stdio.h>
int main()
{
int i,b,a,c=0;
    for(i=1;i<=100;i++)
    {
        for(b=1;b<=i;b++)
        {
            if(i%b==0)
            {
                c++;
            }}
            if(c==2)
            {
                printf(" %d",i);
            }

    }
return 0;
}
