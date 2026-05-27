#include<iostream>
#include<vector>
#include<climits>
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
void uniqueval(int arr[],int size){
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout << arr[i] << " ";
        }
    }
}

// function to print intersection of 2 array
void intersectionarr(int arr[], int arr2[], int size1, int size2){
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr[i]==arr2[j]){
                cout << arr[i] << " ";
            }
        }
    }
}

// Maximum subarray sum
int maxsum(int arr[], int size){
    int MaxSum=INT_MIN;
    for(int st=0;st<size;st++){
        int CurrSum=0;
        for(int end=st; end<size;end++){
            CurrSum+=arr[end];
            MaxSum=max(MaxSum, CurrSum);
        }
    }
    return MaxSum;
}
//Kadan's Algorithm 
int kadan(int arr[], int size){
    int CurrSum=0;
    int MaxSum=INT_MIN;
    for(int i=0;i<size;i++){
        CurrSum+=arr[i];
        MaxSum=max(MaxSum, CurrSum);
        if(CurrSum<0){
            CurrSum=0;
        }
    }
    return MaxSum;
}

// Pair Sum Brute force 
vector<int> pairsum(vector<int> arr,int target){
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==target){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                return ans;
            }
        }
    }
    return ans;
}

// Pair Sum logical
vector<int> pairSum(vector<int> arr, int target){
    vector<int> ans(2,0);
    int i=0;
    int j=arr.size()-1;
    while(i<j){
        if(arr[i]+arr[j]<target){
            i++;
        }
        else if(arr[i]+arr[j]>target){
            j--;
        }
        else{
            ans[0]=arr[i];
            ans[1]=arr[j];
            return ans;
        }
    }
    return ans;
}

// Majority element brute force 1
int majorelement(int arr[],int size){
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>size/2){
            return arr[i];
        }
    }
}

// Majority element brute force 2 (Only for sorted array)

// Moore's voting algorithm 




int main(){
    int arr[]={1,2,3,1,2,5,1,6,1,7,1,8,1};
    // vector<int> arr={1,2,2,4,5,7,8};
    // int arr2[]={5,3,8,9,2,3,6};
    int size=sizeof(arr)/sizeof(int);
    int target=7;
    // cout << linearsearch(arr,size,target) << endl;
    // for(int i=0;i<size;i++){
    //     cout << arr[i] << " "; 
    // }
    // cout << endl;
    // reversearr(arr,size);
    // swapmaxmin(arr,size);
    // for(int i=0;i<size;i++){
    //     cout << arr[i] << " "; 
    // }
    // sumandproduct(arr,size);
    // uniqueval(arr,size);
    // intersectionarr(arr, arr2, size, size);
    // cout << maxsum(arr, size);
    // cout<<kadan(arr, size);
    // vector<int> ans=pairSum(arr,target);
    // for(int i=0;i<2;i++){
    //     cout<<ans[i]<<" ";
    // }
    cout << majorelement(arr,size);
}
