#include "testlib.h"

#include <string>
#include <algorithm>

#include <boost/filesystem.hpp>

size_t get_cwd(char *buf, size_t size)
{
	using namespace boost::filesystem;
	const auto cwd = current_path().string();
	if(size > cwd.size())
	{
		std::copy(std::begin(cwd), std::end(cwd), buf);
		return cwd.size();
	}

	return 0;
}
