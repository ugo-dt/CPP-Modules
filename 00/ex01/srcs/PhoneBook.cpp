/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:13:02 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/28 18:03:16 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

void	PhoneBook::show_contacts_list(void)const
{
	int	i;

	Contact::show_contacts_list();
	for (i = 0;i < this->_nbContacts; i++)
	{
		std::cout << "----------|----------|----------|----------" << std::endl;
		this->contacts[i].contact_header();
	}
}

static bool	digits_only(std::string &s)
{
	for (size_t i = 0; i < s.length(); i++)
		if (s[i] < '0' || s[i] > '9')
			return (false);
	return (true);
}

void	PhoneBook::search_contact(void)const
{
	int	index;
	std::string	line;

	if (this->_nbContacts == 0)
	{
		std::cout << "PhoneBook: no contacts yet" << std::endl;
		return ;
	}
	if (this->_nbContacts > 1)				// no reason to ask if there's only one contact!
	{
		this->show_contacts_list();
		index = 0;
		while (std::cout << "PhoneBook: which index? [1;" << this->_nbContacts << "] "
			&& std::getline(std::cin, line))
		{
			try {
				index = std::stoi(line);	// convert string to int
			}
			catch (std::invalid_argument) {	// no conversion is possible
				index = 0;
			}
			catch (std::exception &) {		// invalid number
				index = 0;
			}
			if (digits_only(line) && index > 0 && index <= this->_nbContacts)
				break ;
			std::cout << "Phonebook: invalid index" << std::endl;
		}
	}
	else
		index = 1;
	if (index > 0 && index <= this->_nbContacts)
		this->contacts[index - 1].display_contact();
	std::cout << std::endl;
}

void	PhoneBook::add_contact(void)
{
	static int	contact = 0;

	if (this->_nbContacts >= 8)
		std::cout << "PhoneBook: warning: contacts limit reached: adding a new contact will overwrite the oldest one" << std::endl;
	std::cout << "PhoneBook: enter new contact info" << std::endl;
	if (contact == 8)
		contact = 0;
	if (this->contacts[contact].set_info(contact))
	{
		contact++;
		if (this->_nbContacts < 8)
			this->_nbContacts++;
	}
}

PhoneBook::PhoneBook(void)
{
	this->_nbContacts = 0;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}
