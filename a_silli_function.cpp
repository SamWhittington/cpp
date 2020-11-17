#include <iostream>
 
int main() {
 
  for (int i=1; i >= 100; i++) {
    
    if (i % 3 == 0 && i % 5 ==0){
      std::cout << "FizzzBuzz" << "\n";
    }
    else if(i % 3 == 0){
      std::cout << "Fizzz" << "\n";
    }
    else if (i % 5 == 0){
      std::cout << "Buzzz" << "\n";
    }
    else {
    std::cout << i << "\n";
  }
 }
}
