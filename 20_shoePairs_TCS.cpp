#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int shoePairs(vector<string>& shoes){
    unordered_map <int,int> leftShoe;
    unordered_map <int,int> rightShoe;
    
    for(auto& shoe : shoes){
        int size = shoe[0]-'0';
        if(shoe[shoe.length()-1]=='L'){
            leftShoe[size]++;
        }else if(shoe[shoe.length()-1]=='R'){
            rightShoe[size]++;
        }
    }
    
    int pairs=0;
    for(auto& shoe: leftShoe){
        pairs+=min(leftShoe[shoe.first],rightShoe[shoe.first]);
    }
    return pairs;
}

int main(){
    
    int n;
    cin>>n;
    vector<string> shoes(n);
    for (int i=0;i<n;i++){
        cin>>shoes[i];
    }
    cout<<shoePairs(shoes);
    return 0;
}