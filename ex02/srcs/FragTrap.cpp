#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
	this->hp_ = 100;
	this->ep_ = 100;
	this->ad_ = 30;
	this->name_ = "FragTrap";
	std::cout << "FragTrap constructor called." << std::endl;
}

FragTrap::FragTrap( const std::string& name ) : ClapTrap( name )
{
	hp_ = 100;
	ep_ = 100;
	ad_ = 30;
	std::cout << "FragTrap constructor called." << std::endl;
}

FragTrap::FragTrap( const FragTrap& other ) : ClapTrap ( other )
{
	std::cout << "FragTrap copy constructor called." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called." << std::endl;
}

FragTrap &FragTrap::operator=( const FragTrap& other )
{
	if (this != &other)
	{
		name_ = other.name_;
		hp_ = other.hp_;
		ep_ = other.ep_;
		ad_ = other.ad_;
	}
	return *this;
}

void FragTrap::highFivesGuys( void )
{
	std::cout << "High five !" << std::endl;
}

void FragTrap::attack( const std::string& target )
{
	if (ep_ < 1 || hp_ < 1) {
		std::cout << "FragTrap " << name_ << " cannot attack" << std::endl;
		return ;
	}
	ep_ -= 1;

	std::cout << "FragTrap " << name_ << " attacks " << target
		<< ", causing " << ad_ << " points of damage!" << std::endl;
}
