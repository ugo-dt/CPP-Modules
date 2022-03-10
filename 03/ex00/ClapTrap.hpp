/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 22:11:56 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/10 11:24:54 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
	private:
		std::string		_name;		// Name
		unsigned int	_hp;		// Hit points
		unsigned int	_energy;	// Energy points
		unsigned int	_ad;		// Attack damage
	public:
		ClapTrap(void);
		ClapTrap(std::string);
		ClapTrap	& operator=(const ClapTrap &);
		~ClapTrap(void);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif /* !defined CLAPTRAP_HPP */