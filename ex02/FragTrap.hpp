#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
private:

public:
    FragTrap( void );
    FragTrap( const FragTrap &src );
    FragTrap( std::string Name );
    ~FragTrap( void );

//functions
    void    highFivesGuys(void);

//operator =
    FragTrap&          operator=(const FragTrap &src);
};

#endif
