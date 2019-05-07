#ifndef DIRECTORY_H_
#define DIRECTORY_H_

#include <string>
#include <vector>

#include "file_system.h"

class Directory : public FileSystem
{
public:
    Directory(int _id, std::string _title, int _parent_id);
   // virtual void print_info();
    bool is_title_repetition(std::string title);
    bool is_id_exist_in_directory(int id);
    bool is_element_id_invalid(int element_id);
    void add_directory_to_parent_dir(int id, string title, int parent_id);
    void add_file_to_parent_dir(int id, string title, string content, int parent_id);
    void add_link_to_parent_dir(int id, string title, int element_id, int parent_id);
protected:
    std::vector<Directory*> directory_elements;
    int id;
    std::string title;
    int parent_id ;
};

#endif