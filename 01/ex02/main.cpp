/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 14:34:31 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/06 17:05:05 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string	str = "HI THIS IS STRING";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Address of string:\t\t" << &str << std::endl;
	std::cout << "Address held by stringPTR:\t" << stringPTR << std::endl;
	std::cout << "Address held by stringREF:\t" << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Value of string:\t\t" << str << std::endl;
	std::cout << "Value pointed to by stringPTR:\t" << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF:\t" << stringREF << std::endl;

	return (0);
}
