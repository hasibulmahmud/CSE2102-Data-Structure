#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10] ={2,4,5,6,7,8,9,1,3,10};
    int LOC = 1,MAX = arr[0];
    for(int i =0;i<10 ; i++){
        if(MAX<arr[i]){
            MAX = arr[i];
            LOC = i;
        }

    }
    cout << "MAX=" << MAX << endl;
    cout << "Index Location = " << LOC << endl;

}
