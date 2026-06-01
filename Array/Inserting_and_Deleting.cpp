#include<bits/stdc++.h>
using namespace std;
int Insertion_in_array(int arr[],int &n,int index,int item){
    int temp = n;
    while(index<temp){
        arr[temp] = arr[temp-1];
        temp--;
    }
    arr[temp] = item;
    return n++;
}
int Deleting_in_array(int arr[],int &n,int index){
    while(n>index){
        arr[index]=arr[index+1];
        index++;
    }
    return n--;
}
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
    while(1)
    {
        int select;
        cout <<"1.Inserting" << endl;
        cout <<"2.Deleting" << endl;
        cout <<"Choose any one:";
        cin>> select;
        if(select==1){
             int index,Item;
    cout << "Index Number and item For inserting:" ;
    cin >> index >> Item;
   Insertion_in_array(arr,n,index,Item);
        }
        else if(select==2){
            int index;
        cout << "Index Number and item For inserting:" ;
        cin >> index;
              Deleting_in_array(arr,n,index);
        }else{
        cout << "Now Work same array" <<endl;
        }
       for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    break;
    }

}
