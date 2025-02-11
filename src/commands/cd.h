#ifndef CMD_CD_H__
#define CMD_CD_H__

#include <iostream>
#include <string>
#include <filesystem>

#include "../global_var.h"

using namespace std;
using namespace std::filesystem;

int cd(string i){
    if(!exists(fs_current_path)){
        return 1;
    }
    if(i == ".."){
        fs_current_path = fs_current_path.parent_path();
    }else{
        fs_current_path = fs_current_path.append(i);
    }
    return 0;
}

#endif