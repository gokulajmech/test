#include<stdio.h>
int main()
{
	int r=7,c=8;
	int a[r][c];
	int count=1,p=0,k;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			a[i][j]=0;
		}
	}
	for(int i=0;i<r;i++)
	{
	    p=0;
		for(int j=0;j<c;)
		{
		    count=1;	
			if(i==0 && j==0)
			{
				a[i][p]=1;
				break;
			}
			if(i!=0)
			{
			    if(a[i-1][j]!=0)
				{
				    for( k=j+1;k<c;k++)
    				{
    					if(a[i-1][j]==a[i-1][k])
    					{
    						count++;
    					}
    					else
    					{
    						break;
    					}
    				}
				}
                a[i][p++]=count;
                a[i][p++]=a[i-1][j];
                j=k;
                if(a[i-1][k]==0)
				{
				    break;
				}
			}
			
		}
	}
	for(int i=0;i<r;i++)
	{
	    for(int j=0;j<c;j++)
	    {
	        if(a[i][j]!=0)
	        printf("%d ",a[i][j]);
	    }
	    printf("\n");
	}
}
