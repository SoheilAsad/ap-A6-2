#include <string>

#include "file_system.h"
#include "directory.h"

using namespace std;

FileSystem::FileSystem()
{
    directory_list.push_back( new Directory(0,"root",0) );
}

Directory* FileSystem::fine_parent_directory(int parent_id)
{
    for(int directory_num = 0; directory_num < directory_list.size(); directory_num++)
        if(directory_list[directory_num]->id == parent_id)
            return directory_list[directory_num];
    return NULL;
}

bool FileSystem::is_id_repetition(int id)
{
    for(int directory_num = 0; directory_num < directory_list.size(); directory_num++)
        if(directory_list[directory_num]->is_id_exist_in_directory())
            return true;
    return false;
}

void FileSystem::add_directory_to_parent_dir(int id, string title, int parent_id)
{
    directory_list.push_back(new Directory(id, title, parent_id));
}