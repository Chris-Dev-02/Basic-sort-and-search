//Exchange sort
#include <stdio.h>

void exchangeSort(int values[], int n){	
	for(int a = 0; a < n - 1; a++){
		for(int b = a + 1; b < n; b++){
			if(values[a] > values[b]){
				printf("\n%i", a);
				int aux = values[a];
				values[a] = values[b];
				values[b] = aux;
			}
		}
	}
}
 
int main(){
	int values[] = {14, 5, 7, 3};
	int n = sizeof values / sizeof *values;
	
	printf("Original array: ");
	for(int i = 0; i < n; i++){
		printf("%i, ", values[i]);
	}
	
	exchangeSort(values, n);
	
	printf("\nSorted array: ");
	for(int i = 0; i < n; i++){
		printf("%i, ", values[i]);
	}
	
	return 0;
}