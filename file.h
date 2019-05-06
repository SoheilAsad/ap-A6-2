#ifndef FILE_H_
#define FILE_H_

#include <string>
#include <vector>

#include "file_system.h"

class File : public FileSystem
{
public:
    File(int _id, std::string _title, std::string _content, int _parent_id);
    virtual void print_info();
private:
    std::string content;
};

#endif