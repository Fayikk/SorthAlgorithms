#include <stdio.h>
#include <stdlib.h>
#define MAX 20
//selection sort



void selectionSort(int arr[],int size){
	int i,j;
	int minIndex;
	for(i=0;i<size;i++){
		minIndex=i;
		for(j=0;j<size;j++){
			if(arr[j]<arr[minIndex]){
				minIndex=j;
			}
		}
		int temp;
		temp=arr[i];
		arr[i]=arr[minIndex];
		arr[minIndex]=temp;
	}
}

int main(int argc, char *argv[]) {

//Þimdi yazdýrma iþlemi için gerekli operasyonlarý gerçekleþtirelim.
//Burada gerekli operasyon için öncellikle bir dizi tanýmlamasý yapmamzýz gerekmektedir.
int dizi[MAX];//Bunuda yukarýda define kütüphanesi ile gerekli atamalarýný yukarýda yapmýþ bulunmaktayýz.
int size;//dizinin ne kadar büyük olduðunu buradan öðrenmemiz gerekecektir.
int i;
printf("Lütfen dizinizin kaç elemanlý olacaðýný karar verin?");
scanf("%d",&size);

for(i=0;i<size;i++){
	scanf("%d",&dizi[i]);//burada gerekli atamalar daha önceden yapýldýðý için kulllanýcý dan deðer almaktayýz. 
}

//metodumzuu çaðýarlým

selectionSort(dizi,size);

for(i=0;i<size;i++){
	printf("%d",dizi[i]);
}

	return 0;
}


	
	
	
	
	
	

