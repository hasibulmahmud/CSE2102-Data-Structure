#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout << "Enter Array Size:";
    cin>>n;
    int arr[n];
    ///Insert Value.
    for(int i=0;i<n;i++){
       cout <<"Enter Value index " << i  << " :";
       cin >> arr[i];
    }
    ///Array Traversing.
    cout << "Array is:";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
