#include <iostream>
#include <ClapTrap.hpp>
#include <ScavTrap.hpp>


int main() {
    std::string name = std::string("tod");
    ScavTrap a(name);
	std::string name2 = std::string("tod2");
    ScavTrap b(name2);

	std::cout << "----------------------------------------" << std::endl;
    std::cout << "Actions Basics:" << std::endl;
    a.attack(name2);
    b.takeDamage(20);
    b.beRepaired(5);

	std::cout << "----------------------------------------" << std::endl;
    std::cout << "Mongolito:" << std::endl;
    for (int i = 0; i < 50; ++i) {
        b.attack(name);
    }
    a.takeDamage(100);
    a.beRepaired(5);

    std::cout << "----------------------------------------" << std::endl;
    std::cout << "ScavTrap tests:" << std::endl;
    a.guardGate();
    b.guardGate();
    std::cout << "----------------------------------------" << std::endl;

    return (0);
}
