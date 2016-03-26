#include "Random_generate.h"
#include "exchangeSort.h"

int main(int argc , char *argv[]){
	int i , SIZE;
	SIZE = atoi(argv[1]);
	int *array = random_array(SIZE,SIZE);
	printf("Before :\n");
	for( i = 0 ; i < SIZE ; i++){
		printf("%d ", array[i]);	
	}
	printf("\n");
	// Start sorting
	exchange(array,SIZE,SIZE);
	// End sorting
	printf("Before :\n");
	for( i = 0 ; i < SIZE ; i++){
		printf("%d ", array[i]);	
	}
	printf("\n");
	return 0;
}
