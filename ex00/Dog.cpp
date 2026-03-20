/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 09:54:02 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/20 10:07:45 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "Default constructor of Dog" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& anDog)
{
	std::cout << "Copy constructor of Dog" << std::endl;
	this->type = anDog.type;
}

Dog::~Dog( void )
{
	std::cout << "Destructor of Dog" << std::endl;
}

Dog& Dog::operator=(const Dog& anDog)
{
	std::cout << "Affectation operator of Dog" << std::endl;
	this->type = anDog.type;
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
