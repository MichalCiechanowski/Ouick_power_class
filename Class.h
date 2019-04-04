#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

class Quick_power
{
	public:
	long long Podstawa,Wynik=1;
	unsigned int Wykladnik;
	void wczytaj();
	void wczytaj_z_pliku();
	long long quick_power_i();
	long long quick_power_r(long long Podstawa,unsigned int Wykladnik);
};