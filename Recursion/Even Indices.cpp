#include<bits/stdc++.h>
typedef long long ll ;
#define int ll 
using namespace std ;

void print(int arr[],int i){
	if(i<0){
		return;
	}
	if(i%2 ==0){
		cout<<arr[i]<<" ";
	}
	print(arr,i-1);
}
signed main( )
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    
    int t = 1;
    //cin>>t;
    while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0;i<n;i++){
			cin>>arr[i];
		}
		int i = n-1;
		print(arr,i);
    }
    return 0 ;
}  