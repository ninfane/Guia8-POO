#include <iostream>
#include <map>
using namespace std;

int main() {
	
	map<string,int> m;
	m["marina"] = 26;
	m["gabriel"] = 28;
	
	for(auto &p : m){
		cout << p.first << ": " << p.second << endl;
	}
	
	return 0;
}

