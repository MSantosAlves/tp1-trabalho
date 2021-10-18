#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include <string>
#include "domains.h"
#include "interfaces.h"
#include "entities.h"

using namespace std;

class StubServicoAuthentication : public IServicoAuthentication
{
private:
  static const string INVALID;

public:
  Result authenticate(Email, Senha) throw(runtime_error);
};

class StubServicoPeca : public IServicoPeca
{
private:
  static const string INVALID;

public:
  Result index() throw(runtime_error);
  Result show(const Codigo &) throw(runtime_error);
  Result create(const Peca &) throw(runtime_error);
  Result update(const Peca &) throw(runtime_error);
  Result remove(const Codigo &) throw(runtime_error);
};

class StubServicoSessao : public IServicoSessao
{
private:
  static const string INVALID;

public:
  Result index() throw(runtime_error);
  Result show(const Codigo &) throw(runtime_error);
  Result create(const Sessao &) throw(runtime_error);
  Result update(const Sessao &) throw(runtime_error);
  Result remove(const Codigo &) throw(runtime_error);
};

class StubServicoSala : public IServicoSala
{
private:
  static const string INVALID;

public:
  Result index() throw(runtime_error);
  Result show(const Codigo &) throw(runtime_error);
  Result create(const Sala &) throw(runtime_error);
  Result update(const Sala &) throw(runtime_error);
  Result remove(const Codigo &) throw(runtime_error);
};

class StubServicoParticipante : public IServicoParticipante
{
private:
  static const string INVALID;

public:
  Result create(const Participante &) throw(runtime_error);
  Result update(const Participante &) throw(runtime_error);
  Result remove(const Matricula &) throw(runtime_error);
};

#endif; // STUBS_H_INCLUDED
