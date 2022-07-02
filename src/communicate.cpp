#include <iostream>
#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>
#include "communicate.hpp"

Communicate::Communicate()
{
}

Communicate::~Communicate()
{
}

void	Communicate::listen() const
{
	std::string	line;
	std::vector<std::string>	split;

	while (std::getline(std::cin, line)) {
		split = this->split_command(line);
	}
}

const std::vector<std::string>	Communicate::split_command(const std::string &input) const
{
	std::vector<std::string>	result;

	boost::split(result, input, boost::is_any_of(" "));

	return result;
}