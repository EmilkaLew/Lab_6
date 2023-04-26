#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cassert>
using namespace std;

class Gracz {
private:
	string imie;
	int portel;
	int kasa;
public:
	void akcesoria(string n, int k, int m);

	string podajimie();
	int podajportel();
	int podajkasa();
};