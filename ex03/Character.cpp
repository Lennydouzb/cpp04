/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 16:42:07 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/31 18:06:27 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
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
		{

			if (aCharacter.inventory[i]->getType() == "ice")
				this->inventory[i] = new Ice();
			if (aCharacter.inventory[i]->getType() == "cure")
				this->inventory[i] = new Cure();
		}
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
		{
			if (aCharacter.inventory[i]->getType() == "ice")
				this->inventory[i] = new Ice();
			if (aCharacter.inventory[i]->getType() == "cure")
				this->inventory[i] = new Cure();
		}
	}
	return (*this);
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
