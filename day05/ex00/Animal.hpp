#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
class Animal{
	protected:
		std::string type;
	public:
		Animal( void );
		Animal( const Animal &src );
		virtual ~Animal( void );
		std::string	getType( void ) const ;
		virtual void makeSound( void ) const;
		Animal &operator=(const Animal &src);
};

class Dog : public Animal{
	public:
		Dog( void );
		Dog( const Dog &src);
		void makeSound( void ) const ;
		std::string	getType( void ) const;
		~Dog( void );
		Dog &operator=( const Dog &src );
};

class Cat : public Animal{
	public:
		Cat( void );
		Cat( const Cat &src);
		void makeSound( void ) const;
		std::string	getType( void ) const;
		~Cat( void );
		Cat &operator=( const Cat &src );
};

#endif