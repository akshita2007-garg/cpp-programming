#include<iostream>
using namespace std;

// Linear search algorithm 
int linearsearch(int arr[], int size, int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

// Reversing a array
void reversearr(int arr[],int size){
    for(int i=0;i<size/2;i++){
        swap(arr[i],arr[size-1-i]);
    }
}

// function to calculate sum and product of all the numbers in the array
void sumandproduct(int arr[],int size){
    int sum=0;
    int pro=1;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        pro*=arr[i];
    }
    cout << "sum of the array is " << sum << endl;
    cout << "product of the array is " << pro << endl;
}

// function to swap max and min numbers of an array
void swapmaxmin(int arr[],int size){
    int min=0;
    int max=0;
    for(int i=0;i<size;i++){
        if(arr[i]<arr[min]){
            min=i;
        }
        if(arr[i]>arr[max]){
            max=i;
        }
    }
    swap(arr[min],arr[max]);

}

// function to print all the unique values in an array


// function to print intersection of 2 array


int main(){
    int arr[]={4,2,7,8,1,2,5};
    int size=sizeof(arr)/sizeof(int);
    // int target=7;
    // cout << linearsearch(arr,size,target) << endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " "; 
    }
    cout << endl;
    // reversearr(arr,size);
    swapmaxmin(arr,size);
    for(int i=0;i<size;i++){
        cout << arr[i] << " "; 
    }
    // sumandproduct(arr,size);


}
