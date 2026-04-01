/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 15:01:42 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/01 15:13:44 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cure.hpp"
#include "ICharacter.hpp"
#include <string>
#include <iostream>

Cure::Cure( void )
{
	type = "cure";
}

Cure::Cure( const Cure& aCure)
{
	this->type = aCure.type;
}

Cure &Cure::operator=( const Cure& aCure )
{
	if (this == &aCure)
		return (*this);
	return *this;
}

Cure::~Cure( void ){}

Cure* Cure::clone() const
{
	Cure *aCure = new Cure();
	return (aCure);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
