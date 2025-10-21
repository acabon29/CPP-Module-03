
#include <ScavTrap.hpp>

ScavTrap::ScavTrap( void ) : ClapTrap() {
	this->hp_ = 100;
	this->ep_ = 50;
	this->ad_ = 20;
	this->name_ = "ScavTrap";
	std::cout << "ScavTrap constructor called." << std::endl;
}

ScavTrap::ScavTrap( const std::string& name ) : ClapTrap() {
	this->hp_ = 100;
	this->ep_ = 50;
	this->ad_ = 20;
	this->name_ = name;
	std::cout << "ScavTrap constructor called." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

ScavTrap::ScavTrap (const ScavTrap& other) : ClapTrap( other )
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other) {
		this->name_ = other.name_;
		this->hp_ = other.hp_;
		this->ep_ = other.ep_;
		this->ad_ = other.ad_;
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target) {
	if (this->hp_ == 0) {
		std::cout << "ScavTrap "<< this->name_ << " can't attack, he is already dead!" << std::endl;
		return ;
	}
	if (this->ep_ == 0) {
		std::cout << "ScavTrap "<< this->name_ << " can't attack, he have no energie!" << std::endl;
		return ;
	}
	this->ep_--;
	std::cout << "ScavTrap "<< this->name_ << " attacks " << target << ", causing " << this->ad_ <<" points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name_ << " is now in gate keeper mode." << std::endl;
}
