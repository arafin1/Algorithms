#include<iostream>
using namespace std;

BinarySearch(int arr[],int left,int right, int n){

if(left <= right){

    int mid = (left + right) / 2;

    if(arr[mid] == n) return mid;
    else if( arr[mid] < n){
        return BinarySearch(arr,mid+1,right, n);
    }
    else{
        return BinarySearch(arr,left,mid-1, n);
    }

}

return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,67};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<BinarySearch(arr,0,size,2);
    return 0;
}
