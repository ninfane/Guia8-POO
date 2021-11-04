#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	vector<int> v;
	
	cout << "Ingrese valores: " << endl;
	for(int i=0;i<15;i++) { 
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
	
	return 0;
}

