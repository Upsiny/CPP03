# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main() {
    ClapTrap    Cena("John Cena");
    ScavTrap    Orton("Randy Orton");
    int         i = 50;

    Cena.attack("The Undertaker");
    Cena.takeDamage(8);
    Cena.beRepaired(2);
    Orton.attack("Triple H");
    Orton.takeDamage(8);
    Orton.beRepaired(2);
    while (i-- > 0)
        Orton.attack("Triple H");
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
