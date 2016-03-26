#include "mergesort.h"

int *mergesort(int *array , int start , int end){
	int left_end , right_start;
	// when length is  1 , and then return
	if( end == start ){
		return array+end ;
	}
	else{
		// Build left
		left_end = (end+start+1)/2 - 1;
		// Build right
		right_start = (end+start+1)/2; 
	}
	return merge( mergesort(array , start , left_end) , left_end - start + 1 , mergesort(array , right_start , end) , end - right_start +1 );
}

int *merge(int *array1 , int array1_size ,  int  *array2 , int array2_size ){
	int size = array1_size + array2_size , arr1_index = 0 , arr2_index = 0 , result_index = 0; 
	int *sorted_array = malloc(size*sizeof(int)); 
	// compare two array , which one is bigger ? And then put the small one into the result
	while( (arr1_index < array1_size) && (arr2_index < array2_size) )
	{
		if(array1[arr1_index] < array2[arr2_index] ){
			sorted_array[result_index] = array1[arr1_index];
			arr1_index++;
			result_index++;
		}
		else{
			sorted_array[result_index] = array2[arr2_index];
			arr2_index++;
			result_index++;
		}
	}
	if(arr1_index >= array1_size ){
		// arr2 might have left
		if(arr2_index < array2_size){
			// put all left over array2 in result
			int i;
			for(i = arr2_index; i < array2_size ; i++ , arr2_index++){
				sorted_array[result_index] = array2[i];
				result_index++;
			}
		}
	}
	else if(arr2_index >= array2_size){
		// arr1 might have left
		if(arr1_index < array1_size){
			// put all left over array1 in result
			int i;
			for(i = arr1_index ; i < array1_size ; i++ , arr1_index++){
				sorted_array[result_index] = array1[i];
				result_index++;
			}
		}
	}	
	return sorted_array;
}
