#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include <algorithm>

#include "entities.h"

using namespace std;


class TU_Participante
{
private:
    const string MATRICULA_PARTICIPANTE = "12345"; 
    const string NOME_PARTICIPANTE = "Maria";
    const string SOBRENOME_PARTICIPANTE = "Alves";
    const string EMAIL_PARTICIPANTE = "emaildetesteslegal@testando.com"; 
    const string TELEFONE_PARTICIPANTE = "(61)-999999999"; 
    const string SENHA_PARTICIPANTE = "P@ssw0rd";
    const string CARGO_PARTICIPANTE = "ator";
    const static int SUCCESS = 1;
    const static int FAILURE = 0;

    int state;
	
    Matricula *matricula;
    Nome *nome;
    Nome *sobrenome;
    Email *email;
    Telefone *telefone;
    Senha *senha;
    Cargo *cargo;
    
    void setUp ();
    void tearDown();
    void testSuccess();

public:

    void run();

};

class TU_Sessao
{
private:
    const string IDENTIFICADOR_SESSAO = "AA1234"; 
    const string DATA_SESSAO = "12/02/2002";
    const string HORARIO_SESSAO = "13:15";
    const static int SUCCESS = 1;
    const static int FAILURE = 0;

    int state;
	
    Codigo *identificador;
    Data *data;
    Horario *horario;
    
    void setUp ();
    void tearDown();
    void testSuccess();

public:

    void run();

};

class TU_Peca
{
  private:
    const string COD_PECA = "AB1234"; 
    const string NOME_PECA = "Peça Top.";
    const string TIPO_PECA = "comédia";
    const string CLASSIFICACAO_PECA = "10";
    
    const static int SUCCESS = 1;
    const static int FAILURE = 0;

    int state;

    Peca *peca;

    Codigo *identificador;
    Nome *nome;
    Tipo *tipo;
    Classificacao *classificacao;
    
    void setUp ();
    void tearDown();
    void testSuccess();

  public:
    void run();

};

class TU_Sala
{
  private:
    const string COD_SALA = "AB1234"; 
    const string NOME_SALA = "Peça Top.";
    const string CAPACIDADE_SALA = 300;
    
    const static int SUCCESS = 1;
    const static int FAILURE = 0;

    int state;

    Sala *sala;

    Codigo *identificador;
    Nome *nome;
    Capacidade *capacidade;
    
    void setUp ();
    void tearDown();
    void testSuccess();

  public:
    void run();

};