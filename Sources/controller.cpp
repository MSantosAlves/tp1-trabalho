#include "../Headers/controller.h"
#include <stdlib.h>

Result CntrIApresentacaoAuthentication::execute(const Result &result)
{

  int opcao;
  Result resultAuthentication;
  resultAuthentication.setValue(Result::FAILURE);

  while (true)
  {

    system("CLS");

    cout << endl
         << "Servico de autenticacao: " << endl
         << endl;

    cout << "Autenticar   - " << AUTHENTICATE << endl;
    cout << "Retornar     - " << RETURN << endl
         << endl;
    cout << "Selecione uma opcao : ";

    cin >> opcao;

    switch (opcao)
    {
    case AUTHENTICATE:
      resultAuthentication = authenticate();
      break;
    }

    if (opcao == RETURN)
      return resultAuthentication;
  }

  return resultAuthentication;
}

Result CntrIApresentacaoAuthentication::authenticate()
{

  Result result;
  Email email;
  Senha senha;
  string input;

  while (true)
  {
    cout << endl
         << "Autenticar usuario: " << endl
         << endl;
    try
    {
      cout << "Digite o Email: ";
      cin >> input;
      email.setEmail(input);
      cout << "Digite a senha: ";
      cin >> input;
      senha.setSenha(input);
      break;
    }
    catch (const invalid_argument &exp)
    {
      cout << endl
           << "Entrada invalida." << endl;
    }
  }

  try
  {
    result.setValue(Result::SUCCESS);

    cntrServicoAuthentication->authenticate(email, senha);

    if (result.getValue() == Result::SUCCESS)
    {
      cout << "Operacao executada com sucesso." << endl;
      system("PAUSE");
      return result;
    }
    else
    {
      cout << "Ocorreu um erro ao executar a operacao." << endl;
      system("PAUSE");
      return result;
    }
  }
  catch (runtime_error &exp)
  {
    cout << "Erro no servidor." << endl;
  }
}

void CntrIApresentacaoPeca::execute(const Result &resultadoAuthentication)
{

  int option;

  while (true)
  {
    system("CLS");

    cout << endl
         << "Servico de pecas: " << endl
         << endl;

    cout << "Cadastrar - " << CREATE << endl;
    if (resultadoAuthentication.getValue() == Result::SUCCESS)
    {
      cout << "Remover   - " << REMOVE << endl;
      cout << "Editar    - " << UPDATE << endl;
    }
    cout << "Retornar  - " << RETURN << endl
         << endl;
    cout << "Selecione uma opcao : ";

    cin >> option;
    if (resultadoAuthentication.getValue() == Result::SUCCESS)
    {
      switch (option)
      {
      case CREATE:
        create();
        break;
      case REMOVE:
        remove();
        break;
      case UPDATE:
        update();
        break;
      }
    }
    else
    {
      switch (option)
      {
      case CREATE:
        create();
        break;
      }
    }

    if (option == RETURN)
      return;
  }

  return;
}

void CntrIApresentacaoPeca::index()
{
  Result result;
  while (true)
  {
    cout << endl
         << "Listagem de pecas: " << endl
         << endl;
  }
  try
  {
    result.setValue(Result::SUCCESS);
    cntrServicoPeca->index();
  }
  catch (runtime_error &exp)
  {
    cout << "Erro no servidor." << endl;
  }
}

void CntrIApresentacaoPeca::create()
{

  Result resultado;
  Codigo identificador;
  Nome nome;
  Tipo tipo;
  Classificacao classificacao;
  Peca peca;
  string input;

  while (true)
  {
    cout << endl
         << "Cadastro de pecas: " << endl
         << endl;
    try
    {
      cout << "Digite o identificador da peca: ";
      cin >> input;
      identificador.setCodigo(input);
      cout << "Digite o nome da peca: ";
      cin >> input;
      nome.setNome(input);
      cout << "Digite o tipo da peca: ";
      cin >> input;
      tipo;
      classificacao.setClassificacao(input);
      cout << "Digite a classificação da peca: ";
      cin >> input;
      classificacao.setClassificacao(input);
      break;
    }
    catch (const invalid_argument &exp)
    {
      cout << endl
           << "Entrada invalida." << endl;
    }
  }

  peca.setClassificacao(classificacao);
  peca.setIdentificador(identificador);
  peca.setNome(nome);
  peca.setTipo(tipo);

  try
  {
    resultado = cntrServicoPeca->create(peca);

    if (resultado.getValue() == Result::SUCCESS)
    {
      cout << "Operacao executada com sucesso." << endl;
      system("PAUSE");
    }
    else
    {
      cout << "Falha na execucao da operacao." << endl;
      system("PAUSE");
    }
  }
  catch (runtime_error &exp)
  {
  }
}

