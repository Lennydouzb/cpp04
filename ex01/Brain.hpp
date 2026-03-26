/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 14:47:26 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/26 14:18:24 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <string>
#include <iostream>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain( void );
	~Brain( void );
	Brain( const Brain& aBrain);
	Brain& operator=(const Brain& aBrain);
	std::string getIdea(int index) const;
	void	setIdea(int	index, std::string str);	
};
