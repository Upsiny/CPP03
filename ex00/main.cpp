#include "ClapTrap.hpp"

int main() {
    ClapTrap    Cena("John Cena");

    Cena.attack("The Undertaker");
    Cena.takeDamage(8);
    Cena.beRepaired(2);
    Cena.attack("The Undertaker");
    Cena.attack("The Undertaker");
    Cena.attack("The Undertaker");
    Cena.attack("The Undertaker");
    Cena.attack("The Undertaker");
    Cena.attack("The Undertaker");
    Cena.attack("The Undertaker");
    Cena.attack("The Undertaker");
    Cena.attack("The Undertaker");
    Cena.beRepaired(8);
    Cena.takeDamage(4);
    Cena.attack("The Miz");
    Cena.beRepaired(8);
    return 0;
}
