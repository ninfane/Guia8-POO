#include <iostream>
#include <vector>
using namespace std;

struct FichaMedico {
	string nameMed;
	vector<int> dniPacientes;
};

class Clinica{
private:
	vector<FichaMedico> m_v;
public:
	void CargarMedicos(vector<string> med){
		for(int i=0;i<6;i++) { 
			m_v[i].nameMed = med[i];
		}
	}
	void VerCartilla(){
		for(size_t i=0;i<m_v.size();i++) { 
			cout << m_v[i].nameMed << endl;
			for(size_t j=0;j<m_v[i].dniPacientes.size();j++) { 
				cout << m_v[i].dniPacientes[j] << endl;
			}
		}
	}
	void AgregarPaciente(int pos, int dni){
		pos--;
		m_v[pos].dniPacientes.push_back(dni);
	}
};
	

int main() {
	/*
	vector<string> nombres(6);
	for(string &x: nombres){
		cout << "Ingrese nombre medico" << endl;
		getline(cin, x);
	}
	
	osde.CargarMedicos(nombres);*/
	
	//agregar un paciente
	Clinica osde;
	cout << "Ingrese dni paciente y numero de medico" << endl;
	int dni, num; cin >> dni >> num;
	osde.AgregarPaciente(num,dni);
	
	//mostrar lista de medicos y pacientes
	osde.VerCartilla();
	
	/*
	//eliminar
	cout << "Ingrese dni del paciente a eliminar" << endl;
	int dnie; cin >> dnie;
	osde.EliminarPaciente(dni);*/
	
	return 0;
}

