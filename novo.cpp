#include <iostream>
#include <map>
#include <string>
#include "novo.hpp"

void Intruso::set_senha_vazada(std::string senha){
    std::vector<std::string> senhaordem;
    
    std::string s1;
    std::string s2;
    std::string s3;
    std::string s4;
    std::string s5;
    
    for(int i = 20;i < 30;i+=2){
        
        if(senha[i] == 'A'){
            s1 = senha[0];
            s1[1] = senha[2];
            senhaordem.push_back(s1);
        }
        
        if(senha[i] == 'B'){
            s2 = senha[4];
            s2[1] = senha[6];
            senhaordem.push_back(s2);
        }
        
        if(senha[i] == 'C'){
            s3 = senha[8];
            s3[1] = senha[10];
            senhaordem.push_back(s3);
            
        }
        
        if(senha[i] == 'D'){
            s4 = senha[12];
            s4[1] = senha[14];
            senhaordem.push_back(s4);
        }
        
        if(senha[i] == 'E'){
            s5 = senha[16];
            s5[1] = senha[18];
            senhaordem.push_back(s5);
        }
    }
    recorrencia.push_back(senhaordem);

}

std::string Intruso::crack_senha(){
    
    std::string senhacerta[11];
    int q=0;
    
    for(int i = 0; i < recorrencia.size() - 1; i++){
        for(int j = 0; j < 5; j++){
            for(int k = 0; k < 1; k++){
                if(recorrencia[i][j][k] == recorrencia[i + 1][j][k]){
                    
                    senhacerta[q] = recorrencia[i][j][k];
                    q+2;
                }
            }
        }
    }    
    return *senhacerta;
}
