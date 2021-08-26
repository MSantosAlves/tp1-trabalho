#include "../headers/entityTest.h"

void TU_Participante::setUp()
{
  participante = new Participante;
	matricula = new Matricula;
	matricula->setMatricula(MATRICULA_PARTICIPANTE);
  
  nome = new Nome;
	nome->setNome(NOME_PARTICIPANTE);

  sobrenome = new Nome;
	sobrenome->setNome(SOBRENOME_PARTICIPANTE);

  email = new Email;
	email->setEmail(EMAIL_PARTICIPANTE);

  telefone = new Telefone;
	telefone->setTelefone(TELEFONE_PARTICIPANTE);

  senha = new Senha;
	senha->setSenha(SENHA_PARTICIPANTE);

  cargo = new Cargo;
	cargo->setCargo(CARGO_PARTICIPANTE);
	
  state = SUCCESS;
}

void TU_Participante::tearDown()
{
  delete participante;
  delete matricula;
	delete nome;
	delete sobrenome;
	delete email;
	delete telefone;
	delete senha;
	delete cargo;
}

void TU_Participante::testSuccess()
{
	participante->setMatricula(*matricula);
	if (participante->getMatricula().getMatricula() != matricula->getMatricula())
		state = FAILURE;

  participante->setNome(*nome);
	if (participante->getNome().getNome() != nome->getNome())
		state = FAILURE;

  participante->setSobrenome(*sobrenome);
	if (participante->getSobrenome().getNome() != sobrenome->getNome())
		state = FAILURE;

  participante->setEmail(*email);
	if (participante->getEmail().getEmail() != email->getEmail())
		state = FAILURE;

  participante->setTelefone(*telefone);
	if (participante->getTelefone().getTelefone() != telefone->getTelefone())
		state = FAILURE;
  
  participante->setSenha(*senha);
	if (participante->getSenha().getSenha() != senha->getSenha())
		state = FAILURE;

  participante->setCargo(*cargo);
	if (participante->getCargo().getCargo() != cargo->getCargo())
		state = FAILURE;
}

void TU_Participante::run()
{
  cout << "Entity Test - Participante\n";
  setUp();
  testSuccess();

  tearDown();
  if (state == SUCCESS)
    cout << "Entity Test (Participante) -> SUCCESS!\n";
  else
    cout << "Entity Test (Participante) -> FAILURE!\n";
}

void TU_Sessao::setUp()
{
  sessao = new Sessao;
	identificador = new Codigo;
	identificador->setCodigo(IDENTIFICADOR_SESSAO);
  
  data = new Data;
	data->setData(DATA_SESSAO);

  horario = new Horario;
	horario->setHorario(HORARIO_SESSAO);
	
  state = SUCCESS;
}

void TU_Sessao::tearDown()
{
  delete sessao;
  delete identificador;
	delete data;
	delete horario;
}

void TU_Sessao::testSuccess()
{
	sessao->setIdentificador(*identificador);
	if (sessao->getIdentificador().getIdentificador() != identificador->getIdentificador())
		state = FAILURE;

  sessao->setData(*data);
	if (sessao->getData().getData() != data->getData())
		state = FAILURE;

  sessao->setHorario(*horario);
	if (sessao->getHorario().getHorario() != horario->getHorario())
		state = FAILURE;
}

void TU_Sessao::run()
{
  cout << "Entity Test - Sessao\n";
  setUp();
  testSuccess();

  tearDown();
  if (state == SUCCESS)
    cout << "Entity Test (Sessao) -> SUCCESS!\n";
  else
    cout << "Entity Test (Sessao) -> FAILURE!\n";
}

void TU_Sala::setUp()
{
  sala = new Sala;
	codigo = new Codigo;
	codigo->setCodigo(COD_SALA);
  
  nome = new Nome;
	nome->setNome(NOME_SALA);

  capacidade = new Capacidade;
	capacidade->setCapacidade(CAPACIDADE_SALA);
	
  state = SUCCESS;
}

void TU_Sala::tearDown()
{
  delete sala;
  delete codigo;
	delete nome;
	delete capacidade;
}

void TU_Sala::testSuccess()
{
	sala->setIdentificador(*codigo);
	if (sala->getIdentificador().getCodigo() != codigo->getCodigo())
		state = FAILURE;

  sala->setNome(*nome);
	if (sala->getNome().getNome() != nome->getNome())
		state = FAILURE;

  sala->setCapacidade(*capacidade);
	if (sala->getCapacidade().getCapacidade() != capacidade->getCapacidade())
		state = FAILURE;
}

void TU_Sala::run()
{
  cout << "Entity Test - Sala\n";
  setUp();
  testSuccess();

  tearDown();
  if (state == SUCCESS)
    cout << "Entity Test (Sala) -> SUCCESS!\n";
  else
    cout << "Entity Test (Sala) -> FAILURE!\n";
}

void TU_Peca::setUp()
{
  peca = new Peca;
	codigo = new Codigo;
	codigo->setCodigo(COD_PECA);
  
  nome = new Nome;
	nome->setNome(NOME_PECA);

  tipo = new Tipo;
	tipo->setTipo(TIPO_PECA);

  classificacao = new Classificacao;
	classificacao->setClassificacao(CLASSIFICACAO_PECA);
	
  state = SUCCESS;
}

void TU_Peca::tearDown()
{
  delete peca;
  delete codigo;
	delete nome;
	delete tipo;
  delete classificacao;
}

void TU_Peca::testSuccess()
{
	peca->setIdentificador(*codigo);
	if (peca->getIdentificador().getCodigo() != codigo->getCodigo())
		state = FAILURE;

  peca->setNome(*nome);
	if (peca->getNome().getNome() != nome->getNome())
		state = FAILURE;

  peca->setTipo(*tipo);
	if (peca->getTipo().getTipo() != tipo->getTipo())
		state = FAILURE;

  peca->setClassificacao(*classificacao);
	if (peca->getClassificacao().getClassificacao() != classificacao->getClassificacao())
		state = FAILURE;
 
}

void TU_Peca::run()
{
  cout << "Entity Test - Peca\n";
  setUp();
  testSuccess();

  tearDown();
  if (state == SUCCESS)
    cout << "Entity Test (Peca) -> SUCCESS!\n";
  else
    cout << "Entity Test (Peca) -> FAILURE!\n";
}