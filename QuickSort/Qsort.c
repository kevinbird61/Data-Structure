#include "Qsort.h"

void quicksort(int array[] , int left , int right){
	int j;
	if(left < right){
		// divide and conquer
		j = partition(array , left , right);
		quicksort(array , left , j - 1);
		quicksort(array , j+1 , right);
	}
}

int partition(int array[] , int left , int right){
	int pivot , i , j , t ;
	pivot = array[left];
	i = left ;
	j = right;
	while(1){
		while(array[i] <= pivot && i <= right){ i ++; }
		while(array[j] > pivot){ j -- ;}
		if(i >= j )break;
		t = array[i];
		array[i] = array[j];
		array[j] = t;
	}
	t = array[left];
	array[left] = array[j];
	array[j] = t;
	return j;
}
