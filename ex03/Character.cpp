/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 16:42:07 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/01 14:59:00 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Character.hpp"
#include <climits>

Character::Character( void )
{
	name = "player";
}

Character::Character(std::string name)
{
	this->name = name;
}

Character::~Character()
{
	int	i;
	i = 0;
	while (i < 4)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		++i;
	}
}

Character::Character(const Character& aCharacter)
{
	this->name = aCharacter.name;
	int	i = 0;
	while (i < 4)
	{
		if (aCharacter.inventory[i])
			this->inventory[i] = aCharacter.inventory[i]->clone();
		++i;
	}
}

Character& Character::operator=(const Character& aCharacter)
{
	if (this == &aCharacter)
		return (*this);
	this->name = aCharacter.name;
	int	i = 0;
	while (i < 4)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		if (aCharacter.inventory[i])
			this->inventory[i] = aCharacter.inventory[i]->clone();
		++i;
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->name);
}
void Character::equip(AMateria* m)
{
	int i = 0;
	while (i < 4)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			break;
		}
		++i;
	}
}

void Character::unequip(int idx)
{
	if (this->inventory[idx])
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (this->inventory[idx])
		this->inventory[idx]->use(target);
}
