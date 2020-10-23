#include <iostream>

int main() {
  
  double pesos, reais, soles, dollars;
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter number of Reais: ";
  std::cin >> reais;
  std::cout << "Enter number of Soles: ";
  std::cin >> soles;
  
  dollars = (0.00032 * pesos) + (0.27 * reais) + (0.33 * soles);

  std::cout << "Total USD = $" << dollars << "\n";
}
