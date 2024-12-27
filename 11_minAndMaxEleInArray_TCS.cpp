#include <iostream>
#include <vector>
using namespace std;

vector<int> minAndMax(vector<int>& arr){
    int min=arr[0];
    int max=arr[0];
    for(auto& e:arr){
        if(e>max){
            max=e;
        }else if(e<min){
            min=e;
        }
    }
    return {min,max};
}

int main(){
    
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    vector<int> resultArr = minAndMax(arr);
    for(auto& e: resultArr){
        cout<<e<<" ";
    }
    return 0;
}