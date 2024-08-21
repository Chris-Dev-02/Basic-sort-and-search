//Shell sort
#include <stdio.h>
#include <conio.h>

void shellSort(int values[], int n){
	int jump = n / 2;
	int i, j, k;
	
	while(jump > 0){
		for(i = 0; i < n; i++){
			j = i - jump;
			while(j >= 0){
				k = j + jump;
				if(values[j] <= values[k]){
					j = -1;
				}else{
					int aux = values[j];
					values[j] = values[k];
					values[k] = aux;
					
					j -= jump;
				}
			}
		}
		jump = jump / 2;
	}
}

int main(){
	int values[] = {15, 42, 3, 12, 4, 1, 8};
	int n = sizeof values / sizeof *values;
		
	printf("Original array: ");
	for(int i = 0; i < n; i++){
		printf("%i, ", values[i]);
	}
	
	shellSort(values, n);
	
	printf("\nSorted array: ");
	for(int i = 0; i < n; i++){
		printf("%i, ", values[i]);
	}
	
	getch();

	return 0;
}