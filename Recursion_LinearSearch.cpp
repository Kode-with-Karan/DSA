#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key){
    if(size == 0){
        return false;
    }

    if(arr[0] == key){
        return size;
    }
    
    return linearSearch(arr+1,size-1,key);
}

int main(){
    int ans, size = 5, key = 1, arr[5] = {1,2,3,4,5};


    ans = linearSearch(arr, size, key);

    if (ans==0){
        cout << "Element not found"<< endl;
    }else{
        cout << "Element found at "<< size-ans+1 << "th" << endl;
    }
}