#include<iostream>
using namespace std;
int x;

int main() {
	cout << "Secim yapmak istediginiz programlama dilini secin \n 1 - Pyton\n 2 - Java\n 3 - C#\n";
	cin >> x;
	if (x == 1) {
		cout << "Sectiginiz program Python\n";
	}
	else if (x == 2)
	{
		cout << "Sectiginiz program Java\n";

	}
	else if(x==3){
		cout << " Sectiginiz program C#\n ";
	}
	else {
		cout << " Sectiginiz program C#\n ";
	}
}
