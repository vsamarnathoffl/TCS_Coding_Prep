#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& arr,int target){
    vector<int> resultArr;
    unordered_map<int,int> umap;
    for(int i=0;i<arr.size();i++){
        int more = target-arr[i];
        if(umap.count(more)>0){
            resultArr.push_back(umap[more]);
            resultArr.push_back(i);
            return resultArr;
        }
        umap[arr[i]]=i;
    }
    return resultArr;
}

int main(){
    
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    vector<int> resultArr;
    resultArr = twoSum(arr,target);
    cout<<"[";
    for(int i=0;i<resultArr.size();i++){
        cout<<resultArr[i];
        if(i!=resultArr.size()-1){
            cout<<", ";
        }
    }
    cout<<"]";
    return 0;
}