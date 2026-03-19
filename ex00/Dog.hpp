/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 18:30:12 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/19 18:31:21 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog( void );
	Dog(const Dog& aDog);
	Dog& operator=(const Dog& aDog);
	~Dog();
	void	makeSound
};
