
#include<iostream>
#include <string.h>

using namespace std;

void merge(int A[] , int start, int mid, int end) {
    int p = start ,q = mid+1;

    int Arr[end-start+1] , k=0;

   for(int i = start ;i <= end ;i++) {
     if(p>mid){
        Arr[k++] = A[q++];
     }else if(q>end){
        Arr[k++] = A[p++];
     }else if(A[p] < A[q]){
        Arr[k++] = A[p++];
     }else{
        Arr[k++] = A[q++];
     }

    }

   for (int p=0 ; p< k ;p ++) {
     A[ start++ ] = Arr[ p ] ;
  }

}

void merge_sort (int A[] , int start , int end ){

        if( start < end ) {
        int mid = (start + end ) / 2 ;

        merge_sort (A, start , mid ) ;
        int arrSize = sizeof(A)/sizeof(A[0]);

        merge_sort (A,mid+1 , end ) ;

        merge(A,start , mid , end );

   }
}


int main(){
    int arr[] = {67,5,85,556,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr,0,size - 1);
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

