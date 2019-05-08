#include <string>

#include "file.h"
#include "directory.h"

using namespace std;

const string FILE_TYPE = "file";

File::File(int _id, string _title, string _content, int _parent_id)
    : Directory(_id, _title, _parent_id)
{
    content = _content ;
}

string File::get_type()
{
    return FILE_TYPE;
}