#ifndef ENTITIES_H_INCLUDED
#define ENTITIES_H_INCLUDED

/**
 * @file entities.h
 * @author Richard Junio e Matheus Santos
 *
 * @brief Declaração das Classes de Entidade
 *
 */

#include "domains.h"
#include <string>

using namespace std;

/**
* @class Participante
*
* @brief Classe cuja função é armazenar dados referentes a um usuário.
*
* A classe possui os seguintes atributos que representam os dados de um Particpante:
*
* - Matrícula
* - Nome
* - Sobrenome
* - Email
* - Telefone
* - Senha
* - Cargo
*
*/

class Participante
{
private:
  Matricula matricula;
  Nome nome;
  Nome sobrenome;
  Email email;
  Telefone telefone;
  Senha senha;
  Cargo cargo;

public:
  /**
    * Método responsável pela atribuição do valor de matrícula ao objeto de participante.
    *
    * @param string
    */
  void setMatricula(const Matricula &matricula)
  {
    this->matricula = matricula;
  }

  /**
    * Obtém o valor do atributo matrícula da classe de usuário
    *
    * @return objeto do tipo Matricula
    */
  Matricula getMatricula() const
  {
    return matricula;
  }

  /**
    * Método responsável pela atribuição do valor de nome ao objeto de participante.
    *
    * @param string
    */
  void setNome(const Nome &nome)
  {
    this->nome = nome;
  }

  /**
    * Obtém o valor do atributo nome da classe de usuário
    *
    * @return objeto do tipo Nome
    */
  Nome getNome() const
  {
    return nome;
  }

  /**
    * Método responsável pela atribuição do valor de sobrenome ao objeto de participante.
    *
    * @param string
    */
  void setSobrenome(const Nome &sobrenome)
  {
    this->sobrenome = sobrenome;
  }

  /**
    * Obtém o valor do atributo sobrenome da classe de usuário
    *
    * @return objeto do tipo Nome
    */
  Nome getSobrenome() const
  {
    return sobrenome;
  }

  /**
    * Método responsável pela atribuição do valor de email ao objeto de participante.
    *
    * @param string
    */
  void setEmail(const Email &email)
  {
    this->email = email;
  }

  /**
    * Obtém o valor do atributo email da classe de usuário
    *
    * @return objeto do tipo Email
    */
  Email getEmail() const
  {
    return email;
  }

  /**
    * Método responsável pela atribuição do valor de telefone ao objeto de participante.
    *
    * @param string
    */
  void setTelefone(const Telefone &telefone)
  {
    this->telefone = telefone;
  }

  /**
    * Obtém o valor do atributo telefone da classe de usuário
    *
    * @return objeto do tipo Telefone
    */
  Telefone getTelefone() const
  {
    return telefone;
  }

  /**
    * Método responsável pela atribuição do valor de senha ao objeto de participante.
    *
    * @param string
    */
  void setSenha(const Senha &senha)
  {
    this->senha = senha;
  }

  /**
    * Obtém o valor do atributo senha da classe de usuário
    *
    * @return objeto do tipo Senha
    */
  Senha getSenha() const
  {
    return senha;
  }

  /**
    * Método responsável pela atribuição do valor de cargo ao objeto de participante.
    *
    * @param string
    */
  void setCargo(const Cargo &cargo)
  {
    this->cargo = cargo;
  }

  /**
    * Obtém o valor do atributo cargo da classe de usuário
    *
    * @return objeto do tipo Cargo
    */
  Cargo getCargo() const
  {
    return cargo;
  }
};

class Result
{

protected:
  int value;

public:
  const static int SUCCESS = 0;
  const static int FAILURE = 1;

  void setValue(int value)
  {
    this->value = value;
  }

  int getValue() const
  {
    return value;
  }
};

/**
* @class Peca
*
* @brief Classe cuja função é armazenar dados referentes a uma peça.
*
* A classe possui os seguintes atributos que representam os dados de um peça:
*
* - Identificador
* - Nome
* - Tipo
* - Classificacao
*
*/

class Peca
{
private:
  Codigo identificador;
  Nome nome;
  Tipo tipo;
  Classificacao classificacao;

public:
  /**
    * Método responsável pela atribuição do valor de identificador ao objeto de peça.
    *
    * @param string
    */
  void setIdentificador(const Codigo &identificador)
  {
    this->identificador = identificador;
  }

