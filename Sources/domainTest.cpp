#include "../headers/domainTest.h"


void TU_Codigo::setUp()
{
    codigo = new Codigo;
    state = SUCCESS;
}

void TU_Codigo::tearDown()
{
    delete codigo;
}

void TU_Codigo::testSuccess()
{
    try
    {
        codigo->setCodigo(VALID_INPUT);
        if (codigo->getCodigo() != VALID_INPUT)
            state = FAILURE;
    }
    catch (invalid_argument exception)
    {
        state = FAILURE;
    }
}

void TU_Codigo::testFailure()
{
    try
    {
      codigo->setCodigo(INVALID_INPUT);
      state = FAILURE;
    }
    catch (invalid_argument exception)
    {
      state = FAILURE;
    }
}

void TU_Codigo::run(string testCase)
{
    setUp();

    if(testCase == "SUCCESS"){
      testSuccess();
      if (state == SUCCESS){
        cout << "Domain Test - Codigo (CASE: SUCCESS) -> SUCCESS!\n";
      }else{
        cout << "Domain Test - Codigo (CASE: SUCCESS) -> FAILURE!\n";
      }
    }else{
      testFailure();
      if (state == FAILURE){
        cout << "Domain Test - Codigo (CASE: FAILURE) -> FAILURE!\n";
      }else{
        cout << "Domain Test - Codigo (CASE: FAILURE) -> SUCCESS!\n";
      }
    }

    tearDown();
}

void TU_Capacidade::setUp()
{
    capacidade = new Capacidade;
    state = SUCCESS;
}

void TU_Capacidade::tearDown()
{
    delete capacidade;
}

void TU_Capacidade::testSuccess()
{
    try {
        capacidade->setCapacidade(VALID_INPUT);
        if (capacidade->getCapacidade() != VALID_INPUT)
            state = FAILURE;
    }
    catch (invalid_argument exception)
    {
        state = FAILURE;
    }
}

void TU_Capacidade::testFailure()
{
    try
    {
      capacidade->setCapacidade(INVALID_INPUT);
      state = FAILURE;
    }
    catch (invalid_argument exception)
    {
      state = FAILURE;
    }
}

void TU_Capacidade::run(string testCase)
{
    setUp();

    if(testCase == "SUCCESS"){
      testSuccess();
      if (state == SUCCESS){
        cout << "Domain Test - Capacidade (CASE: SUCCESS) -> SUCCESS!\n";
      } else {
        cout << "Domain Test - Capacidade (CASE: SUCCESS) -> FAILURE!\n";
      }
    } else {
      testFailure();
      if (state == FAILURE){
        cout << "Domain Test - Capacidade (CASE: FAILURE) -> FAILURE!\n";
      } else {
        cout << "Domain Test - Capacidade (CASE: FAILURE) -> SUCCESS!\n";
      }
    }

    tearDown();
}

void TU_Cargo::setUp()
{
    cargo = new Cargo;
    state = SUCCESS;
}

void TU_Cargo::tearDown()
{
    delete cargo;
}

void TU_Cargo::testSuccess()
{
    try {
        cargo->setCargo(VALID_INPUT);
        if (cargo->getCargo() != VALID_INPUT)
            state = FAILURE;
    }
    catch (invalid_argument exception)
    {
        state = FAILURE;
    }
}

void TU_Cargo::testFailure()
{
    try
    {
      cargo->setCargo(INVALID_INPUT);
      state = FAILURE;
    }
    catch (invalid_argument exception)
    {
      state = FAILURE;
    }
}

void TU_Cargo::run(string testCase)
{
    setUp();

    if(testCase == "SUCCESS"){
      testSuccess();
      if (state == SUCCESS){
        cout << "Domain Test - Cargo (CASE: SUCCESS) -> SUCCESS!\n";
      } else {
        cout << "Domain Test - Cargo (CASE: SUCCESS) -> FAILURE!\n";
      }
    } else {
      testFailure();
      if (state == FAILURE){
        cout << "Domain Test - Cargo (CASE: FAILURE) -> FAILURE!\n";
      } else {
        cout << "Domain Test - Cargo (CASE: FAILURE) -> SUCCESS!\n";
      }
    }

    tearDown();
}

void TU_Classificacao::setUp()
{
    classificacao = new Classificacao;
    state = SUCCESS;
}

void TU_Classificacao::tearDown()
{
    delete classificacao;
}

void TU_Classificacao::testSuccess()
{
    try {
        classificacao->setClassificacao(VALID_INPUT);
        if (classificacao->getClassificacao() != VALID_INPUT)
            state = FAILURE;
    }
    catch (invalid_argument exception)
    {
        state = FAILURE;
    }
}

void TU_Classificacao::testFailure()
{
    try
    {
      classificacao->setClassificacao(INVALID_INPUT);
      state = FAILURE;
    }
    catch (invalid_argument exception)
    {
      state = FAILURE;
    }
}

