/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42agouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 09:52:45 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/31 11:12:29 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "Default constructor of Cat" << std::endl;
	this->type = "Cat";
	this->aBrain = new Brain();
}

Cat::Cat(const Cat& aCat)
{
	std::cout << "Copy constructor of Cat" << std::endl;
	this->type = aCat.type;
	this->aBrain = new Brain(*aCat.aBrain);
}

Cat::~Cat( void )
{
	delete this->aBrain;
	std::cout << "Destructor of Cat" << std::endl;
}

Cat& Cat::operator=(const Cat& aCat)
{
	std::cout << "Affectation operator of Cat" << std::endl;
	if (this->aBrain)
		delete this->aBrain;
	if (this == &aCat)
		return (*this);
	this->type = aCat.type;
	this->aBrain = new Brain(*aCat.aBrain);
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow" << std::endl;
}

std::string	Cat::getType( void ) const
{
	return (this->type);
}

Brain *Cat::getBrain(void) const
{
	return (this->aBrain);
}
