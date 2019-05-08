#include <iostream>

#include "exception.h"

using namespace std;

const string BAD_ELEMENT_ID_ERROR = "Invalid element ID requested!";
const string ID_ALREADY_EXIST_ERROR = "Requested ID already exists!";
const string BAD_TITLE = "Parent directory has the same child!";
const string BAD_PARENT_ID_ERROR = "Parent ID is nit referring to a directory!";
const string BAD_LINKED_ELEMENT_ERROR = "Invalid element type requested!";

void BadElementId::what()
{
    cout <<BAD_ELEMENT_ID_ERROR <<endl;
}

void IdAlreadyExists::what()
{
    cout <<ID_ALREADY_EXIST_ERROR <<endl;
}

void BadTitle::what()
{
    cout <<BAD_TITLE <<endl;
}

void BadParentId::what()
{
    cout <<BAD_PARENT_ID_ERROR <<endl;
}

void BadLinkedElement::what()
{
    cout <<BAD_LINKED_ELEMENT_ERROR <<endl;
}