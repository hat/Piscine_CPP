/*=============================================================================
 * Project: Over Logging
 *
 * Program: Logs to console and file
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#include "Logger.class.hpp"

static std::string displayTimestamp(void)
{
	time_t rawtime = time(NULL);
	struct tm * timeinfo = localtime(&rawtime);
	char buffer[20];

	strftime(buffer, sizeof(buffer), "[%Y%d%m_%H%M%S] ", timeinfo);
	return buffer;
}

void Logger::logToConsole(std::string message)
{
	std::cout << displayTimestamp() << " : " << message << std::endl;
}

void Logger::logToFile(std::string message)
{
	std::ofstream ofs(_file, std::ios_base::app);
	if (!ofs)
	{
		std::cout << "Could not create file" << std::endl;
		exit(1);
	}
	ofs << displayTimestamp() << " : " << message << std::endl;
	ofs.close();
}

std::string Logger::makeLogEntry(std::string message)
{
	return (displayTimestamp() + " : " + message + "\n");
}

void Logger::log(std::string const & dest, std::string const & message)
{
	void (Logger::*arrPtrF[2])(std::string const message) = {&Logger::logToConsole,
		&Logger::logToFile};

	if (dest == "console")
		(this->*arrPtrF[0])(message);
	else if (dest == "file")
		(this->*arrPtrF[1])(message);
}

Logger::Logger(void)
{
	return;
}

std::string Logger::_file = "log.txt";