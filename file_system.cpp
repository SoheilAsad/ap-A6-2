#include <string>

#include "file_system.h"
#include "directory.h"
#include "exception.h"

using namespace std;

FileSystem::FileSystem()
{
    directory_list.push_back( new Directory(0,"root",0) );
}

Directory* FileSystem::fine_parent_directory(int parent_id)
{
    for(int directory_num = 0; directory_num < directory_list.size(); directory_num++)
        if(directory_list[directory_num]->get_id() == parent_id)
            return directory_list[directory_num];
    return NULL;
}

bool FileSystem::is_id_repetition(int id)
{
    for(int directory_num = 0; directory_num < directory_list.size(); directory_num++)
        if(directory_list[directory_num]->is_id_exist_in_directory(id))
            return true;
    return false;
}

void FileSystem::add_directory_to_file_system(int id, string title, int parent_id)
{
    directory_list.push_back(new Directory(id, title, parent_id));
}

bool FileSystem::is_element_id_invalid(int element_id)
{
    for(int directory_num = 0; directory_num < directory_list.size(); directory_num++)
        if(directory_list[directory_num]->is_element_id_invalid_in_directory(element_id))
            return true;
    return false;
}

void FileSystem::add_directory(int _id, string _title, int _parent_id)
{
    if(is_id_repetition(_id))
        throw IdAlreadyExists();
    Directory* parent_directory = fine_parent_directory(_parent_id);
    if(parent_directory == NULL)
        throw BadParentId();
    if(parent_directory->is_title_repetition(_title))
        throw BadTitle();
    add_directory_to_file_system(_id, _title, _parent_id);
    parent_directory->add_directory_to_parent_dir(_id, _title, _parent_id);
}

void FileSystem::add_file(int id, string title, string content, int parent_id)
{
    if(is_id_repetition(id))
        throw IdAlreadyExists();
    Directory* parent_directory = fine_parent_directory(parent_id);
    if(parent_directory == NULL)
        throw BadParentId();
    if(parent_directory->is_title_repetition(title))
        throw BadTitle();
    parent_directory->add_file_to_parent_dir(id, title, content, parent_id);
}

void FileSystem::add_link(int id, string title, int element_id, int parent_id)
{
    if(is_id_repetition(id))
        throw IdAlreadyExists();
    Directory* parent_directory = fine_parent_directory(parent_id);
    if(parent_directory == NULL)
        throw BadParentId();
    if(parent_directory->is_title_repetition(title))
        throw BadTitle();
    if(is_element_id_invalid(element_id))
        throw BadLinkedElement();
    parent_directory->add_link_to_parent_dir(id, title, element_id, parent_id);
}