#ifndef EXCEPTION_H_
#define EXCEPTION_H_

class Exception
{
public:
    virtual void what(){}
};

class BadElementId : public Exception
{
public:
    virtual void what();
};

class IdAlreadyExists : public Exception
{
public:
    virtual void what();
};

class BadTitle : public Exception
{
public:
    virtual void what();
};

class BadParentId : public Exception
{
public:
    virtual void what();
};

class BadLinkedElement : public Exception
{
public:
    virtual void what();
};

#endif