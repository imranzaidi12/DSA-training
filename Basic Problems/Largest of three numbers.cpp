#include<iostream>

using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers:" << endl;
    cin >> a >> b >> c;

    if(a>=b && a>=c){
        cout<<"Largest is:"<< a;
    }
    else if(b>=a && b>=c){
        cout<<"Largest is:"<< b;
    }
    else if(c>=a && c>=b){
        cout<<"Largest is:"<< c;

    }
    return 0;
}