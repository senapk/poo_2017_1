#include <iostream>

#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

void swap(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

int main()
{   
    int idade = 19;
    cout << "O rapaz é "
         << (idade < 18 ? "pivete" : "maxu vei")
         << endl;

    cout << "O rapaz é";
    if(idade < 18)
        cout << "pivete";
    else
        cout << "maxu rei";

    return 0;
}

















