#include <iostream>
using namespace std;

int main() {
    cout<<"Please Choose a Option:-"<<endl;
    cout<<"Addition:- 1"<<endl;
    cout<<"Subtraction:- 2"<<endl;
    cout<<"Multiplication:- 3"<<endl;
    cout<<"Division:- 4"<<endl;
    
    int oper,first,second, output;
    
    cout<<"Enter ex. 1, 2, 3, 4:- ";
    cin>>oper;
    
    if(oper >= 5){
        cout<<"Not Valid";
    }else if(oper <= 0){
        cout<<"Not Valid";
    }else{
        cout<<"Please Enter Two Values:- "<<endl;
        cout<<"First:- ";
        cin>>first;
        cout<<"Second:- ";
        cin>>second;
        
        if(oper == 1){
            output = first + second;
            cout<<"First:- "<<first<<endl;
            cout<<"Second:- "<<second<<endl;
            
            cout<<output;
        }else if(oper == 2){
            output = first - second;
            cout<<"First:- "<<first<<endl;
            cout<<"Second:- "<<second<<endl;
            
            cout<<output;
        }else if(oper == 3){
            output = first * second;
            cout<<"First:- "<<first<<endl;
            cout<<"Second:- "<<second<<endl;
            
            cout<<output;
        }else if(oper == 4){
            output = first / second;
            cout<<"First:- "<<first<<endl;
            cout<<"Second:- "<<second<<endl;
            
            cout<<output;
        }
        else{
            cout<<"Please Enter Valid Detail:- ";
        }    
    }
    
}