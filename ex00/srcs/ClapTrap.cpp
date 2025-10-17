
#include <ClapTrap.hpp>

ClapTrap::ClapTrap( void ) : name_("ClapTrap"), hp_(10), ep_(10), ad_(10) {
	std::cout << "ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap( const std::string& name ) : name_(name), hp_(10), ep_(10), ad_(0) {
	std::cout << "ClapTrap constructor called." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called." << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap& other) : name_(other.name_), hp_(other.hp_), ep_(other.ep_), ad_(other.ad_)
{
	std::cout << "ClapTrap copy constructor called." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other) {
		this->name_ = other.name_;
		this->hp_ = other.hp_;
		this->ep_ = other.ep_;
		this->ad_ = other.ad_;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target) {
	if (this->hp_ == 0) {
		std::cout << "ClapTrap "<< this->name_ << " can't attack, he is already dead!" << std::endl;
		return ;
	}
	if (this->ep_ == 0) {
		std::cout << "ClapTrap "<< this->name_ << " can't attack, he have no energie!" << std::endl;
		return ;
	}
	this->ep_--;
	std::cout << "ClapTrap "<< this->name_ << " attacks " << target << ", causing " << this->ad_ <<" points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hp_ == 0) {
		std::cout << "ClapTrap "<< this->name_ << " can't take more dmg, he is already dead!" << std::endl;
		return ;
	}
	this->hp_ -= amount;
	if (this->hp_ < 0)
		this->hp_ = 0;
	std::cout << "ClapTrap "<< this->name_ << " take " << amount << " points of damage and have now " << hp_ << " hp!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->hp_ == 0) {
		std::cout << "ClapTrap "<< this->name_ << " can't repair himself, he is already dead!" << std::endl;
		return ;
	}
	if (this->ep_ == 0) {
		std::cout << "ClapTrap "<< this->name_ << " can't repair himself, he have no energie!" << std::endl;
		return ;
	}
	this->ep_--;
	this->hp_ += amount;
	std::cout << "ClapTrap "<< this->name_ << " repaired " << amount << " hit points and have now " << hp_ << " hp!" << std::endl;
}

std::string	ClapTrap::getName() const { return (name_); }
int	ClapTrap::getHitPoints() const { return (hp_); }
int	ClapTrap::getEnergyPoints() const { return (ep_); }
int	ClapTrap::getAttackDamage() const { return (ad_); }

void ClapTrap::setAd(int newAd) { this->ad_ = newAd; }
