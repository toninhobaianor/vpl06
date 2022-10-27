#include <iostream>
#include <map>
#include <string>

int main(){

/*
int x = 10;
std::map<int, char> m;
m.insert(std::pair<int,char>(5,'a'));

m[x] = 'b';

std::map<int, char>::iterator it;
for (it = m.begin(); it!= m.end(); it++){
    std::cout << it->first << ": " << it->second << std::endl;
}*/

std::string senha = {"1739085624BCEAEB"};
std::multimap<char, char> m;

for (int i=0; i<10; i++){
    if (i<2){
        m.insert(std::pair<char,char>('a',senha[i]));
    }    
    if (i==2 || i==3){
        m.insert(std::pair<char,char>('b',senha[i]));
    }
    if (i==4 || i==5){
        m.insert(std::pair<char,char>('c',senha[i]));
    }
    if (i==6 || i==7){
        m.insert(std::pair<char,char>('d',senha[i]));
    }
    if (i==8 || i==9){
        m.insert(std::pair<char,char>('e',senha[i]));
    }
}
std::multimap<char,char>::iterator it;
for (it = m.begin(); it!= m.end(); it++){
    std::cout << it->first << ": " << it->second << std::endl;
}
return 0;
}

