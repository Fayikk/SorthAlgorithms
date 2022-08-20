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

//�imdi yazd�rma i�lemi i�in gerekli operasyonlar� ger�ekle�tirelim.
//Burada gerekli operasyon i�in �ncellikle bir dizi tan�mlamas� yapmamz�z gerekmektedir.
int dizi[MAX];//Bunuda yukar�da define k�t�phanesi ile gerekli atamalar�n� yukar�da yapm�� bulunmaktay�z.
int size;//dizinin ne kadar b�y�k oldu�unu buradan ��renmemiz gerekecektir.
int i;
printf("L�tfen dizinizin ka� elemanl� olaca��n� karar verin?");
scanf("%d",&size);

for(i=0;i<size;i++){
	scanf("%d",&dizi[i]);//burada gerekli atamalar daha �nceden yap�ld��� i�in kulllan�c� dan de�er almaktay�z. 
}

//metodumzuu �a��arl�m

selectionSort(dizi,size);

for(i=0;i<size;i++){
	printf("%d",dizi[i]);
}

	return 0;
}


	
	
	
	
	
	

