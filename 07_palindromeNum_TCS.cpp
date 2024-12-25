#include <iostream>
using namespace std;

bool isPalindrome(int n){
    int reverse = 0;
    int givenNumber = n;
    while(n>0){
        int rem = n%10;
        reverse = reverse*10+rem;
        n=n/10;
    }
    if(reverse==givenNumber){
        return true;
    }else{
        return false;
    }
    
}

int main(){
    int n;
    cin>>n;
    bool resultOfPalin = isPalindrome(n);
    if(resultOfPalin){
        cout<<"true";
    }else{
        cout<<"false";
    }
}