#include <iostream>
#include<vector>
using namespace std;

int sumOfArray(vector<int>& arr){
    
    int sum=0;
    for(auto num: arr){
        sum+=num;
    }
    return sum;
}

int main(){
    
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    
    int sum = sumOfArray(arr);
    
    cout<<sum;
    return 0;
}