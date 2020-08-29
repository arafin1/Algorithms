#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;



string LongestPrefix(string s1,string s2){
    int cLength = min(s1.length(),s2.length());

    for(int i=0;i<cLength;i++){
        if(s1[i] != s2[i]){
            return s1.substr(0,i);
        }
    }

    return s1.substr(0,cLength);
}

string LongestRepeated(string s1){
    int cLength = s1.length();

    string suff[cLength];
    for(int i = 0; i<cLength;i++){
        suff[i] = s1.substr(i,cLength);
    }
    for(int i =0;i<cLength;i++){
        cout<<suff[i]<<endl;
    }
    cout<<"++++++++"<<endl;
    sort(suff,suff+cLength);
     for(int i =0;i<cLength;i++){
        cout<<suff[i]<<endl;
    }
    cout<<"++++++++"<<endl;
    string longestSub = " ";

    for(int i = 0; i<cLength - 1;i++){
        string temp = LongestPrefix(suff[i],suff[i+1]);

        if(temp.length() > longestSub.length()){
            longestSub = temp;
        }
    }

    return longestSub;
}

int main(){

cout<<LongestRepeated("hello808888hello");

return 0;
}
