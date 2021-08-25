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

class Capacidade
{
  public:
    /**
    * 
    * @brief
    * 
    * @param string
    */

    void setCapacidade(string);

    /**
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

class Cargo
{
  public:
    /**
    * 
    * @brief
    * 
    * @param string
    */

    void setCargo(string);

    /**
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

class Classificacao
{
  public:
    /**
    * 
    * @brief
    * 
    * @param string
    */

    void setClassificacao(string);

    /**
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

class Codigo
{
  public:
    /**
    * 
    * @brief 
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

class Data
{
  public:
    /**
    * 
    * @brief 
    * 
    * @param string
    */

    void setData(string);

    /**
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

class Email
{
  public:
    /**
    * 
    * @brief 
    * 
    * @param string
    */

    void setEmail(string);

    /**
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

class Horario {
  public:
  void setHorario(string);

  string getHorario() const
  {
    return horario;
  }

  private:
  string horario;

  const static int FIXED_SIZE = 5;

  void validar(string);
};


class Matricula {
  public:
  void setMatricula(string);

  string getMatricula() const
  {
    return matricula;
  }

  private:
  string matricula;
  const static int FIXED_SIZE = 5;

  void validar(string);
};

class Nome {
  public:
  void setNome(string);

  string getNome() const
  {
    return nome;
  }

  private:
  string nome;
  const static int MIN_SIZE = 5, MAX_SIZE = 20;

  void validar(string);
};

class Senha {
  public:
  void setSenha(string);

  string getSenha() const
  {
    return senha;
  }

  private:
  string senha;
  const static int FIXED_SIZE = 8;

  void validar(string);
};

class Telefone {
  public:
  void setTelefone(string);

  string getTelefone() const
  {
    return telefone;
  }

  private:
  string telefone;
  const static int FIXED_SIZE = 14;

  void validar(string);
};

class Tipo {
  public:
  void setTipo(string);

  string getTipo() const
  {
    return tipo;
  }

  private:
  string tipo;

  void validar(string);
};