void CntrIApresentacaoPeca::update()
{

  Result resultado;
  Codigo identificador;
  Nome nome;
  Tipo tipo;
  Classificacao classificacao;
  Peca peca;
  string input;

  while (true)
  {
    cout << endl
         << "Edicao de peca: " << endl
         << endl;
    try
    {
      cout << "Digite o identificador da peca: ";
      cin >> input;
      identificador.setCodigo(input);
      cout << "Digite o nome da peca: ";
      cin >> input;
      nome.setNome(input);
      cout << "Digite o tipo da peca: ";
      cin >> input;
      tipo;
      classificacao.setClassificacao(input);
      cout << "Digite a classificação da peca: ";
      cin >> input;
      classificacao.setClassificacao(input);
      break;
    }
    catch (const invalid_argument &exp)
    {
      cout << endl
           << "Entrada invalida." << endl;
    }
  }

  peca.setClassificacao(classificacao);
  peca.setIdentificador(identificador);
  peca.setNome(nome);
  peca.setTipo(tipo);

  try
  {
    resultado = cntrServicoPeca->update(peca);

    if (resultado.getValue() == Result::SUCCESS)
    {
      cout << "Operacao executada com sucesso." << endl;
      system("PAUSE");
    }
    else
    {
      cout << "Falha na execucao da operacao." << endl;
      system("PAUSE");
    }
  }
  catch (runtime_error &exp)
  {
    cout << "Erro no servidor." << endl;
  }
}

void CntrIApresentacaoPeca::remove()
{

  Result result;
  Codigo codigo;
  string entrada;

  while (true)
  {
    cout << endl
         << "Remocao de peca: " << endl
         << endl;
    try
    {
      cout << "Digite o código da peca: ";
      cin >> entrada;
      codigo.setCodigo(entrada);
      break;
    }
    catch (const invalid_argument &exp)
    {
      cout << "\nCódigo inválido.\n";
    }
  }

  try
  {
    result.setValue(Result::SUCCESS);

    cntrServicoPeca->remove(codigo);

    if (result.getValue() == Result::SUCCESS)
    {
      cout << "Operacao executada com sucesso." << endl;
      system("PAUSE");
    }
    else
    {
      cout << "Falha na execucao da operacao." << endl;
      system("PAUSE");
    }
  }
  catch (runtime_error &exp)
  {
    cout << "Erro no servidor." << endl;
  }
}

void CntrIApresentacaoPeca::show()
{

  Result result;
  Codigo codigo;
  string entrada;

  while (true)
  {
    cout << endl
         << "Informacoes da peca: " << endl
         << endl;
    try
    {
      cout << "Digite o codigo da peca: ";
      cin >> entrada;
      codigo.setCodigo(entrada);
      break;
    }
    catch (const invalid_argument &exp)
    {
      cout << endl
           << "Entrada invalida." << endl;
    }
  }

  try
  {
    result.setValue(Result::SUCCESS);

    cntrServicoPeca->show(codigo);

    if (result.getValue() == Result::SUCCESS)
    {
      cout << "Operacao executada com sucesso." << endl;
      system("PAUSE");
    }
    else
    {
      cout << "Falha na execucao da operacao." << endl;
      system("PAUSE");
    }
  }
  catch (runtime_error &exp)
  {
    cout << "Erro no servidor." << endl;
  }
}

