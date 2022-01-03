#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, count=0;
	cin >> n >> k;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	for(int i=0;i<n;i++){
	    if(arr[i]<=k){
	        count++;
	    }
	}
	for(int i=0;i<n;i++){
	    int mul=arr[i];
	    for(int j=i+1;j<n;j++){
	        if(mul * arr[j] < k){
	            mul = mul * arr[j];
	            count++;
	        }else{
	            break;
	        }
	    }
	}
	cout << count;
	return 0;
}