void TU_Classificacao::run(string testCase)
{
    setUp();

    if(testCase == "SUCCESS"){
      testSuccess();
      if (state == SUCCESS){
        cout << "Domain Test - Classificacao (CASE: SUCCESS) -> SUCCESS!\n";
      } else {
        cout << "Domain Test - Classificacao (CASE: SUCCESS) -> FAILURE!\n";
      }
    } else {
      testFailure();
      if (state == FAILURE){
        cout << "Domain Test - Classificacao (CASE: FAILURE) -> FAILURE!\n";
      } else {
        cout << "Domain Test - Classificacao (CASE: FAILURE) -> SUCCESS!\n";
      }
    }

    tearDown();
}

void TU_Email::setUp()
{
    email = new Email;
    state = SUCCESS;
}

void TU_Email::tearDown()
{
    delete email;
}

void TU_Email::testSuccess()
{
    try {
        email->setEmail(VALID_INPUT);
        if (email->getEmail() != VALID_INPUT)
            state = FAILURE;
    }
    catch (invalid_argument exception)
    {
        state = FAILURE;
    }
}

void TU_Email::testFailure()
{
    try
    {
      email->setEmail(INVALID_INPUT);
      state = FAILURE;
    }
    catch (invalid_argument exception)
    {
      state = FAILURE;
    }
}

void TU_Email::run(string testCase)
{
    setUp();

    if(testCase == "SUCCESS"){
      testSuccess();
      if (state == SUCCESS){
        cout << "Domain Test - Email (CASE: SUCCESS) -> SUCCESS!\n";
      } else {
        cout << "Domain Test - Email (CASE: SUCCESS) -> FAILURE!\n";
      }
    } else {
      testFailure();
      if (state == FAILURE){
        cout << "Domain Test - Email (CASE: FAILURE) -> FAILURE!\n";
      } else {
        cout << "Domain Test - Email (CASE: FAILURE) -> SUCCESS!\n";
      }
    }

    tearDown();
}

void TU_Horario::setUp()
{
  horario = new Horario;
  state = SUCCESS;
}

void TU_Horario::tearDown()
{
  delete horario;
}

void TU_Horario::testSuccess()
{
  try{
    horario->setHorario(VALID_INPUT);
    if (horario->getHorario() != VALID_INPUT){
      state = FAILURE;
    }

  }
  catch(invalid_argument exception){
    state = FAILURE;
  }
}

void TU_Horario::testFailure()
{
  try{
    horario->setHorario(INVALID_INPUT);
  }
  catch(invalid_argument exception){
    state = FAILURE;
  }
}

void TU_Horario::run(string testCase)
{
    setUp();

    if(testCase == "SUCCESS"){
      testSuccess();
      if (state == SUCCESS){
        cout << "Domain Test - Horario (CASE: SUCCESS) -> SUCCESS!\n";
      }else{
        cout << "Domain Test - Horario (CASE: SUCCESS) -> FAILURE!\n";
      }
    }else{
      testFailure();
      if (state == FAILURE){
        cout << "Domain Test - Horario (CASE: FAILURE) -> FAILURE!\n";
      }else{
        cout << "Domain Test - Horario (CASE: FAILURE) -> SUCCESS!\n";
      }
    }

    tearDown();
}

void TU_Matricula::setUp()
{
  matricula = new Matricula;
  state = SUCCESS;
}

void TU_Matricula::tearDown()
{
  delete matricula;
}

void TU_Matricula::testSuccess()
{
  try{
    matricula->setMatricula(VALID_INPUT);
    if (matricula->getMatricula() != VALID_INPUT){
      state = FAILURE;
    }

  }
  catch(invalid_argument exception){
    state = FAILURE;
  }
}

void TU_Matricula::testFailure()
{
  try{
    matricula->setMatricula(INVALID_INPUT);
  }
  catch(invalid_argument exception){
    state = FAILURE;
  }
}

void TU_Matricula::run(string testCase)
{
    setUp();

    if(testCase == "SUCCESS"){
      testSuccess();
      if (state == SUCCESS){
        cout << "Domain Test - Matricula (CASE: SUCCESS) -> SUCCESS!\n";
      }else{
        cout << "Domain Test - Matricula (CASE: SUCCESS) -> FAILURE!\n";
      }
    }else{
      testFailure();
      if (state == FAILURE){
        cout << "Domain Test - Matricula (CASE: FAILURE) -> FAILURE!\n";
      }else{
        cout << "Domain Test - Matricula (CASE: FAILURE) -> SUCCESS!\n";
      }
    }

    tearDown();
}

void TU_Nome::setUp()
{
  nome = new Nome;
  state = SUCCESS;
}

void TU_Nome::tearDown()
{
  delete nome;
}

void TU_Nome::testSuccess()
{
  try{
    nome->setNome(VALID_INPUT);
    if (nome->getNome() != VALID_INPUT){
      state = FAILURE;
    }

  }
  catch(invalid_argument exception){
    state = FAILURE;
  }
}

