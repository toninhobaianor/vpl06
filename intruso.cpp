#include <iostream>
#include <map>
#include <string>
#include"intruso.hpp"

void Intruso::set_senha_vazada(std::string senha){
 std::string ord;
 std::multimap<char,char> numOrd;
 int j = 0;
 for(int i = 0;i < 30;i++){
     if(i > 20){
         if(i % 2 == 0){
            ord[j] = senha[i];
            j++;
         }
     }
     else{
         if(i==0 || i==2){
            numOrd.insert(std::pair<char,char>('A',senha[i]));
         }    
         if(i==4 || i==6){
            numOrd.insert(std::pair<char,char>('B',senha[i]));
         }
         if(i==8 || i==10){
            numOrd.insert(std::pair<char,char>('C',senha[i]));
         }
         if(i==12 || i==14){
            numOrd.insert(std::pair<char,char>('D',senha[i]));
         }
         if(i==16 || i==18){
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
   std::multimap<char,char>::iterator it2;
   for(int i = 0;i < ordemletra.size() - 1;i++){
      comp1 = ordemletra[i];
      comp2 = ordemletra[i + 1];
      for(int j = 0;j < 6; j++){
         for (it = sequencia[i].begin(); it!= sequencia[i].end(); it++){
            if(comp1[j]==it->first){
               std::cout<<"oiiiiiiii"<<std::endl;
            }
         }
         for (it2 = sequencia[i++].begin(); it2!= sequencia[i++].end(); it2++){
            if(comp2[j] == it2->first){
               std::cout<<"tchauuuuu"<<std::endl;
            }
         }
      }
   }
}

 
