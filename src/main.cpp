#include <stdexcept>
#include <iostream>
#include <string>

#include "./domains.cpp"

using namespace std;

int main(){
  string testParam = "(11)-999999999";
  
  Telefone testClass;
  testClass.setTelefone(testParam);
}