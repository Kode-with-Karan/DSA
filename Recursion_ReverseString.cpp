#include<iostream>
using namespace std;

void swapch(char& a, char& b){
    char temp = a;
    a = b;
    b = temp;
}

void Palandrome(string& str,int start, int end){

    if(start > end){
        return ;
    }

    swap(str[start], str[end]);
    start++;
    end--;

    return Palandrome(str,start, end);

    
}

int main(){
    int ans, size = 5, key = 5;
    string str = "karan";


    Palandrome(str, 0, str.length()-1);

    cout << str << endl;
}