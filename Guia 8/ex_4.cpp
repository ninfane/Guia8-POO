#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;

int rand10(){
	//no me acuerdo como poner el rango del aleatorio jeje
	//pero es -10 a 10 
	int r = -1+(rand()%10);
	return r;
}
	
bool es_par(int i){
	if(i%2==0) return true;
	else return false;
}
	
bool menor_abs(int a,int b){
	int absa = abs(a); int absb = abs(b);
	if(absa<absb) return true;
	else return false;
}

int main() {
	
	int v[20];
	for(int i=0;i<20;i++) { 
		int x = rand10();
		*(v+i) = x;
	}
	
	for(int i=0;i<20;i++) { 
		cout << *(v+i) << " ";
	}
	cout << endl;
	
	auto it = v;
	cout << "Cantidad de pares: " << count_if(it,it+20,es_par) << endl; 
	
	//me queda un nro. con signo negativo 
	sort(it,it+20,menor_abs);
	for(int &x: v){
		cout << x << " ";
	}
	cout << endl;
	
	//no se como hacerlo porque el algoritmo no sirve con 
	//el vector estatico
	auto it_rep = unique(it,it+20);
	v.erase(it_rep,it+20);
	
	for(int x: v){
		cout << x << " ";
	}
	cout << endl;
	
	return 0;
}

