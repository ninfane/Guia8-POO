#include <iostream>
#include <list>
#include <numeric>
using namespace std;

int main() {
	
	list<float> a = {1,2,3,4,5};
	
	for(float x: a){
		cout << x << " ";
	}
	cout << endl;
	
	auto it = next(a.begin());
	float prom = accumulate(a.begin(),it,0);
	prom = prom/2.0;
	it = a.insert(it,prom);
	
	for(float x: a){
		cout << x << " ";
	}
	cout << endl;
	
	return 0;
}

