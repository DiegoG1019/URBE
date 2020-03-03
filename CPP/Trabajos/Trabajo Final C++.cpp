#include <iostream>
using namespace std;

void piramide(unsigned int x){
	unsigned int y,xa = 0;
	unsigned int z,w,v = 0;
	unsigned int es = 0;
	for(x;x>0;x--){
		w = 0;
		v = 1;
		for(unsigned int xa=x;xa>0;xa--){
			cout << " ";
		}
		for(z=y*2+1;z>0;z--){
			if(z<v){
				w--;
				cout << w;
			}else{
				w++;
				cout << w;
			};
			v++;
		};
		cout << endl;
		y++;
	};
}

int main(){
	signed int input;
	while(true){
		cout << "Inserte un numero entero mayor a 0" << endl;
		cin >> input;
		if(input<1){
			cout << "Entrada invalida, por favor vuelva a intentarlo" << endl;
		}else{
			break;
		}
	}
	piramide(input);
	system("PAUSE");
	return 0;
}

/* BORRA ESTO SI SE LO VAS A ENSEÑAR AL PROFE

el input es un signed int (pueden hacerlo long si quieren poder tener numeros mas largos, pero la ventana no tendra espacio y el programa tardara mucho con numeros altos) porque si fuese unsigned, introducir un numero negativo provocara un overflow
un fenomeno que causa que si el numero sobrepasa su limite inferior o superior, el numero da la vuelta y pasa a ser el numero del otro extremo

z = y*2+1
y es el indice de la fila, y cada fila tiene una cantidad de numeros igual a y*2+1
z es la cantidad de numeros a imprimir

Primero definimos y,xa = 0;

y nos sirve de guia
xa es una copia de x que podemos cambiar, la necesitamos para imprimir los espacios que organizan la piramide
v es la guia de z, para bajar los numeros al otro lado de la piramide

w es el numero a imprimir como tal

xa=x porque x es la cantidad de filas que nos faltan

cuando z<v se le resta a w porque esto significa que estamos del otro lado de la piramide y los numeros deben bajar, de resto, no
al final del ciclo se le suma a v, para que guie a z

*/
