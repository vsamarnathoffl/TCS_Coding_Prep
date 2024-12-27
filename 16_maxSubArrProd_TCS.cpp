#include<iostream>
#include<climits>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

int maxSubArrProd(vector<int>& arr){
    int prefix=1;
    int suffix=1;
    int ansPrefix = INT_MIN;
    int ansSuffix = INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(prefix==0){
            prefix=1;
        }
        prefix = prefix*arr[i];
        ansPrefix = max(prefix,ansPrefix);
    }
    for(int i=arr.size()-1;i>=0;i--){
        if(suffix==0){
            suffix=1;
        }
         suffix = suffix*arr[i];
         ansSuffix = max(suffix,ansSuffix);
    }
    
    return max(ansPrefix,ansSuffix);
}

int main(){
    string input;
    getline(cin,input);
    stringstream ss(input);
    
    vector<int> arr;
    int num;
    
    while(ss>>num){
        arr.push_back(num);
        if(ss.peek()==','){
          ss.ignore();  
        } 
    }
    
    int ans = maxSubArrProd(arr);
    cout<<ans;
    return 0;
}	