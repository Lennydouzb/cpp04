/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 10:23:52 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/20 10:23:53 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	std::cout << "Default constructor of WrongCat" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& anWrongCat)
{
	std::cout << "Copy constructor of WrongCat" << std::endl;
	this->type = anWrongCat.type;
}

WrongCat::~WrongCat( void )
{
	std::cout << "Destructor of WrongCat" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& anWrongCat)
{
	std::cout << "Affectation operator of WrongCat" << std::endl;
	this->type = anWrongCat.type;
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "*beatboxes*" << std::endl;
}

std::string	WrongCat::getType( void ) const
{
	return (this->type);
}
