/*  
 * * * * *
  * * * *
   * * *
    * *
     *
     *
    * *
   * * *
  * * * *
 * * * * *
*/

#include<stdio.h>
int main()
{
	int row,col,n,sp,s,tolcol;
	scanf("%d",&n);
	for(row=1;row<=2*n;row++)
	{
		 sp=(row>n)?2*n-row:row-1;
		 for(s=1;s<=sp;s++)
		 	{
		 		printf(" ");		
			}
		  tolcol=(row>n)?row-n:n-row+1;
		  for(col=1;col<=tolcol;col++)
		  {
		  		printf("* ");
		  }
		  printf("\n");
	}
	
	return 0;
}
