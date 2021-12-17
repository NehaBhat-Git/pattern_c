/* 
   1
   2 3
   3 4 5
   4 5 6 7
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
			int value=(i+j)-1;
			printf("%d ",value);
			j++;
		}
		printf("\n");
		i++;
	}
  return 0;
}
	
