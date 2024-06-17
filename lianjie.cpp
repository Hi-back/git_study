#include <iostream>
#include<cstdio> 
typedef struct node{
	char data;
	struct node* left=NULL;
	struct node* right=NULL;
}Node;
int main(){
	Node one;
	one.data='A';
	
	Node* two=new Node();
	(*two).data='B';
	
	Node* two_1=new Node();
	two_1->data='D';
	
	Node* two_2=new Node();
	two_2->data='E';
	
	Node* three=new Node();
	three->data='C';
	return 0;
	
	one.left=two;
	one.right=three;
	two->left=two_1;
	two->right=two_2;
	
	printf("%c & simple\n",one.data);
//	printf();
}
