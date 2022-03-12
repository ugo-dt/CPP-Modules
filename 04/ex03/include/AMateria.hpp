/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:20:43 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/12 14:13:05 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined A_MATERIA_HPP
# define A_MATERIA_HPP

# include "ICharacter.hpp"
# include <string>

class AMateria
{
	private:
		AMateria	& operator=(const AMateria &);
	protected:
		AMateria(void);
		std::string	_type;
		AMateria(const AMateria &);
	public:
		AMateria(std::string const & type);
		virtual ~AMateria(void);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif /* !defined A_MATERIA_HPP */
