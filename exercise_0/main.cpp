#include "fileMode/FileMode.h"
#include "terminalMode/TerminalMode.h"

int main(int argc, char **argv) {

    if (argc == 1){
        TerminalMode terminalMode;
        terminalMode.run();
    } else if (argc == 2) {
        FileMode fileMode;
        return fileMode.run(argv[1]);
    }
    return 0;
}