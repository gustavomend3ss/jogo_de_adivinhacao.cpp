#include<iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>

using namespace std;

int main(){
 
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "**************************************";
    cout << "\n*Boas vindas ao Jogo da Adivinhação!*\n";
    cout << "**************************************";

    char dificuldade;
    int numero_de_tentativas;

    cout<<"\n\nEscolha seu nível de dificuldade: ";
    cout<<"\nFácil (F), Médio (M) ou Difícil (D).\n\n";
    cin>>dificuldade;

    if(dificuldade == 'F'){
        numero_de_tentativas = 15;
    }
    else if (dificuldade == 'M'){
        numero_de_tentativas = 10;
    }
    else{
        numero_de_tentativas = 5;
    }

    srand(time(NULL));
    const int NUMERO_SECRETO = rand()%100;
    bool nao_acertou = true;
    int tentativas = 0;

    double pontos = 1000.0;
    
    for(tentativas = 1; tentativas <= numero_de_tentativas; tentativas++){  
        int chute;
        cout<<"\nTentativa: "<<tentativas;
        cout<<"\n\nQual é o seu chute? ";
        cin>>chute;

        double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0;
        pontos = pontos - pontos_perdidos;

        cout<<"\nO valor do seu chute é: "<<chute;
        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;



    if (acertou)
    {
        cout<<"\nParabéns! Você acertou!";
        nao_acertou = false;
    }
    else if (maior)
    {
        cout<<"\nSeu chute foi maior que o número secreto.";
    }
    else
    {
        cout<<"\nSeu chute foi menor que o número secreto.";
    }
}
    cout<<"\n\nFim de jogo!";
    if(nao_acertou){
        cout<<"\nVocê perdeu! Tente novamente!";
    }
    else{
        cout<<"\nVocê acertou em "<<tentativas<<" tentativas.";
        cout.precision(2);
        cout<<fixed;
        cout<<"\nSua pontuação foi de "<<pontos<<" pontos.\n\n";
    }
}