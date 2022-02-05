// NUMBER OF OCCURENCES OR FREQUENCY OF AN ELEMENT

//FIRST OCCURENCE OF AN ELEMENT IN AN ARRAY

int f_occ(int arr[],int x,int start,int end){
	while(start<=end){
		int mid = (start + (end-start)/2);
		if(arr[mid]<x){
			start = (mid+1);
		}
		else if(arr[mid]>x){
			end = (mid-1);
		}
		else{
			if(mid == (n-1) || (arr[mid] != arr[mid+1])){
				return mid;
			}
			else{
				end = mid-1;
			}
		}
	}
	return -1;
}
//LAST OCCURENCE OF AN ELEMENT IN AN ARRAY

int l_occ(int arr[],int x,int start,int end){
	while(start<=end){
		int mid = (start + (end-start)/2);
		if(arr[mid]<x){
			start = (mid+1);
		}
		else if(arr[mid]>x){
			end = (mid-1);
		}
		else{
			if(mid == (n-1) || (arr[mid] != arr[mid+1])){
				return mid;
			}
			else{
				end = mid-1;
			}
		}
	}
	return -1;
}

// FREQUENCY
int freq(int arr[],int n,int x){
	int first = f_occ(arr,n,x);
	
	if(first == -1){
		return 0;
	}
	else{
		return (l_occ(arr,n,x)-f_occ(arr,n,x) + 1)
	}
}