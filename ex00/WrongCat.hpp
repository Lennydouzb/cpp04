/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 10:24:18 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/20 10:25:25 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat( void );
	WrongCat(const WrongCat& aWrongCat);
	WrongCat& operator=(const WrongCat& aWrongCat);
	~WrongCat();
	void	makeSound() const;
	std::string	getType( void ) const;
};
