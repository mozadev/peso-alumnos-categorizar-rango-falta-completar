/*
8. Los ministerios de educación y de salud, desean llevar una estadística de los pesos de los
alumnos de un colegio estatal de acuerdo a los siguientes rangos:
• Alumnos de menos de 40 kg.
• Alumnos entre 40 y 50 kg.
• Alumnos de más de 50 y menos de 60 kg.
• Alumnos de más o igual a 60 kg.
Teniendo en cuenta que colegio estatal no tiene más de 50 alumnos, realice una
aplicación en C++, que, en primer lugar, reciba como dato el número de alumnos que
tiene el salón y luego por cada alumno permita el registro de su peso. La aplicación
deberá mostrar como resultado la cantidad de alumnos que hay por cada uno de los
rangos de los cuales se desea obtener una estadística.
Ejemplo:
Ingrese el numero de alumnos: 7
Peso alumno 1:34
Peso alumno 2:54
Peso alumno 3:40
Peso alumno 4:50
Peso alumno 5:65
Peso alumno 6:55
Peso alumno 7:48
Alumnos de menos de 40 kg: 1
Alumnos entre 40 y 50 kg: 3
Alumnos de más de 50 y menos de 60 kg: 2
Alumnos de 60 kg o más: 1
9. Escribir un programa en C++ que lea


*/
#include <iostream>
#include<conio.h>
#include <stdlib.h>
using namespace std;

int ingreseN()

{
	int num;
	cout << "ingrese n "; cin >> num;
	while (num <=0 ||num>50)
	cout << "error: "<< endl;
	cout << "ingrese n: ";cin >> num;

	return num;
}


float ingresapeso()

{
	float peso;
	cin >> peso;
	while (peso <= 0 || peso > 200)
	{
		cout << "error ingrese otra vez: "; cin>>peso;	
	}
	return peso;
}
void estadstic(int nestu)
{
	int c1=0, c2 = 0, c3 = 0, c4 = 0;
	float peso;
	for (int i = 1; i <= nestu; i++)
	{
		cout << "peso del alumno: " << i << ": ";
		peso = ingresapeso();
		if (peso < 40)
			c1++;
		//completar

	}

	imprimedatos(c1, c2, c3, c4);



}
int main()
{
	int N=ingresa



}


