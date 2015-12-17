#include "Random_generate.h"

int *random_array(int size, int range){
	int i;
	int *array = malloc(size*sizeof(int));
	srand(time(NULL));
	for(i = 0; i<size ; i++){
		array[i] = rand()%range+1;
	}
	return array;
}
