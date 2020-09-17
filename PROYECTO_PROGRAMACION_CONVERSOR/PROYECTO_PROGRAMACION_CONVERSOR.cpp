#include <iostream>
#include<string>
#include <cmath>
#include <Windows.h>
#include<stdio.h>
#include <string.h>
#include <conio.h>
#include <iomanip>
#include <cstring>
#include <sstream>
#include <cstdlib>
#include <cmath>
#include<stdlib.h>
#include <iomanip>
#define MAX 10000
using namespace std;
void gotoxy(int x, int y)
{
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}
//equipo:Brandon Azariel Aguirre Solorio, gilberto valenzuela martinez, denzel roberto de la rosa lopez,jesus alejandro padilla ayala, luis roberto pinto guitierrez y sebastian gomez calvario
long convertirBinarioaDecimal(long double);
void pausa();
long long unsigned numero;
int main()
{
	char texto[1024];
	long long contador = 0, num, resultado, cerosunos[1024], i;//variables de convertir texto a numero
	long long unsigned numerodecimal, exp, digito; double long binario; //variables del convertidor de decimal a binario
	long numerobin, resto, cociente; long numeroctal[1024], brand, rad, exponente, digit; double numerodeci; //variables binario a octal
	char binnum[MAX], hexa[MAX]; long  temp; long  den, alex;//variables binario a hexadecimal
	bool bandera = false;
	char tecla;
	do
	{


		system("cls");
		cin.clear();
		for (int x = 1; x <= 119; x++)

		{
			gotoxy(x, 4);
			putchar('*');
			gotoxy(x, 14);
			putchar('*');

		}

		for (int y = 4; y <= 14; y++)
		{
			gotoxy(0, y);
			putchar('*');
			gotoxy(119, y);
			putchar('*');
		}
		gotoxy(1, 0);
		cout << "-----------------------------------------------------------------------------------------------------------------------\n";
		cout << "|                                            CALCULADORA DE CONVERCIONES                                                \n";
		cout << "------------------------------------------------------------------------------------------------------------------------\n" << endl;
		system("color 02");
		gotoxy(0, 6);
		cout << "\t1 .-  Convertir de Binario a Decimal \n";
		gotoxy(0, 7);
		cout << "\t2 .-  Convertir de Decimal a Binario \n";
		gotoxy(0, 8);
		cout << "\t3 .-  Convertir de Binario a Octal \n";
		gotoxy(0, 9);
		cout << "\t4 .-  Convertir de Binario a Hexadesimal \n";
		gotoxy(0, 10);
		cout << "\t5 .-  Convertir de Texto a Binario\n";
		gotoxy(0, 11);
		cout << "\t6 .-  Creditos y Reparto " << endl;
		gotoxy(0, 12);
		cout << "\t7 .-  Salir de el programa " << endl;
		gotoxy(1, 16);
		cout << "Elige una opcion: ";
		cin >> tecla;
		switch (tecla)
		{
		case '1':
			system("cls");
			system("color 2");
			for (int x = 1; x <= 130; x++)

			{
				gotoxy(x, 4);
				putchar('*');
				gotoxy(x, 11);
				putchar('*');

			}

			for (int y = 4; y <= 10; y++)
			{
				gotoxy(0, y);
				putchar('*');
				gotoxy(119, y);
				putchar('*');
			}
			gotoxy(1, 0);
			cout << "-----------------------------------------------------------------------------------------------------------------------\n";
			cout << "                                Has elegido convertir de  Binario a Decimal. \n" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------\n";
			gotoxy(1, 12);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "Nota: solo introduce los numeros 0 y 1 ya que equivalen al lenguaje del codigo binario" << endl << endl;
			gotoxy(3, 5);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			cout << "Introduce el numero a convertir: " << endl;
			gotoxy(4, 6);
			cin >> numero;
			cout << "" << endl;
			gotoxy(4, 7);
			cout << "El numero binario = " << convertirBinarioaDecimal(numero) << " en decimal." << endl;
			gotoxy(2, 15);
			pausa();
			break;

		case '2':
			system("cls");
			system("color 06");
			for (int x = 1; x <= 118; x++)

			{
				gotoxy(x, 4);
				putchar('*');
				gotoxy(x, 11);
				putchar('*');

			}

			for (int y = 4; y <= 10; y++)
			{
				gotoxy(0, y);
				putchar('*');
				gotoxy(119, y);
				putchar('*');
			}
			gotoxy(1, 0);
			cout << "--------------------------------------------------------------------------------------------------------------------\n";
			cout << "                                    Has elegido convertir de Decimal a Binario. \n";
			cout << "---------------------------------------------------------------------------------------------------------------------\n";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "Nota: ingresa solo numeros decimales enteros y pocitivos " << endl << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			gotoxy(4, 5);
			cout << "Introduce el numero decimal a convertir: " << endl;
			gotoxy(4, 6);
			cin >> numerodecimal;
			exp = 0;
			binario = 0;
			while (numerodecimal / 2 != 0)
			{
				digito = numerodecimal % 2;
				binario = binario + digito * pow(10.0, exp);
				exp++;
				numerodecimal = numerodecimal / 2;
			}
			binario = binario + numerodecimal * pow(10.0, exp);
			gotoxy(4, 6);
			cout << fixed << setprecision(0);
			gotoxy(4, 7);
			cout << "El numero desimal ingresado convertido en binario es = " << binario << endl;
			gotoxy(4, 14);
			pausa();
			break;

		case '3':
			system("cls");
			system("color 04");
			for (int x = 1; x <= 118; x++)

			{
				gotoxy(x, 4);
				putchar('*');
				gotoxy(x, 11);
				putchar('*');

			}

			for (int y = 4; y <= 10; y++)
			{
				gotoxy(0, y);
				putchar('*');
				gotoxy(118, y);
				putchar('*');
			}
			gotoxy(1, 0);
			cout << "---------------------------------------------------------------------------------------------------------------------\n";
			cout << "                                      Has elegido convertir de Binario a Octal. \n";
			cout << "---------------------------------------------------------------------------------------------------------------------\n";
			gotoxy(1, 12);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "Nota: introduce solo los numeros 0 y 1 equibalente al codigo binario" << endl << endl;
			cout << "El sistema octal reconoce por 3 espacios numericos, en este programa no hay nesecidad de rellenar los 0 faltantes ya   que el solo los complementa al numero binario ingresado" << endl << endl;
			gotoxy(3, 5);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
			cout << "Introduce el numero binario a convertir en el sistema octal: " << endl;
			gotoxy(4, 6);
			cin >> numerobin;
			exponente = 0;
			numerodeci = 0;
			brand = 1;
			rad = 0;
			cociente = 0;
			numeroctal[rad] = 0;
			digit = 0;
			while (((int)(numerobin / 10)) != 0)
			{
				digit = (int)numerobin % 10;
				numerodeci = numerodeci + digit * pow(2.0, exponente);
				exponente++;
				numerobin = (int)(numerobin / 10);
			}
			numerodeci = numerodeci + numerobin * pow(2.0, exponente);
			cociente = numerodeci;
			while (cociente != 0)
			{
				numeroctal[brand++] = cociente % 8;
				cociente = cociente / 8;
			}
			for (rad = brand - 1; rad > 0; rad--)
				cout << numeroctal[rad];
			cout << " Es numero de el sistema octal equibalente al numero binario ingresado" << endl;
			gotoxy(1, 19);
			pausa();
			break;

		case '4':
			system("cls");
			system("color 03");
			for (int x = 1; x <= 118; x++)

			{
				gotoxy(x, 4);
				putchar('*');
				gotoxy(x, 11);
				putchar('*');

			}

			for (int y = 4; y <= 10; y++)
			{
				gotoxy(0, y);
				putchar('*');
				gotoxy(118, y);
				putchar('*');
			}
			gotoxy(1, 0);
			cout << "------------------------------------------------------------------------------------------------------------------------\n";
			cout << "                                      Has elegido convertir de Binario a Hexadecimal. \n";
			cout << "------------------------------------------------------------------------------------------------------------------------\n";
			gotoxy(3, 5);
			cout << "Introduzca el numero binario para comvertir a el sistema hexadecimal : " << endl;
			gotoxy(4, 6);
			cin >> binnum;
			gotoxy(1, 4);
			cout << "Nota: introduce solo los numeros 0 y 1 equibalente al codigo binario" << endl;
			den = 0;
			alex = 0;
			while (binnum[den])
			{
				binnum[den] = binnum[den] - 48;
				++den;
			}
			--den;
			while (den - 2 >= 0)
			{
				temp = binnum[den - 3] * 8 + binnum[den - 2] * 4 + binnum[den - 1] * 2 + binnum[den];
				if (temp > 9)
					hexa[alex++] = temp + 55;
				else
					hexa[alex++] = temp + 48;
				den = den - 4;
			}
			if (den == 1)
				hexa[alex] = binnum[den - 1] * 2 + binnum[den] + 48;
			else if (den == 0)
				hexa[alex] = binnum[den] + 48;
			else
				--alex;
			gotoxy(4, 7);
			cout << "En Hexadecimal es: ";
			while (alex >= 0)
			{
				cout << hexa[alex--];
			}
			gotoxy(4, 8);
			cout << endl; gotoxy(4, 9);
			pausa();
			break;

		case '5':
			system("cls");
			system("color 2");
			for (int x = 1; x <= 118; x++)

			{
				gotoxy(x, 4);
				putchar('*');
				gotoxy(x, 11);
				putchar('*');

			}

			for (int y = 4; y <= 10; y++)
			{
				gotoxy(0, y);
				putchar('*');
				gotoxy(118, y);
				putchar('*');
			}
			gotoxy(1, 0);
			cout << "---------------------------------------------------------------------------------------------------------------------\n";
			cout << "                              Has elegido la opcion convertir un Texto a numero Binario\n";
			cout << "---------------------------------------------------------------------------------------------------------------------\n";
			cout << "introduce letras o palabras, caracteres especiales y numeros determinados por la tabla ascii" << endl << endl;
			gotoxy(1, 12);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "Nota: Este programa por el momento no reconoze la tecla espacio estamos trabajando para solucionarlo, por el momento solo lee de palabra no importa su extencion o puedes separar las palabras con comas. " << endl << endl;
			gotoxy(3, 5);
			cout << "Introduce el texto a convertir: " << endl;
			gotoxy(3, 6);
			cin >> texto;
			gotoxy(4, 7);
			num = 0;
			i = 0;
			resultado = 0;
			cerosunos[i] = 0;
			contador = 0;
			while (contador < strlen(texto))
			{

				i = 1;

				num = texto[contador];

				while (num > 0)

				{

					resultado = num % 2;

					if (resultado == 0)

					{

						cerosunos[i] = 0;

						i = i + 1;

					}

					else

					{

						cerosunos[i] = 1;

						i = i + 1;

						num = num - 1;

					}

					num = num / 2;

				}

				i = i - 1;

				while (i > 0)

				{

					cout << cerosunos[i];

					i = i - 1;

				}

				cout << " ";
				contador = contador + 1;

			}
			cout << " Equivale al codigo binario del texto ingresado " << endl;
			gotoxy(3, 15);
			pausa();
			break;

		case '6':
			system("cls");
			system("color 0b");
			cout << "---------------------------------------------------------------------------------------------------------------------\n";
			cout << "                                            creditos y reparto del programa \n";
			cout << "---------------------------------------------------------------------------------------------------------------------\n" << endl;
			cout << "proyecto calculadora de converciones" << endl << endl;
			cout << "Materias: programacion 1 y logica matematica " << endl << endl;
			cout << "Integrantes: " << endl;
			cout << "1.- Brandon Azariel Aguirre Solorio." << endl;
			cout << "2.- Jesus Alegandro Padilla Ayala." << endl;
			cout << "3.- Gilberto Valenzuela Martinez." << endl;
			cout << "4.- Denzel Roberto De la rosa Lopez." << endl;
			cout << "5.- Luis Roberto Pinto Guitierrez." << endl;
			cout << "6.- Sebastian Gomez Calvario." << endl << endl;
			pausa();
			break;
		case '7':
			bandera = true;
			//exist(1)
			break;
		default:
			system("cls");
			system("color a5");
			cout << "Opcion no valida. ingrese una de las 6 opciones mostradas \a \n";
			pausa();
			break;

		}

	} while (bandera != true);

}


long convertirBinarioaDecimal(long double)
{
	long long numeroDecimal = 0, i = 0, recordatorio;

	while (numero != 0)
	{
		recordatorio = numero % 10;
		numero /= 10;
		numeroDecimal += recordatorio * pow(2, i);
		++i;
	}
	return numeroDecimal;
}
void pausa()
{
	cout << "Pulsa una tecla para continuar................";
	getwchar();
	getwchar();
}


