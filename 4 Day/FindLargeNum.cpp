// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int arr[5],a,b,fix;
    
    cout<<"Please Enter Random Numbers:- ";
    
    for(a = 0; a<5; a++){
        cin>>arr[a];
    }
    
    cout<<"hello"<<endl;
    
    fix = arr[0];
    
    for(b = 0; b<5; b++){
        if(fix < arr[b]){
            fix = arr[b];
        }
    }
    
    cout<<fix;
    
    return 0;
}