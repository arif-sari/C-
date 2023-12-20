#include<stdio.h>
void bubbleSort(int arr[], int n){

	int i;
	int j;
	int temp;
	
	for(i=1; i<n; i++){
		for(j=0; j<n-1; j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}	
}

int main(){
    printf("Bubble sort\n\n");
    int array [] = {64,18,99,1,9,25};
    int n = sizeof(array) / sizeof(array[0]);
    bubbleSort(array, n);
    
    int k;
    for(k=1; k<n; k++)
    	printf("%d \n",array[k]);
    return 0;
}
