//bubble Sort
//kabarcýk sýralamasý

#include <stdio.h>
#include <stdlib.h>
#define MAX 50

void bubbleSort(int arr[],int size){
	int i,j;
	for(i=0;i<size;i++){
		for(j=1;j<size-i;j++)
		{
			if(arr[j-1]>arr[j]){
				int temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
			
		}
		
		
	}
	
}


int main() {
	
	int array[MAX],size;
	printf("Kac elemanlýdýr");
	scanf("%d",&size);
	int i;
	for(i =0;i<size;i++){
		scanf("%d",&array[i]);
	}
	
	bubbleSort(array,size);
	
	for(i=0;i<size;i++){
		printf("%d",array[i]);
	}
	
	return 0;
}
