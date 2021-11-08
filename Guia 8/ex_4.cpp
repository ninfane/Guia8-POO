#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <tuple>
using namespace std;

template<typename T>
void mostrar(const T &v){
	for(int x : v) cout << x << " ";
	cout << endl;
}
	
int rand10(){
	int r = (rand()%20)-10;
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

tuple<int*,int> borrar_rep(int v[20]){
	vector<int> aux;
	for(int i=0;i<20;i++) { 
		aux.push_back(*(v+i));
	}
	int size = aux.size();
	auto it_rep = unique(aux.begin(),aux.end());
	aux.erase(it_rep,aux.end());
	
	int *my_new = new int[size];
	for(int i=0;i<size;i++) { 
		*(my_new+i) = aux[i];
	}
	return make_tuple(my_new,size);
}
	
int main() {
	
	int v[20];
	for(int i=0;i<20;i++) { 
		int x = rand10();
		*(v+i) = x;
	}
	mostrar(v);
	
	auto it = v;
	cout << "Cantidad de pares: " << count_if(it,it+20,es_par) << endl; 
	
	sort(it,it+20,menor_abs);
	cout << "Ordenado por valor absoluto: " << endl;
	mostrar(v);
	
	int *v2, size; tie(v2,size) = borrar_rep(v);
	for(int i=0;i<size;i++) { 
		cout << *(v2+i) << " ";
	}
	cout << endl;
	
	
	return 0;
}

