//Insertion sort
#include <stdio.h>

void insertionSort(int values[], int n){
	int i, j, aux;
	
	for (i = 1; i < n; i++){
		j = i;
		aux = values[i];
		while(j > 0 && aux < values[j - 1]){
			values[j] = values[j - 1];
			j--;
		}
		values[j] = aux;
	}
}

int main(){
	int values[] = {31, 25, 43, 12, 8, 67, 14};
	int n = sizeof values / sizeof *values;
	
	printf("Original array: ");
	for(int i = 0; i < n; i++){
		printf("%i, ", values[i]);
	}
	
	insertionSort(values, n);
	
	printf("\nSorted array: ");
	for(int i = 0; i < n; i++){
		printf("%i, ", values[i]);
	}
	
	return 0;
}