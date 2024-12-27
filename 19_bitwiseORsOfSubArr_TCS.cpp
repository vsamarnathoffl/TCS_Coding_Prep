#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_set>
using namespace std;

int bitwiseORsOfSubArr(vector<int>& arr){
    unordered_set<int> result;
    unordered_set<int> current;
    
    for(int i=0;i<arr.size();i++){
        unordered_set<int> newCurrent;
        newCurrent.insert(arr[i]);
        
        for(auto& e:current){
            newCurrent.insert(e|arr[i]) ;   
        }
        
        current = newCurrent;
        
        for(auto& e:current){
            result.insert(e);
        }
    }
    return result.size();
}

int main(){
    string input;
    getline(cin,input);
    stringstream ss(input);
    
    vector<int> arr;
    int num;
    while(ss>>num){
        arr.push_back(num);
        if(ss.peek()==',') ss.ignore();
    }
    
    int result = bitwiseORsOfSubArr(arr);
    cout<<result;
    return 0;
}