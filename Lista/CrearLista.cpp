#include <iostream>
#include <list>
using namespace std;

int main() {
   // Crear una lista de números enteros
	std::list<int> numeros;

   // Agregar elementos a la lista
	numeros.push_back(2);
	numeros.push_back(20);
	numeros.push_back(34);
   
   //	for (const auto& numero : numeros) {
     // 	std::cout << numero << " ";
   //	}
   	for (auto it = numeros.begin(); it != numeros.end(); ++it) {
  	   std::cout << *it << " ";
    }
   
   std::cout << std::endl;
   	std::cout<< "Hola mundo"<<endl;
	return 0;
}
