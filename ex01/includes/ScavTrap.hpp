#pragma once

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap( const std::string& name );
		ScavTrap( const ScavTrap& other );
		~ScavTrap();

		ScavTrap	&operator=( const ScavTrap& other );

		void		guardGate();
		void		attack( const std::string& target );
};