void CntrIApresentacaoSessao::execute(const Result &resultadoAuthentication)
{

  int option;

  while (true)
  {
    system("CLS");

    cout << endl
         << "Servico de sessao: " << endl
         << endl;

    cout << "Cadastrar   - " << CREATE << endl;
    if (resultadoAuthentication.getValue() == Result::SUCCESS)
    {
      cout << "Remover    - " << REMOVE << endl;
      cout << "Editar     - " << UPDATE << endl;
    }
    cout << "Retornar   - " << RETURN << endl
         << endl;
    cout << "Selecione uma opcao: ";

    cin >> option;
    if (resultadoAuthentication.getValue() == Result::SUCCESS)
    {
      switch (option)
      {
      case CREATE:
        create();
        break;
      case REMOVE:
        remove();
        break;
      case UPDATE:
        update();
        break;
      }
    }
    else
    {
      switch (option)
      {
      case CREATE:
        create();
        break;
      }
    }

    if (option == RETURN)
      return;
  }

  return;
}

void CntrIApresentacaoSessao::index()
{
  Result result;
  while (true)
  {
    cout << endl
         << "Listagem de sessoes: " << endl
         << endl;
  }
  try
  {
    result.setValue(Result::SUCCESS);
    cntrServicoSessao->index();
  }
  catch (runtime_error &exp)
  {
    cout << "Erro no servidor." << endl;
  }
}

void CntrIApresentacaoSessao::create()
{

  Result result;
  Codigo codigo;
  Data data;
  Horario horario;
  Sessao sessao;
  string input;

  while (true)
  {
    cout << endl
         << "Cadastro de sessao: " << endl
         << endl;
    try
    {
      cout << "Digite o identificador da sessao: ";
      cin >> input;
      codigo.setCodigo(input);
      cout << "Digite a data da sessao: ";
      cin >> input;
      data.setData(input);
      cout << "Digite o horario da peca: ";
      cin >> input;
      horario.setHorario(input);
      break;
    }
    catch (const invalid_argument &exp)
    {
      cout << endl
           << "Entrada invalida." << endl;
    }
  }

  sessao.setIdentificador(codigo);
  sessao.setData(data);
  sessao.setHorario(horario);

  try
  {
    result = cntrServicoSessao->create(sessao);

    if (result.getValue() == Result::SUCCESS)
    {
      cout << "Operacao executada com sucesso." << endl;
      system("PAUSE");
    }
    else
    {
      cout << "Falha na execucao da operacao." << endl;
      system("PAUSE");
    }
  }
  catch (runtime_error &exp)
  {
  }
}

void CntrIApresentacaoSessao::update()
{

  Result result;
  Codigo codigo;
  Data data;
  Horario horario;
  Sessao sessao;
  string input;

  while (true)
  {
    cout << endl
         << "Edicao de sessao: " << endl
         << endl;
    try
    {
      cout << "Digite o identificador da sessao: ";
      cin >> input;
      codigo.setCodigo(input);
      cout << "Digite a data da sessao: ";
      cin >> input;
      data.setData(input);
      cout << "Digite o horario da sessao: ";
      cin >> input;
      horario.setHorario(input);
      break;
    }
    catch (const invalid_argument &exp)
    {
      cout << endl
           << "Entrada invalida." << endl;
    }
  }

  sessao.setIdentificador(codigo);
  sessao.setData(data);
  sessao.setHorario(horario);

  try
  {
    result = cntrServicoSessao->update(sessao);

    if (result.getValue() == Result::SUCCESS)
    {
      cout << "Operacao executada com sucesso." << endl;
      system("PAUSE");
    }
    else
    {
      cout << "Falha na execucao da operacao." << endl;
      system("PAUSE");
    }
  }
  catch (runtime_error &exp)
  {
    cout << "Erro no servidor." << endl;
  }
}

void CntrIApresentacaoSessao::remove()
{

  Result result;
  Codigo codigo;
  string entrada;

  while (true)
  {
    cout << endl
         << "Remocao de sessao: " << endl
         << endl;
    try
    {
      cout << "Digite o código da sessao: ";
      cin >> entrada;
      codigo.setCodigo(entrada);
      break;
    }
    catch (const invalid_argument &exp)
    {
      cout << endl
           << "Entrada invalida." << endl;
    }
  }

  try
  {
    result.setValue(Result::SUCCESS);

    cntrServicoSessao->remove(codigo);

    if (result.getValue() == Result::SUCCESS)
    {
      cout << "Operacao executada com sucesso." << endl;
      system("PAUSE");
    }
    else
    {
      cout << "Falha na execucao da operacao." << endl;
      system("PAUSE");
    }
  }
  catch (runtime_error &exp)
  {
    cout << "Erro no servidor." << endl;
  }
}

