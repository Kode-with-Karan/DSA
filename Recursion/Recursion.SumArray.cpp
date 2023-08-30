#include<iostream>
using namespace std;

int sumArr(int arr[], int size){
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }
    
    return arr[0]+sumArr(arr+1,size-1);
}

int main(){
    int ans, size = 5, arr[5] = {1,2,3,4,5};

    ans = sumArr(arr, size);

    cout << "Sum of the array is "<< ans << endl;
}