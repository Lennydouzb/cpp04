/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:34:45 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/01 15:02:58 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Ice.hpp"
#include "ICharacter.hpp"
#include <string>
#include <iostream>

Ice::Ice( void )
{
	type = "ice";
}

Ice::Ice( const Ice& aIce)
{
	this->type = aIce.type;
}

Ice &Ice::operator=( const Ice& aIce )
{
	if (this == &aIce)
		return (*this);
	return *this;
}

Ice::~Ice( void ){}

Ice* Ice::clone() const
{
	Ice *aIce = new Ice();
	return (aIce);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
