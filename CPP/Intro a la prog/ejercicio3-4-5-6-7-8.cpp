//3.	Escribir un algoritmo que lea cuatro números e indique cual es el mayor.
//4.	Deducir si un número es positivo o negativo.
//5.	Dados tres números diferentes, deducir cual es el central.
//6.	Lea un numero e indique si es o no mayor de 100.
//7.	Desarrollar un algoritmo para ordenar 3 números en forma ascendente y Descendente.
//8.	Dados tres números determinar si la suma de una pareja de ellos es igual al tercer número, si se cumple esta condición escribir "Iguales" en caso contrario, escribir "Distintos".

#include <iostream>
using namespace std;

///Declaration field
//variables
int varam;
signed int nums[0];
//functions
void checkeq();
bool sort(int a, int b);
///end

bool sort(int a, int b){
	return a<b;
};

void checkeq(){
	int a; int b; int c;
	for(a=0; a<=varam; a++){
		for(b=0; b<=varam; b++){
			if(not(a==b) && not(a==c) && not(b==c)){
				for(c=0; c<=varam; c++){
					if(nums[a]+nums[b]==nums[c]){
						cout << "Iguales: " << nums[a] << "+" << nums[b] << "=" << nums[c] << endl;
						return;
					};
				};
			};
		};
	};
	cout << "Diferentes";
	return;
};

int main(){
	cout << "Advertencia, listas muy altas pueden causar que el programa se ralentice!" << endl;
	cout << "Introduzca cuantos numeros desea ordenar" << endl;
	cin >> varam;varam--;
	if(varam == 0){return 1;};
	nums[varam];
	cout << "Introduzca " << varam+1 << " numeros en cualquier orden dado." << endl;
	int a; int b;
	for(a=0; a<varam+1; a++){
		cout << "Inserte el numero " << a+1 << " de la lista." << endl;
		cin >> nums[a];
	}
	
	//Now begins the actual piece of work.
	//Sorting the table.
	for(a=0; a<=varam; a++){
		for(b=0; b<=varam; b++){
			if((not a==b) && (sort(nums[a], nums[b]))){
				int loca = nums[a];
				int locb = nums[b];
				nums[a] = locb;
				nums[b] = loca;
				b=0;
			};
		};
	};
	for(a=0;a<=varam;a++){
		 for(b=0;b<=varam-a;b++){
			 if(sort(nums[b],nums[b+1])){
				 int temp=nums[b];
				 nums[b]=nums[b+1];
				 nums[b+1]=temp;
			 };
		 };
	 };	
	//Ends the sorting
	
	//Check central numbers
	if(varam > 1){
		if(not (varam%2==0)){
			int c = varam/2;
			cout << "Numeros centrales:" << endl << "	" << nums[c] << endl << "	" << nums[c+1] << endl;
		}else{
			cout << "Numero central: " << endl << "	" << nums[varam/2] << endl;
		};
	};
	//Checks the number lists
	cout << "Lista de numeros ascendente: " << endl;
	for(a=0; a<=varam; a++){
		cout << "	" << nums[a] << endl;
	};
	cout << "Lista de numeros descendente: " << endl;
	for(a=varam; a>=0; a--){
		cout << "	" << nums[a] << endl;
	};
	//Checks negative and numbers beyond 100
	cout << "Lista de numeros mayores a 100:" << endl;
	for(a=0; a<=varam; a++){
		if(nums[a]>100){
			cout << "	" << nums[a] << endl;
		};
	};
	cout << "Lista de numeros negativos:" << endl;
	for(a=0; a<=varam; a++){
		if(nums[a]<0){
			cout <<"	"<<nums[a]<<endl;
		};
	};
	checkeq();
};
