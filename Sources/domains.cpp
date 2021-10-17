#include "../headers/domains.h"

void Capacidade::validar(string capacidade) {
  int capacidade_size = capacidade.size();
	std::array<string, 5> capacidades { "100", "200", "300", "400", "500" };
  bool exists = std::find(std::begin(capacidades), std::end(capacidades), capacidade) !=std::end(capacidades);

  if(capacidade_size != FIXED_SIZE){
    throw invalid_argument("Invalid string size.");
  }

  if(!exists){
    throw invalid_argument("Invalid value.");
  }
}

void Capacidade::setCapacidade(string capacidade) {
  validar(capacidade);
  this->capacidade = capacidade;
}

void Cargo::validar(string cargo) {
  int cargo_size = cargo.size();
	std::array<string, 6> cargos { "ator", "cenógrafo", "figurinista", "maquiador", "sonoplasta", "iluminador"};
  bool exists = std::find(std::begin(cargos), std::end(cargos), cargo) !=std::end(cargos);

  if(!exists){
    throw invalid_argument("Invalid value.");
  }
}

void Cargo::setCargo(string cargo) {
  validar(cargo);
  this->cargo = cargo;
}

void Classificacao::validar(string classificacao) {
	std::array<string, 6> classificacoes { "livre", "10", "12", "14", "16", "18"};
  bool exists = std::find(std::begin(classificacoes), std::end(classificacoes), classificacao) !=std::end(classificacoes);

  if(!exists){
    throw invalid_argument("Invalid value.");
  }
}

void Classificacao::setClassificacao(string classificacao) {
  validar(classificacao);
  this->classificacao = classificacao;
}

void Codigo::validar(string codigo) {
	int codigo_size = codigo.size();
  char first_character;
  char second_character;
  char first_number;
  char second_number;
  char third_number;
  char fourth_number;
  stringstream aux;
	bool condicao_erro;

  if(codigo_size != FIXED_SIZE){
    throw invalid_argument("Invalid string size.");
  }

  aux << codigo[0];
	aux >> first_character;

	condicao_erro = first_character < 'A' || first_character > 'z';
	
	aux << codigo[1];
	aux >> second_character;
	
	condicao_erro = condicao_erro || (second_character < 'A' || second_character > 'z');
	
	aux << codigo[2];
	aux >> first_number;

	condicao_erro = condicao_erro || (first_number > '9' || first_number < '0');
	
	aux << codigo[3];
	aux >> second_number;

	condicao_erro = condicao_erro || (second_number > '9' || second_number < '0');
	
	aux << codigo[4];
	aux >> third_number;

	condicao_erro = condicao_erro || (third_number > '9' || third_number < '0');
	
	aux << codigo[5];
	aux >> fourth_number;

	condicao_erro = condicao_erro || (fourth_number > '9' || fourth_number < '0');
	
  if(condicao_erro){
    throw invalid_argument("Invalid value.");
  }
}

void Codigo::setCodigo(string codigo) {
  validar(codigo);
  this->codigo = codigo;
}

void Data::validar(string data) {
	int data_size = data.size();
  int day, month, year;
  
  if(data_size != FIXED_SIZE){
    throw invalid_argument("Invalid string size.");
  }

  day = stoi(data.substr(0,2));
  month = stoi(data.substr(3,2));
  year = stoi(data.substr(6,4));
	
	if(data[2] != '/' || data[5] != '/'){
    throw invalid_argument("Invalid Date format.");
  } else if (day < 1 || day > 31){
	  throw invalid_argument("Invalid day.");
  } else if (month < 1 || month > 12){
	  throw invalid_argument("Invalid month.");
  } else if (year < 2000 || year > 9999){
	  throw invalid_argument("Invalid year.");
  } else if (day > 30  && (month == 2 || month == 4 || month == 6 || month == 9 ||month == 11)){
	  throw invalid_argument("Invalid date.");
  } else if (day > 29 && month == 2){
	  throw invalid_argument("Invalid date.");
  } else if (day == 29 && year % 4 == 0){
	  throw invalid_argument("Invalid date.");
  } 
}

