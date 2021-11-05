#include <iostream>
#include <list>
#include <vector>
#include <cstdlib>
using namespace std;

template<typename T>
void ordenar(vector<T> &v){
	sort(v.begin(),v.end());
}

template<typename T>
void ordenar(list<T> &l){
	l.sort();
}	
int main() {
	
	list<int> v;
	for(int i=0;i<10;i++) { 
		v.push_back(rand()%101);
	}
	
	ordenar(v);
	for(int &x: v){
		cout << x << " ";
	}
	
	return 0;
}

