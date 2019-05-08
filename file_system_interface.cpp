#include <string>

#include "file_system_interface.h"
#include "file_system.h"
#include "exception.h"

using namespace std;

FileSystemInterface::FileSystemInterface()
{
        file_system = new FileSystem() ;
}

void FileSystemInterface::add_directory(int id, string title, int parent_id)
{
    try{
        file_system->add_directory(id, title, parent_id);
    }catch(Exception ex){
        ex.what();
    }
}

void FileSystemInterface::add_file(int id, string title, string content, int parent_id)
{
    try{
        file_system->add_file(id, title, content, parent_id);
    }catch(Exception ex){
        ex.what();
    }
}

void FileSystemInterface::add_link(int id, string title, int element_id, int parent_id)
{
    try{
        file_system->add_link(id, title, element_id, parent_id);
    }catch(Exception ex){
        ex.what();
    }
}
/*
void FileSystemInterface::view(int id)
{
    file_system->view(int id)
}
*/