#include<iostream>
using namespace std;
int binary_search(int ar[],int n, int key){
    int a = 0;
    int z = n;
    
    while(a<n){
        int midterm = (a+z)/2;
        if(ar[midterm]==key){
            return midterm;
        }
        else if(key>ar[midterm]){
            a = a+1;

        }
        else if(key<ar[midterm]){
            z = z-1;
        }
    }return -1;

}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cout<<"Enter the element at "<<i<<"th index :";
        cin>>arr[i];
    }
    int elem;
    cout<<"Enter the element to be searched : ";
    cin>>elem;
    cout<<"Element found at "<<binary_search(arr,n,elem)<<"th index"<<endl;
    return 0;
}