#include <stdio.h>
#include <stdlib.h>
#define MAX 20


//Selection sort(seçme sýralamasý)
void SelectionSort(int arr[],int size){
	int i,j;
	int minIndex;
	for(i=0;i<size;i++){
		minIndex=i;
		for(j=0;j<size;j++){
			if(arr[j]<arr[minIndex]){
				minIndex=i;
			}
		}
		int temp=arr[i];
		arr[i]=arr[minIndex];
		arr[minIndex]=temp;
	}
}




int main(int argc, char *argv[]) {
	
	int dizi[MAX];
	int size;
	printf("Dizi kaç elemanlý olsun");
	scanf("%d",&size);
	int i;
	for(i=0;i<size;i++){
		printf("Dizi için eleman giriniz");
		scanf("%d",&dizi[i]);
	}
	
	SelectionSort(dizi,size);
	
	for(i=0;i<size;i++){
		printf("%d",dizi[i]);
	}
	
	

	return 0;
}


	
	
	
	
	
	

