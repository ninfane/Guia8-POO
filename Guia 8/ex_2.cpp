#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <sstream>
using namespace std;

template<typename T>
void mostrar(const T &v){
	for(int x : v) cout << x << " ";
	cout << endl;
}

int main() {
	
	vector<int> v(30);
	for(int &x: v) x = rand()%25;
	mostrar(v);
	
	auto it10 = v.begin()+10;
	auto it21 = v.begin()+21;
	sort(it10,it21);
	reverse(it10,it21);
	
	cout << "Reversed: " << endl;
	mostrar(v);
	
	vector<int> copia(10);
	copy(it10,it21,copia.begin());
	cout << "Copia:" << endl;
	mostrar(copia);
	
	v.erase(it10,it21);
	cout << "Original modificado: " << endl;
	mostrar(v);
	
	cout << "Ingrese un valor: " << endl;
	int val; cin >> val;
	stringstream ss;
	ss << "Veces que se repite el numero " << val << ": "; 
	cout << ss.str() << count(v.begin(),v.end(),val);
	cout << endl;
	
	//falta el borrado de todas las repeticiones del valor buscado
	auto it2 = v.begin();
	remove(it2,it2+v.size(),val);
	mostrar(v);
	
	return 0;
}

