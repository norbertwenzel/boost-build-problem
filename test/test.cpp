#include <string>

#include <boost/filesystem.hpp>
#include <boost/log/trivial.hpp>

#include "lib/testlib.h"

namespace fs = boost::filesystem;

int main(int argc, char **argv)
{
	std::string buffer(512, '\0');
	auto chars_written = get_cwd(std::addressof(buffer[0]), buffer.size());
	buffer.resize(chars_written);

	const fs::path cwd(buffer);
	BOOST_LOG_TRIVIAL(debug) << "We got " << cwd << " from the library and " << cwd.parent_path() << " as parent.";

	return 0;
}
