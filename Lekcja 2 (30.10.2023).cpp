#include <iostream>
using namespace std;

int main(){
	 // Liczby całkowite - short,int,long,long long, unsigned short
	 short a, b;
	 cout << "Podaj a: ";
	 cin >> a;
	 cout << "Podaj b: ";
	 cin >>b;
	 
	 // Instrukcja warunkowa - if(warunek)
	 if (a>b){
	 	cout << a << " > " << b;
	 }
	 	//= operator przypisania 
	 	// == operator porównania
	else if (a==b){  // sparwdzamy kolejny warunek jeżeli powyżej się nie spełnia
	    cout << a << " == " << b;
	   } 
	 
	else { // w przeciwnym warunku jeżeli warunek się nie spełnia
	    cout << a << " < " << b;
	}
     
}