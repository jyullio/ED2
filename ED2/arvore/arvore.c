#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* node_left;
	struct node* node_right;

};

void print_arvore(struct node* cur_node){

	if(cur_node == NULL){
		printf("<>");
		return;
	}
	
	printf("<%d" , cur_node -> data);
	print_arvore(cur_node -> node_left);
	print_arvore(cur_node -> node_right);

	printf(">");

}


struct node* insert_node(int data , struct node* node_left , struct node* node_right){

	struct node *cur_node = (struct node*)malloc(sizeof(struct node*));
	cur_node -> data = data;
	cur_node -> node_left = node_left;
	cur_node -> node_right = node_right;
	return cur_node;

}

int main(){

	
	struct node* a1 = insert_node(12 , NULL , NULL);
	struct node* a2 = insert_node(14 , a1 , NULL);
	struct node* a3 = insert_node(9 , NULL , a2);

	struct node* a4 = insert_node(19 , NULL , NULL);
	struct node* a5 = insert_node(23 , a4 , NULL);
	struct node* a6 = insert_node(17 , a3 , a5);


	struct node* a7 = insert_node(67 , NULL , NULL);
	struct node* a8 = insert_node(72 , a7 , NULL);
	struct node* a9 = insert_node(54 , NULL , a8);
	struct node* a10 = insert_node(76 , a9 , NULL);

	struct node* root = insert_node(50 , a6 , a10);

	print_arvore(root);

	return 0;
}