/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 09:55:26 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/26 14:24:42 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Dog *k = new Dog();
	Dog *h = new Dog(*k);

	std::cout << k->getBrain()->getIdea(10) << std::endl;
	std::cout << h->getBrain()->getIdea(10) << std::endl;

	k->getBrain()->setIdea(10, "Stinky poopy");
	
	std::cout << k->getBrain()->getIdea(10) << std::endl;
	std::cout << h->getBrain()->getIdea(10) << std::endl;
	delete j;
	delete i;

	return 0;
}

