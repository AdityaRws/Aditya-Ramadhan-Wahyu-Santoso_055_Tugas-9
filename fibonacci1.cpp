#include <iostream>
using namespace std;

int main(){

    int nilai, fib_n, fib_n1=1, fib_n2=0;

    cout<<"Bilangan Fibonacci : ";
	cin>>nilai;

    for (int looping=1; looping<nilai; looping++){
        fib_n=fib_n1+fib_n2;
        fib_n2=fib_n1;
        fib_n1=fib_n;
    }
    cout<<"Hasil : ";
    cout<<fib_n;
    
    return 0;
}