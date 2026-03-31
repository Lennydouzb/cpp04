/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldesboui <ldesboui@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 15:03:09 by ldesboui          #+#    #+#             */
/*   Updated: 2026/03/31 10:59:51 by ldesboui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Brain.hpp"
#include <cstdlib>
#include <ctime>
Brain::Brain( void )
{
	std::string ideas[10] = {"Search for food", "Hunt", "Drink", "Eat humans",
		"Ball", "Talk", "Bro are you real ?" ,"I think i am", "Rene descartes ?", "six seven"};
	std::srand(std::time(NULL));
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = ideas[std::rand() % 10];	
	std::cout << "A brain has been constructed" << std::endl;
}

Brain::~Brain()
{
	std::cout << "A brain has been destructed" << std::endl;
}

Brain::Brain( const Brain& aBrain)
{
	std::cout << "A brain has been constructed copy" << std::endl;
	for (int i = 0; i< 100; ++i)
		this->ideas[i] = aBrain.ideas[i];
}

Brain& Brain::operator=(const Brain& aBrain)
{
	if (this == &aBrain)
		return (*this);
	for (int i = 0; i< 100; ++i)
		this->ideas[i] = aBrain.ideas[i];
	return (*this);
}

std::string Brain::getIdea(int index) const
{
	if (index > 0 && index < 100)
		return (this->ideas[index]);
	return (NULL);
}
void Brain::setIdea(int index, std::string str)
{
	if (index > 0 && index < 100)
		this->ideas[index] = str;
}
