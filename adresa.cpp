#include "adresa.h"

Adresa::Adresa(std::string ulica, int broj, std::string grad) {
  setUlica(ulica);
  setBroj(broj);
  setGrad(grad);
}

std::string Adresa::getUlica() {
  return ulica;
}
int Adresa::getBroj() {
  return broj;
}
std::string Adresa::getGrad() {
  return grad;
}

Adresa& Adresa::setUlica(std::string ulica) {
  this->ulica = ulica;
  return *this;
}
Adresa& Adresa::setBroj(int broj) {
  if (broj < 1) {
    this->broj = 1;
  } else {
    this->broj = broj;
  }
  return *this;
}
Adresa& Adresa::setGrad(std::string grad) {
  this->grad = grad;
  return *this;
}

std::string Adresa::toString() {
  return ulica + " " + std::to_string(broj) + ", " + grad;
}