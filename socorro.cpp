#include <iostream>
#include <math.h>

using namespace std;

int valor; 
int seletor;

float soma() {

    float x;
    float y;
    float soma;

    cout << " SOMA" << endl;
    cout << " Insira o primeiro numero:" << endl;
    cin >> x;
    cout << " Insira o segundo numero:" << endl;
    cin >> y;
    soma = x + y;
    cout << x << "+" << y << "=" << soma << endl;

    return 0 ;
}

float subtracao() {
    float x;
    float y;
    float sub;

    cout << " SUBTRACAO" << endl;
    cout << " Insira o primeiro numero:" << endl;
    cin >> x;
    cout << " Insira o segundo numero:" << endl;
    cin >> y;
    sub = x - y;
    cout << x << "-" << y << "=" << sub << endl;

    return 0 ;
}

float multiplicacao() {
    float x;
    float y;
    float mult;

    cout << " MULTIPLICACAO" << endl;
    cout << " Insira o primeiro numero:" << endl;
    cin >> x;
    cout << " Insira o segundo numero:" << endl;
    cin >> y;
    mult = x*y;
    cout << x << "*" << y << "=" << mult << endl;

    return 0 ;
}

float divisao(){
    float x;
    float y;
    float div;

    cout << " DIVISAO" << endl;
    cout << " Numerador:" << endl;
    cin >> x;
    cout << " Denominador:" << endl;
    cin >> y;
    if (y==0){
        cout << " INDETERMINACAO!! Vai estudar Calculo!!" << endl;
    }
    else{
    div = x/y;
    cout << x << "/" << y << "=" << div << endl;
    }

    return 0 ;


}

int resto_da_divisao(){
    int x;
    int y;
    int resto;

    cout << " RESTO DA DIVISAO" << endl;
    cout << " Numerador:" << endl;
    cin >> x;
    cout << " Denominador:" << endl;
    cin >> y;
    if (y==0){
        cout << " INDETERMINACAO!! Vai estudar Calculo!!" << endl;
    }
    else{
    resto = x%y;
    cout << "O resto da divisao de " << x << " por " << y << " e igual a: " << resto << endl;
    }

    return 0 ;


}

int potencia(){
    int x;
    int y;

    cout << " POTENCIA" << endl;
    cout << " Insira a base:" << endl;
    cin >> x;
    cout << " Insira o expoente:" << endl;
    cin >> y;
    
    cout << "O numero " << x << " elevado a " << y << " potencia e igual a: " << pow(x, y) << endl;

    return 0 ;

}

int fatorial(){
    int i ;
    int x;
    long int fat=1;

    cout << " FATORIAL" << endl;
    cout << " Insira o numero:" << endl;
    cin >> x;
    for(i=x ; i>0 ; i--)

        fat *= i;
    
    cout << "O fatorial de " << x << " e igual a: " << fat << endl;

    return 0 ;


}

int raiz_quadrada(){
    int x;

    cout << " RAIZ QUADRADA" << endl;
    cout << " Insira o numero:" << endl;
    cin >> x;
    
    cout << " A raiz quadrada de " << x << " e igual a: " << sqrt(x) << endl;

    return 0 ;

}

int menu(){

    cout << " CALCULADORA - Insira o numero correspondente a operacao desejada:\n 1. Soma \n 2. Subtracao \n 3. Multiplicacao \n 4. Divisao \n 5. Resto da Divisao \n 6. Potencia \n 7. Fatorial \n 8. Raiz Quadrada \n 9. Sair" << endl;
    cin >> valor;
    switch (valor) {
        case 1:
            soma();
            break;
        case 2:
            subtracao();
            break;
        case 3:
            multiplicacao();
            break;
        case 4:
            divisao();
            break;
        case 5:
            resto_da_divisao();
            break;
        case 6:
            potencia();
            break;
        case 7:
            fatorial();
            break;
        case 8:
            raiz_quadrada();
            break;
        case 9:
            break;

        default:
            cout << "Digite uma operacao valida!" << endl;
            break;
    }
   
    return 0;

        
}

int repeticao_operacao(){

    if (valor==1){
        soma();
    }
    if (valor==2){
        subtracao();
    }
    if (valor==3){
        multiplicacao();
    }
    if(valor==4){
        divisao();
    }
    if(valor==5){
        resto_da_divisao();
    }
    if(valor==6){
        potencia();
    }
    if(valor==7){
        fatorial();
    }
    if(valor==8){
        raiz_quadrada();
    }
    return 0;
}

int main(){
    menu();
    if(valor!=9){
        cout << "  Selecione: \n 1. Para repetir operacao \n 2. Para retornar ao menu  " << endl;
        cin >> seletor;
            while(seletor ==2 || seletor ==1){
                if(valor==9){
                    break;
                }
            while(seletor==1){
                repeticao_operacao();
                cout << "  Selecione: \n 1. Para repetir operacao \n 2. Para retornar ao menu  " << endl;
                cin >> seletor;
            }
            while (seletor==2){
                menu();
                    if(valor==9){
                        break;
                    }
                cout << "  Selecione: \n 1. Para repetir operacao \n 2. Para retornar ao menu  " << endl;
                cin >> seletor;
            }  
            }
    
        if( seletor !=2 && seletor !=1 ){
            cout << " Selecione uma opcao valida!! " << endl;
        }
    }

    cout << " Obrigada por usar esta Calculadora!" << endl;
    return 0;
}