/**
 * @file domain.h
 * @author Richard Junio e Matheus Santos
 * 
 * @brief Declaração das Classes de Dominio
 */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include <algorithm>
#include <array>
#include <sstream>
#include <cctype>

using namespace std;

//Declaracao das Classes

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
* @class Capacidade
* 
* @brief Classe cuja função é armazenar uma string responsável por representar a capacidade da sala.
* 
* Formato: 100, 200, 300, 400, 500
*/

class Capacidade //Doxygen
{
  public:
    /**
    * Atribui uma valor para capacidade. 
    *
    * @brief Para a validação, é verificado se a string possui umas das opções permitidas (100, 200, 300, 400, 500).
    * 
    * @param string
    */

    void setCapacidade(string);

    /**
    * Obtém o valor do atributo capacidade. 
    *
    * @return string
    */

    string getCapacidade() const
    {
      return capacidade;
    }

  private:
    string capacidade;

    const static int FIXED_SIZE = 3;

    void validar(string);
};

/**
* @class Cargo
* 
* @brief Classe cuja função é armazenar uma string responsável por representar a cargo do participante.
* 
* Formato: "ator", "cenógrafo", "figurinista", "maquiador", "sonoplasta", "iluminador".
*/

class Cargo  //Doxygen
{
  public:
    /**
    * Atribui uma valor para cargo. 
    *
    * @brief Para a validação, é verificado se a string possui umas das opções permitidas ("ator", "cenógrafo", "figurinista", "maquiador", "sonoplasta", "iluminador").
    * 
    * @param string
    */

    void setCargo(string);

    /**
    * Obtém o valor do atributo cargo.
    * 
    * @return string
    */

    string getCargo() const
    {
      return cargo;
    }

  private:
    string cargo;

    void validar(string);
};

/**
* @class Classificacao
* 
* @brief Classe cuja função é armazenar uma string responsável por representar a classificacao da peça.
* 
* Formato: "livre", "10", "12", "14", "16", "18".
*/

class Classificacao //Doxygen
{
  public:
    /**
    * Atribui uma valor para classificacao. 
    *
    * @brief Para a validação, é verificado se a string possui umas das opções permitidas ("livre", "10", "12", "14", "16", "18").
    * 
    * @param string
    */

    void setClassificacao(string);

    /**
    * Obtém o valor do atributo classificacao.
    * 
    * @return string
    */

    string getClassificacao() const
    {
      return classificacao;
    }

  private:
    string classificacao;

    void validar(string);
};

/**
* @class Codigo
* 
* @brief Classe cuja função é armazenar uma string responsável por representar a codigo identificador da Sessao, Peça e Sala.
* 
* Formato: LLDDDD, onde L é uma letra maiuscula (A-Z) e D um dígito (0-9).
*/

class Codigo //Doxygen
{
  public:
    /**
    * Atribui uma valor para codigo. 
    *
    * @brief Para a validação, é verificado se a string possui o formato adequado, possuindo o tamanho de 6 caracteres, sendo os 2 primeiros letras e os 4 últimos dígitos.
    * 
    * @param string
    */

    void setCodigo(string);

    /**
    * 
    * @return string
    */

    string getCodigo() const
    {
      return codigo;
    }

  private:
    string codigo;

    const static int FIXED_SIZE = 6;

    void validar(string);
};

/**
* @class Data
* 
* @brief Classe cuja função é armazenar uma string responsável por representar a data da Sessao.
* 
* Formato: DD/MM/AAAA
* Em DD tem-se indicação do dia: 01 a 31.
* Em MM tem-se indicação do mês: 01 a 12.
* Em AAAA tem-se indicação do ano: 2000 a 9999.
*/

class Data
{
  public:
    /**
    * Atribui uma valor para data. 
    *
    * @brief Na validação, é verificado se a string possui formato adequado, tamanho correto e se as substrings que representam DD, MM E AAAA são compostas por dígitos válidos.
    * 
    * @param string
    */

    void setData(string);

    /**
    * Obtém o valor do atributo data.
    * 
    * @return string
    */

    string getData() const
    {
      return data;
    }

  private:
    string data;

    const static int FIXED_SIZE = 10;

    void validar(string);
};

/**
* @class Email
* 
* @brief Classe cuja função é armazenar uma string responsável por representar a email do participante.
* 
* Formato: parte-local@dominio
* A parte-local é composta por até 64 caracteres, 
* A dominio é composta por até 255 caracteres, 
* Cada caracter pode ser letras (A-Z, a-z), digitos (0-9) ou caracter especial (!#$%&'*+-/=?^_`{|}~.)
*/

class Email
{
  public:
    /**
    * Atribui uma valor para email. 
    *
    * @brief Na validação, é verificado se a string possui formato adequado, tamanho correto e se as substrings que representam parte-local e dominio são compostas por caracteres válidos.
    * 
    * @param string
    */

    void setEmail(string);

    /**
    * Obtém o valor do atributo email.
    * 
    * @return string
    */

    string getEmail() const
    {
      return email;
    }

  private:
    string email;

    void validar(string);
};

