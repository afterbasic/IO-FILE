#include <iostream>
#include <fstream>
#include <string>
struct Data_Employees {
  int Number;
  std::string Name;
  std::string Position;
};
int main() {
  std::fstream myFile;
  Data_Employees Read_Data_1;
  Data_Employees Read_Data_2;
  Data_Employees Read_Data_3;
  myFile.open("Encoded_Employees_Data.bin", std::ios::in | std::ios::binary);
  myFile.read(reinterpret_cast<char*>(&Read_Data_1), sizeof(Data_Employees));
  std::cout << Read_Data_1.Number << std::endl;
  std::cout << Read_Data_1.Name << std::endl;
  std::cout << Read_Data_1.Position << std::endl;
  myFile.read(reinterpret_cast<char*>(&Read_Data_2), sizeof(Data_Employees));
  std::cout << Read_Data_2.Number << std::endl;
  std::cout << Read_Data_2.Name << std::endl;
  std::cout << Read_Data_2.Position << std::endl;
  myFile.read(reinterpret_cast<char*>(&Read_Data_3), sizeof(Data_Employees));
  std::cout << Read_Data_3.Number << std::endl;
  std::cout << Read_Data_3.Name << std::endl;
  std::cout << Read_Data_3.Position << std::endl;
  myFile.close();
  std::cin.get();
  return 0;
}
/*(1)Important notes : just repeat the code that contains things like data_1, data_2*/
/*Lectures (2) find struct binary content using seekposition 

Data_Employees read_data(int &position, std::fstream &SubtitutedFile) {
  Data_Employees bufferData;
  SubtitutedFile.seekp((position - 1)*sizeof(Data_Employees));
  SubtitutedFile.read(reinterpret_cast<char*>(&bufferData),sizeof(Data_Employees));
  return bufferData;
}
-----calling the functions-----
std::fstream myFile;
Data_Employees read_content;
int position = 1;
read_content = Data_Employees(position, myFile);
std::cout << read_content.XXX << std::endl;

*/