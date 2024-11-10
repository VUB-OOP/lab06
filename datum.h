class Datum {
  /*Definirajte potrebne konstruktore i metode kako bi se postavili i dohvatili podaci o
datumu*/
public:
  Datum(int dan, int mjesec, int godina);

  int getDan();
  int getMjesec();
  int getGodina();

  Datum& setDan(int dan);
  Datum& setMjesec(int mjesec);
  Datum& setGodina(int godina);

private:
  int dan;
  int mjesec;
  int godina;
};