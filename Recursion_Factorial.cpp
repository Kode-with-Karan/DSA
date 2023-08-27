#include<iostream>
using namespace std;

int factorial(int num){

    //base case
    if (num == 0){
        cout<< " = ";
        return 1;
    }

    // This statement for printing the pattren
    // !5
    // 5 x 4 x 3 x 2 x 1 = 120

    if (num>1){
        cout << num <<" x ";
    }else{
        cout << num ;
    }

    // recursive relation
    int fact_num = num*factorial(num-1);
}

int main(){
    
    int num, ans;

    cout << "Enter the number:- ";
    cin >> num;
    
    cout << "Factorial of the "<< num << endl;
    ans = factorial(num);

    cout << ans<< endl;


}
