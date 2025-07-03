#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain 
{
	public:
		Brain();
		Brain(const Brain& copyBrain);
		Brain& operator=(const Brain& copyBrain);
		~Brain();
	private:
};

#endif

