/*==============================================================================
 * Project: Over Logging
 *
 * Program: Logs to console and file
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#ifndef LOGGER_HPP
# define LOGGER_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

class Logger {
	public:
		void log(std::string const & dest, std::string const & message);
		Logger(void);
	private:
		void logToConsole(std::string message);
		void logToFile(std::string message);
		std::string makeLogEntry(std::string message);
		static std::string _file;
};

#endif