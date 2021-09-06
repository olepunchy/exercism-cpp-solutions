#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {

class space_age {

private:
  long long _ageInSeconds;
  const double _earthSecondsPerYear = 31557600.0;
  const double _jupiterSecondsPerYear = _earthSecondsPerYear * 11.862615;
  const double _marsSecondsPerYear = _earthSecondsPerYear * 1.8808158;
  const double _mercurySecondsPerYear = _earthSecondsPerYear * 0.2408467;
  const double _neptuneSecondsPeryear = _earthSecondsPerYear * 164.79132;
  const double _saturnSecondsPerYear = _earthSecondsPerYear * 29.447498;
  const double _uranusSecondsPerYear = _earthSecondsPerYear * 84.016846;
  const double _venusSecondsPerYear = _earthSecondsPerYear * 0.61519726;

public:
  // Constructor
  space_age(long long seconds) : _ageInSeconds(seconds){};

  // Methods
  long long seconds() const;
  double on_earth() const;
  double on_jupiter() const;
  double on_mars() const;
  double on_mercury() const;
  double on_neptune() const;
  double on_saturn() const;
  double on_uranus() const;
  double on_venus() const;
};
} // namespace space_age

#endif // SPACE_AGE_H
