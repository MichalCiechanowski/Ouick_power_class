#include <iostream>
#include <ctime>
#include <fstream>
#include "Class.cpp"

long long quick_power_iteracyjnie(long long Podstawa,unsigned int Wykladnik)
{
	long long Wynik=1;
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
long long quick_power_rekurencja(long long Podstawa,unsigned int Wykladnik)
{
	if(Wykladnik==0) 
	{
		return 1;
	}
	if(Wykladnik%2==1) 
	{
		return Podstawa*quick_power_rekurencja(Podstawa,Wykladnik-1);
	}

	long long Wynik=quick_power_rekurencja(Podstawa,Wykladnik/2);
	return Wynik*Wynik;
}

int main()
{
	Quick_power z1;
	z1.wczytaj();
	cout << z1.quick_power_i() << endl;
	
	z1.wczytaj();
	cout << z1.quick_power_r(z1.Podstawa,z1.Wykladnik);
    return 0;
}