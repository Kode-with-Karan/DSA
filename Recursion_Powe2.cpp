#include<iostream>
using namespace std;

int power2(int num){

    //base case
    if (num == 0){
        return 1;
    }

    // recursive relation
    return 2*power2(num-1);

}

int main(){
    
    int num, ans;

    cout << "Enter the number:- ";
    cin >> num;

    ans = power2(num);

    cout << "2 to the power of "<< num << " is " << ans << endl ;

}
