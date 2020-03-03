#include <iostream>
using namespace std;

//variables
int price;
int amount;
double total;

int main(){
	cout << "Inserte el valor del articulo en cuestion." << endl;
	cin >> price;
	cout << "Inserte cuantos articulos desea comprar" << endl;
	cin >> amount;
	total = (price*amount)*(1.00-0.12);
	if(total>100){
		cout << "Debido a que su compra supera el valor de 100Bs., recibira un descuento del 7%" << endl;
		total = total*(1.00-0.07);
	};
	cout << "Valor total de su compra: " << total << "Bs.";
	return 1;
};