void CntrIApresentacaoSessao::show()
{

  Result result;
  Codigo codigo;
  string entrada;

  while (true)
  {
    cout << endl
         << "Informacoes da sessao: " << endl
         << endl;
    try
    {
      cout << "Digite o codigo da peca: ";
      cin >> entrada;
      codigo.setCodigo(entrada);
      break;
    }
    catch (const invalid_argument &exp)
    {
      cout << endl
           << "Entrada invalida." << endl;
    }
  }

  try
  {
    result.setValue(Result::SUCCESS);

    cntrServicoSessao->show(codigo);

    if (result.getValue() == Result::SUCCESS)
    {
      cout << "Operacao executada com sucesso." << endl;
      system("PAUSE");
    }
    else
    {
      cout << "Falha na execucao da operacao." << endl;
      system("PAUSE");
    }
  }
  catch (runtime_error &exp)
  {
    cout << "Erro no servidor." << endl;
  }
}

void CntrIApresentacaoSala::execute(const Result &resultadoAuthentication)
{

  int option;

  while (true)
  {
    system("CLS");

    cout << endl
         << "Servico de salas: " << endl
         << endl;

    cout << "Cadastrar - " << CREATE << endl;
    if (resultadoAuthentication.getValue() == Result::SUCCESS)
    {
      cout << "Remover   - " << REMOVE << endl;
      cout << "Editar    - " << UPDATE << endl;
    }
    cout << "Retornar  - " << RETURN << endl
         << endl;
    cout << "Selecione uma opcao : ";

    cin >> option;
    if (resultadoAuthentication.getValue() == Result::SUCCESS)
    {
      switch (option)
      {
      case CREATE:
        create();
        break;
      case REMOVE:
        remove();
        break;
      case UPDATE:
        update();
        break;
      }
    }
    else
    {
      switch (option)
      {
      case CREATE:
        create();
        break;
      }
    }

    if (option == RETURN)
      return;
  }

  return;
}

void CntrIApresentacaoSala::index()
{
  Result result;
  while (true)
  {
    cout << endl
         << "Listagem de salas: " << endl
         << endl;
  }
  try
  {
    result.setValue(Result::SUCCESS);
    cntrServicoSala->index();
  }
  catch (runtime_error &exp)
  {
    cout << "Erro no servidor." << endl;
  }
}

void CntrIApresentacaoSala::create()
{
  Result result;
  Codigo codigo;
  Nome nome;
  Capacidade capacidade;
  Sala sala;
  string input;

  while (true)
  {
    cout << endl
         << "Cadastro de sala: " << endl
         << endl;
    try
    {
      cout << "Digite o identificador da sala: ";
      cin >> input;
      codigo.setCodigo(input);
      cout << "Digite o nome da sala: ";
      cin >> input;
      nome.setNome(input);
      cout << "Digite a capacidade da sala: ";
      cin >> input;
      capacidade.setCapacidade(input);
      break;
    }
    catch (const invalid_argument &exp)
    {
      cout << endl
           << "Entrada invalida." << endl;
    }
  }

  sala.setIdentificador(codigo);
  sala.setNome(nome);
  sala.setCapacidade(capacidade);

  try
  {
    result = cntrServicoSala->create(sala);

    if (result.getValue() == Result::SUCCESS)
    {
      cout << "Operacao executada com sucesso." << endl;
      system("PAUSE");
    }
    else
    {
      cout << "Falha na execucao da operacao." << endl;
      system("PAUSE");
    }
  }
  catch (runtime_error &exp)
  {
  }
}

