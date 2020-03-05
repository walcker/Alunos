#ifndef ALUNO_H //não importar novamente aluno.h
#define ALUNO_H

//using namespace std; ou >definição da classe<
using std::cout;
using std::endl;
using std::string;
//cout << x << endl;//

class Aluno {

private:
  string matricula;
  short idade;
  string nome;
  
public:
  string getMatricula();
  void setMatricula(string var_matricula);
  short getIdade();
  void setIdade(short var_idade);
  string getNome();
  void setNome(string var_nome);
};

#endif