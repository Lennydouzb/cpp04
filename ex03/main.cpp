/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 13:23:45 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/08 21:53:13 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

int main()
{
    std::cout << "--- SUBJECT TESTS ---" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

	me->unequip(1);
    me->use(1, *bob);

	delete tmp; // leak if not freed cuz unequiped
    delete bob;
    delete me;
    delete src;
	
	std::cout << "----------Personal tests--------" << std::endl;

    Character* Franck = new Character("Franck");
	IMateriaSource *source = new MateriaSource();
	source->learnMateria(new Ice());
	AMateria* aMateria = source->createMateria("ice");
	Franck->equip(aMateria);
    Character* Francky = new Character(*Franck);

	Franck->use(0, *Franck);
	Franck->unequip(0);
	delete aMateria;
	Francky->use(0, *Francky);
	aMateria = Francky->getInvById(0);
	Francky->unequip(0);
	delete aMateria;
	delete Franck;
	delete Francky;
	delete source;
    return 0;
}
