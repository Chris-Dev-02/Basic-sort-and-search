//Sequential search
#include<stdio.h>

int main(){
	int values[] = {15, 42, 3, 12, 4, 1, 8, 5};
	int n = sizeof values / sizeof *values;
	int i = 0;
	int target = 5;
	/*
	for(i = 0; i < n; i++){
		if(target == values[i]){
			printf("El valor %d esta en el indice %d", target, i);
		}
	}
	*/
	/*
	bool found;
	while(found == false){
		if(target == values[i]){
			found = true;
		}else{ 
			i++;
		}
	}
	*/
	while(i < n && target != values[i]){
		i++;
	}
	printf("El valor %d esta en el indice %d", target, i);
	
	return 0;
}