void CntrIApresentacaoSala::update()
{

  Result result;
  Codigo codigo;
  Nome nome;
  Capacidade capacidade;
  Sala sala;
  string input;

  while (true)
  {
    cout << endl
         << "Edicao de sala: " << endl
         << endl;
    try
    {
      cout << "Digite o identificador da sala: ";
      cin >> input;
      codigo.setCodigo(input);
      cout << "Digite o nome da sala: ";
      cin >> input;
      nome.setNome(input);
      cout << "Digite a capacidade da sala: ";
      cin >> input;
      capacidade.setCapacidade(input);
      break;
    }
    catch (const invalid_argument &exp)
    {
      cout << endl
           << "Entrada invalida." << endl;
    }
  }

  sala.setIdentificador(codigo);
  sala.setNome(nome);
  sala.setCapacidade(capacidade);

  try
  {
    result = cntrServicoSala->update(sala);

    if (result.getValue() == Result::SUCCESS)
    {
      cout << "Operacao executada com sucesso." << endl;
      system("PAUSE");
    }
    else
    {
      cout << "Falha na execucao da operacao." << endl;
      system("PAUSE");
    }
  }
  catch (runtime_error &exp)
  {
    cout << "Erro no servidor." << endl;
  }
}

void CntrIApresentacaoSala::remove()
{

  Result result;
  Codigo codigo;
  string entrada;

  while (true)
  {
    cout << endl
         << "Remocao de sala: " << endl
         << endl;
    try
    {
      cout << "Digite o código da sala: ";
      cin >> entrada;
      codigo.setCodigo(entrada);
      break;
    }
    catch (const invalid_argument &exp)
    {
      cout << endl
           << "Entrada invalida." << endl;
    }
  }

  try
  {
    result.setValue(Result::SUCCESS);

    cntrServicoSala->remove(codigo);

    if (result.getValue() == Result::SUCCESS)
    {
      cout << "Operacao executada com sucesso." << endl;
      system("PAUSE");
    }
    else
    {
      cout << "Falha na execucao da operacao." << endl;
      system("PAUSE");
    }
  }
  catch (runtime_error &exp)
  {
    cout << "Erro no servidor." << endl;
  }
}

void CntrIApresentacaoSala::show()
{

  Result result;
  Codigo codigo;
  string entrada;

  while (true)
  {
    cout << endl
         << "Informacaoes da sala: " << endl
         << endl;
    try
    {
      cout << "Digite o codigo da peca: ";
      cin >> entrada;
      codigo.setCodigo(entrada);
      break;
    }
    catch (const invalid_argument &exp)
    {
      cout << endl
           << "Entrada invalida." << endl;
    }
  }

  try
  {
    result.setValue(Result::SUCCESS);

    cntrServicoSala->show(codigo);

    if (result.getValue() == Result::SUCCESS)
    {
      cout << "Operacao executada com sucesso." << endl;
      system("PAUSE");
    }
    else
    {
      cout << "Falha na execucao da operacao." << endl;
      system("PAUSE");
    }
  }
  catch (runtime_error &exp)
  {
    cout << "Erro no servidor." << endl;
  }
}

void CntrIApresentacaoParticipante::execute(const Result &resultadoAuthentication)
{

  int option;

  while (true)
  {
    system("CLS");

    cout << endl
         << "Servico de participante: " << endl
         << endl;

    cout << "Cadastrar - " << CREATE << endl;
    if (resultadoAuthentication.getValue() == Result::SUCCESS)
    {
      cout << "Remover   - " << REMOVE << endl;
      cout << "Editar    - " << UPDATE << endl;
    }
    cout << "Retornar  - " << RETURN << endl
         << endl;
    cout << "Selecione uma opcao : ";

    cin >> option;
    if (resultadoAuthentication.getValue() == Result::SUCCESS)
    {
      switch (option)
      {
      case CREATE:
        create();
        break;
      case REMOVE:
        remove();
        break;
      case UPDATE:
        update();
        break;
      }
    }
    else
    {
      switch (option)
      {
      case CREATE:
        create();
        break;
      }
    }

    if (option == RETURN)
      return;
  }

  return;
}