void TU_Nome::testFailure()
{
  try{
    nome->setNome(INVALID_INPUT);
  }
  catch(invalid_argument exception){
    state = FAILURE;
  }
}

void TU_Nome::run(string testCase)
{
    setUp();

    if(testCase == "SUCCESS"){
      testSuccess();
      if (state == SUCCESS){
        cout << "Domain Test - Nome (CASE: SUCCESS) -> SUCCESS!\n";
      }else{
        cout << "Domain Test - Nome (CASE: SUCCESS) -> FAILURE!\n";
      }
    }else{
      testFailure();
      if (state == FAILURE){
        cout << "Domain Test - Nome (CASE: FAILURE) -> FAILURE!\n";
      }else{
        cout << "Domain Test - Nome (CASE: FAILURE) -> SUCCESS!\n";
      }
    }

    tearDown();
}

void TU_Telefone::setUp()
{
  telefone = new Telefone;
  state = SUCCESS;
}

void TU_Telefone::tearDown()
{
  delete telefone;
}

void TU_Telefone::testSuccess()
{
  try{
    telefone->setTelefone(VALID_INPUT);
    if (telefone->getTelefone() != VALID_INPUT){
      state = FAILURE;
    }

  }
  catch(invalid_argument exception){
    state = FAILURE;
  }
}

void TU_Telefone::testFailure()
{
  try{
    telefone->setTelefone(INVALID_INPUT);
  }
  catch(invalid_argument exception){
    state = FAILURE;
  }
}

void TU_Telefone::run(string testCase)
{
    setUp();

    if(testCase == "SUCCESS"){
      testSuccess();
      if (state == SUCCESS){
        cout << "Domain Test - Telefone (CASE: SUCCESS) -> SUCCESS!\n";
      }else{
        cout << "Domain Test - Telefone (CASE: SUCCESS) -> FAILURE!\n";
      }
    }else{
      testFailure();
      if (state == FAILURE){
        cout << "Domain Test - Telefone (CASE: FAILURE) -> FAILURE!\n";
      }else{
        cout << "Domain Test - Telefone (CASE: FAILURE) -> SUCCESS!\n";
      }
    }

    tearDown();
}

void TU_Senha::setUp()
{
  senha = new Senha;
  state = SUCCESS;
}

void TU_Senha::tearDown()
{
  delete senha;
}

void TU_Senha::testSuccess()
{
  try{
    senha->setSenha(VALID_INPUT);
    if (senha->getSenha() != VALID_INPUT){
      state = FAILURE;
    }

  }
  catch(invalid_argument exception){
    state = FAILURE;
  }
}

void TU_Senha::testFailure()
{
  try{
    senha->setSenha(INVALID_INPUT);
  }
  catch(invalid_argument exception){
    state = FAILURE;
  }
}

void TU_Senha::run(string testCase)
{
    setUp();

    if(testCase == "SUCCESS"){
      testSuccess();
      if (state == SUCCESS){
        cout << "Domain Test - Senha (CASE: SUCCESS) -> SUCCESS!\n";
      }else{
        cout << "Domain Test - Senha (CASE: SUCCESS) -> FAILURE!\n";
      }
    }else{
      testFailure();
      if (state == FAILURE){
        cout << "Domain Test - Senha (CASE: FAILURE) -> FAILURE!\n";
      }else{
        cout << "Domain Test - Senha (CASE: FAILURE) -> SUCCESS!\n";
      }
    }

    tearDown();
}

void TU_Tipo::setUp()
{
  tipo = new Tipo;
  state = SUCCESS;
}

void TU_Tipo::tearDown()
{
  delete tipo;
}

void TU_Tipo::testSuccess()
{
  try{
    tipo->setTipo(VALID_INPUT);
    if (tipo->getTipo() != VALID_INPUT){
      state = FAILURE;
    }

  }
  catch(invalid_argument exception){
    state = FAILURE;
  }
}

void TU_Tipo::testFailure()
{
  try{
    tipo->setTipo(INVALID_INPUT);
  }
  catch(invalid_argument exception){
    state = FAILURE;
  }
}

void TU_Tipo::run(string testCase)
{
    setUp();

    if(testCase == "SUCCESS"){
      testSuccess();
      if (state == SUCCESS){
        cout << "Domain Test - Tipo (CASE: SUCCESS) -> SUCCESS!\n";
      }else{
        cout << "Domain Test - Tipo (CASE: SUCCESS) -> FAILURE!\n";
      }
    }else{
      testFailure();
      if (state == FAILURE){
        cout << "Domain Test - Tipo (CASE: FAILURE) -> FAILURE!\n";
      }else{
        cout << "Domain Test - Tipo (CASE: FAILURE) -> SUCCESS!\n";
      }
    }

    tearDown();
}
