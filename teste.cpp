#include <iostream>
using namespace std;

float soma(float a, float b);

int main(){
    float a, b;
    cout<<"\nDigite o primeiro numero: ";
    cin>>a;
    cout<<"\nDigite o segundo numero: ";
    cin>>b;
    cout<<"\nA soma dos numeros e: "<<soma(a, b);
    cout<<"\n\nFUNCIONAAAAAAAA";
    return 0;

}
float soma(float a, float b){
    return a + b;
}