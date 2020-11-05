#include <fstream>

using namespace std;


int POC(int liczba)
{
	return liczba % 10;
}

int PPC(int liczba)
{
	while(liczba>=10)
	{
		liczba= liczba/10;
	}
	return liczba;
}

int main()
{

	
	ifstream plik_wejscia;
	ofstream plik_wyjscia;
	
	plik_wejscia.open("C://Users//szymo//OneDrive//Pulpit//C++//bitset//dane.txt");
	plik_wyjscia.open("C://Users//szymo//OneDrive//Pulpit//C++//bitset//wynik6a.txt");
	
	int liczba, licznik = 0;
	
	while(plik_wejscia >> liczba)
	{
		if(POC(liczba) == PPC(liczba))
		{
			licznik++;
		}
	}
	
	plik_wyjscia << licznik;
	
	plik_wejscia.close();
	plik_wyjscia.close();
	
}
