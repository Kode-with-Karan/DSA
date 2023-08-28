#include<iostream>
using namespace std;

int BinarySearch(int arr[],int start, int end, int key){

    if(start > end){
        return false;
    }

    int mid = start + ((end-start)/2);

    if(arr[mid] == key){
        return mid+1;
    }

    if (arr[mid]>key){
        return BinarySearch(arr,start, mid-1,key);
    }else{
        return BinarySearch(arr,mid+1, end,key);
    }
    
    
}

int main(){
    int ans, size = 4, key = 5, arr[5] = {1,2,3,4,5};


    ans = BinarySearch(arr,0, size, key);

    if (ans==0){
        cout << "Element not found"<< endl;
    }else{
        cout << "Element found at "<< ans << "th" << endl;
    }
}