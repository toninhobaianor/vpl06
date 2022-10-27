#include <string>
#include <vector>
#include <map>

class Intruso{
    std::vector<std::string> ordem;
    std::vector<std::multimap<char,char>> ordemnum;
    /*Continue a implementação da classe Intruso*/
    std::vector<std::string> ordem;
    std::vector<std::map<char,char>> ordemnum;

    public:
        void set_senha_vazada(std::string vazou);
        std::string crack_senha();
};
