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
	plik_wyjscia.open("C://Users//szymo//OneDrive//Pulpit//C++//bitset//wynik6b.txt");
	
	int licznik = 0, wynik = 0;
	string liczba;
	
	while (plik_wejscia >> liczba)
	{
		
		wynik = liczba[0]-'0';
		for( int i=1; i<liczba.size(); i++)
		{
			wynik = wynik*8 + liczba[i] - '0';
		}
		
		if(POC(wynik) == PPC(wynik))
		
			licznik++;
		
		
	}
	
	plik_wyjscia << licznik;
	
	plik_wejscia.close();
	plik_wyjscia.close();
	
}
	
	
