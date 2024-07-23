#include"teacherstudent.hh"
#include<string>
#include<iostream>
#include<vector>
person::person():m_name("default"),m_age(0),m_citizen_id(000000000000000000){}

person::person(std::string name,int age,uint64_t citizen_id):m_name(name),m_age(age),m_citizen_id(citizen_id){}

void person::printinformation()
{
  std::cout<<"name: "<<m_name<<std::endl;
  std::cout<<"age: "<<m_age<<std::endl;
  std::cout<<"citizen_id: "<<m_citizen_id<<std::endl;
}

void student::printstu_information()
{
  std::cout<<"stuendt_id: "<<m_student_id<<std::endl;
}

student::student(std::string name,int age,uint64_t citizen_id,uint32_t student_id):person(name,age,citizen_id),m_student_id(student_id)
{
  std::cout<<"student's constructor!"<<std::endl;
  printinformation();
  printstu_information();
}

student::~student()
{
  std::cout<<"student's destructor!"<<std::endl;
}

void teacher::printtea_information()
{
  std::cout<<"teacher_id: "<<m_teacher_id<<std::endl;
}

teacher::teacher(std::string name,int age,uint64_t citizen_id,uint32_t teacher_id):person(name,age,citizen_id),m_teacher_id(teacher_id)
{
  std::cout<<"teacher's constructor!"<<std::endl;
  printinformation();
  printtea_information();
}

void  teacher::creatvector(std::string name,int age,uint64_t citizen_id,uint32_t student_id)
{
  student* p=new student(name,age,citizen_id,student_id);
  stu.push_back(p);
}

teacher::~teacher()
{
  std::cout<<"teacher's destructor!"<<std::endl;
  for(std::vector<student*>::iterator it=stu.begin();it!=stu.end();it++)
  {
    delete *it;
  }
}

std::vector<student*> teacher::returnstu()
{
  return stu;
}
