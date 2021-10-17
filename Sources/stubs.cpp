#include "../Headers/stubs.h"

const string StubServicoAuthentication::INVALID = "";
const string StubServicoPeca::INVALID = "AA1111";
const string StubServicoSessao::INVALID = "AA1111";
const string StubServicoSala::INVALID = "AA1111";
const string StubServicoParticipante::INVALID = "11111";

Result StubServicoAuthentication::authenticate(Email email, Senha senha) throw(runtime_error)
{
  Result result;
  result.setValue(Result::SUCCESS);

  if (email.getEmail().compare(INVALID) == 0)
    result.setValue(Result::FAILURE);
  return result;
}

Result StubServicoPeca::index() throw(runtime_error)
{

  Result result;

  result.setValue(Result::SUCCESS);

  cout << endl
       << "Lista de Pecas." << endl
       << endl;

  cout << "Identificador: AA1234    " << endl;
  cout << "Nome: Peca1        " << endl;
  cout << "Tipo: auto   " << endl;
  cout << "Classificacao: livre      " << endl
       << endl;

  cout << "Identificador: AA1233    " << endl;
  cout << "Nome: Peca2        " << endl;
  cout << "Tipo: drama   " << endl;
  cout << "Classificacao: 18      " << endl
       << endl;

  return result;
}

Result StubServicoPeca::show(const Codigo &identificador) throw(runtime_error)
{

  Result result;

  result.setValue(Result::SUCCESS);

  cout << endl
       << "Nome: Peca1        " << endl;
  cout << "Tipo: auto   " << endl;
  cout << "Classificacao: livre      " << endl
       << endl;

  return result;
}

Result StubServicoPeca::create(const Peca &peca) throw(runtime_error)
{
  Result result;

  result.setValue(Result::SUCCESS);

  if (peca.getIdentificador().getCodigo().compare(INVALID) == 0)
    result.setValue(Result::FAILURE);

  return result;
}

Result StubServicoPeca::update(const Peca &peca) throw(runtime_error)
{
  Result result;

  result.setValue(Result::SUCCESS);

  if (peca.getIdentificador().getCodigo().compare(INVALID) == 0)
    result.setValue(Result::FAILURE);

  return result;
}

Result StubServicoPeca::remove(const Codigo &identificador) throw(runtime_error)
{
  Result result;

  result.setValue(Result::SUCCESS);

  if (identificador.getCodigo().compare(INVALID) == 0)
    result.setValue(Result::FAILURE);

  return result;
}

Result StubServicoSessao::index() throw(runtime_error)
{

  Result result;

  result.setValue(Result::SUCCESS);

  cout << endl
       << "Lista de Sessoes." << endl
       << endl;

  cout << "Identificador: AA1233        " << endl;
  cout << "Nome: Sessao0        " << endl;
  cout << "Data: 04/06/2022   " << endl;
  cout << "Horario: 14:30      " << endl
       << endl;

  cout << "Identificador: AA1234        " << endl;
  cout << "Nome: Sessao1        " << endl;
  cout << "Data: 04/08/2022   " << endl;
  cout << "Horario: 14:15      " << endl
       << endl;

  return result;
}

Result StubServicoSessao::show(const Codigo &identificador) throw(runtime_error)
{

  Result result;

  result.setValue(Result::SUCCESS);

  cout << endl
       << "Nome: Sessao1        " << endl;
  cout << "Data: 04/08/2022   " << endl;
  cout << "Horario: 14:15      " << endl
       << endl;

  return result;
}

Result StubServicoSessao::create(const Sessao &sessao) throw(runtime_error)
{
  Result result;

  result.setValue(Result::SUCCESS);

  if (sessao.getIdentificador().getCodigo().compare(INVALID) == 0)
    result.setValue(Result::FAILURE);

  return result;
}

Result StubServicoSessao::update(const Sessao &sessao) throw(runtime_error)
{
  Result result;

  result.setValue(Result::SUCCESS);

  if (sessao.getIdentificador().getCodigo().compare(INVALID) == 0)
    result.setValue(Result::FAILURE);

  return result;
}

Result StubServicoSessao::remove(const Codigo &identificador) throw(runtime_error)
{
  Result result;

  result.setValue(Result::SUCCESS);

  if (identificador.getCodigo().compare(INVALID) == 0)
    result.setValue(Result::FAILURE);

  return result;
}

Result StubServicoSala::index() throw(runtime_error)
{

  Result result;

  result.setValue(Result::SUCCESS);
  // Nome nome;
  // Capacidade capacidade;
  cout << endl
       << "Lista de Salas." << endl
       << endl;

  cout << "Identificador: AA1233        " << endl;
  cout << "Nome: Sala1   " << endl;
  cout << "Capacidade: 200      " << endl
       << endl;

  cout << "Identificador: AA1234        " << endl;
  cout << "Nome: Sala2   " << endl;
  cout << "Capacidade: 100      " << endl
       << endl;

  return result;
}

Result StubServicoSala::show(const Codigo &identificador) throw(runtime_error)
{

  Result result;

  result.setValue(Result::SUCCESS);

  cout << endl
       << "Nome: Sala2   " << endl;
  cout << "Capacidade: 100      " << endl
       << endl;

  return result;
}

Result StubServicoSala::create(const Sala &sala) throw(runtime_error)
{
  Result result;

  result.setValue(Result::SUCCESS);

  if (sala.getIdentificador().getCodigo().compare(INVALID) == 0)
    result.setValue(Result::FAILURE);

  return result;
}

Result StubServicoSala::update(const Sala &sala) throw(runtime_error)
{
  Result result;

  result.setValue(Result::SUCCESS);

  if (sala.getIdentificador().getCodigo().compare(INVALID) == 0)
    result.setValue(Result::FAILURE);

  return result;
}

Result StubServicoSala::remove(const Codigo &identificador) throw(runtime_error)
{
  Result result;

  result.setValue(Result::SUCCESS);

  if (identificador.getCodigo().compare(INVALID) == 0)
    result.setValue(Result::FAILURE);

  return result;
}

Result StubServicoParticipante::create(const Participante &participante) throw(runtime_error)
{
  Result result;

  result.setValue(Result::SUCCESS);

  if (participante.getMatricula().getMatricula().compare(INVALID) == 0)
    result.setValue(Result::FAILURE);

  return result;
}

Result StubServicoParticipante::update(const Participante &participante) throw(runtime_error)
{
  Result result;

  result.setValue(Result::SUCCESS);

  if (participante.getMatricula().getMatricula().compare(INVALID) == 0)
    result.setValue(Result::FAILURE);

  return result;
}

Result StubServicoParticipante::remove(const Matricula &identificador) throw(runtime_error)
{
  Result result;

  result.setValue(Result::SUCCESS);

  if (identificador.getMatricula().compare(INVALID) == 0)
    result.setValue(Result::FAILURE);

  return result;
}
