#ifndef FILE_SYSTEM_H_
#define FILE_SYSTEM_H_

#include <string>
#include <vector>

class Directory;

class FileSystem
{
public:
    FileSystem();
    void add_directory(int _id, std::string _title, int _parent_id);
    void add_file(int id, std::string title, std::string content, int parent_id);
    void add_link(int id, std::string title, int element_id, int parent_id);
    bool is_id_repetition(int id);
    bool is_element_id_invalid(int element_id);
    Directory* fine_parent_directory(int parent_id);
    void add_directory_to_file_system(int id, std::string title, int parent_id);
   // void view(int id);
   // virtual void print_info() = 0;
private:
    std::vector<Directory*> directory_list;
};

#endif