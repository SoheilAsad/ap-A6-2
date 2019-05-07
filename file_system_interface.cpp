#include <string>

#include "file_system_interface.h"
#include "file_system.h"
#include "directory.h"

using namespace std;

FileSystemInterface::FileSystemInterface()
{
    file_system = new FileSystem() ;
}

void FileSystemInterface::add_directory(int id, string title, int parent_id)
{
    if(file_system->is_id_repetition(int id))
        //throw IdAlreadyExist();
    Directory* parent_directory = file_system->fine_parent_directory(int parent_id);
    if(parent_directory == NULL)
        //throw BadParentId();
    if(parent_directory->is_title_repetition(string title))
        //throw BadTitle();
    file_system->add_directory_to_file_system(int id, string title, int parent_id);
    parent_directory->add_directory_to_parent_dir(int id, string title, int parent_id);
}

void FileSystemInterface::add_file(int id, string title, string content, int parent_id)
{
    if(file_system->is_id_repetition(int id))
        //throw IdAlreadyExist();
    Directory* parent_directory = file_system->fine_parent_directory(int parent_id);
    if(parent_directory == NULL)
        //throw BadParentId();
    if(parent_directory->is_title_repetition(string title))
        //throw BadTitle();
    parent_directory->add_file_to_parent_dir(int id, string title, string content, int parent_id);
    
}

void FileSystemInterface::add_link(int id, string title, int element_id, int parent_id)
{
    if(file_system->is_id_repetition(int id))
        //throw IdAlreadyExist();
    Directory* parent_directory = file_system->fine_parent_directory(int parent_id);
    if(parent_directory == NULL)
        //throw BadParentId();
    if(parent_directory->is_title_repetition(string title))
        //throw BadTitle();
    if(parent_directory->is_element_id_invalid(int element_id))
        //throw BadLinkedElement();
    parent_directory->add_link_to_parent_dir(int id, string title, int element_id, int parent_id);
}
/*
void FileSystemInterface::view(int id)
{
    file_system->view(int id)
}
*/