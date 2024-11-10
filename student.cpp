#include "student.h"

Student::Student(std::string ime, std::string prezime, Datum datumUpisa, Adresa adresaStanovanja) 
  : datumUpisa(datumUpisa), adresaStanovanja(adresaStanovanja) {
  setIme(ime);
  setPrezime(prezime);
}

std::string Student::getIme() {
  return ime;
}

std::string Student::getPrezime() {
  return prezime;
}

int Student::getBrojIndeksa() {
  return brojIndeksa;
}

Datum Student::getDatumUpisa() {
  return datumUpisa;
}

Adresa Student::getAdresaStanovanja() {
  return adresaStanovanja;
}

Student& Student::setIme(std::string ime) {
  this->ime = ime;
  return *this;
}

Student& Student::setPrezime(std::string prezime) {
  this->prezime = prezime;
  return *this;
}

Student& Student::setBrojIndeksa(int brojIndeksa) {
  this->brojIndeksa = brojIndeksa;
  return *this;
}

Student& Student::setDatumUpisa(Datum datumUpisa) {
  this->datumUpisa = datumUpisa;
  return *this;
}

Student& Student::setAdresaStanovanja(Adresa adresaStanovanja) {
  this->adresaStanovanja = adresaStanovanja;
  return *this;
}

std::string Student::toString() {
  return ime + " " + prezime + " (" + datumUpisa.toString() + ") - " + adresaStanovanja.toString();
}
