#include <iostream>
#include <list>
#include <numeric>
using namespace std;

int main() {
	
	list<float> a;
	cout << "Ingrese un flotante" << endl;
	float x; cin >> x;
	while(x!=0){
		a.push_back(x);
		cin >> x;
	}
	
	//muestro la lista
	for(list<float>::iterator it=a.begin(); it!=a.end();++it){
		cout << *it << " ";
	}
	cout << endl;
	
	
	return 0;
}

