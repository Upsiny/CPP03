#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int    main(void) {
    ClapTrap    Cena("John Cena");
    ClapTrap    nameless_claptrap;
    ScavTrap    Orton("Randy Orton");
    ScavTrap    nameless_scavtrap;
    FragTrap    Billy("Billy Bob");
    FragTrap    nameless_fragtrap;

    nameless_scavtrap.guardGate();
    Orton.attack("Cena");
    Cena.takeDamage(Orton.getAd());
    Billy.attack("Orton");
    Orton.takeDamage(Billy.getAd());
    Orton.takeDamage(5);
    Cena.takeDamage(10);
    Cena.attack("Orton");
    Cena.beRepaired(1);
    Orton.attack("Cena");
    Cena.takeDamage(1);
    Orton.beRepaired(4);
    Orton.beRepaired(4);
    Orton.guardGate();
    Billy.highFivesGuys();
    Billy.takeDamage(1000);
}
