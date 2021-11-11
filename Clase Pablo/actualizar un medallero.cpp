#include <iostream>
#include <fstream>
#include <map>
using namespace std;

struct Medallas {
	int oro, plata, bronce;
};

map<string,Medallas> cargar_medallero(string name){
	map<string,Medallas> m;
	ifstream f(name);
	Medallas aux; string pais;
	while(f>>aux.oro and f>>aux.plata and f>>aux.bronce and f.ignore() and getline(f,pais)){
		m[pais] = aux;
	}
	return m;
}

void guardar_medallero(const map<string,Medallas> &m){
	ofstream f2("medallas.txt",ios::trunc);
	for(auto p : m ){
		f2 << p.second.oro << " " << p.second.plata << " "
			<< p.second.bronce << " " << p.first << endl;
	}
}	
	
int main() {
	
	map<string,Medallas> m = cargar_medallero("medallas.txt");
	
	string p_oro, p_plata, p_bronce;
	getline(cin,p_oro);
	getline(cin,p_plata);
	getline(cin,p_bronce);
	
	m[p_oro].oro++;
	m[p_plata].plata++;
	m[p_bronce].bronce++;
	
	guardar_medallero(m);
	
	return 0;
}

