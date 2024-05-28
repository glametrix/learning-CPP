#include <iostream>

int main() {
  // Declaring user entered values here
  double pesos;
  double reais;
  double soles;

  // Declaring the output value here
  double dollars;

  //questions for the user
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  
  std::cout << "Enter number of reais: ";
  std::cin >> reais;

  std::cout << "Enter number of soles: ";
  std::cin >> soles;
  
  //conversion rates (1 pesos = 0.060USD, 1 reais = 0.19USD, 1 soles = 0.27USD)
  //conversion formula:
  dollars = (0.060 * pesos) + (0.19 * reais) + (0.27 * soles);

  //output to the user
  std::cout << "US Dollars = $" << dollars << "\n";

}