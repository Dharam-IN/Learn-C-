#include <iostream>
using namespace std;

int main(){
    int arr[5];
    
    cout<<"Please Enter 2 multiple times:- ";
    
    for(int add = 0; add<5; add++){
        cin>>arr[add];
    }
    
    cout<<"in this array 2 have ";
    
    int val = 0;
    for(int check = 0; check<5; check++){
        if(2 == arr[check]){
            val = val + 1;
        }
    }
    
    cout<<val<<" times";
    
}


 