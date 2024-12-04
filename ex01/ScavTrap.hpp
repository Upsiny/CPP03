#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:

public:
    ScavTrap( void );
    ScavTrap( const ScavTrap &src );
    ScavTrap( std::string Name );
    ~ScavTrap( void );

//functions
    void    guardGate( void );
    void    attack(const std::string& target);

//operator =
    ScavTrap&          operator=(const ScavTrap &src);
};

#endif
