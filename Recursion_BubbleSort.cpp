#include<iostream>
using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int* arr, int size){
    if(size == 0 || size == 1){
        return;
    }

    for (int i = 0; i<size-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    
    bubbleSort(arr,size-1);
}

int main(){
    int ans, size = 5, arr[5] = {4, 3, 7, 9, 1};

    cout << "UnSorted array"<< endl;

    for (int i = 0; i<size; i++){
        cout<< arr[i] << " ";
    }
    cout << endl;
    
    bubbleSort(arr, size);

    cout << "Sorted array"<< endl;

    for (int i = 0; i<size; i++){
        cout<< arr[i] << " ";
    }
}