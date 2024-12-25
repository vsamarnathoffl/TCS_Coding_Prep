#include <iostream>
#include <vector>
using namespace std;

int singleAmongDoubles(vector<int>& arr){
    int XOR = 0;
    for(auto num : arr){
        XOR = XOR^num;
    }
    return XOR;
}

int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int singleEle = singleAmongDoubles(arr);
    cout<<singleEle;
    return 0;
}