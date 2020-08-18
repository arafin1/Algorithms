#include<iostream>
using namespace std;

int pos = 1;
int capacity = 10;
int arr[10];

void HeapInsert(int value){

    if(pos == capacity){
        return;
    }else{
        arr[pos++] = value;

        int child = pos - 1;
        int parent = child/2;
        while(arr[parent] < arr[child] && parent >0){
            int tmp = arr[parent];
            arr[parent] =  arr[child];
            arr[child] = tmp;

            child = parent;
            parent = child/2;
        }

    }


}

void print(){
    for(int i =1;i<pos;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

HeapInsert(12);
HeapInsert(7);
HeapInsert(6);
HeapInsert(10);
HeapInsert(8);
HeapInsert(20);
print();

return 0;
}
