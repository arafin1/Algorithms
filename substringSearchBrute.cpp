#include<iostream>
using namespace std;

int index(string text,string pattern){
    int textL = text.length();
    int patternL = pattern.length();

    for(int i =0; i<textL - patternL;i++){
        int j;
        for(j = 0 ; j<patternL;j++){

            if(text[i+j] != pattern[j]){
                break;
            }


        }
        if( j == patternL) {
            return i;
        }
    }
}
int main(){
cout<<index("my name is aa","name");
return 0;
}
