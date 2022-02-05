// SQUARE ROOT USING BINARY SEARCH

int sqroot(int x){
	int start = 1,end = x;
	while(start<=end){
		int mid = start + (end-start)/2;
		int msq = mid*mid;
		if(x == msq){
			return mid;
		}
		else if (x>msq){
			start = mid+1;
			ans = mid;
		}
		else{
			end = mid-1;
		}
	}
}