#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter array size:";
    cin >> n;
    int arr[n];
    cout << "Enter array Element:";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int loc=0,k=0,number;
    cout << "Enter Choose Number:";
    cin >> number;
    while(k<n){
        if(arr[k]==number){
            loc=k;
        }
        k++;
    }
    if(loc==0){
        cout << "Number is Not in the array" << endl;
    }else{
    cout << "Number Location is:" << loc << endl;
    }
}
