/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:11:55 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/01 14:59:34 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "AMateria.hpp"

AMateria::AMateria( void )
{
}

AMateria::AMateria( const std::string & type)
{
	this->type = type;
}

AMateria::AMateria( const AMateria& anAMateria)
{
	this->type = anAMateria.type;
}

AMateria &AMateria::operator=( const AMateria& anAMateria )
{
	if (this == &anAMateria)
		return (*this);
	return *this;
}

AMateria::~AMateria( void ){}

const std::string &AMateria::getType( void ) const { return (this->type);}
