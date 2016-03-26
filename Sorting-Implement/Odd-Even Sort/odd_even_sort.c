#include "odd_even_sort.h"

void odev_sort(int *arr,int size,int phase){
	int i,j;
	for(i = 0; i < phase ; i++){
		// if i is odd
		for(j=1;j<size-2;j+=2){
			if(arr[j] > arr[j+1]){
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
		// if i is even
		for(j=0;j<size-1;j+=2){
			if(arr[j] > arr[j+1]){
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}

}
