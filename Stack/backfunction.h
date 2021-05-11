#ifndef backfunction
#define backfunction


#include <stdio.h>
#include <stdbool.h>
#include "structs.h"
#include "mainfunction.h"

#define SIZE 20

/**
 * @author  Muazzez Aydin
 */

int sizeControl(int); 
int save_toCopyStack(int, bool);
int update_MainStack(bool);		


int sizeControl(int size){
	
	if(-1 < size && size < SIZE)
		return 1;
	
	else if(size == -1)
		return 0;
	
	else if(size == SIZE)
		return 2;
}


int save_toCopyStack(int data, bool add){
	
	if(sizeControl(copyStack->stackSize) != 2){
		
		copyStack->stackSize++;
		copyStack->copySign[copyStack->stackSize] = add;
		copyStack->data[copyStack->stackSize] = data;
		return 1;
	}
	
	printf("Copy Stack is Full !\n");
	
}


int update_MainStack(bool add){
	
	if(sizeControl(mainStack->stackSize) && sizeControl(copyStack->stackSize)){
		
		if(add){	
		
			mainStack->data[mainStack->stackSize] = -1;
			mainStack->stackSize--;
		}
		else{	
		
			mainStack->stackSize++;
			mainStack->data[mainStack->stackSize] = copyStack->data[mainStack->stackSize];
		}
		copyStack->stackSize--;
		return 1;
	}
}



#endif
