/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 15:01:06 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/31 17:14:43 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure(void);
	Cure(const std::string& type);
	~Cure();
	Cure(const Cure& aCure);
	Cure &operator=(const Cure& aCure);
	Cure* clone() const;
	void use(ICharacter& target);
};
