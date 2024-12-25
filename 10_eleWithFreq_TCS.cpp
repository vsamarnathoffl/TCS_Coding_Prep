#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<int,int> eleWithFreq(vector<int>& arr){
    unordered_map<int,int> umapFunc;
    for(auto& it:arr){
        umapFunc[it]++;
    }
    return umapFunc;
}

int main(){
    
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    unordered_map<int,int> umap = eleWithFreq(arr);
    for(auto& it: umap){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    return 0;
}