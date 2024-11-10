#include <string>

class Datum {
public:
  Datum(int dan, int mjesec, int godina);

  int getDan();
  int getMjesec();
  int getGodina();

  Datum& setDan(int dan);
  Datum& setMjesec(int mjesec);
  Datum& setGodina(int godina);

  std::string toString();

private:
  int dan;
  int mjesec;
  int godina;
};