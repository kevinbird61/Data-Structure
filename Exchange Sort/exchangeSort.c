#include "exchangeSort.h"

void exchange(int *arr,int size,int max){
	int i,j,index,temp;
	int *result = malloc(size*sizeof(int));
	int minimum = max+1;
	for(i=0;i<size;i++){
		// Count for the result array
		for(j=i;j<size;j++){
			// Count for the search / compare array
			if(arr[j] < minimum){
				index = j;
				minimum = arr[j];
			}
		}
		// Change the origin and the indexed
		temp = arr[i];
		arr[j] = arr[index];
		arr[index] = temp;
		// Store the minimum into result
		result[i] = minimum;
		// Reuse the minimum
		minimum = max+1;
	}
	// Store back to source array
	for(i=0;i<size;i++){
		arr[i] = result[i];
	}
}	
