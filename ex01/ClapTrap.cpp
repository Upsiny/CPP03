# include "ClapTrap.hpp"

// Constructors

ClapTrap::ClapTrap( void ): _name("Nameless"), _hit_points(10), _energy_points(10), _attack_damage(0) {
    std::cout << "Un nouveau challenger au titre mondiale approche !!" << std::endl;
    return ;
}

ClapTrap::ClapTrap( std::string name ): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
    std::cout << "Le Challenger " << name << " fait son entrée sous les huées du publique!!" << std::endl;
    return ;
}

ClapTrap::ClapTrap( const ClapTrap &src ) {
    *this = src;
    std::cout << "Attendez ! il y a un nouveau " << src.getName() << "?? mais qui est le vrai?!" << std::endl;
}

//operator
ClapTrap&     ClapTrap::operator=(const ClapTrap &src) {
    this->_name = src.getName();
    this->_hit_points = src.getHp();
    this->_energy_points = src.getEp();
    this->_attack_damage = src.getAd();
    return *this;
}

//Destrutor
ClapTrap::~ClapTrap( void ) {
    std::cout << "Et " << this->_name << " passe PAR DESSUS LA 3ÈME CORDE !!" << std::endl;
    return ;
}

// setter

void ClapTrap::setName(std::string name) {
    this->_name = name;
    return ;
}

void ClapTrap::setHp(int hp) {
    this->_hit_points = hp;
    return ;
}

void ClapTrap::setEp(int ep) {
    this->_energy_points = ep;
    return ;
}

void ClapTrap::setAd(int ad) {
    this->_attack_damage = ad;
    return ;
}

// getter

std::string ClapTrap::getName( void ) const {
    return this->_name ;
}

int ClapTrap::getHp( void ) const {
    return this->_hit_points ;
}

int ClapTrap::getEp( void ) const {
    return this->_energy_points ;
}

int ClapTrap::getAd( void ) const {
    return this->_attack_damage ;
}

// functions
void    ClapTrap::attack(const std::string& target) {
    if (this->_hit_points == 0) {
        std::cout << this->_name << " est completement KO, je ne pense pas le revoir avant un moment..." << std::endl;
        return ;
    }
    if (this->_energy_points > 0) {
        std::cout << this->_name << " Attaque " << target << " et inflige " << this->_attack_damage << " de dégats, ce n'est pas très efficace !" << std::endl;
        this->_energy_points--;
    }
    else
        std::cout << this->_name << " A l'air completement épuisé, il n'arrive même pas a toucher " << target << std::endl;
    return ;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hit_points - amount > 0) {
        std::cout << this->_name << " Viens de se prendre un coup de pied devastateur de la part du champion!! Et prends au moins " << amount << " points de dégats !!" << std::endl;
        this->_hit_points -= amount;
    }
    else {
        std::cout << "1!! 2!! 3!! C'est terminé, le Champion conserve son titre. Quel pitoyable performance de " << this->_name << "..., Comment as-tu fait pour obtenir ce Tittle-shot ?!" << std::endl;
        this->_hit_points = 0;
    }
    return ;
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hit_points == 0) {
        std::cout << this->_name << " est KO, il ne se relèvera pas..." << std::endl;
        return ;
    }
    else if (this->_energy_points == 0) {
        std::cout << this->_name << " n'aura bientôt plus l'energie de se relever..." << std::endl;
        return ;
    }
    else {
        this->_energy_points --;
        this->_hit_points += amount;
        if (this->_hit_points > 10)
            this->_hit_points = 10;
        std::cout << "Je ne sais pas ou " << this->_name << " trouve la force de se relever!! il a récuperé de au moins " << amount << " dégats!" << '\n';
    }
    return ;
}
