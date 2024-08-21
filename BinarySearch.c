//Binary search
#include<stdio.h>
#include<stdlib.h>


int binarySearchRecursive(int values[], int target, int first, int last){
	if(last >= first){
		int half =  first + (last + first) / 2;
		if(values[half] == target){
			return half;
		}
		if(values[half] > target){
			return binarySearchRecursive(values, target, first, half - 1);
		}
		return binarySearchRecursive(values, target, half + 1, last);
	}
	
	return -1;
}

int binarySearchIterative(int values[], int first, int last, int target){
	while(first <= last){
		int mid = first + (last - first) / 2;
		if(values[mid] == target) return target;
		if(values[mid] < target) first = mid + 1;
		else last = mid -1;
	}
	return -1;
}

int main(){
	int values[] = {2, 5, 10, 14, 18, 22, 25};
	int n = sizeof values / sizeof *values;
	int target = 5;
	int result;
	
	result = binarySearchIterative(values, 0, n, target);
	
	if(result == -1){
		printf("The element was not found");
	}
	else{
		printf("The element was found at index: %i", result);
	}
	
	system("PAUSE");

	return 0;
}