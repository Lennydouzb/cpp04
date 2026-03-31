/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 09:55:26 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/31 12:58:46 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();


	std::cout << "------------Deep copy proof-----------------" << std::endl;
	Dog *k = new Dog();
	Dog *h = new Dog(*k);

	std::cout << k->getBrain()->getIdea(10) << std::endl;
	std::cout << h->getBrain()->getIdea(10) << std::endl;

	k->getBrain()->setIdea(10, "Stinky poopy");

	std::cout << k->getBrain()->getIdea(10) << std::endl;
	std::cout << h->getBrain()->getIdea(10) << std::endl;
	delete j;
	delete i;
	delete k;
	delete h;

	std::cout << "------------operator =-----------------" << std::endl;
	Dog *l = new Dog();
	Dog *p = new Dog(*l);
	
	*p = *l;

	std::cout << l->getBrain()->getIdea(10) << std::endl;
	std::cout << p->getBrain()->getIdea(10) << std::endl;

	l->getBrain()->setIdea(10, "Stinky poopy");

	std::cout << l->getBrain()->getIdea(10) << std::endl;
	std::cout << p->getBrain()->getIdea(10) << std::endl;
	delete p;
	delete l;
	std::cout << "-----------------LOOP OF ANIMALS--------------" << std::endl;

	Animal *Animals[100];
	for (int i = 0; i < 100; ++i)
	{
		if (i % 2 == 0)
			Animals[i] = new Cat();
		else
			Animals[i] = new Dog();
	}

	std::cout << "-----------------DESTRUCTORS--------------" << std::endl;
	for (int i =99; i >= 0; --i)
		delete Animals[i];
	return 0;

	//Animal anAnimal;
}

