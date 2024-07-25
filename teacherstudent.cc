#include"1.hh"
#include<string>
#include<iostream>
#include<vector>
#include<fstream>
#include<iomanip>
person::person():m_name("default"),m_age(0),m_citizen_id(000000000000000000){}

person::person(std::string name,int age,uint64_t citizen_id):m_name(name),m_age(age),m_citizen_id(citizen_id){}

void person::printinformation()
{
  std::cout<<"name: "<<m_name<<std::endl;
  std::cout<<"age: "<<m_age<<std::endl;
  std::cout<<"citizen_id: "<<m_citizen_id<<std::endl;
}

student::student(std::string name,int age,uint64_t citizen_id,uint32_t student_id):person(name,age,citizen_id),m_student_id(student_id)
{
  std::cout<<"student's constructor!"<<std::endl;
}

void student::printinformation()
{
  person::printinformation();
  std::cout<<"student_id: "<<m_student_id<<std::endl;
}


student::~student()
{
  std::cout<<"student's destructor!"<<std::endl;
}


teacher::teacher(std::string name,int age,uint64_t citizen_id,uint32_t teacher_id):person(name,age,citizen_id),m_teacher_id(teacher_id)
{
  std::cout<<"teacher's constructor!"<<std::endl;
}


void teacher::printinformation()
{
  person::printinformation();
  std::cout<<"teacher_id: "<<m_teacher_id<<std::endl;
  /*for(std::vector<student*>::iterator it=stu.begin();it!=stu.end();it++)
  {
    //(*(*it)).printinformation();
   (*it)->printinformation();
  }*/
  for(auto t : stu)
  {
    (*t).printinformation();
  }
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

void write()
{
  std::ofstream outfile;
  outfile.open("stu.txt",std::ios::out);
  outfile<<"name"<<std::setw(10)<<"age"<<std::setw(20)<<"citizen_id"<<std::setw(20)<<"student_id"<<std::endl;
  outfile<<"wwj"<<std::setw(10)<<18<<std::setw(20)<<410122200602062345<<std::setw(20)<<2003105022<<std::endl;
  outfile<<"sgg"<<std::setw(10)<<19<<std::setw(20)<<410122200505273467<<std::setw(20)<<2003105033<<std::endl;
  outfile<<"zsm"<<std::setw(10)<<19<<std::setw(20)<<410122200505272586<<std::setw(20)<<2003105044<<std::endl;
  outfile.close();
}

