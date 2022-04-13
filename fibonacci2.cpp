#include<iostream>
using namespace std;
 
int fib(int nilai)
{
    if (nilai <= 1)
        return nilai;
    else
    	return fib(nilai-1) + fib(nilai-2);
}
 
int main () {
	
	int input_n;
	cout<<"Bilangan Fibonacci : ";
	cin>>input_n;
	
	cout<<"Hasil : ";
    cout << fib(input_n);
    return 0;
}