class Tacka {
	double x, y;
public:
	void tacka(double a, double b) { x = a; y = b; }//stvaranje ta�ke
	double aps() const { return x; }// apscisa tacke
	double ord() const { return y; }// ordinata tacke
	double poteg() const;//odstojanje od koordinatnog po�etka
	double nagib() const;//Nagib potega u odnosu na x osu
	double rastojanje(Tacka) const;// odstojanje od zadatke ta�ke
	Tacka najbliza(const Tacka*, int) const;//najbli�a ta�ka u nizu ta�aka
	void citaj();
	void pisi() const;


};
