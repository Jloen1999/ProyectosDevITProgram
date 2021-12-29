#include <iostream>
#include <conio2.h>
using namespace std;

#define TECLA_ARRIBA 72
#define TECLA_ABAJO 80
#define ENTER 13
#define MAXC 20

void continuar(bool cont);
cout<<"Nada"
typedef char cadena[MAXC];
cout<<"Mensjae"

int menu(const char *opciones[], int totalOpciones);

int main() {
	bool repite;
	cadena titulo;
	const char *opciones[] = { "SUMA", "RESTA", "MULTIPLICACION", "DIVISION" };
	int totalOpciones = 4;
	int opcion, numero1, numero2, sumaTotal = 0, restaTotal, multiTotal,
			divTotal;
	do {
		opcion = menu(opciones, totalOpciones);
		strcpy(titulo, opciones[opcion]);
		textcolor(BLUE);
		cout << titulo;

		switch (opcion) {
		case 1:
			int suma;
			cout << "Introduce el primer numero: ";
			cin >> numero1;
			cout << "Introduce el segundo numero: ";
			cin >> numero2;
			suma = numero1 + numero2;
			sumaTotal += suma;
			break;
		case 2:
			int resta;
			cout << "Introduce el primer numero: ";
			cin >> numero1;
			cout << "Introduce el segundo numero: ";
			cin >> numero2;
			resta = numero1 + numero2;
			restaTotal += resta;
			break;
		case 3:
			int multi;
			cout << "Introduce el primer numero: ";
			cin >> numero1;
			cout << "Introduce el segundo numero: ";
			cin >> numero2;
			multi = numero1 + numero2;
			multiTotal += multi;
			break;
		case 4:
			int div;
			cout << "Introduce el primer numero: ";
			cin >> numero1;
			cout << "Introduce el segundo numero: ";
			cin >> numero2;
			while(numero2==0){
				cout<<"Introduce un numero valido: "; cin>>numero2;
			}
			div = numero1 + numero2;
			divTotal += div;
			break;
		}

	} while (repite);
	cout<<"SUMA: "<<sumaTotal;
	cout<<"RESTA: "<<restaTotal;
	cout<<"MULTIPLICACION: "<<multiTotal;
	cout<<"DIVISION: "<<divTotal;

	return 0;
}

int menu(const char *opciones[], int totalOpciones) {
	bool repite = true;
	int opcionSeleccionada = 1, tecla;
	do {
		gotoxy(5, 3 + opcionSeleccionada);
		cout << "===>";
		for (int i = 0; i < totalOpciones; i++) {
			cout << i + 1 << ") " << opciones[i];

		}

		do {
			tecla = getch();
		} while (tecla != TECLA_ARRIBA && tecla != TECLA_ABAJO && tecla != ENTER);

		switch (tecla) {
		case TECLA_ARRIBA:
			opcionSeleccionada--;
			if (opcionSeleccionada < 1) {
				opcionSeleccionada = totalOpciones;
			}

			break;

		case TECLA_ABAJO:
			opcionSeleccionada++;
			if (opcionSeleccionada > totalOpciones) {
				opcionSeleccionada = 1;
			}

			break;
		case ENTER:
			repite = false;
			break;
		}

	} while (repite);

	return opcionSeleccionada;
}