void CntrIApresentacaoParticipante::create()
{
  Result result;
  Matricula matricula;
  Nome nome;
  Nome sobrenome;
  Email email;
  Telefone telefone;
  Senha senha;
  Cargo cargo;
  Participante participante;
  string input;

  while (true)
  {
    cout << endl
         << "Cadastro de participante: " << endl
         << endl;
    try
    {
      cout << "Digite a matricula do participante: ";
      cin >> input;
      matricula.setMatricula(input);
      cout << "Digite o nome do participante: ";
      cin >> input;
      nome.setNome(input);
      cout << "Digite o sobrenome do participante: ";
      cin >> input;
      sobrenome.setNome(input);
      cout << "Digite o email do participante: ";
      cin >> input;
      email.setEmail(input);
      cout << "Digite o telefone do participante: ";
      cin >> input;
      telefone.setTelefone(input);
      cout << "Digite a senha do participante: ";
      cin >> input;
      senha.setSenha(input);
      cout << "Digite o cargo do participante: ";
      cin >> input;
      cargo.setCargo(input);
      break;
    }
    catch (const invalid_argument &exp)
    {
      cout << endl
           << "Entrada invalida." << endl;
    }
  }

  participante.setMatricula(matricula);
  participante.setNome(nome);
  participante.setSobrenome(sobrenome);
  participante.setEmail(email);
  participante.setTelefone(telefone);
  participante.setSenha(senha);
  participante.setCargo(cargo);

  try
  {
    result = cntrServicoParticipante->create(participante);

    if (result.getValue() == Result::SUCCESS)
    {
      cout << "Operacao executada com sucesso." << endl;
      system("PAUSE");
    }
    else
    {
      cout << "Falha na execucao da operacao." << endl;
      system("PAUSE");
    }
  }
  catch (runtime_error &exp)
  {
  }
}

void CntrIApresentacaoParticipante::update()
{
  Result result;
  Matricula matricula;
  Nome nome;
  Nome sobrenome;
  Email email;
  Telefone telefone;
  Senha senha;
  Cargo cargo;
  Participante participante;
  string input;

  while (true)
  {
    cout << endl
         << "Edicao de participante: " << endl
         << endl;
    try
    {
      cout << "Digite a matricula do participante: ";
      cin >> input;
      matricula.setMatricula(input);
      cout << "Digite o nome do participante: ";
      cin >> input;
      nome.setNome(input);
      cout << "Digite o sobrenome do participante: ";
      cin >> input;
      sobrenome.setNome(input);
      cout << "Digite o email do participante: ";
      cin >> input;
      email.setEmail(input);
      cout << "Digite o telefone do participante: ";
      cin >> input;
      telefone.setTelefone(input);
      cout << "Digite a senha do participante: ";
      cin >> input;
      senha.setSenha(input);
      cout << "Digite o cargo do participante: ";
      cin >> input;
      cargo.setCargo(input);
      break;
    }
    catch (const invalid_argument &exp)
    {
      cout << endl
           << "Entrada invalida." << endl;
    }
  }

  participante.setMatricula(matricula);
  participante.setNome(nome);
  participante.setSobrenome(sobrenome);
  participante.setEmail(email);
  participante.setTelefone(telefone);
  participante.setSenha(senha);
  participante.setCargo(cargo);

  try
  {
    result = cntrServicoParticipante->update(participante);

    if (result.getValue() == Result::SUCCESS)
    {
      cout << "Operacao executada com sucesso." << endl;
      system("PAUSE");
    }
    else
    {
      cout << "Falha na execucao da operacao." << endl;
      system("PAUSE");
    }
  }
  catch (runtime_error &exp)
  {
  }
}

void CntrIApresentacaoParticipante::remove()
{

  Result result;
  Matricula matricula;
  string entrada;

  while (true)
  {
    cout << endl
         << "Remocao de participante: " << endl
         << endl;
    try
    {
      cout << "Digite a matricula do participante: ";
      cin >> entrada;
      matricula.setMatricula(entrada);
      break;
    }
    catch (const invalid_argument &exp)
    {
      cout << endl
           << "Entrada invalida." << endl;
    }
  }

  try
  {
    result.setValue(Result::SUCCESS);

    cntrServicoParticipante->remove(matricula);

    if (result.getValue() == Result::SUCCESS)
    {
      cout << "Operacao executada com sucesso." << endl;
      system("PAUSE");
    }
    else
    {
      cout << "Falha na execucao da operacao." << endl;
      system("PAUSE");
    }
  }
  catch (runtime_error &exp)
  {
    cout << "Erro no servidor." << endl;
  }
}