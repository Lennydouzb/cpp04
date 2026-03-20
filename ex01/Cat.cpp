/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 09:52:45 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/20 10:07:12 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "Default constructor of Cat" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& anCat)
{
	std::cout << "Copy constructor of Cat" << std::endl;
	this->type = anCat.type;
}

Cat::~Cat( void )
{
	std::cout << "Destructor of Cat" << std::endl;
}

Cat& Cat::operator=(const Cat& anCat)
{
	std::cout << "Affectation operator of Cat" << std::endl;
	this->type = anCat.type;
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
