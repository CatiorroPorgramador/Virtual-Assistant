/*
Assistant read data:
0 - Names
1 - Commands
2 - Get something
3 - Sticky notes
4 - Settings
5 - Automatic Check for detect problems
6 - Command Prompt
*/

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Essentials.hpp"

class Assistant {
public:
    enum EXIT_PROCESS {
        SUCESS=0,
        ERROR,
        ERROR_FOR_FOUND,
          
    };

    // Constructor & Destructor
    Assistant() {
        std::cout << "Assistente inicializado...\n";
    }

    ~Assistant() {
        std::cout << "Assistente finalizado...\n";
    }

    // Methods
    void load_memory(const char* path) {
        // Base //
        std::vector<std::string> to_read;

        std::string tmp_str;

        std::ifstream in_fil(path);

        // Collect informations
        while (!in_fil.eof()) {
            std::getline(in_fil, tmp_str);
            to_read.push_back(tmp_str);
        }

        // Processing informations
        this->names = ese::split(to_read[0], this->delimiter);
        this->commands = ese::split(to_read[1], this->delimiter);

        // End
        // End base//

        // RAM //

        // End RAM //

        in_fil.close();
    }

    // Commands
    void exe_cmd(std::string cmd_lin) {  // Execute command, command line
        
    }

    bool do_som(std::string wht) {  // Do something, *what
        std::vector<std::string> cmd {ese::split(wht, " ")};
        
        for (std::string f : this->commands) {
            
        }
    }

private:
    // Syntax
    const char delimiter[3] {"=>"};

    // Informations
    std::vector<std::string> names;
    std::vector<std::string> commands;

    // Debug Options
    bool show_load_status {false};
};