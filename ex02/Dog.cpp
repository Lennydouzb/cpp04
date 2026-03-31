/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42agouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 09:54:02 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/31 11:16:21 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "Default constructor of Dog" << std::endl;
	this->type = "Dog";
	this->aBrain = new Brain();
}

Dog::Dog(const Dog& aDog)
{
	std::cout << "Copy constructor of Dog" << std::endl;
	this->type = aDog.type;
	this->aBrain = new Brain(*aDog.aBrain);
}

Dog::~Dog( void )
{
	delete this->aBrain;
	std::cout << "Destructor of Dog" << std::endl;
}

Dog& Dog::operator=(const Dog& aDog)
{
	std::cout << "Affectation operator of Dog" << std::endl;
	if (this == &aDog)
		return (*this);
	if (this->aBrain)
		delete this->aBrain;
	this->type = aDog.type;
	this->aBrain = new Brain(*aDog.aBrain);
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Bark" << std::endl;
}

std::string	Dog::getType( void ) const
{
	return (this->type);
}
Brain *Dog::getBrain(void) const
{
	return (this->aBrain);
}
