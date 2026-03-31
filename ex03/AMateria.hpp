/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 13:10:36 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/31 14:26:58 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <string>

class ICharacter;

class AMateria
{
protected:
	std::string type;
public:
	AMateria(std::string const & type);
	AMateria( void );
	AMateria( const AMateria& anAMateria);
	AMateria& operator=(const AMateria& anAMateria);
	~AMateria();
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;
};
