#include <string>
#include <vector>

#include "directory.h"

using namespace std;   
    
Directory::Directory(int _id, std::string _title, int _parent_id)
{
    id = _id ;
    title = _title ;
    parent_id = _parent_id ;
}

// virtual void print_info();

bool Directory::is_title_repetition(std::string _title)
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

bool Directory::is_element_id_invalid(int element_id)
{
    
}

void Directory::add_directory_to_parent_dir(int id, string title, int parent_id)
{

}

void Directory::add_file_to_parent_dir(int id, string title, string content, int parent_id)
{

}

void Directory::add_link_to_parent_dir(int id, string title, int element_id, int parent_id)
{

}