void Data::setData(string data) {
  validar(data);
  this->data = data;
}

void Email::validar(string email) {
	int email_size = email.size();
  
  if(email_size > 320){
    throw invalid_argument("Invalid string size.");
  }

	int position = email.find('@');
	string specialCharacters = "!#$%&'*+-/=?^_`{|}~.";
	
	string parte_local = email.substr(0, position);
	string dominio = email.substr(position + 1, email_size - 1);

	int parte_local_size = parte_local.size();
	int dominio_size = dominio.size();
	
	if (parte_local_size > 64 || dominio.size() > 255) {
		throw invalid_argument("Invalid email format.");
	}
	
	for (int i = 0; i < parte_local_size; i++) {
		bool isSpecialChar = specialCharacters.find(parte_local[i]) != string::npos;
		if (!isalnum(parte_local[i]) && !isSpecialChar) {
			throw invalid_argument("Invalid email format.");
		} else if (parte_local[i] == '.' && (parte_local[i - 1] == '.' || i == 0 || i == parte_local_size - 1)) {
			throw invalid_argument("Invalid email format.");
		}
	}

	for (int i = 0; i < dominio_size; i++) {
		bool isSpecialChar = specialCharacters.find(dominio[i]) != string::npos;
		if (!isalnum(dominio[i]) && !isSpecialChar) {
			throw invalid_argument("Invalid email format.");
		} else if (dominio[i] == '.' && (dominio[i - 1] == '.' || i == 0 || i == dominio_size - 1)) {
			throw invalid_argument("Invalid email format.");
		}
	}
}

void Email::setEmail(string email) {
  validar(email);
  this->email = email;
}

void Horario::setHorario(string horario)
{
    validar(horario);
    this->horario = horario;
}

void Horario::validar(string horario){
  int s_hour;
  string s_min;

  if(horario.size() != FIXED_SIZE){
    throw invalid_argument("Invalid Horario size.");
  }else if(horario[2] != ':'){
    throw invalid_argument("Invalid Horario format.");
  }else{
    s_hour = stoi(horario.substr(0,2));
	  s_min = horario.substr(3,2);
    if(s_hour < 0 || s_hour > 23){
      throw invalid_argument("Invalid hour.");
    }

    if(s_min != "00" && s_min != "15" && s_min != "30" && s_min != "45"){
      throw invalid_argument("Invalid minutes.");
    }

  }
}

void Matricula::setMatricula(string matricula)
{
    validar(matricula);
    this->matricula = matricula;
}

void Matricula::validar(string matricula){
  if(matricula.size() != FIXED_SIZE){
    throw invalid_argument("Invalid Matricula size.");
  }

  for (int i = 0; i < FIXED_SIZE; i++){
    if (!isdigit(matricula[i])){
       throw invalid_argument("Matricula must contain only digits.");
    }
  }

  for (int i = 0; i < FIXED_SIZE; i++){
    for(int j = 0; j < FIXED_SIZE; j++){
      if(i != j && matricula[i] == matricula[j]){
        throw invalid_argument("Matricula should not contain duplicate digits.");
      }
    }
  }

}

void Nome::setNome(string nome)
{
  validar(nome);
  this->nome = nome;
}

