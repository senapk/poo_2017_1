#include <iostream>

#include <cstdlib>//rand srand
#include <ctime>  //time

enum Size {P, M, G, GG};
enum Animal {pato, cobra, galinha};

class Ovo{
    Animal mae;
    Size size;
    bool isGoro();
    bool isCozido();
    //void quebrar();
};


class Phisics{
    static float calcDist(Point a, Point b);

    static bool isInside(Point a, Sphere sphere);

    static float calcGrav(Corpo a, Corpo b);
}

ItemLit{ //interface
    pag
    tipo
    desc
    codigo
    static validarCodigo(cod)
}

Revista : ItemLit{

}

Livro : ItemLit{

}

Colecao : ItemLit{
    List ItemLit
}

Acervo{
    List<ItemLit>
    procurarItem(cod)
}


class Telefone{
private:
    string telefone;
public:
    static bool validarTelefone(string tel);
};

int main(){
    Phisics::calcGrav()
    string tel = "432324a3243";

    Telefone::validarTelefone(tel);
}

class Contato{
    string getEmail(){
        if(emails.size() > 0)
            return emails.front();
        return "";
    }

    bool match(string pattern){
        se o nome contem pattern
        ou qualquer email
        ou qualquer um dos telefones
            return true
        return false
    }
};

class Agenda{
    vector<Contato> contatos;

    vector<Contato> search(string pattern){
        vector<Contato> encontrados;
        for(auto cont : contatos){
            if(cont.match(pattern))
                encontrados.push_back(cont);
    }
};











