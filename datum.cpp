#include "datum.h"

  Datum::Datum(int dan, int mjesec, int godina) {
    setDan(dan);
    setMjesec(mjesec);
    setGodina(godina);
  }

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
    if (dan < 1 || dan > 31) {
      this->dan = 1;
    } else {
      this->dan = dan;
    }
    return *this;
  }
  Datum& Datum::setMjesec(int mjesec) {
    if (mjesec < 1 || mjesec > 12) {
      this->mjesec = 1;
    } else {
      this->mjesec = mjesec;
    }
    return *this;
  }
  Datum& Datum::setGodina(int godina) {
    if (godina < 1900 || godina > 2100) {
      this->godina = 1900;
    } else {
      this->godina = godina;
    }
    return *this;
  }

  std::string Datum::toString() {
    return std::to_string(dan) + "." + std::to_string(mjesec) + "." + std::to_string(godina) + ".";
  }