/**
* @class Horario
* 
* @brief Classe cuja função é armazenar uma string responsável por representar o horário de uma sessão.
* 
* Formato: HH:MM
* Em HH tem-se indicação de horário: 00 a 23.
* Em MM tem-se a indicação de minuto: 00, 15, 30 ou 45.
*/
class Horario //Doxygen
{ 
  public:

  /**
  * Atribui um valor para horário.
  * 
  * @brief Na validação, é verificado se a string possui formato adequado, tamanho correto e se as substrings que representam HH e MM são compostas por dígitos válidos.
  * 
  * @param string
  */
  void setHorario(string);

  /**
  * Obtém o valor do atributo horário.
  * 
  * @return string
  */
  string getHorario() const
  {
    return horario;
  }

  private:
  string horario;

  const static int FIXED_SIZE = 5;

  void validar(string);
};


/**
* @class Matricula
* 
* @brief Classe cuja função é armazenar uma string responsável por representara matrícula de um participante.
* 
* Formato: XXXXX
* Cada X é é dígito (0-9).
* 
*/  
class Matricula 
{
  public:

  /**
  * Atribui um valor para a matrícula
  * 
  * Na validação, é verificado se a string possui apenas dígitos, tamanho correto (5) e se existem dígitos duplicados.
  * 
  * @param string
  */
  void setMatricula(string);

  /**
  * Obtém o valor do atributo matrícula.
  * 
  * @return string
  */
  string getMatricula() const
  {
    return matricula;
  }

  private:
  string matricula;
  const static int FIXED_SIZE = 5;

  void validar(string);
};

/**
* @class Nome
* 
* @brief Classe cuja função é armazenar uma string responsável por representar o nome de um participante ou de uma peça.
* 
* Formato: XXXXX...X
* Mínimo: 5 caracteres.
* Máximo: 20 caracteres.
* Cada caractere (X) é letra (A-Z ou a-z), ponto (.) ou espaço em branco.
* Não existem espaços em branco em sequência.
* Primeira letra de cada termo é letra maiúscula (A-Z).
*
*/ 
class Nome
{
  public:
  /**
  * Atribui um valor para o nome
  * 
  * Na validação, é verificado se a string possui apenas caracteres válidos, tamanho correto (mín.: 5, máx.: 20), se existem espaços em branco em sequência e se a primeira letra de cada termo é maiúscula.
  * 
  * @param string
  */
  void setNome(string);

  /**
  * Obtém o valor do atributo nome.
  * 
  * @return string
  */
  string getNome() const
  {
    return nome;
  }

  private:
  string nome;
  const static int MIN_SIZE = 5, MAX_SIZE = 20;

  void validar(string);
};

/**
* @class Senha
* 
* @brief Classe cuja função é armazenar uma string responsável por representar a senha de um participante.
* 
* Formato: XXXXXXXX
* Cada caractere X é letra (A-Z ou a-z), dígito (0-9) ou caractere especial.
* Caracteres especiais disponíveis: !@#$%&?
* Não podem existir caracteres repetidos.
* Existe pelo menos uma letra, um dígito e um caractere especial.
*
*/ 
class Senha
{
  public:
  /**
  * Atribui um valor para a senha.
  * 
  * Na validação, é verificado se a string possui apenas caracteres válidos, tamanho correto (8), se existem caracteres repetidos e se há pelo menos uma letra, um dígito e um caractere especial.
  * 
  * @param string
  */
  void setSenha(string);

  /**
  * Obtém o valor do atributo senha.
  * 
  * @return string
  */
  string getSenha() const
  {
    return senha;
  }

  private:
  string senha;
  const static int FIXED_SIZE = 8;

  void validar(string);
};

/**
* @class Telefone
* 
* @brief Classe cuja função é armazenar uma string responsável por representar o telefone de um participante.
* 
* Formato: (XX)-YYYYYYYYY
* XX é um DDD válido.
* Cada Y é dígito (0-9).
* Não existe número de telefone 000000000.
*
*/ 
class Telefone
{
  public:
  /**
  * Atribui um valor para o telefone.
  * 
  * Na validação, é verificado se a string possui formato válido, tamanho correto (14), e se as substrings XX e YYYYYYYYY são válidas.
  * 
  * @param string
  */
  void setTelefone(string);

  /**
  * Obtém o valor do atributo telefone.
  * 
  * @return string
  */
  string getTelefone() const
  {
    return telefone;
  }

  private:
  string telefone;
  const static int FIXED_SIZE = 14;

  void validar(string);
};

/**
* @class Tipo
* 
* @brief Classe cuja função é armazenar uma string responsável por representar um tipo de peça.
* 
* Formato: "auto", "comédia", "drama", "farsa", "melodrama", "monólogo", "musical", "ópera", "revista".
*
*/ 
class Tipo
{
  public:
  /**
  * Atribui um valor para o tipo.
  * 
  * Na validação, é verificado se a string é igual a um dos valores válidos.
  * 
  * @param string
  */
  void setTipo(string);

  /** 
  * Obtém o valor do atributo tipo.
  * 
  * @return string
  */
  string getTipo() const
  {
    return tipo;
  }

  private:
  string tipo;

  void validar(string);
};