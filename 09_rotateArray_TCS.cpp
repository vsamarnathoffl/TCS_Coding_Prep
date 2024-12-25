#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int>& arr,int start, int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main(){
    
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    k=k%arr.size();
    int start = 0;
    int end = arr.size()-1;
    rotateArray(arr,start,end);
    rotateArray(arr,start,k-1);
    rotateArray(arr,k,end);
    cout<<"[";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
        if(i<arr.size()-1){
            cout<<",";
        }
    }
    cout<<"]";
    return 0;
}