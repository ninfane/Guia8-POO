#include <iostream>
#include <list>
#include <numeric>
using namespace std;

int main() {
	
	list<float> l = {1,2,3,4,5};
	
	for(float x: l){
		cout << x << " ";
	}
	cout << endl;
	
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
	
	
	for(float x: l){
		cout << x << " ";
	}
	cout << endl;
	
	return 0;
}

