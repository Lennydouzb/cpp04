/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 18:26:23 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/20 10:06:00 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat( void );
	Cat(const Cat& aCat);
	Cat& operator=(const Cat& aCat);
	~Cat();
	void	makeSound() const;
	std::string	getType( void ) const;
};
