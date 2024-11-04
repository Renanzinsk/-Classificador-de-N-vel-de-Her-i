#include <iostream>

using namespace std;

string experienceFunction(int input){
    string nivel;
    if(input <= 1000){
        nivel = "Ferro";
    }
    else if(input >= 1001 && input <= 2000){
        nivel = "Bronze";
    }
    else if(input >= 2001 && input <= 5000){
        nivel = "Prata";
    }
    else if(input >= 5001 && input <= 7000){
        nivel = "Ouro";
    }
    else if(input >= 7001 && input <= 8000){
        nivel = "Platina";
    }
    else if(input >= 8001 && input <= 9000){
        nivel = "Ascendente";
    }
    else if(input >= 8001 && input <= 9000){
        nivel = "Imortal";
    }
    else if(input >= 10001){
        nivel = "Radiante";
    }
    return nivel;
}

int main()
{
    string name;
    int input;

    cout << "Digite seu nome de heroi: ";
    cin >> name;

    cout << "Agora digite o xp do Heroi: ";
    cin >> input;

    string xp = experienceFunction(input);

    cout << "O Heroi de nome "<< name << " esta no nivel de " << xp << endl;
    return 0;
}
