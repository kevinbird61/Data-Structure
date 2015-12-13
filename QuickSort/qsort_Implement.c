#include <stdio.h>
#include <stdlib.h>
#include "Qsort.h"
#include "Random_generate.h"

int main(int argc , char *argv[]){
	int i , SIZE;
	SIZE = atoi(argv[1]);
	int *array = random_array(SIZE,SIZE);
	printf("Before :\n");
	for( i = 0 ; i < SIZE ; i++){
		printf("%d ", array[i]);	
	}
	printf("\n");
	
	quicksort(array , 0 , SIZE-1);
	
	printf("Before :\n");
	for( i = 0 ; i < SIZE ; i++){
		printf("%d ", array[i]);	
	}
	printf("\n");
	
	return 0;
}

