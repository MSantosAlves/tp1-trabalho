#ifndef CONTROLLER_H_INCLUDED
#define CONTROLLER_H_INCLUDED

#include "entities.h"
#include "interfaces.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>

using namespace std;

class CntrIApresentacaoAuthentication : public IApresentacaoAuthentication
{

private:
  const static int RETURN = 0;
  const static int AUTHENTICATE = 1;

  IServicoAuthentication *cntrServicoAuthentication;

  Result authenticate();

public:
  Result execute(const Result &);

  void setCntrServicoAuthentication(IServicoAuthentication *cntrServicoAuthentication)
  {
    this->cntrServicoAuthentication = cntrServicoAuthentication;
  }
};

class CntrIApresentacaoPeca : public IApresentacaoPeca
{

private:
  const static int RETURN = 0;
  const static int INDEX = 1;
  const static int CREATE = 2;
  const static int UPDATE = 3;
  const static int SHOW = 4;
  const static int REMOVE = 5;

  IServicoPeca *cntrServicoPeca;

  void index();
  void create();
  void update();
  void show();
  void remove();

public:
  void execute(const Result &);

  void setCntrServicoPeca(IServicoPeca *cntrServicoPeca)
  {
    this->cntrServicoPeca = cntrServicoPeca;
  }
};

class CntrIApresentacaoParticipante : public IApresentacaoParticipante
{

private:
  const static int RETURN = 0;
  const static int CREATE = 1;
  const static int UPDATE = 2;
  const static int REMOVE = 3;

  IServicoParticipante *cntrServicoParticipante;

  void create();
  void update();
  void remove();

public:
  void execute(const Result &);

  void setCntrServicoParticipante(IServicoParticipante *cntrServicoParticipante)
  {
    this->cntrServicoParticipante = cntrServicoParticipante;
  }
};

class CntrIApresentacaoSala : public IApresentacaoSala
{

private:
  const static int RETURN = 0;
  const static int INDEX = 1;
  const static int CREATE = 2;
  const static int UPDATE = 3;
  const static int SHOW = 4;
  const static int REMOVE = 5;

  IServicoSala *cntrServicoSala;

  void index();
  void create();
  void update();
  void show();
  void remove();

public:
  void execute(const Result &);

  void setCntrServicoSala(IServicoSala *cntrServicoSala)
  {
    this->cntrServicoSala = cntrServicoSala;
  }
};

class CntrIApresentacaoSessao : public IApresentacaoSessao
{

private:
  const static int RETURN = 0;
  const static int INDEX = 1;
  const static int CREATE = 2;
  const static int UPDATE = 3;
  const static int SHOW = 4;
  const static int REMOVE = 5;

  IServicoSessao *cntrServicoSessao;

  void index();
  void create();
  void update();
  void show();
  void remove();

public:
  void execute(const Result &);

  void setCntrServicoSessao(IServicoSessao *cntrServicoSessao)
  {
    this->cntrServicoSessao = cntrServicoSessao;
  }
};

#endif
