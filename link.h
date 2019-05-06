#ifndef LINK_H_
#define LINK_H_

#include <string>
#include <vector>

#include "file_system.h"

class Link : public FileSystem
{
public:
    Link(int _id, std::string _title, int _element_id, int _parent_id);
    virtual void print_info();
private:
    int element_id ;
};

#endif