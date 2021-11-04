#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {
	
	vector<int> v(30);
	for(int &x: v){
		x = rand()%26;
	}
	
	for(int x: v){
		cout << x << " ";
	}
	cout << endl;
	
	sort(v.begin(),v.end());
	auto it = v.begin()+10;
	reverse(it,it+11);
	
	cout << "Reversed: " << endl;
	for(int x: v){
		cout << x << " ";
	}
	cout << endl;
	
	vector<int> copia(10);
	copy(it,it+11,copia.begin());
	cout << "Copia:" << endl;
	for(int x: copia){
		cout << x << " ";
	}
	cout << endl;
	
	v.erase(it,it+11);
	cout << "Original modificado: " << endl;
	for(int x: v){
		cout << x << " ";
	}
	cout << endl;
	
	cout << "Ingrese un valor: " << endl;
	int val; cin >> val;
	stringstream ss;
	ss << "Veces que se repite el numero " << val << ": "; 
	cout << ss.str() << count(v.begin(),v.end(),val);
	cout << endl;
	
	//falta el borrado de todas las repeticiones del valor buscado
	auto it2 = v.begin();
	remove(it2,it2+v.size(),val);
	for(int x: v){
		cout << x << " ";
	}
	cout << endl;
	
	return 0;
}

