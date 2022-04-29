#include<iostream>
using namespace std;
void linomo(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
           cout<<"Element "<<k<<" found @ "<<i<<" th index";
        }
        
    }
}
int main(){
    int n;
    cout<<"ENter the length of the array: ";
    cin>>n;
    cout<<"Enter the elements aone by one with spaces: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    
    }
    int k;
    cout<<"Enter the element to be linearly searched: ";
    cin>>k;
    linomo(arr,n,k);
    return 0;
}