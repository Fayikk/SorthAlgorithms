#include <stdio.h>
#include <stdlib.h>
//selection sort iþleminde bubble sort gibi direk olarak,her seerinde 1'er kadýrma yapmak yerine,
//diziyi tamamen dolaþýp gerekli olan sýralamalarý yapmaktadýrlar.

#define MAX 50

void SelectionSort(int arr[],int size){
	int i,j;
	for(i=0;i<size;i++){
		for(j=0;j<size-i;j++){
			if(arr[i]>arr[j]){
				int temp;
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
}



int main() {
	
int array[MAX];
int size;

printf("Lütfen dizi için istenen eleman sayýsýný giriniz");
scanf("%d",&size);
int i;
for(i=0;i<size;i++){
	printf("dizi için eleman giriniz");
	scanf("%d",&array[i]);
}

SelectionSort(array,size);

for(i=0;i<size;i++){
	printf("%d",array[i]);
}	
	
	
	return 0;
}
