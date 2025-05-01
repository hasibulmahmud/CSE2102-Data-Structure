#include<bits/stdc++.h>
using namespace std;
int main(){
     cout << "Enter Array Size:";
    int n;
    cin>> n;
    int arr[n];
    cout << "Enter array Element:";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int index=0;
    cout << "Enter index number where you insertion a number:";
    cin >> index;
    int  number=0;
    cout << "Enter number:";
    cin >> number;
    int k =n;
    while(k>=index){
            if(k==index){
                arr[k]=number;
                n++;
            }else{

            arr[k]=arr[k-1];
            }
            k--;

    }
     cout << "Array after insertion:" <<endl;
     for(int i=0;i<n;i++){
        cout<< arr[i] << "\t";
    }
    cout << endl;
    int delete_index=0;
     cout << "Enter index number for Delete:";
     cin >> delete_index;
     for(int i=delete_index;i<n;i++){
        arr[i]=arr[i+1];
     }
     n--;
      cout << "Array after deletion:"<<endl;
      for(int i=0;i<n-1;i++){
        cout<< arr[i] << "\t";
    }


}
