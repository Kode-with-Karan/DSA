#include<iostream>
using namespace std;


bool Palandrome(string str,int start, int end){

    if(start > end){
        return true;
    }

    if(str[start] != str[end]){
        return false;
    }else{
        return Palandrome(str,start+1, end-1);
    }

}

int main(){
    int size = 5, key = 5;
    bool isPalandrome;
    string str = "karan";


    isPalandrome = Palandrome(str, 0, str.length()-1);

    if (isPalandrome){
        cout << "This is a Palandrome String" << endl;
    }else{
        cout << "This is not a Palandrome String" << endl;
    }
    
}