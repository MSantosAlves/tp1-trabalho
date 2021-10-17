/**
 * @file domainTest.h
 * @author Richard Junio e Matheus Santos
 * 
 * @brief Declaração das Classes de Testes unitários dos dominios.
 */
#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include <algorithm>

#include "domains.h"

using namespace std;

class TU_Codigo {
  private:
      const string VALID_INPUT = "AA1123"; 
      const string INVALID_INPUT = "1A1121";

      int state;

      const static int SUCCESS = 1;
      const static int FAILURE = 0;

      Codigo *codigo;

      void setUp ();
      void tearDown();
      void testSuccess();
      void testFailure();

  public:
      void run(string testCase);
};

class TU_Capacidade {
  private:
      const string VALID_INPUT = "100"; 
      const string INVALID_INPUT = "600";

      int state;

      const static int SUCCESS = 1;
      const static int FAILURE = 0;

      Capacidade *capacidade;

      void setUp ();
      void tearDown();
      void testSuccess();
      void testFailure();

  public:
      void run(string testCase);
};

class TU_Cargo {
  private:
      const string VALID_INPUT = "ator"; 
      const string INVALID_INPUT = "fotografo";

      int state;

      const static int SUCCESS = 1;
      const static int FAILURE = 0;

      Cargo *cargo;

      void setUp ();
      void tearDown();
      void testSuccess();
      void testFailure();

  public:
      void run(string testCase);
};

class TU_Classificacao {
  private:
      const string VALID_INPUT = "10"; 
      const string INVALID_INPUT = "17";

      int state;

      const static int SUCCESS = 1;
      const static int FAILURE = 0;

      Classificacao *classificacao;

      void setUp ();
      void tearDown();
      void testSuccess();
      void testFailure();

  public:
      void run(string testCase);
};

class TU_Email {
  private:
      const string VALID_INPUT = "emaildetesteslegal@testando.com"; 
      const string INVALID_INPUT = ".emaildetesteslegal@testando.com.";

      int state;

      const static int SUCCESS = 1;
      const static int FAILURE = 0;

      Email *email;

      void setUp ();
      void tearDown();
      void testSuccess();
      void testFailure();

  public:
      void run(string testCase);
};

class TU_Horario
{
private:
    const string VALID_INPUT = "18:30"; 
    const string INVALID_INPUT = "19:55"; 
    const static int SUCCESS = 1;
    const static int FAILURE = 0;
    int state;
    Horario *horario;

    void setUp ();
    void tearDown();
    void testSuccess();
    void testFailure();

public:

    void run(string testCase);
};

class TU_Matricula
{
private:
    const string VALID_INPUT = "12345"; 
    const string INVALID_INPUT = "1122X"; 
    const static int SUCCESS = 1;
    const static int FAILURE = 0;
    int state;
    Matricula *matricula;

    void setUp ();
    void tearDown();
    void testSuccess();
    void testFailure();

public:

    void run(string testCase);
};

class TU_Nome
{
private:
    const string VALID_INPUT = "Maria"; 
    const string INVALID_INPUT = "Pedro Álvares (Cabral)"; 
    const static int SUCCESS = 1;
    const static int FAILURE = 0;
    int state;
    Nome *nome;

    void setUp ();
    void tearDown();
    void testSuccess();
    void testFailure();

public:

    void run(string testCase);
};

class TU_Senha
{
private:
    const string VALID_INPUT = "P@szw0rd"; 
    const string INVALID_INPUT = "1234"; 
    const static int SUCCESS = 1;
    const static int FAILURE = 0;
    int state;
    Senha *senha;

    void setUp ();
    void tearDown();
    void testSuccess();
    void testFailure();

public:

    void run(string testCase);
};

class TU_Telefone
{
private:
    const string VALID_INPUT = "(61)-999999999"; 
    const string INVALID_INPUT = "(23)-000000000"; 
    const static int SUCCESS = 1;
    const static int FAILURE = 0;
    int state;
    Telefone *telefone;

    void setUp ();
    void tearDown();
    void testSuccess();
    void testFailure();

public:

    void run(string testCase);
};

class TU_Tipo
{
private:
    const string VALID_INPUT = "comédia"; 
    const string INVALID_INPUT = "ficção"; 
    const static int SUCCESS = 1;
    const static int FAILURE = 0;
    int state;
    Tipo *tipo;

    void setUp ();
    void tearDown();
    void testSuccess();
    void testFailure();

public:
    void run(string testCase);
};