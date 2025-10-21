#include <iostream>
#include <ClapTrap.hpp>


int main() {
    std::string name = std::string("Bob");
    ClapTrap a(name);
	a.setAd(3);
	std::string name2 = std::string("Bob2");
    ClapTrap b(name2);

	std::cout << "----------------------------------------" << std::endl;
    std::cout << "Actions Basics:" << std::endl;
    a.attack(name2);
    b.takeDamage(3);
    b.beRepaired(5);

	std::cout << "----------------------------------------" << std::endl;
    std::cout << "Mongolito:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        b.attack(name);
    }

	std::cout << "----------------------------------------" << std::endl;
    std::cout << "BOOOOM!!!" << std::endl;
	a.setAd(1000);
    a.attack(name2);
    b.takeDamage(1000);
    std::cout << "----------------------------------------" << std::endl;

    return (0);
}
