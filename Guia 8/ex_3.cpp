#include <iostream>
#include <list>
#include <numeric>
#include <fstream>
using namespace std;

void insertar(list<float> &l){
	auto it = l.begin();
	auto it2 = next(it);
	float aux = accumulate(it,it2,0.0)/2.0;
	it = l.insert(it2,aux);
	
	for(int i=0;i<3;i++) { 
		auto it2 = next(it);
		auto it3 = next(it,2);
		float aux = accumulate(it2,it3,0.0)/2.0;
		it = l.insert(it3,aux);
	}
}

void transcribir(list<float> l){
	ofstream archi("listafloat.txt");
	if(!archi.is_open()){
		cout << "error";
	}
	
	for(float &x: l){
		archi << x << " ";
	}
	
	archi.close();
}	
	
int main() {
	
	list<float> l;
	cout << "Ingrese un flotante" << endl;
	float x; cin >> x;
	while(x!=0){
		l.push_back(x);
		cin >> x;
	}
	
	//muestro la lista
	for(list<float>::iterator it=l.begin(); it!=l.end();++it){
		cout << *it << " ";
	}
	cout << endl;
	
	insertar(l);
	transcribir(l);
	
	return 0;
}

