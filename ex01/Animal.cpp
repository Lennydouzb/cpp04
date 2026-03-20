/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 18:06:47 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/20 10:19:27 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Default constructor of Animal" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal& anAnimal)
{
	std::cout << "Copy constructor of Animal" << std::endl;
	this->type = anAnimal.type;
}

Animal::~Animal( void )
{
	std::cout << "Destructor of Animal" << std::endl;
}

Animal& Animal::operator=(const Animal& anAnimal)
{
	std::cout << "Affectation operator of Animal" << std::endl;
	this->type = anAnimal.type;
	return (*this);
}

std::string	Animal::getType( void ) const
{
	return (this->type);
}

void	Animal::makeSound( void ) const
{
	std::cout << "*silence*" << std::endl;
}
