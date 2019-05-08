#include <string>
#include <vector>

#include "directory.h"
#include "file.h"
#include "link.h"

using namespace std;   
    
const string DIRECTORY_TYPE = "directory";
const string FILE_TYPE = "file";

Directory::Directory(int _id, string _title, int _parent_id)
{
    id = _id ;
    title = _title ;
    parent_id = _parent_id ;
}

int Directory::get_id()
{
    return id;
}

// virtual void print_info();

string Directory::get_type()
{
    return DIRECTORY_TYPE;
}

bool Directory::is_title_repetition(string _title)
{
    for(int element_num = 0; element_num < directory_elements.size(); element_num++)
        if(directory_elements[element_num]->title == _title)
            return true;
    return false;
}

bool Directory::is_id_exist_in_directory(int _id)
{
    if(id == _id)
        return true;
    for(int element_num = 0; element_num < directory_elements.size(); element_num++)
        if(directory_elements[element_num]->id == _id)
            return true;
    return false;
}

bool Directory::is_element_id_invalid_in_directory(int _element_id)
{
    if(id == _element_id)
        return false;
    for(int element_num = 0; element_num < directory_elements.size(); element_num++)
        if(directory_elements[element_num]->id == _element_id  &&
         (directory_elements[element_num]->get_type() == DIRECTORY_TYPE || directory_elements[element_num]->get_type() == FILE_TYPE) )
            return false;
    return true;
}

void Directory::add_directory_to_parent_dir(int _id, string _title, int _parent_id)
{
    directory_elements.push_back(new Directory( _id, _title, _parent_id));
}

void Directory::add_file_to_parent_dir(int _id, string _title, string _content, int _parent_id)
{
    directory_elements.push_back(new File(_id, _title, _content, _parent_id));
}

void Directory::add_link_to_parent_dir(int _id, string _title, int _element_id, int _parent_id)
{
    directory_elements.push_back(new Link(_id, _title, _element_id, _parent_id));
}