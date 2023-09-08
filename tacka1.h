class Tacka {
	double x, y;
public:
	void tacka(double a, double b) { x = a; y = b; }//stvaranje taèke
	double aps() const { return x; }// apscisa tacke
	double ord() const { return y; }// ordinata tacke
	double poteg() const;//odstojanje od koordinatnog poèetka
	double nagib() const;//Nagib potega u odnosu na x osu
	double rastojanje(Tacka) const;// odstojanje od zadatke taèke
	Tacka najbliza(const Tacka*, int) const;//najbli¾a taèka u nizu taèaka
	void citaj();
	void pisi() const;


};
