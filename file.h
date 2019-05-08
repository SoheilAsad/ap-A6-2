#ifndef FILE_H_
#define FILE_H_

#include <string>
#include <vector>

#include "directory.h"

class File : public Directory
{
public:
    File(int _id, std::string _title, std::string _content, int _parent_id);
    virtual std::string get_type();
   // virtual void print_info();
protected:
    std::string content;
};

#endif