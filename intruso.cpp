#include <iostream>
#include <map>
#include"intruso.hpp"

 void Intruso::set_senha_vazada(std::string senha){

    std::string ord;
    std::multimap<char,char> numOrd;
    for(int i = 0;i < 15;i++){
      if(i > 9){
         ord[i - 10] = senha[i];
      }
      else{
         if(i<2){
            numOrd.insert(std::pair<char,char>('A',senha[i]));
         }    
         if(i==2 || i==3){
            numOrd.insert(std::pair<char,char>('B',senha[i]));
         }
         if(i==4 || i==5){
            numOrd.insert(std::pair<char,char>('C',senha[i]));
         }
         if(i==6 || i==7){
            numOrd.insert(std::pair<char,char>('D',senha[i]));
         }
         if(i==8 || i==9){
            numOrd.insert(std::pair<char,char>('E',senha[i]));
         }
      }
    }
    ordemletra.push_back(ord);
    sequencia.push_back(numOrd);
 }

std::string Intruso::crack_senha(){
   std::string comp1;
   std::string comp2;
   std::multimap<char,char>::iterator it;
   for(int i = 0;i < ordemletra.size() - 1;i++){
      comp1 = ordemletra[i];
      comp2 = ordemletra[i + 1];
      for(int j = 0;j < 6; j++){
         for (it = sequencia[i].begin(); it!= sequencia[i].end(); it++){
            if(comp1[j]==it->first){
               
            }
            comp2[j];
         }
      }
      /*for (it = numOrd.begin(); it!= numOrd.end(); it++){
      for(int j = 0;j < 6; j++){
         sequencia[i];
         sequencia[i+1];
      }
   }*/
}
}


 
