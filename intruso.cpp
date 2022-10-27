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
            numOrd.insert(std::pair<char,char>('a',senha[i]));
         }    
         if(i==2 || i==3){
            numOrd.insert(std::pair<char,char>('b',senha[i]));
         }
         if(i==4 || i==5){
            numOrd.insert(std::pair<char,char>('c',senha[i]));
         }
         if(i==6 || i==7){
            numOrd.insert(std::pair<char,char>('d',senha[i]));
         }
         if(i==8 || i==9){
            numOrd.insert(std::pair<char,char>('e',senha[i]));
         }
     }
 }
   ordem.push_back(ord);
   ordemnum.push_back(numOrd);
}

std::string Intruso::crack_senha(){
   std::string comp1;
   std::string comp2;
   std::multimap<char,char>::iterator it;
   for(int i = 0;i < ordem.size() - 1;i++){
      comp1 = ordem[i];
      comp2 = ordem[i + 1];
      for (it = numOrd.begin(); it!= numOrd.end(); it++){
      for(int j = 0;j < 6; j++){
         ordemnum[i];
         ordenum[i+1];
      }
   }
}


 
