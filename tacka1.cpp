#include <cmath>
#include <iostream>
#include "tacka1.h"
using namespace std;


//Odstojanje tekuće tačke od koordinatnog početka
//definišeš metode van klase sa ::
double Tacka::poteg() const { return sqrt(x * x + y * y); }

double Tacka::nagib() const { return (x == 0 && y == 0) ? 0 : atan2(y, x); }
double Tacka::rastojanje(Tacka a) const {
	return sqrt(pow(x - a.x,2) + pow(y - a.y,2));
}

Tacka Tacka::najbliza(const Tacka* a, int n) const {
	Tacka t = a[0];
	double r, m = rastojanje(t);
	for (int i = 1; i < n; i++)
	{
		if ((r = rastojanje(a[i])) < m) {
			m = r;
			t = a[i];
		}
	}
	return t;
}
void Tacka::citaj() {
	cin >> x >> y;
}
void Tacka::pisi() const {
	cout << "(" << x << "," << y << ")";
}
