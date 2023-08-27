#include<iostream>
using namespace std;

bool isShorted(int arr[], int size){

    //base case
    if (size == 0 || size == 1){
        return true;
    }


    // recursive relation
    if (arr[0]>arr[1]){
        return false;
    }else{
        bool ans = isShorted(arr+1, size-1);
        return ans;
    }
}

int main(){
    
    int size = 5, arr[5] = {1,2,3,4,5};
    bool ans;

    ans = isShorted(arr, size);

    if (ans == true){
        cout << "Array is shorted"<< endl;
    }else{
        cout << "Array is not shorted"<< endl;
    }


}