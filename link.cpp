#include <string>

#include "link.h"
#include "directory.h"

using namespace std;

const string LINK_TYPE = "link";

Link::Link(int _id, string _title, int _element_id, int _parent_id)
    : Directory(_id, _title, _parent_id)
{
    element_id = _element_id ;
}

string Link::get_type()
{
    return LINK_TYPE;
}