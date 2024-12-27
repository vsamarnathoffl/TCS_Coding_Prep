#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int peakElement(vector<int>&arr){
    int n=arr.size();
    if(n==1) return 0;
    if(arr[0]>arr[1]) return 0;
    if(arr[n-1]>arr[n-2]) return n-1;
    
    int low=1;
    int high=n-2;
    
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return mid;
        }else if(arr[mid+1]>arr[mid]){
            low = mid+1;
        }else if(arr[mid+1]<arr[mid]){
            high = mid-1;
        }else{
            low = mid+1;
        }
        
    }
    return -1;
}

int main(){
    string input;
    getline(cin,input);
    stringstream ss(input);
    
    vector<int> arr;
    int num;
    while(ss>>num){
        arr.push_back(num);
        if(ss.peek()==',') ss.ignore();
    }
    int result = peakElement(arr);
    cout<<result;
    return 0;
}