#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "entities.h"
#include <stdexcept>

using namespace std;

class IServicoAuthentication;
class IServicoPeca;
class IServicoSessao;
class IServicoParticipante;
class IServicoSala;

class IApresentacaoAuthentication
{
public:
  virtual Result execute(const Result &);

  virtual void setCntrServicoAuthentication(IServicoAuthentication *) = 0;

  virtual ~IApresentacaoAuthentication() {}
};

class IApresentacaoPeca
{
public:
  virtual void execute(const Result &) = 0;

  virtual void setCntrServicoPeca(IServicoPeca *) = 0;

  virtual ~IApresentacaoPeca() {}
};

class IApresentacaoSessao
{
public:
  virtual void execute(const Result &) = 0;

  virtual void setCntrServicoSessao(IServicoSessao *) = 0;

  virtual ~IApresentacaoSessao() {}
};

class IApresentacaoParticipante
{
public:
  virtual void execute(const Result &) = 0;

  virtual void setCntrServicoParticipante(IServicoParticipante *) = 0;

  virtual ~IApresentacaoParticipante() {}
};

class IApresentacaoSala
{
public:
  virtual void execute(const Result &) = 0;

  virtual void setCntrServicoSala(IServicoSala *) = 0;

  virtual ~IApresentacaoSala() {}
};

class IServicoAuthentication
{
public:
  virtual Result authenticate(const Email &, const Senha &) throw(runtime_error);

  virtual ~IServicoAuthentication() {}
};

class IServicoPeca
{
public:
  virtual Result index() throw(runtime_error) = 0;
  virtual Result show(const Codigo &) throw(runtime_error) = 0;
  virtual Result create(const Peca &) throw(runtime_error) = 0;
  virtual Result update(const Peca &) throw(runtime_error) = 0;
  virtual Result remove(const Codigo &) throw(runtime_error) = 0;

  virtual ~IServicoPeca() {}
};

class IServicoSessao
{
public:
  virtual Result index() throw(runtime_error) = 0;
  virtual Result show(const Codigo &) throw(runtime_error) = 0;
  virtual Result create(const Sessao &) throw(runtime_error) = 0;
  virtual Result update(const Sessao &) throw(runtime_error) = 0;
  virtual Result remove(const Codigo &) throw(runtime_error) = 0;

  virtual ~IServicoSessao() {}
};

class IServicoSala
{
public:
  virtual Result index() throw(runtime_error) = 0;
  virtual Result show(const Codigo &) throw(runtime_error) = 0;
  virtual Result create(const Sala &) throw(runtime_error) = 0;
  virtual Result update(const Sala &) throw(runtime_error) = 0;
  virtual Result remove(const Codigo &) throw(runtime_error) = 0;

  virtual ~IServicoSala() {}
};

class IServicoParticipante
{
public:
  virtual Result create(const Participante &) throw(runtime_error) = 0;
  virtual Result update(const Participante &) throw(runtime_error) = 0;
  virtual Result remove(const Matricula &) throw(runtime_error) = 0;

  virtual ~IServicoParticipante() {}
};

#endif // INTERFACES_H_INCLUDED
