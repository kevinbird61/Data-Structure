#include "bubblesort.h"
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
	
	/* Start Sorting */
	bubblesort(array , SIZE);
	/* End Sorting */
	
	printf("Before :\n");
	for( i = 0 ; i < SIZE ; i++){
		printf("%d ", array[i]);	
	}
	printf("\n");
	
	return 0;
}
