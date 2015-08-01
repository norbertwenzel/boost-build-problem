#if USE_IOSTREAM_OUTPUT
#include <iostream>
#endif
#include <string>

#include <boost/filesystem.hpp>
#if !USE_IOSTREAM_OUTPUT
#include <boost/log/trivial.hpp>
#endif

#include "lib/testlib.h"

namespace fs = boost::filesystem;

int main(int argc, char **argv)
{
	std::string buffer(512, '\0');
	auto chars_written = get_cwd(std::addressof(buffer[0]), buffer.size());
	buffer.resize(chars_written);

	const fs::path cwd(buffer);

#if !USE_IOSTREAM_OUTPUT
	BOOST_LOG_TRIVIAL(debug) << 
#else
	std::cout << 
#endif
		"We got " << cwd << " from the library and " << cwd.parent_path() << " as parent.";
#if USE_IOSTREAM_OUTPUT
	std::cout << std::endl;
#endif

	return 0;
}
