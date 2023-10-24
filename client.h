#include <string>

class Client{
    public:
    Client(std::string nom, std::string prenom, std::string genre, std::string adresse, int dateNaissance );

    private:
    std::string _nom;
    std::string _prenom;
    std::string _genre;
    std::string _adresse;
    int _dateNaissance;
};
