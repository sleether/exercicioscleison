#include <stdio.h>
#include <stdlib.h>



int main(){
    //Definindo variaveis
    int a = 5, b = 3;

    // Imprime na tela
    printf("\n A soma de %d e %d = %d", a, b, a + b);

     //Subtracao
    printf("\n A Subtracao de %d e %d = %d", a, b, a - b);

    // Divis�o
    printf("\n A divisao de %d e %d = %d", a, b, a / b);

    // Multiplica��o
    printf("\n A multiplicacao de %d e %d = %d", a, b, a * b);


    // Resto da Divis�o
    printf("\n O resto da divisao entre %d e %d = %d", a, b, a % b);

    // Valor Absoluto
    printf("\n O valor absoluto de -3 = %d", abs(-3));



    //Pausa o programa apos executar
    system("pause");


}
