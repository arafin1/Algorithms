#include<iostream>
#include<algorithm>
using namespace std;

int partition(int A[], int lo, int hi){
    int pivot = A[hi];
    int i = lo;
    for (int j= lo; j<hi;j++){
        if (A[j] < pivot){
            swap (A[i],A[j]);
            i = i + 1;
        }

    }
   swap(A[i],A[hi]);
    return i;

}

void quicksort(int A[], int lo, int hi){
    if(lo < hi){
        int p = partition(A, lo, hi);
        quicksort(A, lo, p - 1);
        quicksort(A, p + 1, hi);
    }

}




int main(){
    int arr[] = {67,5,85,556,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,size - 1);
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

