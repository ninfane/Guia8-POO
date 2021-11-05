#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cstdlib>
using namespace std;

int main() {
	
	vector<int> v;
	
	for(int i=0;i<15;i++) { 
		v.push_back(rand()%101);
	}
	
	//metodos para mostrar, todos funcionan
	//pero la sobrecarga de corchetes solo funciona con vector
	// y no con otro tipo de contenedores
	for(size_t i=0;i<v.size();i++) { 
		cout << v[i] << " ";
	} 
	cout << endl;
	
	for(int &x: v){
		cout << x << " ";
	}
	cout << endl;
	
	for(vector<int>::iterator it=v.begin();it!=v.end();++it){
		cout << *it << " ";
	}
	cout << endl;
	
	//mostrar el mayor del array 
	cout << "Maximo: " << *max_element(v.begin(),v.end()) << endl;
	cout << "Minimo: " << *min_element(v.begin(),v.end()) << endl;
	
	float sum = accumulate(v.begin(),v.end(),0.0);
	cout << "Suma: " << sum << endl;
	cout << "Promedio: " << sum/v.size() << endl;
	
	//Mediana 
	sort(v.begin(),v.end());
	//dos formas de ver la mediana
	cout << "Mediana: " << v[v.size()/2] << endl;
	cout << "Mediana: " << *(v.begin()+v.size()/2) << endl; 
	
	//Ingresar un valor y buscar 
	cout << "Ingrese un valor" << endl;
	int x; cin >> x;
	
	auto it = find(v.begin(),v.end(),x);
	//porque el v.end() no esta incluida, entonces si llega hasta ahi 
	//es porque ahi no esta
	//funciona como valor especial para saber que no esta
	cout << "vector ordenado: " << endl;
	for(int &x: v){
		cout << x << " ";
	}
	cout << endl;
	
	if(it==v.end()){
		cout << "No esta" << endl;
	} else { 
		cout << "Esta en la posicion: " << it-v.begin()+1 << endl;
	}
	
	return 0;
}

