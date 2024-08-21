//Selection sort
#include <stdio.h>

void selectionSort(int values[], int n){
	int minimumValue;
	
	for(int a = 0; a < n - 1; a++){
		minimumValue = a;
		for(int b = a + 1; b < n; b++){
			if(values[b] < values[minimumValue]){
				minimumValue = b;
			}
		}
		
		if(a != minimumValue){
			int aux = values[a];
			values[a] = values[minimumValue];
			values[minimumValue] = aux;
		}
	}
}

int main(){
	
	int values[] = {78, 87, 3, 54, 21,1};
	int n = sizeof values / sizeof *values;
	
	printf("Original array: ");
	for(int i = 0; i < n; i++){
		printf("%i, ", values[i]);
	}
	
	selectionSort(values, n);
	
	printf("\nSorted array: ");
	for(int i = 0; i < n; i++){
		printf("%i, ", values[i]);
	}
	
	return 0;
}