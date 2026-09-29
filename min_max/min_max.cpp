
#include <stdio.h>

int main() {
	int arr[3] = {1,10,3};
	int max = arr[0];
	int min = arr[0];
	for(int i=1; i < 3; i++){
		if(max < arr[i]) {
			max = arr[i];
		}
		if(min > arr[i]){
			min = arr[i];
		}
	}
	printf("%d is maximum number in array",max);
	printf("\n%d is minimum number in array",min);
}
