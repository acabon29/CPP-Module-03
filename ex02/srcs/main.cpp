#include <iostream>
#include <ClapTrap.hpp>
#include <FragTrap.hpp>


int main() {
    std::string name = std::string("rob");
    FragTrap a(name);
    std::string name2 = std::string("rob2");
    FragTrap b(name2);

	std::cout << "----------------------------------------" << std::endl;
    std::cout << "Actions Basics:" << std::endl;
    a.attack(name2);
    b.takeDamage(30);
    b.beRepaired(5);

	std::cout << "----------------------------------------" << std::endl;
    std::cout << "Mongolito:" << std::endl;
    std::cout << "b ep: " << b.getEp() << std::endl;
    b.setEp(9);
    std::cout << "new b ep: " << b.getEp() << std::endl;
    for (int i = 0; i < 10; ++i) {
        b.attack(name);
    }
    a.takeDamage(100);
    a.beRepaired(5);

    std::cout << "----------------------------------------" << std::endl;
    std::cout << "FragTrap tests:" << std::endl;
    a.highFivesGuys();
    b.highFivesGuys();
    std::cout << "----------------------------------------" << std::endl;

    return (0);
}
