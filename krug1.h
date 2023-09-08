#pragma once
#include "tacka1.h"
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;

class Krug {
	Tacka c; double r; //centar i poluprečnik kruga
	struct Elem{	//Elem. zajedničke liste svih krugova
		Krug* krug;	//pokazivač na krug
		Elem* sled; //pokazivač na sledeći element liste
		Elem (Krug* k, Elem* s = 0); // stvaranje elemenata liste (konstruktor strukture)
	};
	static Elem* prvi; //početak zajedničke liste
	//KONSTRUKTORI
	Krug() { r = -1; }// stvaranje praznog kruga
	Krug(const Krug&){} // konstruktor kopije

public:
	Krug(double rr, double x, double y);	// stavranje kruga
	~Krug();								//destruktor(uništavanje kruga)
	static int moze(double r, double x, double y);//static => direktno se poziva bez instance klase klasa::f-ja		//da li može da postoji
	friend double rastojanje(const Krug& k1, const Krug& k2);//friend f-ja se direktno poziva kao globalana ali koristi private argumente	//rastojanje dva kruga

	int postavi(double x, double y);	//postavljanje kruga
	int pomeri(double dx, double dy);	//pomeranje kruga
	void pisi() const;					//pisanje kruga
	static void pisi_sve();				//pisanje svih krugova
};
	//def. f-ja za neposredno ugrađivanje u kod
inline double rastojanje(const Krug& k1, const Krug& k2) {
	return k1.c.rastojanje(k2.c) - k1.r - k2.r;
}
inline void Krug :: pisi() const {
	cout << "K[" << r << ','; c.pisi(); cout << ']';
}
inline Krug::Elem::Elem(Krug* k, Elem* s) {		//stvaranje el. liste
	krug = k;
	sled = s;
}