void Nome::validar(string nome)
{
  int size_nome;
  size_nome = nome.size();

  if(size_nome < MIN_SIZE || size_nome > MAX_SIZE){
    throw invalid_argument("Invalid Nome size.");
  }

  for(int i = 0; i < size_nome ; i++){
    if(!isalpha(nome[i]) && nome[i] != ' ' && nome[i] != '.'){
      throw invalid_argument("Nome should contain only letters, blank spaces and end dots.");
    }

    if(i > 0 && nome[i] == '.' && !isalpha(nome[i-1])){
      throw invalid_argument("End dot should be preceded by letter.");
    }

    if(i != size_nome - 1 && nome[i] == ' ' && nome[i+1] == ' '){
      throw invalid_argument("Nome can not have sequencial blank spaces.");
    }

    if(isalpha(nome[i]) && nome[i] != toupper(nome[i]) && (i == 0 || !isalpha(nome[i - 1]))){
      throw invalid_argument("First letter of each word should be upcase.");
    }
  }


}

void Senha::setSenha(string senha)
{
  validar(senha);
  this->senha = senha;
}

void Senha::validar(string senha){
  string specialCharacters = "!@#$%&?";
  bool atLeastOneLetter = false, atLeastOneDigit = false, atLeastOneSpecialChar = false;

  if(senha.size() != FIXED_SIZE){
    throw invalid_argument("Invalid Senha size.");
  }

  for(int i = 0 ; i < FIXED_SIZE; i++){
    bool isSpecialChar = specialCharacters.find(senha[i]) != string::npos;
    if(isalpha(senha[i])){
      atLeastOneLetter = true;
    } 
    if(isdigit(senha[i])){
      atLeastOneDigit = true;
    }
    if(isSpecialChar){
      atLeastOneSpecialChar = true;
    }
    
    if(!isalnum(senha[i]) && !isSpecialChar){
       throw invalid_argument("Senha has invalid characters.");
    }

    for(int j = 0; j < FIXED_SIZE; j++){
      if(i != j && senha[i] == senha[j]){
        throw invalid_argument("Senha should not contain duplicate characters.");
      }
    }
  }

  if(!atLeastOneLetter){
    throw invalid_argument("Senha should have at least one letter.");
  }

  if(!atLeastOneDigit){
    throw invalid_argument("Senha should have at least one digit.");
  }

  if(!atLeastOneSpecialChar){
    throw invalid_argument("Senha should have at least one special character.");
  }
}

void Telefone::setTelefone(string telefone)
{
  validar(telefone);
  this->telefone = telefone;
}

void Telefone::validar(string telefone)
{
  int invalidRegCodes [23] = { 20, 23, 25, 26, 29, 30, 31, 36, 39, 40, 50, 52, 56, 57, 58, 59, 60, 70, 72, 76, 78, 80, 90 };

  if(telefone.size() != FIXED_SIZE){
    throw invalid_argument("Invalid Telefone size.");
  }

  int regCode = stoi(telefone.substr(1, 2));
  bool invalidRegCode = std::find(std::begin(invalidRegCodes), std::end(invalidRegCodes), regCode) != std::end(invalidRegCodes);
  invalidRegCode = invalidRegCode || regCode <= 10 || regCode >= 100;

  string phoneNumber = telefone.substr(5, 13);
  bool invalidPhoneNumber = phoneNumber == "000000000";
  if (!invalidPhoneNumber){
    for(int i = 0; i < phoneNumber.size() ; i++){
      if(!isdigit(phoneNumber[i])){
        invalidPhoneNumber = true;
      }
    }
  }

  bool invalidFormat = telefone[0] != '(' || telefone[3] != ')' || telefone[4] != '-';

  if(invalidFormat || invalidRegCode || invalidPhoneNumber){
    throw invalid_argument("Invalid Telefone format.");
  }
}

void Tipo::setTipo(string tipo)
{
  validar(tipo);
  this->tipo = tipo;
}

void Tipo::validar(string tipo)
{
	std::array<string, 9> tipos { "auto", "comédia", "drama", "farsa", "melodrama", "monólogo", "musical", "ópera", "revista"};
  bool validTipo = std::find(std::begin(tipos), std::end(tipos), tipo) != std::end(tipos);

  if(!validTipo){
    throw invalid_argument("Invalid Tipo.");
  }
}
