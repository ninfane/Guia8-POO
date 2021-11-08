#include <iostream>
#include <vector>
using namespace std;

struct FichaMedico {
	string nombreMed;
	vector<int> dniPac;
};

class Clinica{
private:
	vector<FichaMedico> m_v;
public:
	Clinica(const vector<string> &medicos){
		int size = medicos.size();
		m_v.resize(size);
		for(int i=0;i<size;i++) { 
			m_v[i].nombreMed = medicos[i];
		}
	}
	string VerMedico(int i) const {
		return m_v[i-1].nombreMed;
	}
	void AgregarPaciente(int dni, int med){
		m_v[med-1].dniPac.push_back(dni);
	}
};

int main() {
	
	return 0;
}

