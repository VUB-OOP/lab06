#include <string>

class Adresa {
public:
  Adresa(std::string ulica, int broj, std::string grad);

  std::string getUlica();
  int getBroj();
  std::string getGrad();

  Adresa& setUlica(std::string ulica);
  Adresa& setBroj(int broj);
  Adresa& setGrad(std::string grad);

  std::string toString();

private:
  std::string ulica;
  int broj;
  std::string grad;
};