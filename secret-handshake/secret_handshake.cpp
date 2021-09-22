#include "secret_handshake.h"

using namespace std;

namespace secret_handshake {

    vector<string> commands(int input) {

        vector<string> commands;

        if (input & (1U << 0)) {
            commands.emplace_back("wink");
        }

        if (input & (1U << 1)) {
            commands.emplace_back("double blink");
        }

        if (input & (1U << 2)) {
            commands.emplace_back("close your eyes");
        }

        if (input & (1U << 3)) {
            commands.emplace_back("jump");
        }

        if (input & (1U << 4)) {
            reverse(begin(commands), end(commands));
        }

        return commands;
    }

}  // namespace secret_handshake
