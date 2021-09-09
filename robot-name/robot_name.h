#if !defined(ROBOT_NAME_H)
#define ROBOT_NAME_H

// NOTE:
// Example Names, must be unique for 1000 iterations
// RX837, BC811, JJ123

#include <string>
#include <vector>

namespace robot_name {

	static std::vector<std::string> _usedNames;

	class robot {
	   private:
		std::string _name;

		static std::string createRandomCode();
		static std::string createRandomNumber();
		static bool robotNameAvailable(std::string &name);
		static std::string createRobotName();

	   public:
		robot();
		[[nodiscard]] std::string name() const;
		void reset();
	};

}  // namespace robot_name

#endif  // ROBOT_NAME_H
