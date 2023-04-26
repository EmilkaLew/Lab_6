#include "Gracz.h"



void Gracz::akcesoria(string n, int k, int m) {
	imie = n;
	portfel = k;
	kasa = m;

}
string Gracz::podajimie() {
	return imie;
}

int Gracz::podajportfel() {
	return portfel;
}

int Gracz::podajkasa() {
	return kasa;
}