#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& arr){
    int count=0;
    int candidate;
    for(int i=0;i<arr.size();i++){
        if(count==0){
            candidate = arr[i];
            count = 1;
        }
        else if(arr[i]==candidate){
            count++;
        }else{
            count--;
        }
    }
    return candidate;
}

int main(){
    
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    
    int majority = majorityElement(arr);
    cout<<majority;
    return 0;
}