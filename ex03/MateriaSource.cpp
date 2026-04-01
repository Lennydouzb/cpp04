/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 11:56:12 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/01 15:13:15 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource( void ) {}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i <  4; ++i)
	{
		if (this->stock[i])
			delete stock[i];
	}
}
MateriaSource::MateriaSource(const MateriaSource& aMateriaSource)
{
	for (int i = 0; i < 4; ++i)
	{
		if (aMateriaSource.stock[i])
					this->stock[i] = aMateriaSource.stock[i]->clone();
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& aMateriaSource)
{
	if (this == &aMateriaSource)
		return *this;
	for (int i = 0; i < 4; ++i)
	{
		if (this->stock[i])
			delete this->stock[i];
		if (aMateriaSource.stock[i])
			this->stock[i] = aMateriaSource.stock[i]->clone();
	}
	return *this;
}
void			MateriaSource::learnMateria(AMateria* aAMateria)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!this->stock[i])
		{
			this->stock[i] = aAMateria->clone();
			return;
		}
	}
}
AMateria*		MateriaSource::createMateria(std::string const & type)
{
	for (int i = 3; i >= 0; --i)
	{
		if (this->stock[i])
		{
			if (this->stock[i]->getType() == type)
			{
				return (this->stock[i]->clone());
			}
		}
	}
	return (0);
}

