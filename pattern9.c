/* 
		*********
    	 *******
    	  *****
     	   ***
      		*

  */
#include<stdio.h>
int main()
{
	int row,col,n,sp;
	scanf("%d",&n);
	
	for(row=1;row<=n;row++)
	{
		for(sp=1;sp<row;sp++)
		{
			printf(" ");
		}
		for(col=1;col<=2*(n-row)+1;col++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

