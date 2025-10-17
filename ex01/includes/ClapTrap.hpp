#pragma once

# include <iostream>
# include <string>

class ClapTrap {

	protected :
		std::string	name_;
		int			hp_; // Hit points (10)
		int			ep_; // Energy points (10)
		int			ad_; // Attack damage (0)

		const static int _fractionalBits;
		
	public :
		ClapTrap( void );
		ClapTrap( const ClapTrap &other );
		ClapTrap( const std::string& name );
		~ClapTrap( void );

		void		attack( const std::string& target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );

		ClapTrap	&operator=( const ClapTrap &other );

		std::string	getName() const;
		int			getHitPoints() const;
		int			getEnergyPoints() const;
		int			getAttackDamage() const;
		void		setAd(int newAd);
		
};

