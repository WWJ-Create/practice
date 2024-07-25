#include"1.hh"
#include<fstream>
int main()
{
  /*teacher t1("sz",40,410122195201292628,123456);
  t1.creatvector("wwj",18,410122200101292628,2003105022);
  t1.creatvector("sgg",19,410122200201232830,2003105033);
  t1.creatvector("zsm",20,410122200601272632,2003105044);
  t1.returnstu()[1]->printinformation();
  t1.returnstu()[1]->printstu_information();*/
  //


  teacher t1("sz",40,410122195201292628,123456);
  write();
  std::ifstream infile;
  infile.open("stu.txt",std::ios::in);
  std::string a,b,c,d;
  infile>>a>>b>>c>>d;
  std::string A;
  int B;
  uint64_t C;
  uint32_t D;
  while(1)
  {
    infile>>A>>B>>C>>D;
    if(infile.eof())
    {
      break;
    }
    t1.creatvector(A,B,C,D);
  }
  infile.close();
  person* x=new teacher(t1);
  x->printinformation();
  delete x;
  return 0;
}
