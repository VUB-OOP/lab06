#include "datum.h"
#include "adresa.h"

class Student {
public:
  Student(std::string ime, std::string prezime, Datum datumUpisa, Adresa adresaStanovanja);

  std::string getIme();
  std::string getPrezime();
  int getBrojIndeksa();
  Datum getDatumUpisa();
  Adresa getAdresaStanovanja();

  Student& setIme(std::string ime);
  Student& setPrezime(std::string prezime);
  Student& setBrojIndeksa(int brojIndeksa);
  Student& setDatumUpisa(Datum datumUpisa);
  Student& setAdresaStanovanja(Adresa adresaStanovanja);

  std::string toString();

private:
  std::string ime;
  std::string prezime;
  int brojIndeksa;
  Datum datumUpisa; // kompozicija
  Adresa adresaStanovanja; // kompozicija
};