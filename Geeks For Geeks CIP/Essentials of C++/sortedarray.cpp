#include<iostream>
using namespace std;

bool checkifsorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    cout << "Enter size of array" << endl;
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    if(checkifsorted(arr,n)==true){
        cout << "The array is sorted" << endl;
    }
    else{ 
        cout << "The array is not sorted" << endl;

    }
}