  /**
    * Obtém o valor do atributo identificador da classe de peça
    *
    * @return objeto do tipo Codigo
    */
  Codigo getIdentificador() const
  {
    return identificador;
  }

  /**
    * Método responsável pela atribuição do valor de nome ao objeto de peça.
    *
    * @param string
    */
  void setNome(const Nome &nome)
  {
    this->nome = nome;
  }

  /**
    * Obtém o valor do atributo nome da classe de peça
    *
    * @return objeto do tipo Nome
    */
  Nome getNome() const
  {
    return nome;
  }

  /**
    * Método responsável pela atribuição do valor de tipo ao objeto de peça.
    *
    * @param string
    */
  void setTipo(const Tipo &tipo)
  {
    this->tipo = tipo;
  }

  /**
    * Obtém o valor do atributo tipo da classe de peça
    *
    * @return objeto do tipo Tipo
    */
  Tipo getTipo() const
  {
    return tipo;
  }

  /**
    * Método responsável pela atribuição do valor de classificaçao ao objeto de peça.
    *
    * @param string
    */
  void setClassificacao(const Classificacao &classificacao)
  {
    this->classificacao = classificacao;
  }

  /**
    * Obtém o valor do atributo classificacao da classe de peça
    *
    * @return objeto do tipo Classificacao
    */
  Classificacao getClassificacao() const
  {
    return classificacao;
  }
};

/**
* @class Sessao
*
* @brief Classe cuja função é armazenar dados referentes a uma sessao.
*
* A classe possui os seguintes atributos que representam os dados de um sessao:
*
* - Identificador
* - Data
* - Horario
*
*/
class Sessao
{
private:
  Codigo identificador;
  Data data;
  Horario horario;

public:
  /**
  * Método responsável pela atribuição do valor de identificador ao objeto de sessao.
  *
  * @param string
  */
  void setIdentificador(const Codigo &identificador)
  {
    this->identificador = identificador;
  }

  /**
  * Obtém o valor do atributo identificador da classe de sessao
  *
  * @return objeto do tipo Codigo
  */
  Codigo getIdentificador() const
  {
    return identificador;
  }

  /**
  * Método responsável pela atribuição do valor de data ao objeto de sessao.
  *
  * @param string
  */
  void setData(const Data &data)
  {
    this->data = data;
  }

  /**
  * Obtém o valor do atributo data da classe de sessao
  *
  * @return objeto do tipo Data
  */
  Data getData() const
  {
    return data;
  }

  /**
  * Método responsável pela atribuição do valor de horario ao objeto de sessao.
  *
  * @param string
  */
  void setHorario(const Horario &horario)
  {
    this->horario = horario;
  }

  /**
  * Obtém o valor do atributo horario da classe de sessao
  *
  * @return objeto do tipo Horario
  */
  Horario getHorario() const
  {
    return horario;
  }
};

/**
* @class Sala
*
* @brief Classe cuja função é armazenar dados referentes a uma sala que apresenta sessões de uma peça.
*
* A classe possui os seguintes atributos que representam os dados de uma Sala:
*
* - Identificador
* - Nome
* - Capacidade
*
*/

class Sala
{
private:
  Codigo identificador;
  Nome nome;
  Capacidade capacidade;

public:
  /**
    * Método responsável pela atribuição do valor de identificador ao objeto da classe Sala.
    *
    * @param string
    */
  void setIdentificador(const Codigo &identificador)
  {
    this->identificador = identificador;
  }

  /**
    * Obtém o valor do atributo identificador da classe Sala.
    *
    * @return objeto do tipo Codigo
    */
  Codigo getIdentificador() const
  {
    return identificador;
  }

  /**
    * Método responsável pela atribuição do valor de nome ao objeto da classe Sala.
    *
    * @param string
    */
  void setNome(const Nome &nome)
  {
    this->nome = nome;
  }

  /**
    * Obtém o valor do atributo nome da classe Sala.
    *
    * @return objeto do tipo Nome
    */
  Nome getNome() const
  {
    return nome;
  }

  /**
    * Método responsável pela atribuição do valor de capacidade ao objeto da classe Sala.
    *
    * @param string
    */
  void setCapacidade(const Capacidade &capacidade)
  {
    this->capacidade = capacidade;
  }

  /**
    * Obtém o valor do atributo capacidade da classe Sala.
    *
    * @return objeto do tipo Capacidade
    */
  Capacidade getCapacidade() const
  {
    return capacidade;
  }
};

#endif // ENTITIES_H_INCLUDED