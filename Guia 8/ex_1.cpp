#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
	
	vector<int> v;
	
	cout << "Ingrese valores: " << endl;
	//son 15, puse 5 porque fiaca
	for(int i=0;i<5;i++) { 
		int x; cin >> x; v.push_back(x);
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
	
	int sum = accumulate(v.begin(),v.end(),0);
	cout << "Suma: " << sum << endl;
	
	cout << "Promedio: " << sum/v.size() << endl;
	
	//Me falta la mediana
	
	return 0;
}

