#include <iostream>
#include "hunspell.hxx"
#include "version.h"


int main()
{
    std::cout << " version: " << Example_VERSION_MAJOR << "." << Example_VERSION_MINOR << "." << Example_VERSION_PATCH << std::endl << std::endl;

    static Hunspell * m_hunSpell = new Hunspell("ru_RU.aff", "ru_RU.dic");
    char text[]="кошшшка";
    int correct;
    correct = m_hunSpell->spell(text);
    std::cout << "correct=" << correct << std::endl;
    std::cout << std::endl;
	
	return 0;
}
