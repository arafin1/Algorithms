#include<iostream>
#include<algorithm>
using namespace std;

void bubbleSort( int list[],int n){

   for(int i = 0; i<n-1;i++){

      bool swapped = false;

      for(int j = 0; j<n-1;j++){

         if (list[j] > list[j+1]){
            swap( list[j], list[j+1]);
            swapped = true;
         }
      }

      if(!swapped){
        break;
      }
   }

}

int main(){
    int arr[] = {67,5,85,556,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

