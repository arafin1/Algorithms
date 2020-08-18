
#include <iostream>
#include <string>
using namespace std;



void printArrStr(string a,int n)
{
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
    printf("\n");
}


void permutation(string prefix,string s){
    int N = s.length();
    if(N == 0){
        cout<<prefix<<" "<<endl;
    }else{
        for(int i = 0; i<N;i++){
            permutation(prefix + s[i], s.substr (0,i) + s.substr (i+1,N));
        }
    }
}
void permute(string s){
    permutation(" ",s);
}

int main()
{
    
    permute("12345");
    return 0;
}
