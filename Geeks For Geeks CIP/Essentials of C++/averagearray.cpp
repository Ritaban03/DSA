#include<iostream>
using namespace std;
double sumof(int arr[],int n){
    int sum=0;
    double avg;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    avg = sum/double(n);
    return avg;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "The average of all elements of the array is " << sumof(arr,n);
}