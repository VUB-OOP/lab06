#include <iostream>
#include "student.h"

int main() {
  Datum datum(29, 2, 2024);

  Adresa adresa("Smiciklasova", 1, "Zagreb");

  Student student("Hrvoje", "Horvat", 123, datum, adresa);
  student.prikaziPodatke();
}
