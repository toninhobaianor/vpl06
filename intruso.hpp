#include <string>
#include <vector>
#include <map>

class Intruso{
    std::vector<std::string> ordemletra;
    std::vector<std::multimap<char,char>> sequencia;
    /*Continue a implementação da classe Intruso*/

    public:
        void set_senha_vazada(std::string vazou);
        std::string crack_senha();
};
