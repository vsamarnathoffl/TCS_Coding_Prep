#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> insertionOfTwoArrays(vector<int>& arr1, vector<int>& arr2){
    unordered_set<int> uset(arr1.begin(),arr1.end());
    
    unordered_set<int> common;
    for(auto& e:arr2){
        if(uset.count(e)>0){
            common.insert(e);
        }
    }
    
    vector<int> result(common.begin(),common.end());
    return result;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr1(n);
    for(int i=0;i<arr1.size();i++){
        cin>>arr1[i];
    }
    
    int m;
    cin>>m;
    vector<int> arr2(m);
    for(int i=0;i<arr2.size();i++){
        cin>>arr2[i];
    }
    
    vector<int> arrResult=insertionOfTwoArrays(arr1,arr2);
    for(auto& e:arrResult){
        cout<<e<<" ";
    }
    return 0;
}