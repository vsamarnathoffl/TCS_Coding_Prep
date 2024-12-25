#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int>& arr){
    unordered_set<int> uset;
    for(int i=0;i<arr.size();i++){
        if(uset.count(arr[i])>0){
            return true;
        }else{
            uset.insert(arr[i]);   
        }
    }
    return false;
}

int main(){
    
    int n;
    cin>>n;
    
    vector<int> arr(n);
    
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    
    bool result = containsDuplicate(arr);
    if(result){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}