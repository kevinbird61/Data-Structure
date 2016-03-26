#include "odd_even_sort.h"
#include "Random_generate.h"

int main(int argc,char *argv[]){
	int i , SIZE , PHASE;
	SIZE = atoi(argv[1]);
	PHASE = atoi(argv[2]);
	printf("The Input array size is : %d ; And do odd-even sort for %d times\n",SIZE,PHASE);
	int *array = random_array(SIZE,SIZE);
	printf("Before :\n");
	for( i = 0 ; i < SIZE ; i++){
		printf("%d ", array[i]);	
	}
	printf("\n");
	
	/* Start Sorting */
	odev_sort(array , SIZE , PHASE);
	/* End Sorting */
	
	printf("After :\n");
	for( i = 0 ; i < SIZE ; i++){
		printf("%d ", array[i]);	
	}
	printf("\n");
}
