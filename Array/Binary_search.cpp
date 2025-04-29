#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter Array Size:";
    int n;
    cin>> n;
    int arr[n];
    cout << "Enter array Element:";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int search_element;
    cout << "Enter searching element:";
    cin >> search_element;
    int LB=0,UB = n-1, mid = 0,counter = 0;
    bool flag=false;
    while(LB<=UB){
        mid =LB+(UB-LB)/2;
        if(arr[mid]==search_element){
            flag = true;
            counter = mid;
            break;
        }else if(arr[mid]<search_element){
            LB=mid + 1;
        }else{
        UB= mid - 1;
        }
    }
    if(flag){
        cout << "Element Found and Index number is:" << counter << endl;
    }else{
    cout << "Element is not present in the array." << endl;
    }


}
