#include <stdexcept>
#include <iostream>
#include <string>

#include "../Headers/interfaces.h"
#include "../Headers/controller.h"
#include "../Headers/stubs.h"

using namespace std;

int main()
{
  IApresentacaoParticipante *cntrApresentacaoParticipante;
  IApresentacaoPeca *cntrApresentacaoPeca;
  IApresentacaoSessao *cntrApresentacaoSessao;
  IApresentacaoSala *cntrApresentacaoSala;
  IApresentacaoAuthentication *cntrApresentacaoAuthentication;
  IServicoParticipante *stubServicoParticipante;
  IServicoPeca *stubServicoPeca;
  IServicoSala *stubServicoSala;
  IServicoSessao *stubServicoSessao;
  IServicoAuthentication *stubServicoAuthentication;

  // Controllers da camada de apresentacao
  cntrApresentacaoParticipante = new CntrIApresentacaoParticipante();
  cntrApresentacaoPeca = new CntrIApresentacaoPeca();
  cntrApresentacaoSessao = new CntrIApresentacaoSessao();
  cntrApresentacaoSala = new CntrIApresentacaoSala();
  cntrApresentacaoAuthentication = new CntrIApresentacaoAuthentication();

  // Stubs da camada de servico
  stubServicoParticipante = new StubServicoParticipante();
  stubServicoPeca = new StubServicoPeca();
  stubServicoSala = new StubServicoSala();
  stubServicoSessao = new StubServicoSessao();
  stubServicoAuthentication = new StubServicoAuthentication();

  cntrApresentacaoParticipante->setCntrServicoParticipante(stubServicoParticipante);

  Result resultAuthentication;
  resultAuthentication.setValue(Result::FAILURE);

  const static int AUTENTICACAO = 1;
  const static int PARTICIPANTE = 2;
  const static int PECAS = 3;
  const static int SESSOES = 4;
  const static int SALAS = 5;
  int opcao;

  while (true)
  {
    system("CLS");
    cout << "\nSelecione uma opcao: \n\n";

    cout << "Menu de Autenticacao - " << AUTENTICACAO << endl;
    cout << "Menu de Paticipante  - " << PARTICIPANTE << endl;
    cout << "Menu de Pecas        - " << PECAS << endl;
    cout << "Menu de Sessoes      - " << SESSOES << endl;
    cout << "Menu de Salas        - " << SALAS << endl;

    cin >> opcao;

    if (opcao < AUTENTICACAO || opcao > SALAS)
    {
      cout << "Selecione uma opcao valida." << endl;
      system("PAUSE");
    }
    else
      switch (opcao)
      {
      case AUTENTICACAO:
        resultAuthentication = cntrApresentacaoAuthentication->execute(resultAuthentication);
        break;
      case PARTICIPANTE:
        cntrApresentacaoParticipante->execute(resultAuthentication);
        break;
      case PECAS:
        cntrApresentacaoPeca->execute(resultAuthentication);
        break;
      case SESSOES:
        cntrApresentacaoSessao->execute(resultAuthentication);
        break;
      case SALAS:
        cntrApresentacaoSala->execute(resultAuthentication);
        break;
      }
  }

  delete cntrApresentacaoParticipante;
  delete cntrApresentacaoPeca;
  delete cntrApresentacaoSessao;
  delete cntrApresentacaoSala;
  delete cntrApresentacaoAuthentication;

  delete stubServicoParticipante;
  delete stubServicoPeca;
  delete stubServicoSala;
  delete stubServicoSessao;
  delete stubServicoAuthentication;

  return 0;
}
