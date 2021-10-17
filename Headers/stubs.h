#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include <string>
#include "domains.h"
#include "interfaces.h"

using namespace std;

class StubServicoAuthentication : public IServicoAuthentication
{
private:
  static const string INVALID;

public:
  Result authenticate(Email, Senha);
};

class StubServicoPeca : public IServicoPeca
{
private:
  static const string INVALID;

public:
  Result index();
  Result show(const Codigo &);
  Result create(const Peca &);
  Result update(const Peca &);
  Result remove(const Codigo &);
};

class StubServicoSessao : public IServicoSessao
{
private:
  static const string INVALID;

public:
  Result index();
  Result show(const Codigo &);
  Result create(const Sessao &);
  Result update(const Sessao &);
  Result remove(const Codigo &);
};

class StubServicoSala : public IServicoSala
{
private:
  static const string INVALID;

public:
  Result index();
  Result show(const Codigo &);
  Result create(const Sala &);
  Result update(const Sala &);
  Result remove(const Codigo &);
};

class StubServicoParticipante : public IServicoParticipante
{
private:
  static const string INVALID;

public:
  Result create(const Participante &);
  Result update(const Participante &);
  Result remove(const Matricula &);
};

#endif;