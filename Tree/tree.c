#include<stdio.h>
#include<stdlib.h>

#include "tree.h"

static int _leafSum = 0;
static int _depthCounter = -1;


Tree *initaliaze(int data){
	
	Tree *newTreeNode = (Tree*)malloc(sizeof(Tree));
	newTreeNode -> right = NULL;
	newTreeNode -> left = NULL;
	newTreeNode -> data = data;
	
	return newTreeNode;
}


void preorder(Tree *head){
	
	if(head != NULL){
		printf("%d ", head->data);
		preorder(head->left);
		preorder(head->right);		
	}
}

	
void inorder(Tree *head){

	if(head != NULL){
		preorder(head->left);
		printf("%d ", head->data);
		preorder(head->right);		
	}
	
}


void postorder(Tree *head){

	if(head != NULL){
		preorder(head->left);
		preorder(head->right);
		printf("%d ", head->data);		
	}
}


Tree *insert(Tree *head, int data){
	
	if(head == NULL){
		head = initaliaze(data);
		printf("%d added\n", data);
	}
	
	else{
		if(data < head->data)
			head->left = insert(head->left, data);
		else
			head->right = insert(head->right, data);	
	}
	return head;
}


int stepFind(Tree *head, int data){

	int counter = 0;
	while(head != NULL){

		counter++;
		if(head->data == data){
			
			printf("\n\n%d found in\t%d steps", data, counter);
			return counter;
		}else{
			
			if(data > head->data)
				head = head->right;
			else
				head = head->left;
		}
	}
	if(counter == 0){
		
		printf("\n%d not found", data);	
	}
}


int leafSum(Tree *head){
	
	if(head != NULL){
		
		if(head->right != NULL || head->left != NULL){
			
			leafSum(head->left);
			leafSum(head->right);
		}else{
			
			_leafSum += head->data;
			return _leafSum;
		}		
	}
}


int printByDepth(Tree *head ,int depth){
	
	if(head != NULL){
		
		if(_depthCounter == depth){
			
			printf("%d ", head->data);
		}
		
		_depthCounter += 1;

		printByDepth(head->left, depth);
		printByDepth(head->right, depth);
		
		_depthCounter -= 1;
	}
}


void printBiggerThanData(Tree *head , int data){

	if(head != NULL){
		
		if(data < head->data)
			printf("%d  ", head->data);
		
		printBiggerThanData(head->left , data);
		printBiggerThanData(head->right , data);		
	}
}
