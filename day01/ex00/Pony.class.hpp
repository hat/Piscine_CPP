/*==============================================================================
 * Project: Heap of Quadrupeds
 *
 * Program: Allocates a Pony object on the Stack and the Heap
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony {
	public:
		float getHeightMeters(void) const;
		float getWeightKgs(void) const;
		std::string getColor(void) const;
		std::string getName(void) const;

		Pony(std::string name);
		~Pony(void);

		void setHeightMeters(float height);
		void setWeightKgs(float weight);
		void setColor(std::string color);

	private:
		float heightMeters, weightKgs;
		std::string color, name;
		bool isUnicorn;

		Pony(void);
};

#endif