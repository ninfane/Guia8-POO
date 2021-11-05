#include <iostream>
#include <vector>
#include <list>
using namespace std;

template<typename T>
void agregar_promedios(T &v){
	
}

int main() {
	
	list<float> l(6);
	for(float &x: l) x = rand()%100/10.0;
	
	agregar_promedios(l);
	
	return 0;
}

