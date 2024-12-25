#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& arr){
    int left=1;
    int right=1;
    while(right<arr.size()){
        if(arr[right]!=arr[right-1]){
            arr[left]=arr[right];
            left++;
            right++;
        }else{
            right++;
        }
    }
    return left;
}

int main(){
    
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int numOfUniques = removeDuplicates(arr);
    cout<<numOfUniques;
    cout<<" [";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
        if(i<arr.size()-1){
            cout<<",";
        }
    }
    cout<<"]";
    return 0;
}