#pragma once

#include <vector>
#include <string>

class Communicate
{
public:
	Communicate();
	~Communicate();
	void	listen() const;
	void	talk(const size_t x, const size_t y) const;

private:
	const std::vector<std::string>	split_command(const std::string &input) const;
	void	start() const;
	void	turn() const;
	void	begin() const;
	void	end() const;
};