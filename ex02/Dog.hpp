/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 18:30:12 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/26 14:22:07 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *aBrain;
public:
	Dog( void );
	Dog(const Dog& aDog);
	Dog& operator=(const Dog& aDog);
	~Dog();
	void	makeSound() const;
	std::string	getType( void ) const;
	Brain* getBrain(void) const;
};
