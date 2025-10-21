#pragma once

#include <iostream>
#include <string>
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( const std::string& name );
		FragTrap( const FragTrap& other );
		~FragTrap();

		FragTrap 	&operator=( const FragTrap& other );

		void 		highFivesGuys( void );
		void 		attack( const std::string& target );
};