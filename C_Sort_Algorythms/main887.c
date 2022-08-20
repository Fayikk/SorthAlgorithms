#include <stdio.h>
#include <stdlib.h>
#define MAX 20
//Binary Search Tree �zelliklerini inceleyelim
//�lk �nce k�k d���m olu�turulur.
//Sadece sol ve sa� �ocuk eklenebilir.
//Sol �ocuklar daima parent'tan k���k
//Sa� �ocuklar ise daima parent'tan b�y�k olmal�d�r.

//Her eklenen d���m leaf durumundad�r.
 

struct node{
	int data;
	struct node * left;
	struct node * right;
};
struct node * root=NULL;

struct node * newNode(int key){
	struct node * temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=key;
	temp->left=NULL;
	temp->right=NULL;
	
	if(root==NULL){
		root=temp;
	}
	return temp;
}

void InOrder(struct node * root){
	if(root!=NULL){
		printf("%d",root->data);
		InOrder(root->left);
		
		InOrder(root->right);
	}
}

//Ekleme fonksiyonunu yazal�m

struct node * ekle(struct node * node,int value){
	//Eklenecek konumun bo� olmas� gerekmektedir.
	if(node==NULL){
		return newNode(value);
	}
	if(value<node->data){
		node->left=ekle(node->left,value);
	}
	else if(value>node->data){
		node->right=ekle(node->right,value);
	}
	//�eklinde bir yaz�m ger�ekle�tirilir.
}


int main(int argc, char *argv[]) {

int secim;
int deger;
while(1){
	printf("1)InOrder traversal\n");
	printf("2)Eleman ekle\n");
	printf("L�tfen secim yap�n�z: ");
	scanf("%d",&secim);
	switch(secim){
		case 1:
			InOrder(root);
			break;
		case 2:
			printf("Eleman ekle secildi");
			scanf("%d",&deger);
			ekle(root,deger);	
			
	}
}





	return 0;
}


	
	
	
	
	
	

