#include "Header.h"

using namespace std;

void setgolf(golf& g, const char* name, int hc)
{
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf& g)
{
	char n[Len];
	int hc;
	cout << "Interactive version: \n";
	cout << "Please enter a name:";
	cin.getline(n, Len);
	cout << "Please enter a handicap: ";
	cin >> hc;
	if (strlen(n) != 0)
	{
		strcpy_s(g.fullname, n);
		g.handicap = hc;
		cin.get();
		return 1;
		
	}
	else
	{
		return 0;
	}
}

void handicap(golf& g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf& g)
{
	cout << "The name is " << g.fullname << endl;
	cout << "The handicap is " << g.handicap << endl;
}