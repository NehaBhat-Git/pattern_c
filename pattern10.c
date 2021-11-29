/* 
	   *
      * *
     * * *
    * * * *
   * * * * *


  */
  
  #include<stdio.h>
  int main()
  {
  	int row,col,n,sp;
  	scanf("%d",&n);
  	for(row=1;row<=n;row++)
  	{
  		for(sp=1;sp<=n-row;sp++)
		  {
		  	printf(" ");	
		  }	
		for(col=1;col<=row;col++)
		{
			printf("* ");
		}
		printf("\n");
	}
  	
  	
  	return 0;
  }
