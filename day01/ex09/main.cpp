/*=============================================================================
 * Project: Over Logging
 *
 * Program: Logs to console and file
 *
 * Author: Tony Hendrick
 * ==========================================================================*/

#include "Logger.class.hpp"

int main()
{
	Logger log;

	log.log("console", "failed to compile");
	log.log("file", "this assignment does not work as intended");
	return (0);
}