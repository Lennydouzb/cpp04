/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 10:19:35 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/20 10:20:42 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "Default constructor of WrongAnimal" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& anWrongAnimal)
{
	std::cout << "Copy constructor of WrongAnimal" << std::endl;
	this->type = anWrongAnimal.type;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "Destructor of WrongAnimal" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& anWrongAnimal)
{
	std::cout << "Affectation operator of WrongAnimal" << std::endl;
	this->type = anWrongAnimal.type;
	return (*this);
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "subeme la radio" << std::endl;
}
