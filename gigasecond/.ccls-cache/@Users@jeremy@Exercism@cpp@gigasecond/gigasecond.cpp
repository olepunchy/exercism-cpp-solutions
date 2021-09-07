#include "gigasecond.h"

#include <cmath>

namespace gigasecond {

using boost::posix_time::seconds;

ptime advance(ptime date) { return date + seconds(1000000000); }

}  // namespace gigasecond
