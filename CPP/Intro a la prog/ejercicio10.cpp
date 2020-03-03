#include <iostream>
#include <stdio.h>
using namespace std;
//10.	Determinar el precio de un pasaje en ferrocarril, conociendo la distancia a recorrer y sabiendo que si el número de días
//de estancia es superior a siete y la distancia superior a 800 kilómetros, el pasaje tiene una reducción del 30%.
//El precio por kilómetro es de 0,75 Bs.

int day;
float dis;
double price;

int main(){
	//Receive the data
	cout << "Inserte sus dias de estancia" << endl;
	cin  >> day;
	cout << "Inserte la distancia de su recorrido en kilometros" << endl;
	cin  >> dis;
	//end
	price = dis*0.75;
	if(dis>800 && day > 7){
		cout << "Su boleto es candidato para un descuento. Se le sera aplicado de inmediato." << endl;
		price = price * (1.00-0.30);
	}
	cout << "El precio de su boleto es " << price << "Bs.";
}
