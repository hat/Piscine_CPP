/*=============================================================================
 * Project: Over Logging
 *
 * Program: Logs to console and file
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

void Logger::log(std::string const & dest, std::string const & message)
{
	void (Logger:*arrPtrF[2])(std::string const &message) =
		{&Logger::logToConsole, &Logger::logToFile};

	if (dest == "console")
		(this->*arrPtrF[0])(message);
	else if (dest == "file")
		(this->*arrPtrF[1])(message);
}

Logger::Logger(std::string file)
{

}

Logger::Logger(void)
{

}

void Logger::logToConsole(std::string log)
{
	std::cout << log << std::endl;
}

void Logger::logToFile(std::string log)
{
	std::ofstream() ofs(file);
	ofs << log << std::endl;
	ofs.close()
}

void Logger::makeLongEntry(std::string message)
{

}