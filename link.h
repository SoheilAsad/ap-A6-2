#ifndef LINK_H_
#define LINK_H_

#include <string>
#include <vector>

#include "directory.h"

class Link : public Directory
{
public:
    Link(int _id, std::string _title, int _element_id, int _parent_id);
  //  virtual void print_info();
protected:
    int element_id ;
};

#endif