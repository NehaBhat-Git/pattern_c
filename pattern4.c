/* 
	1
	12
	123
	1234
	12345	
 */
 
 #include<stdio.h>
 int main()
 {
 	int n,row,col;
 	scanf("%d",&n);
 	for(row=1;row<=n;row++)
 	{
 		for(col=1;col<=row;col++)
		 {
		 	printf("%d",col);	
		 }
		 printf("\n");	
	}	
 	return 0;
 }
