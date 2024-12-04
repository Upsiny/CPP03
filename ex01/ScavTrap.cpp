# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

// Constructors
ScavTrap::ScavTrap( void ): ClapTrap() {
    setName("ScavTrap");
    setHp(100);
    setEp(50);
    setAd(10);
    std::cout << "<ScavTrap> Non ! c'était en fait : " << getName() << " cacher sous le masque de Nameless !!" << std::endl;
    return ;
}

ScavTrap::ScavTrap( const ScavTrap &src ) {
    *this = src;
    std::cout << "<ScavTrap> Ils sont deux maintenant !! que va faire le champion??" << std::endl;
}

ScavTrap::ScavTrap( std::string Name ): ClapTrap(Name) {
    setHp(100);
    setEp(50);
    setAd(10);
    std::cout << "<ScavTrap> Et il est prêt a en découdre !!" << std::endl;
}

//Destrutor
ScavTrap::~ScavTrap( void ) {
    std::cout << "<ScavTrap> " << this->_name << " N'aurais pas du se lever ce matin..." << std::endl;
}

//functions
void    ScavTrap::guardGate( void ){
    std::cout << "<ScavTrap> " << this->_name << " est sur la défensive, il vas être dur à atteindre." << std::endl;
}

void    ScavTrap::attack(const std::string& target) {
    if (this->_hit_points == 0) {
        std::cout << "<ScavTrap> " << this->_name << " n'est plus en état de se battre." << std::endl;
        return ;
    }
    if (this->_energy_points > 0) {
        std::cout << "<ScavTrap> " << this->_name << " passe à l'offensive sur " << target << " avec un terrible drop-kick qui inflige " << this->_attack_damage << " de dégats!! Quel athlète !!" << std::endl;
        this->_energy_points--;
    }
    else
        std::cout << "<ScavTrap> " << this->_name << " est à bout de force, et n'arrive plus a atteindre " << target << std::endl;
    return ;
}

//operator
ScavTrap&     ScavTrap::operator=(const ScavTrap &src) {
    this->_name = src.getName();
    this->_hit_points = src.getHp();
    this->_energy_points = src.getEp();
    this->_attack_damage = src.getAd();
    return *this;
}
