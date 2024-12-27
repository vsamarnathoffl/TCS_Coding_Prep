#include <iostream>
#include <vector>
using namespace std;

vector<int> productOfArrExceptSelf(vector<int>& arr){
    vector<int> left(arr.size());
    vector<int> right(arr.size());
    vector<int> resultArr(arr.size());
    left[0]=1;
    right[right.size()-1]=1;
    
    for(int i=1;i<left.size();i++){
        left[i]=left[i-1]*arr[i-1];
    }
    
    for(int j=right.size()-1-1;j>=0;j--){
        right[j]=right[j+1]*arr[j+1];
    }
    
    for(int i=0;i<arr.size();i++){
        resultArr[i]=(left[i]*right[i]);
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
    
    vector<int> resultArr = productOfArrExceptSelf(arr);
    
    for(auto& e:resultArr){
        cout<<e<<" ";
    }
    return 0;
}