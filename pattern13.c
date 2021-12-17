/* 
    A B C
    A B C
    A B C
*/

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		char ch=65;
		int j=1;
		while(j<=n)
		{
			printf("%c ",ch);
			ch++;
			j++;
		}printf("\n"); i++;
	}	
	return 0;
}
