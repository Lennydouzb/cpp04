/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 13:13:29 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/31 14:43:21 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(const std::string& type);
	~Ice();
	Ice(const Ice& aIce);
	Ice &operator=(const Ice& aIce);
	Ice* clone() const;
	void use(ICharacter& target);
};
