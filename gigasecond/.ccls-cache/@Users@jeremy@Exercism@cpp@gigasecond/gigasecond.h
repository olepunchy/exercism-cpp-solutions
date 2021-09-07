#if !defined(GIGASECOND_H)
#define GIGASECOND_H

#include <boost/date_time/posix_time/posix_time.hpp>
using boost::posix_time::ptime;
using boost::posix_time::time_from_string;

#define EXERCISM_RUN_ALL_TESTS

namespace gigasecond {

ptime advance(ptime date);

}  // namespace gigasecond

#endif  // GIGASECOND_H
