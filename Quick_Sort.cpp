#include<stdio.h>

int partition(int arr[], int low, int high, int pivot){
	int i = low;
	int j = low;
	while( i <= high){
		if(arr[i] > pivot){
			i++;
		}
		else{
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j++;
		}
	}
	return j-1;
}

void quickSort(int arr[], int low, int high){
	if(low < high){
	int pivot = arr[high];
	int pos = partition(arr, low, high, pivot);

	quickSort(arr, low, pos-1);
	quickSort(arr, pos+1, high);
	}
}

int main()
{
	int n ;
	printf("Enter size of array :");
	scanf("%d",&n);
	int arr[n];
	for( int i = 0 ; i < n; i++){
        printf("Enter value index %d :",i);
		scanf("%d",&arr[i]);
	}
	quickSort(arr, 0 , n-1);
	printf("Sorted array is: ");
	for( int i = 0 ; i < n; i++){
		printf("%d ",arr[i]);
	}

}
