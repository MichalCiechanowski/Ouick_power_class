#include <iostream>
#include <ctime>
#include <fstream>
#include "Class.h"

using namespace std;

void Quick_power::wczytaj()
{
	cout << "Podaj podstawe i wykladnik potegi: ";
	cin >> Podstawa;
	cin >> Wykladnik;
}

long long Quick_power::quick_power_i()
{
	while(Wykladnik>0)
	{
		if(Wykladnik%2==1) 
		{
			Wynik*=Podstawa;//jesli bit jest = 1
		}
		Podstawa*=Podstawa;
		Wykladnik/=2;//skrócenie o jeden bit
	}
	return Wynik;
}

long long Quick_power::quick_power_r(long long Podstawa,unsigned int Wykladnik)
{
	if(Wykladnik==0) 
	{
		return 1;
	}
	if(Wykladnik%2==1) 
	{
		return Podstawa*quick_power_r(Podstawa,Wykladnik-1);
	}
	long long Wynik=quick_power_r(Podstawa,Wykladnik/2);
	return Wynik*Wynik;
}