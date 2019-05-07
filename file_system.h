#ifndef FILE_SYSTEM_H_
#define FILE_SYSTEM_H_

#include <string>
#include <vector>

class Directory;

class FileSystem
{
public:
    FileSystem();
    bool is_id_repetition(int id);
    Directory* fine_parent_directory(int parent_id);
    void add_directory_to_parent_dir(int id, string title, int parent_id);
   // void view(int id);
   // virtual void print_info() = 0;
protected:
    std::vector<Directory*> directory_list;
};

#endif