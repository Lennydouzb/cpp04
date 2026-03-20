/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 18:00:34 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/20 10:16:31 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <string>
#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal( void );
	Animal(const Animal& anAnimal);
	virtual ~Animal();
	Animal& operator=(const Animal& anAnimal);
	virtual std::string	getType( void ) const;
	virtual void	makeSound( void ) const;
};
