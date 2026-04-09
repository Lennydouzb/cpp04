/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 13:23:45 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/09 13:34:19 by ldesboui         ###   ########.fr       */
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

	std::cout << "----------Deep copy--------" << std::endl;
    Character* Franck = new Character("Franck");
	IMateriaSource *source = new MateriaSource();
	source->learnMateria(new Ice());
	AMateria* aMateria = source->createMateria("ice");
	Franck->equip(aMateria);
    Character* Francky = new Character(*Franck);

	Franck->use(0, *Franck);
	Franck->unequip(0);
	delete aMateria;

	//deep copy proof, aMateria of franck is deleted 
	//and francky can still access his own
	Francky->use(0, *Francky);
	aMateria = Francky->getInvById(0);
	Francky->unequip(0);
	delete aMateria;
	delete Franck;
	delete Francky;
	delete source;

	std::cout << "----------------source max stock---------------" << std::endl;
	source = new MateriaSource();
	source->learnMateria(new Ice());
	source->learnMateria(new Ice());
	source->learnMateria(new Ice());
	source->learnMateria(new Ice());
	//should all be ice, no more space, cure shouldn't add
	source->learnMateria(new Cure());
	aMateria = source->createMateria("cure");
	if (aMateria == NULL)
		std::cout << "cure hasn't been created, not in stock" << std::endl;
	delete source;
	std::cout << "----------------character max stock---------------" << std::endl;
	
	source = new MateriaSource();
	source->learnMateria(new Ice());
	source->learnMateria(new Cure());

	Franck = new Character("Franck");
	Franck->equip(source->createMateria("ice"));
	Franck->equip(source->createMateria("ice"));
	Franck->equip(source->createMateria("ice"));
	Franck->equip(source->createMateria("ice"));
	// Franck inv is full cure should not add 
	aMateria = source->createMateria("cure");
	Franck->equip(aMateria);
	Franck->use(0, *Franck);
	Franck->use(1, *Franck);
	Franck->use(2, *Franck);
	Franck->use(3, *Franck);
	delete Franck;
	delete aMateria;
	delete source;
    return 0;
}
