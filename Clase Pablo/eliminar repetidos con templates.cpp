#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <iterator>
using namespace std;

template<typename T>
vector<T> cargar(string name){
	ifstream archi(name,ios::binary|ios::ate);
	int n = archi.tellg()/sizeof(T);
	vector<T> v(n);
	archi.seekg(0);
	for(T &x: v){
		archi.read(reinterpret_cast<char*>(&x),sizeof(T));
	}
	return v;
}

template<typename T>	
int eliminar_rep_sin_orden(vector<T> &datos){
	int n = 0;
	for(size_t i=0;i<datos.size();i++) { 
		auto it = remove(datos.begin()+i+1,datos.end(),datos[i]);
		n += datos.end() - it;
		datos.erase(it,datos.end());
	}
	return n;
}		
	
template<typename T>
int eliminar_rep_ordenado(vector<T> &datos){
	//hacemos un sort primero porque unique elimina los repetidos
	//que estan juntos
	sort(datos.begin(),datos.end());
	auto it = unique(datos.begin(),datos.end());
	//distance me dice la distancia entre dos iteradores
	//tambien puede ser asi: 
	//int n = datos.end() - it;
	int n = distance(it,datos.end());
	datos.erase(it,datos.end());
	return n;
}	

template<typename T>	
void guardar(const vector<T> &datos, string name){
	ofstream archi2(name,ios::binary|ios::trunc);
	for(const T &x: datos){
		archi2.write(reinterpret_cast<const char*>(&x),sizeof(T));
	}
}

template<typename T>	
int eliminarRepetidos(string name){
	//paso 1, paso el archivo a un vector
	vector<T> datos = cargar<T>(name);
	//paso 2, elimino los repetidos del archivo
	int n = eliminar_rep_ordenado(datos);
	//paso 3, copio el vector a mi archivo 
	guardar(datos,name);
	return n;
}

int main() {
	
	int cant = eliminarRepetidos<float>("flotantes.dat");
	cout << "Repetidos eliminados: " << cant;
	
	return 0;
}

