/*
   A A A
   B B B
   C C C
*/
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int i=1; char c=65;
	while(i<=n)
	{
		int j=1;
		while(j<=n)
		{
			printf("%c ",c);
			j++;	
		}
         printf("\n"); 
        i++; 
        c++;
}
return 0;
}
