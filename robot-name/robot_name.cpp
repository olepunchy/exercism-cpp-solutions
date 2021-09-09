#include "robot_name.h"

#include <algorithm>
#include <iomanip>
#include <random>
#include <sstream>
#include <string>

namespace robot_name {

	robot::robot() { _name = createRobotName(); }

	std::string robot::name() const { return _name; }

	void robot::reset() {
		_name = "";
		_name = createRobotName();
	}

	std::string robot::createRobotName() {
		std::string code = createRandomCode();
		std::string number = createRandomNumber();

		std::string robotName = code + number;

		while (!robotNameAvailable(robotName)) {
			code = createRandomCode();
			number = createRandomNumber();
			robotName = code + number;
		}

		return robotName;
	}

	std::string robot::createRandomCode() {
		std::random_device random;
		std::mt19937 gen(random());
		std::uniform_int_distribution<> distr(65, 90);

		char first = static_cast<char>(distr(gen));
		char second = static_cast<char>(distr(gen));

		std::string code;

		code += first;
		code += second;

		return code;
	}

	std::string robot::createRandomNumber() {
		std::random_device random;
		std::mt19937 gen(random());
		std::uniform_int_distribution<> distr(0, 999);

		std::ostringstream stream;
		stream << std::setfill('0') << std::setw(3) << distr(gen);

		return stream.str();
	}

	bool robot::robotNameAvailable(std::string &name) {
		if (std::find(_usedNames.begin(), _usedNames.end(), name) !=
		    _usedNames.end()) {
			return false;
		} else {
			_usedNames.push_back(name);
			return true;
		}
	}
}  // namespace robot_name
