/*to perform sorting in a given list of ascending order or descending order using insertion sort
Rashmi B A
18BBTCS099
Functions used: mergesort, merge and main
output:
enter the number of elements 
5
enter 5 integers 
1
2
5
8
6
sorted list in ascending order:
1 
2 
5 
6 
8 
*/
#include<stdio.h>

int main()
{
	int n ,array[1000],c,d,t;
	printf("enter the number of elements \n");
	scanf("%d",&n);
	printf("enter the %d integers \n");
	
	for(c=0;c<n;c++)
		{
			scanf("%d",&array[c]);
		}
	for(c=1;c<=n-1;c++)
		{
			d=c;//prevents over writing
			while(d>0 && array[d-1]>array[d])
				{	
					t=array[d];
					array[d]=array[d-1];
					array[d-1]=t;
					d--;
				}
		}

		printf("sorted list in ascending order:\n");
	for(c=0;c<=n-1;c++)
		{
			printf("%d \n", array[c]);
		}
	return 0;
}
