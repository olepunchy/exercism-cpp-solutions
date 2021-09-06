#include "space_age.h"

namespace space_age {

long long space_age::seconds() const { return _ageInSeconds; }

double space_age::on_earth() const {
  return _ageInSeconds / _earthSecondsPerYear;
}

double space_age::on_jupiter() const {
  return _ageInSeconds / _jupiterSecondsPerYear;
}

double space_age::on_mars() const {
  return _ageInSeconds / _marsSecondsPerYear;
}

double space_age::on_mercury() const {
  return _ageInSeconds / _mercurySecondsPerYear;
}

double space_age::on_neptune() const {
  return _ageInSeconds / _neptuneSecondsPeryear;
}

double space_age::on_saturn() const {
  return _ageInSeconds / _saturnSecondsPerYear;
}

double space_age::on_uranus() const {
  return _ageInSeconds / _uranusSecondsPerYear;
}

double space_age::on_venus() const {
  return _ageInSeconds / _venusSecondsPerYear;
}

} // namespace space_age
