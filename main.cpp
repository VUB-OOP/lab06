#include <iostream>
#include "student.h"

int main() {
  Datum datum(29, 2, 2024);

  Adresa adresa("Smiciklasova", 1, "Zagreb");

  Student student("Hrvoje", "Horvat", 123, datum, adresa);
  
  // dodatan primjer stvaranja studenta s anonimnim objektima
  Student student2("Ivan", "Ivic", 456, Datum(15, 1, 2024), Adresa("Ilica", 2, "Zagreb"));
  student.prikaziPodatke();
}
