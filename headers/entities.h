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

class Participante {
    private:
      Matricula matricula;
      Nome nome;
      Nome sobrenome;
      Email email;
      Telefone telefone;
      Senha senha;
      Cargo cargo;
    
    public:
    
    void setMatricula(const Matricula &matricula){
      this->matricula = matricula;
    }

    Matricula getMatricula() const 
    {
      return matricula;
    }

    void setNome(const Nome &nome){
      this->nome = nome;
    }

    Nome getNome() const 
    {
      return nome;
    }

    void setSobrenome(const Nome &sobrenome){
      this->sobrenome = sobrenome;
    }

    Nome getSobrenome() const 
    {
      return sobrenome;
    }

    void setEmail(const Email &email){
      this->email = email;
    }

    Email getEmail() const 
    {
      return email;
    }

    void setTelefone(const Telefone &telefone){
      this->telefone = telefone;
    }

    Telefone getTelefone() const 
    {
      return telefone;
    }

    void setSenha(const Senha &senha){
      this->senha = senha;
    }

    Senha getSenha() const 
    {
      return senha;
    }

    void setCargo(const Cargo &cargo){
      this->cargo = cargo;
    }

    Cargo getCargo() const 
    {
      return cargo;
    }


  }

class Peca {
  private:
    Codigo identificador;
    Nome nome;
    Tipo tipo;
    Classificacao classificacao;
    
  public:
    void setIdentificador(const Codigo &identificador){
      this->identificador = identificador;
    }

    Codigo getIdentificador() const {
      return identificador;
    } 

    void setNome(const Nome &nome){
      this->nome = nome;
    }

    Nome getNome() const {
      return nome;
    } 

    void setTipo(const Tipo &tipo){
      this->tipo = tipo;
    }

    Tipo getTipo() const {
      return tipo;
    } 

    void setClassificacao(const Classificacao &classificacao){
      this->classificacao = classificacao;
    }

    Classificacao getClassificacao() const {
      return classificacao;
    } 
}

class Sessao {
  private:
    Codigo identificador;
    Data data;
    Horario horario;

  public:

  void setIdentificador(const Codigo &identificador){
    this->identificador = identificador;
  }

  Codigo getIdentificador() const {
    return identificador;
  } 

  void setData(const Data &data){
    this->data = data;
  }

  Data getData() const {
    return data;
  } 

  void setHorario(const Horario &Horario){
    this->horario = horario;
  }

  Horario getHorario() const {
    return horario;
  } 
  
}

class Sala {
  private: 
    Codigo identificador;
    Nome nome;
    Capacidade capacidade;
    
  public:
    void setIdentificador(const Codigo &identificador){
      this->identificador = identificador;
    }

    Codigo getIdentificador() const {
      return identificador;
    } 

    void setNome(const Nome &nome){
      this->nome = nome;
    }

    Nome getNome() const {
      return nome;
    } 

    void setCapacidade(const Capacidade &capacidade){
      this->capacidade = capacidade;
    }

    Capacidade getCapacidade() const {
      return capacidade;
    }
}