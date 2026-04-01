/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 11:17:42 by ldesboui          #+#    #+#             */
/*   Updated: 2026/04/01 12:55:38 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "IMateriaSource.hpp"
#include "AMateria.hpp"


class MateriaSource : public IMateriaSource
{
private:
	AMateria* stock[4];	
public:
	
	MateriaSource( void );
	~MateriaSource();
	MateriaSource(const MateriaSource& aMateriaSource);
	MateriaSource& operator=(const MateriaSource& aMateriaSource);
	void learnMateria(AMateria* aAMateria);
	AMateria* createMateria(std::string const & type);

};
