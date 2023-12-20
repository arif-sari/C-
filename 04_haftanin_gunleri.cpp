#include <iostream>
using namespace std;
int x;

int main()
{
    cin >> x;
	switch (x)
	{
	case 1:
		cout << "Pazartesi";;
		break;

	case 2 :
		cout << "Sali";
		break;
	case 3 :
		cout << "Carsamba";
		break;
	case 4 :
		cout << "Persembe";
		break;
	case 5: 
		cout << "Cuma";
		break;
	case 6:
		cout << "Cumartesi";
	case 7:
		cout << "Pazar";
	default:
		cout << "Lütfen 1/7 arasi bir sayi girin ";
		break;
	}
}

