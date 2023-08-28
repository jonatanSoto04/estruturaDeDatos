#include <iostream>
#include <list>
using namespace std;
int main() {
  std::list<int[]> listaArreglos;
  int numeros1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
  int numeros2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
  int numeros3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
  listaArreglos.push_back(numeros1);
  listaArreglos.push_back(numeros2);
  listaArreglos.push_back(numeros3);
  int dato;
  char band = 'F';
  cout << "Introduzca el número a buscar: ";
  cin >> dato;
  for (const auto& arreglo : listaArreglos) {
    for (int i = 0; i < sizeof(arreglo) / sizeof(int); i++) {
      std::cout << arreglo[i] << " ";
    }
    std::cout << endl;
    int ini = 0;
    int fin = 14;
    int centro = (ini + fin) / 2;
    while (ini <= fin) {
      // busqueda Binaria
      if (arreglo[centro] == dato) {
        band = 'V';
        break;
      }
      if (arreglo[centro] > dato) {
        fin = centro - 1;
        centro = (ini + fin) / 2;
      }
      if (arreglo[centro] < dato) {
        ini = centro + 1;
        centro = (ini + fin) / 2;
      }
    }
    if (band == 'V'){
			cout<<"El numero a sido encotrado en la posicion: "<<centro<<endl;
		}else{
			cout<<"El numero NO fue encontrado"<<endl;
		}
	}
	return 0;
}
