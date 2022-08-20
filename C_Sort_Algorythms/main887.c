#include <stdio.h>
#include <stdlib.h>
#define MAX 20
//Binary Search Tree özelliklerini inceleyelim
//Ýlk önce kök düðüm oluþturulur.
//Sadece sol ve sað çocuk eklenebilir.
//Sol çocuklar daima parent'tan küçük
//Sað çocuklar ise daima parent'tan büyük olmalýdýr.

//Her eklenen düðüm leaf durumundadýr.
 

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

//Ekleme fonksiyonunu yazalým

struct node * ekle(struct node * node,int value){
	//Eklenecek konumun boþ olmasý gerekmektedir.
	if(node==NULL){
		return newNode(value);
	}
	if(value<node->data){
		node->left=ekle(node->left,value);
	}
	else if(value>node->data){
		node->right=ekle(node->right,value);
	}
	//Þeklinde bir yazým gerçekleþtirilir.
}


int main(int argc, char *argv[]) {

int secim;
int deger;
while(1){
	printf("1)InOrder traversal\n");
	printf("2)Eleman ekle\n");
	printf("Lütfen secim yapýnýz: ");
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


	
	
	
	
	
	

