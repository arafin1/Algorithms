
#include<iostream>
#include<algorithm>
#include<vector>


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
void BucketSort(int A[], int l){
    vector<int>put;
    int B[l];
    for(int i = 0; i<l;i++){
        B[i] = 0;
    }


    for(int i = 0; i<l;i++){
        B[i] = A[i];
        cout<<B[i]<<endl;
    }

    for(int i = 0; i<l;i++){
        insertionSort(B,l);
        put.push_back(B[i]);
    }


   for(auto i:put){
    cout<<i<< " ";
   }

}


int main(){

int a[] = {1,6,2,3,4};
int n = sizeof(a)/sizeof(a[0]);

BucketSort(a,n);
return 0;
}
