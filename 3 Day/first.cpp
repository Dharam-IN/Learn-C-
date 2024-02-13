#include <iostream>
using namespace std;

int main(){
    int a,b,c=0;

    a = 2587;

    while(a > 0){
        b = a%10;
        c = c + b;

        a = a/10;
    }

    cout<<c;
}

