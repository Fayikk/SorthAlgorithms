#include <stdio.h>

#define MAX 50


void BubbleSort(int dizi[],int size){
	int i,j;
	for(i=0;i<size;i++){
		for(j=0;j<size-i;j++){
			if(dizi[j-1]>dizi[j]){
				int temp=dizi[j];
				dizi[j]=dizi[j-1];
				dizi[j-1]=temp;
			}
		}
	}
}


int main() {
	
	int dizi[MAX];
	int size;
	printf("Dizi kaç karakter");
	scanf("%d",&size);
	
	int i;
	
	for(i=0;i<size;i++){
		scanf("%d",&dizi[i]);
				
	}
	BubbleSort(dizi,size);
	
	for(i=0;i<size;i++){
		printf("%d",dizi[i]);
	}
	
	
	return 0;
}
