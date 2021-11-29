/*  
	*
	**
	***
	****
	*****
	****
	***
	**
	*
 */
 
 #include<stdio.h>
 int main()
 {
 	int n,col,row;
 	scanf("%d",&n);
 	for(row=1;row<2*n;row++)
 	{
 		int totalcolinrow=row>n?2*n-row:row;
 		for(col=1;col<=totalcolinrow;col++)
		 {
			printf("*"); 	
		 }
		 printf("\n");	
	}
 	
 	
 	return 0;
 }
