#include <iostream>
using namespace std;

float kgunit = 0.453592;
float inwgh;

int main(){
	cout << "Inserte su peso en libras." << endl;
	cin >> inwgh;
	cout << "Su peso en kilogramos es: " << inwgh*kgunit;
}
