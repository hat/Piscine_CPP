/*==============================================================================
 * Project: Over Logging
 *
 * Program: Logs to console and file
 *
 * Author: Tony Hendrick
 * ===========================================================================*/

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <string>
#include <fstream>

class Logger {
	public:
		void log(std::string const & dest, std::string const & message);
		Logger(std::string file);
		Logger(void);
	private:
		void logToConsole(std::string log);
		void logToFile(std::string log);
		void makeLongEntry(std::string message);
		std::string _file;
};

#endif