#include <iostream>
#include <vector>
using namespace std;

void linearSearch(vector<int>& arr, int x){
    int i=0;
    for(i=0;i<arr.size();i++){
        if(arr[i]==x){
            cout<<"Element "<<x<<" is present at index "<<i;
            return;
        }
    }
    if(i==arr.size()){
        cout<<"Element "<<x<<" is not found";
    }
}

int main(){
    
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    
    int x;
    cin>>x;
    
    linearSearch(arr,x);
    return 0;
}

