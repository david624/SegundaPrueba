#include <iostream>

using namespace std;
int evaluar(float num);
int main()
{
	int reng = 100;
	int ev;

	for (int i = 1; i <= reng; i++) {
		ev = evaluar(i);
		
		switch (ev) {
		case 1:
			for (int j = 0; j < i; j++) {
				cout<<"+";
			}
			break;

		case 2:
			for (int j = 0; j < i; j++) {
				cout<<"-";
			}
			break;

		case 3:
			cout<<"trece";
			break;

		}
		cout<<"\n";

	}
	cout<<"Un primer cambio";
	
}


int evaluar(float num) {

	float a;
	int b;
	a = num / 2;
	
	b = (int)a;
	float result;
	result = a - b;
	float result1;
	a = num / 13;
	
	b = a;
	result1 = a - b;
	if (result1 == 0) { // Si al dividir entre 13 no hay residuo entonces es multiplo
		return 3;
	}
	if (result > 0) {   // Si el resultado tiene residuo es impar
		return 1;
	}
	if (result == 0) {  // Si no hay residuo es par
		return 2;
	} }
