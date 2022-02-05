//Partition methods 

//Lomuto Partition :: last index is considered as pivot always 

int partition(int arr[],int l,int h){
	int pivot = arr[h];
	int i = l-1;
	for(int j = 0;j<h;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],pivot);
	return (i+1);
}

//Hoare's Partition :: First index is considered as pivot always

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low - 1, j = high + 1;
 
    while (true) {
        
        do {
            i++;
        } while (arr[i] < pivot);
 
        do {
            j--;
        } while (arr[j] > pivot);
 
        if (i >= j)
            return j;
 
        swap(arr[i], arr[j]);
    }
}
