//Quick sort
#include<stdio.h>

void quickSort(int values[], int first, int last){
	int i, j, center, pivot;
	center = (first + last) / 2;
	pivot = values[center];
	i = first;
	j = last;
	do{
		while(values[i] < pivot){
			i++;
		}
		while(values[j] > pivot){
			j--;
		}
		if(i <= j){
			int aux = values[i];
			values[i] = values[j];
			values[j] = aux;
			i++;
			j--;
		}
	}while(i <= j);
	if(first < j){
		quickSort(values, first, j);	
	}
	if(i < last){
		quickSort(values, i, last);
	}
}

int main(){
	int values[] = {15, 42, 3, 12, 4, 1, 8};
	int n = sizeof values / sizeof *values;
		
	printf("Original array: ");
	for(int i = 0; i < n; i++){
		printf("%i, ", values[i]);
	}
	
	quickSort(values, 0, n - 1);
	
	printf("\nSorted array: ");
	for(int i = 0; i < n; i++){
		printf("%i, ", values[i]);
	}
	
	return 0;
}