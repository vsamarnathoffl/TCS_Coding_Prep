#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

//Iterative Code
// int binarySearch(vector<int>& arr,int target){
//     int low=0;
//     int high=arr.size()-1;
//     while(low<=high){
//         int mid = low+(high-low)/2;
//         if(arr[mid]==target){
//             return mid;
//         }else if(target<arr[mid]){
//             high=mid-1;
//         }else{
//             low=mid+1;
//         }
//     }
//     return -1;
// }

//Recursive Code
int binarySearch(vector<int>& arr,int low,int high,int target){
    if(low>high){
        return -1;
    }
    int mid = low + (high-low)/2;
    if(arr[mid]==target){
        return mid;
    }else if(target<arr[mid]){
        return binarySearch(arr,low,mid-1,target);
    }else{
        return binarySearch(arr,mid+1,high,target);
    }
}
int main(){
    string input;
    getline(cin,input);
    stringstream ss(input);
    
    vector<int>arr;
    int num;
    
    while(ss>>num){
        arr.push_back(num);
        if(ss.peek()==',') ss.ignore();
    }
    int target;
    cin>>target;
    //iterative code
    //int result = binarySearch(arr,target);
    
    //recursive code
    int result = binarySearch(arr,0,arr.size()-1,target);
    cout<<result;
    return 0;
}