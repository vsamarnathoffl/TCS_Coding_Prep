#include <iostream>
#include <vector>
using namespace std;

int buyOrSell(vector<int>& arr){
    int buy_stock=arr[0];
    int max_profit = 0;
    
    for(int i=1;i<arr.size();i++){
        if(buy_stock>arr[i]){
            buy_stock=arr[i];
        }else{
            int current_profit = arr[i]-buy_stock;
            if(max_profit<current_profit){
                max_profit=current_profit;
            }
        }
    }
    return max_profit;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int max_profit = buyOrSell(arr);
    cout<<max_profit;
    return 0;
}