/*==============================================================================
 * Project: Heap of Quadrupeds
 *
 * Program: Allocates a Pony object on the Stack and the Heap
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#ifndef PONY
# define PONY

# include <iostream>

class Pony {
	public:
		float getHeightMeters(void);
		float getWeightKgs(void);
		std::string getColor(void);
		std::string getName(void);

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