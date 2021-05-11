#ifndef mainfunction
#define mainfunction


#include <stdio.h>
#include <stdbool.h>
#include "structs.h"
#include "backfunction.h"

#define SIZE 20

/**
 * @author  Muazzez Aydin
 */

int update_MainStack(bool add);
void start(void);
int push_inMainStack(int);
int pop_fromMainStack(void);
void takeitBack_MainStack();
int printMainStack();	
int printfCopyStack();


void start(void){
	
	mainStack->stackSize = -1;
	copyStack->stackSize = -1;
}


int push_inMainStack(int data){
	
	if(sizeControl(mainStack->stackSize) != 2){

		mainStack->stackSize++;
		mainStack->data[mainStack->stackSize] = data;
		
		save_toCopyStack(data, true);
		
		return 1;
	}
	printf("Main Stack is Full !\n");
}


int pop_fromMainStack(void){
	
	if(sizeControl(mainStack->stackSize) == 0){
		
		printf("Main Stack is Empty !\n");
		return 0;			
	}
	
	int copyData = mainStack->data[mainStack->stackSize];
	save_toCopyStack(copyData, false);
	mainStack->stackSize--;
	return 1;	
}


void takeitBack_MainStack(){
	
	update_MainStack(copyStack->copySign[copyStack -> stackSize]);
	
}


int printMainStack(){
	
	if(sizeControl(mainStack->stackSize) == 0){
		printf("Main Stack is Empty !\n");
		return 0;
	}
	
	int tempSize  = mainStack->stackSize;
	printf("\nMain Stack Items *\n");
	
	while(tempSize >= 0){
		
		printf("%d\n", mainStack->data[tempSize]);
		tempSize--;
	}
	printf("- - - - - - - - --\n");
}


int printCopyStack(){
	
	if(sizeControl(copyStack->stackSize) == 0){
		printf("Copy Stack is Empty !\n");
		return 0;
	}
	
	int tempSize  = copyStack->stackSize;
	printf("\nCopy Stack Items *\n");
	
	while(tempSize >= 0){
		
		printf("%d\tsign : %d\n", copyStack->data[tempSize], copyStack->copySign[tempSize]);
		tempSize--;
	}
	printf("- - - - - - - - --\n");
}
	



	
#endif
