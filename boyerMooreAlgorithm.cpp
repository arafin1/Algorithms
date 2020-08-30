#include<iostream>
#include <string>
#include <map>
using namespace std;


class boyreMoore{
private:
    string text;
    string pattern;
    std::map<char,int>badChar;
public:

    boyreMoore(string text, string pattern){
        this->text = text;
        this->pattern = pattern;


    }

    void shiftTable(){
        int ppLength = this ->pattern.length();

        for(int i =0; i<ppLength;i++){
            char character = this->pattern[i];
            int maxShift = max(1,ppLength - i -1);
            this->badChar.insert( {character,maxShift});


        }
    }
    int search(){
        int pLength = this->pattern.length();
        int tLength = this->text.length() + 1;
        int skips;

        for(int i = 0; i<tLength - pLength; i+=skips){
            skips = 0;
            for(int j = pLength -1; j>=0;j--){
                if(pattern[j] != text[i+j] ){
                    if(this->badChar[text[i+j]]!= NULL){
                        skips = this->badChar[text[i+j]];
                        break;
                    }else{
                        skips = pLength;
                        break;
                    }

                }
            }
            if(skips == 0){
               return i;
            }
        }
        return tLength - 1;
    }

};


int main(){
    string text = "my name is Joe!";

    string pattern = "aaaaaa";

    boyreMoore boymoore(text, pattern);

    boymoore.shiftTable();
   cout<<boymoore.search();
}
