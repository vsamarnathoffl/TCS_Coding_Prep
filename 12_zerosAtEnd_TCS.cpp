#include<iostream>
#include<vector>
using namespace std;

void zerosAtEnd(vector<int>& arr){
    int j=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1){
        return;
    }
    for(int i=j+1;i<arr.size();i++){
        if(arr[i]!=0){
            int temp = arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j++;
        }
    }
}

int main(){
    
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    
    zerosAtEnd(arr);
    for(auto& e: arr){
        cout<<e<<" ";
    }
    return 0;
}