#include "countingsort.h"

void countingsort(int *array , int size){
	// Get the biggest number
	int i , temp = 0 , max = getMax(array , size);
	// allocate the temp store array
	int *range_arr = malloc(max*sizeof(int));
	for( i = 0 ; i <= max ; i++ ){
		range_arr[i] = 0;
	}
	// allocate the result array
	int *result = malloc(size*sizeof(int));
	// Get every number in place
	for( i  = 0 ; i < size ; i++ ){
		range_arr[array[i]]++;
		// clear the result
		result[i] = 0;
	}
	// Accumulate the array
	for( i = 0 ; i <= max ; i++ ){
		temp += range_arr[i];
		range_arr[i] = temp;
	}
	// Start sorting
	for( i = 0 ; i < size ; i++){
		result[ range_arr[ array[i] ] - 1 ] = array[i];
		range_arr[array[i]] --;
	}
	for( i = 0 ; i < size ; i++){
		array[i] = result[i];
	}
	free(result);
	free(range_arr);
}

int getMax(int *array , int size){
	int i,max = 0;
	for(i = 0; i< size ; i++){
		if(array[i] > max){
			max = array[i];
		}
	}
	return max;
}
