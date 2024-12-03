#ifndef ClapTrap_HPP
# define ClapTrap_HPP

#include <iostream>
#include <string>

class ClapTrap {
private:
    std::string         _name;
    int                 _hit_points;
    int                 _energy_points;
    int                 _attack_damage;

public:
    ClapTrap( void );
    ClapTrap( const ClapTrap &src );
    ClapTrap( std::string Name );
    ~ClapTrap( void );
    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

//get & set
    void            setName(std::string name);
    void            setHp(int hp);
    void            setEp(int ep);
    void            setAd(int ad);

    std::string     getName( void ) const ;
    int             getHp( void ) const ;
    int             getEp( void ) const ;
    int             getAd( void ) const ;

//operator =
    ClapTrap&          operator=(const ClapTrap &src);
};

#endif
