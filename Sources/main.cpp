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
  IServicoParticipante *stubServicoParticipante;
  IServicoPeca *stubServicoPeca;
  IServicoSala *stubServicoSala;
  IServicoSessao *stubServicoSessao;

  // Controllers da camada de apresentacao
  cntrApresentacaoParticipante = new CntrIApresentacaoParticipante();
  cntrApresentacaoPeca = new CntrIApresentacaoPeca();
  cntrApresentacaoSessao = new CntrIApresentacaoSessao();
  cntrApresentacaoSala = new CntrIApresentacaoSala();

  // Stubs da camada de servico
  stubServicoParticipante = new StubServicoParticipante();
  stubServicoPeca = new StubServicoPeca();
  stubServicoSala = new StubServicoSala();
  stubServicoSessao = new StubServicoSessao();

  cntrApresentacaoParticipante->setCntrServicoParticipante(stubServicoParticipante);

  Result resultAuthentication;
  resultAuthentication.setValue(Result::FAILURE);

  delete cntrApresentacaoParticipante;
  delete cntrApresentacaoPeca;
  delete cntrApresentacaoSessao;
  delete cntrApresentacaoSala;

  delete stubServicoParticipante;
  delete stubServicoPeca;
  delete stubServicoSala;
  delete stubServicoSessao;

  return 0;
}
