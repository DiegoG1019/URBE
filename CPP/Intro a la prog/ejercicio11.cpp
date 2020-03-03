#include <iostream>
using namespace std;
//11.	Diseñar un algoritmo en el que a partir de una fecha introducida por teclado con el formato DIA, MES, AÑO, se obtenga la
//fecha del día siguiente.
signed int change;
class date{
	private:
		signed int d,m,y;
		unsigned int months[13] = {0,31,0,31,30,31,30,31,31,30,31,30,31};
	public:
		date(signed int a, signed int b, signed int c){
			d = a;
			m = b;
			y = c;
			if(y%4==0){
				months[2]=29;
			}else{
				months[2]=28;
			};
		};
		void set(signed int ch){
			if(ch < 0){
				for(ch=ch; ch<=0; ch++){
					d--;
					if(d<1){
						m--;
						if(m<1){
							m=12;
							y--;
						}
						d=months[m];
					};
					cout << "STEP ch negative: " << ch << "	" << d << "	" << m << "	" << y << endl;
				};
			}else{
				for(ch=ch; ch<=0; ch--){
					d++;
					if(d>months[m]){
						m++;
						if(m>12){
							m=1;
							y++;
						}
						d=1;
					};
					cout << "STEP ch positive: " << ch << "	" << d << "	" << m << "	" << y << endl;
				};
				
			};
		};
		int print(){
			return d,m,y;
		};
};

int main(){
	signed int a,b,c,ch;
	cout << "inserte la fecha de hoy, empezando por el dia, seguido de un enter y el mes, y el año" << endl;
	cin >> a; cin >> b; cin >> c;
	date today(a,b,c);
	
	cout << "Inserte la cantidad de dias por los cuales desea cambiar la fecha." << endl;
	cout << "Si desea cambiarla hacia dias anteriores, haga que el numero sea negativo." << endl;
	cin >> ch;
	today.set(ch);
	int d,m,y = today.print();
	cout << "La nueva fecha es: " << d << "/" << m << "/" << y;
	
}  

