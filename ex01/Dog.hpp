/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 18:30:12 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/20 10:06:10 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog( void );
	Dog(const Dog& aDog);
	Dog& operator=(const Dog& aDog);
	~Dog();
	void	makeSound() const;
	std::string	getType( void ) const;
};
