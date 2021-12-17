/*
  1
  2 1
  3 2 1
  4 3 2 1
*/

#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int i=1;
	
	while(i<=n)
	{
		int j=1;
		while(j<=i)
		{
			printf("%d ",i-j+1);
			j++;
		}printf("\n"); i++;
	}
  return 0;
}
