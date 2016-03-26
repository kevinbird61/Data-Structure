#include "bubblesort.h"

void bubblesort(int array[] , int size){
	int i , j , temp;
	for(i = 0; i < size ; i++){
		for(j = 0 ; j < size-1 ; j++){
		/* why size-1 : because if you set upper bound "size" 
		=> it will overflow if below you use the some method as mine.*/
			if(array[j] > array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp; 
			}
		}
	}
}
