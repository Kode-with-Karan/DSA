#include<iostream>
using namespace std;

int sayDigit(int num){
    string numName[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    //base case
    if (num == 0){
        return 0;
    }

    // recursive relation
    int final_digit = sayDigit(num/10);
    cout << numName[num%10]<<" ";

    return final_digit;

}

int main(){
    
    int num, ans;

    cout << "Enter the number:- ";
    cin >> num;

    cout << "Digits are:-"<< endl;
    ans = sayDigit(num);

    cout << ans<< endl;


}