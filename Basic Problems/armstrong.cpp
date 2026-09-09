#include<iostream>
using namespace std;
int main(){
    int n,original,remainder,sum=0;
    
    cout<<"Enter a number:";
    cin >> n;
    original=n;
    while(n != 0){
        remainder=n%10;
        sum=sum + (remainder*remainder*remainder);
        n=n/10;
    }
    if(sum == original )
    cout<<"Armstrong number";
    else
    cout <<"Not a armstrong number";
    return 0;
}