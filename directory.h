#ifndef DIRECTORY_H_
#define DIRECTORY_H_

#include <string>
#include <vector>

#include "file_system.h"

class Directory : public FileSystem
{
public:
    Directory(int _id, std::string _title, int _parent_id);
    virtual void print_info();
};

#endif