#include <stdexcept>
#include <iostream>
#include <string>

#include "../Headers/domainTest.h"
#include "../Headers/entityTest.h"

using namespace std;

int main(){
  TU_Codigo Codigo;
  TU_Capacidade Capacidade;
  TU_Cargo Cargo;
  TU_Classificacao Classificacao;
  TU_Email Email;
  TU_Horario Horario;
  TU_Matricula Matricula;
  TU_Nome Nome;
  TU_Senha Senha;
  TU_Telefone Telefone;
  TU_Tipo Tipo;

  // SUCCESS CASES -> IT SHOULD RETURN SUCCESS IN ALL SPECS
  cout << "DOMAIN TESTS (SUCCESS CASES) -> IT SHOULD RETURN SUCCESS IN ALL SPECS" << "\n\n";
  Codigo.run("SUCCESS");
  Capacidade.run("SUCCESS");
  Cargo.run("SUCCESS");
  Classificacao.run("SUCCESS");
  Email.run("SUCCESS");
  Horario.run("SUCCESS");
  Matricula.run("SUCCESS");
  Nome.run("SUCCESS");
  Senha.run("SUCCESS");
  Telefone.run("SUCCESS");
  Tipo.run("SUCCESS");

  // FAILURE CASES -> IT SHOULD RETURN FAILURE IN ALL SPECS
  cout << "\n" <<  "DOMAIN TESTS (FAILURE CASES) -> IT SHOULD RETURN FAILURE IN ALL SPECS" << "\n\n";
  Codigo.run("FAILURE");
  Capacidade.run("FAILURE");
  Cargo.run("FAILURE");
  Classificacao.run("FAILURE");
  Email.run("FAILURE");
  Horario.run("FAILURE");
  Matricula.run("FAILURE");
  Nome.run("FAILURE");
  Senha.run("FAILURE");
  Telefone.run("FAILURE");
  Tipo.run("FAILURE");

  cout <<  "\n" << "Entity TESTS (SUCCESS CASES) -> IT SHOULD RETURN SUCCESS IN ALL SPECS" << "\n\n";

  TU_Participante Participante;
  TU_Sessao Sessao;
  TU_Peca Peca;
  TU_Sala Sala;

  Participante.run();
  Sessao.run();
  Peca.run();
  Sala.run();

  return 0;
}
