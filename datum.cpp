#include "datum.h"

  Datum::Datum(int dan, int mjesec, int godina) 
    : dan(dan), mjesec(mjesec), godina(godina) {}

  int Datum::getDan() {
    return dan;
  }
  int Datum::getMjesec() {
    return mjesec;
  }
  int Datum::getGodina() {
    return godina;
  }

  Datum& Datum::setDan(int dan) {
    this->dan = dan;
    return *this;
  }
  Datum& Datum::setMjesec(int mjesec) {
    this->mjesec = mjesec;
    return *this;
  }
  Datum& Datum::setGodina(int godina) {
    this->godina = godina;
    return *this;
  }