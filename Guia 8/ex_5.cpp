#include <iostream>
#include <vector>
using namespace std;

struct FichaMedico{
	string nombre;
	vector<int> dniPacientes;
};

class Clinica{
private:
	vector<FichaMedico> m_v; //6 medicos
public:
	void AgregarPaciente(int dni, int med){
		m_v[med-1].dniPacientes.push_back(dni);
	}
	void VerMedico(int med) const {
		cout << "Nombre: " << m_v[med-1].nombre << endl;
		cout << "Pacientes: " << endl;
		for(size_t i=0;i<m_v[med-1].dniPacientes.size();i++) { 
			cout << m_v[med-1].dniPacientes[i] << endl;
		}
	}
};

int main() {
	
	//nada funciona
	Clinica c;
	c.AgregarPaciente(39091351, 1);
	c.VerMedico(1);
	
	return 0;
}

