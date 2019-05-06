#ifndef FILE_SYSTEM_H_
#define FILE_SYSTEM_H_

#include <string>
#include <vector>

class FileSystem
{
public:
    FileSystem(int _id, std::string _title ,int _parent_id);
    void view(int id);
    virtual void print_info() = 0;
private:
    std::vector<FileSystem*> file_system_list;
    int id;
    std::string title;
    int parent_id ;
};

#endif