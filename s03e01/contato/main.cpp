#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Contato{
private:
    string nome;
    string email;
    vector<string> telefones;
public:
    Contato(string nome, string email = ""){
        this->nome = nome;
        this->email = email;
    }

    //Muda o nome do contato
    void setNome(string nome){
        this->nome = nome;
    }

    //Retorna o nome
    string getNome(){
        return this->nome;
    }

    //Altera o email
    //Retorne se houve sucesso na alteração
    //Opcional 1:
    //	Valide verificando se o email possui um @ e depois um .
    bool setEmail(string email){
        this->email = email;
        return true;
    }

    //Retorna o email do usuario
    string getEmail(){
        return this->email;
    }


    //Adiciona um novo telefone ao contato
    //Retorne se a operação foi realizada com sucesso.
    //  Opcional 1: Verifique se o telefone é composto apenas por dígitos
    //  Opcional 2: Nao permita adicionar duas vezes o mesmo numero
    bool addTelefone(string numero){
//        for(string valor : telefones)
//            if (valor == numero)
//                return false;
        if(std::find(telefones.begin(), telefones.end(), numero)
                != telefones.end()){
            return false;
        }


        telefones.push_back(numero);
        return true;
    }

    //Remova o telefone pelo número
    //Informe se houve sucesso
    bool rmTelefone(string numero){
//       for(int i = 0; i < telefones.size(); i++){
//           if(numero == telefones[i]){
//               telefones.erase(telefones.begin() + i);
//           }
//       }

        auto it = std::find(telefones.begin(), telefones.end(), numero);
        if (it == telefones.end() )
            return false;
        telefones.erase(it);
        return true;
    }

    //Retorna a qtd de telefones do contato
    int qtdTelefones(){
        return telefones.size();
    }

    //Retorna a lista de telefones
    vector<string> getTelefones(){
        return telefones;
    }
};

int main(){


    Contato contato("Francisco");

    contato.setNome("Mateus");
    vector<string> telefones = contato.getTelefones();
    telefones.clear();

}


















