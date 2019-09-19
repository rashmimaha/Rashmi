/*to perform sorting in a given list of ascending order or descending order using quick sort
Rashmi
18BBTCS099
Functions used: quicksort
output:
enter the size of the array5
enter 5 elements :1
2
8
5
6
sorted elements 1 	2 	5 	6 	8 	
*/
#include<stdio.h>
void quicksort(int [10], int, int);
int main()
{
	int x[20],size, i;
	printf("enter the size of the array");//extract the size of array
	scanf("%d",&size);
	printf("enter %d elements :", size);

	for(i=0;i<size;i++)
	scanf("%d",&x[i]);

	quicksort(x,0,size-1);

	printf("sorted elements");

	for(i=0;i<size;i++)
		printf("%d \t",x[i]);
		return 0;
}
void quicksort(int x[10], int first, int last)
{
	int pivot, j, temp, i;
	if(first<last)//to check the first and last element and swap them
		{
		pivot=first;
		i=first;
		j=last;

		while(i<j)
			{
				while(x[i]<=x[pivot] && i<last)//check pivot with right side elements
				i++;

				while(x[j]>x[pivot])//move those elements to front position
				j--;
			if(i<j)//Transfer elements from temp[] back to x[]
				{
					temp=x[i];
					x[i]=x[j];
					x[j]=temp;
				}	
			}
		temp= x[pivot];//by comparing the value of pivot changes
		x[pivot]=x[j];
		x[j]=temp;

		quicksort(x, first, j-1);//quicksort left part

		quicksort(x,j+1,last);//quicksort right part
		}
}
