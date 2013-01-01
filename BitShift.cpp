#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

    int decimal;
	char binario[100];

    int converter(){

	cout << "\n Digite um numero: \n";

	cin >> decimal;


	itoa(decimal,binario,2); //Converte para base 2

	cout << "\n O numero ";
	cout<< decimal;
	cout<<" em binario ehh: ";
	cout<< binario;

}
////////////////////////////////////////////////////////


    int main () {

    int casas, permissao;
    char direcao [2];


        cout << " \t\t\t\t Bit Shift \n\n";

    converter();

    permissao=0;

      while (permissao==0)  {

    cout << "\n\n Para descolar os Bits pela esquerda digite 'E' e para direita 'D' \n";
    cin >> direcao;

    strcpy(direcao,strupr(direcao));

       if ((strcmp(direcao,"E")==0)|| (strcmp(direcao,"D")==0)){

       permissao=1;
       }

       else {
        permissao=0;
       }

      }


        cout << "\n\n Digite quantas casas voce quer andar \n";
         cin >> casas;


        if (strcmp(direcao,"E")==0) {

        decimal<<=casas;

        cout << "\n o numero resultante a esquerda ehh: " << decimal;
        cout << "\n";
        }


        else if (strcmp(direcao,"D")==0) {

        decimal>>=casas;

        cout << "\n o numero resultante a direita ehh:" << decimal;
        cout << "\n";


        }

    }


