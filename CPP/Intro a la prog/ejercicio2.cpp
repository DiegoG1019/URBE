#include <iostream>
using namespace std;

char name[15]; float time; float salary;

int main(){
	cout << "Inserte su nombre." << endl;
	cin >> name;
	cout << "Inserte su tiempo de trabajo." << endl;
	cin >> time; 
	cout << "Inserte su salario." << endl;
	cin >> salary;
	cout << "El salario neto del empleado " << name << " es de " << (time*salary)*(90.0/100.0) << "Bs.";
	return 0;
}
