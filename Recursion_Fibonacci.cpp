#include<iostream>
using namespace std;

int fibonacci(int num){

    //base case
    if (num == 1){
        return 0;
    }
    if (num == 2){
        return 1;
    }

    // recursive relation
    return fibonacci(num-1)+fibonacci(num-2); 

}

int main(){
    
    int num, ans;

    cout << "Enter the number:- ";
    cin >> num;

    cout << "Fibonacci of the "<< num << endl;

    // This statement for printing the pattren such as 5
    // 0 1 1 2 3
    for(int i = 1; i<num; i++){
        ans = fibonacci(i); 
        cout << ans<<" ";
    }




}