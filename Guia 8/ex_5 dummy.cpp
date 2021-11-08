#include <iostream>
#include <vector>
using namespace std;

struct Curso {
	string docente; 
	vector<int> notas;
};

class Colegio {
private:
	vector<Curso> m_v;
public:
	Colegio(const vector<string> &docentes){
		int size = docentes.size();
		m_v.resize(size);
		for(int i=0;i<size;i++) { 
			m_v[i].docente = docentes[i];
		}
	}
	string VerDocente(int i) const {
		return m_v[i-1].docente;
	}
};

int main() {
	
	vector<string> doc;
	
	cout << "Ingrese docente" << endl;
	string n; getline(cin,n);
	while(n!="."){
		doc.push_back(n);
		cout << "Ingrese docente" << endl;
		getline(cin,n);
	}
	
	Colegio ISA(doc);
	
	
	return 0;
}

