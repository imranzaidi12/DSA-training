#include<iostream>
using namespace std;
int main(){
int n,arr[50];
cout<<"Enter the number of elements: ";
cin>>n;
cout<<"Enter the elements of array: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}
cout<<"Sorted array: ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}