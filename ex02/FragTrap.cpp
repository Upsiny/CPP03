# include "FragTrap.hpp"
# include "ClapTrap.hpp"

// Constructors
FragTrap::FragTrap( void ): ClapTrap() {
    setName("FragTrap");
    setHp(100);
    setEp(100);
    setAd(30);
    std::cout << "<FragTrap> Un " << getName() << " sauvage apparait!" << std::endl;
    return ;
}

FragTrap::FragTrap( const FragTrap &src ) {
    *this = src;
    std::cout << "<FragTrap> Un second " << getName() << " rentre en piste" << std::endl;
    return ;
}

FragTrap::FragTrap( std::string Name ): ClapTrap(Name) {
    setHp(100);
    setEp(100);
    setAd(30);
    std::cout << "<FragTrap> Et " << getName() << " fait ses début à la 42 42 21" << std::endl;
    return ;
}

//Destrutor
FragTrap::~FragTrap( void ) {
    std::cout << "<FragTrap> " << this->_name << " est mort, ce n'est pas possible de survivre à ça !!" << std::endl;
    return ;
}

//functions
void    FragTrap::highFivesGuys(void){
    std::cout << "<FragTrap> " << this->_name << " Cherche son partennaire pour faire le tag, il a surement dû oublier qu'il s'agissait d'un match solo !!" << std::endl;
    return ;
}


//operator
FragTrap&     FragTrap::operator=(const FragTrap &src) {
    this->_name = src.getName();
    this->_hit_points = src.getHp();
    this->_energy_points = src.getEp();
    this->_attack_damage = src.getAd();
    return *this;
}
