#include <fstream>

using namespace std;

int main ()
{
	ifstream plik_wejscia;
	ofstream plik_wyjscia;
	
	plik_wejscia.open("C://Users//szymo//OneDrive//Pulpit//C++//bitset//dane.txt");
	plik_wyjscia.open("C://Users//szymo//OneDrive//Pulpit//C++//bitset//wynik6b.txt");
	
	int licznik=0;
	wynik=0;
	min=524288;
	max=0;
	bool czy_mniejsza;
	
	while(plik_wejscia >> liczba)
	{
		for( int i=0; i<liczba.size(); i++)
		{
			if(liczba[i] > liczba[i+1])
			{
				czy_mniejsza = true;
			}
		}
		
		if(!czy_mniejsza)
		{
			licznik++:
			wynik = liczba[0]-'0';
			for(int i=1; i<liczba.size(); i++)
			{
				wynik = wynik*8+liczba[i]-'0';
			}
				
			if(wynik>max)
			{
				max=wynik;
			}
			
			if(wynik < min)
			{
				min=wynik;
			}
			
		}
		
	}
	
	plik_wyjscia << "Liczba: "<< licznik <<"\n";
	plik_wyjscia <<	"Najmniejsza liczba: "<<min<<"\n";
	plik_wyjscia << "Najwieksza liczba: "<< max<<"\n";
	
	plik_wejscia.close();
	plik_wyjscia.close();	
		
}
