#include<iostream>
using namespace std;

int maximum(int arr[], int n){
    int max=arr[0];
    for (int i=0;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    
    return max;
}
int main(){
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array" << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "The maximum of all elements of the array is " << maximum(arr,n);
}