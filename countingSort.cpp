#include <iostream>
using namespace std;

void counting_sort (int array[], int range,int sizes){

    int values[range + 1] ;

	for(int i = 0;i<range;i++){
		values[i] = 0;
	}


	for(int i = 0;i<sizes;i++){
		values[array[i]]++;
	}


	int arr[sizes];
	int k = 0;
	for(int i = 0; i<=range;i++){
		for(int j = 0; j<values[i];j++){
			arr[k++] = i;
		}
	}
	array = arr;

    for(int i = 0; i<sizes;i++){
        cout<<array[i]<<" ";
    }

}

int main(){

    int a[] = {1,1,1,5,0,6,7,6};
    int size = sizeof(a)/sizeof(a[0]);
    //FOR SIMPLICITY DATA RANGE [0-9]
    counting_sort(a,9,size);

}
