#include <string>
#include "client.h"

class Compte{
    public:
    Compte(std::string numeroCompte, Client client, double solde);
    double retrait(double montant);
    double paiement(double montant);
    double depot(double montant);
    void virement(std::string numeroCompte, double montant);

    private:
    std::string _numeroCompte;
    Client _client;
    double _solde;
};
