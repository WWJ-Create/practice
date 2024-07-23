#include<iostream>
#include<vector>
#include<string>
class person
{
  public:
    person();
    person(std::string name,int age,uint64_t citizen_id);
    void printinformation();
  private:
    std::string m_name;
    int m_age;
    uint64_t m_citizen_id;
};

class student:public person
{
  public:
    //student();
    student(std::string name,int age,uint64_t citizen_id,uint32_t student_id);
    void printstu_information();
    ~student();
  private:
    uint32_t m_student_id;
};

class teacher:public person
{
  public:
    //teacher();
    teacher(std::string name,int age,uint64_t citizen_id,uint32_t teacher_id);
    ~teacher();
    void printtea_information();
    void creatvector(std::string name,int age,uint64_t citizen_id,uint32_t student_id);
    std::vector<student*> returnstu();
  private:
    uint32_t m_teacher_id;
    std::vector<student*> stu; 
};
