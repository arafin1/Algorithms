#include<iostream>
using namespace std;

void insertionSort( int A[],int n){

   int h;
   int v;

   for(int i = 1; i<n;i++){
      v = A[i];
      h = i;

      while (h > 0 and A[h-1] > v){
         A[h] = A[h-1];
         h = h -1;
      }

      A[h] = v;

   }

}

int main(){
    int arr[] = {67,5,85,556,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,size);
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
