#include <stdlib.h>
#include <stdio.h>
void swap(int *a, int *b)
{
	int tmp = *a;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void Bubblesort(int a[],int len);
void Selectionsort(int a[],int len);
void Insertionsort(int a[],int len);

int main()
{
	int a[]={10,9,8,7,6,5,4,3,2,1};
	
	for(int i = 0; i<sizeof(a)/sizeof(a[0]) ;i++)
	printf("%d\n",a[i]);
	printf("\n");
	
	//Bubblesort(a,sizeof(a)/sizeof(a[0]));
	Selectionsort(a,sizeof(a)/sizeof(a[0]));
	//Insertionsort(a,sizeof(a)/sizeof(a[0]));

	
	for(int i = 0; i<sizeof(a)/sizeof(a[0]) ;i++)
	printf("%d\n",a[i]);
	
	
	return 0;
} 

void Bubblesort(int a[], int len) //由小到大,先排大 
{
		for(int i = 0 ; i< len ;i++)   
	{
		for( int j = 0; j< len - i ; j++)
		{
			if(a[j]>a[j+1])
			swap(&a[j],&a[j+1]);
		}
	} 
	
}
