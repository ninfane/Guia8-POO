#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

struct dummy {
	string name;
	vector<int> v;
};

int main() {
	
	vector<dummy> mydum(5);
	for(dummy &x: mydum){
		cout << "Ingrese nombre" << endl;
		cin >> x.name;
	}
	
	vector<int> aux;
	for(int i=0;i<10;i++) { 
		aux.push_back(rand()%10);
	}
	
	mydum[1].v = aux;
	for(int j=0;j<10;j++) { 
		cout << mydum[1].v[j] << endl;
	}
	
	return 0;
}

