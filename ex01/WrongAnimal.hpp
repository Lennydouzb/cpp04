/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 10:18:34 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/20 10:19:01 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <string>
#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal( void );
	WrongAnimal(const WrongAnimal& anWrongAnimal);
	virtual ~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal& anWrongAnimal);
	virtual std::string	getType( void ) const;
	virtual void	makeSound( void ) const;
};
