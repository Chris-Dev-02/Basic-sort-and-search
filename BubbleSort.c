//Bubble sort
#include <stdio.h>

void bubbleSort(int values[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(values[j] > values[j + 1]){
				int aux = values[j];
				values[j] = values[j + 1];
				values[j + 1] = aux;
			}
		}
	}
}

int main(){
	int values[] = {15, 42, 3, 12, 8, 4, 1};
	int n = sizeof values / sizeof *values;
		
	printf("Original array: ");
	for(int i = 0; i < n; i++){
		printf("%i, ", values[i]);
	}
	
	bubbleSort(values, n);
	
	printf("\nSorted array: ");
	for(int i = 0; i < n; i++){
		printf("%i, ", values[i]);
	}
	
	return 0;
} 