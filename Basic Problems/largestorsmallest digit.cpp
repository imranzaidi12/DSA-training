#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>> n;

    int largest=0;
    int smallest=9;
    while(n>0){
        int digit = n %10;

        if(digit > largest )
        largest = digit;
        if(digit < smallest)
        smallest = digit;
        n=n/10;
    }
    cout<<"Largest digit ="<< largest << endl;
    cout<<"Smallest digit ="<< smallest << endl;
    return 0;
}