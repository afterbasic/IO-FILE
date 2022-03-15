#include <iostream>
#include <string>
#include <fstream>
struct Data_Employees {
  int Number;
  std::string Name;
  std::string Position;
};
int main() {
  std::fstream myFile;
  myFile.open("Encoded_Employees_Data.bin", std::ios::trunc | std::ios::in | std::ios::out | std::ios::binary);
  Data_Employees Employees_1;
  Data_Employees Employees_2;
  Data_Employees Employees_3;
  Employees_1.Number = 5252737;
  Employees_1.Name = "Daren Jonathan";
  Employees_1.Position = "Lead Creativity Team";
  Employees_2.Number = 472737;
  Employees_2.Name = "Jim Harris";
  Employees_2.Position = "Supervisor Manager";
  Employees_3.Number = 8252437;
  Employees_3.Name = "Tonya Clinton";
  Employees_3.Position = "Coordinator";
  myFile.write(reinterpret_cast<char*>(&Employees_1), sizeof(Data_Employees));
  myFile.write(reinterpret_cast<char*>(&Employees_2), sizeof(Data_Employees));
  myFile.write(reinterpret_cast<char*>(&Employees_3), sizeof(Data_Employees));
  std::cout << "Console alert: Coded successfully" << std::endl;
  myFile.close();
  std::cin.get();
  return 0;
}