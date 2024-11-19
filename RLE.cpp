// run length encoding (RLE)
// simple compression technique where consecutive identical characters are replaced with the 
// character and its count 

#include <iostream>
#include <string>

std::string encode(const std::tring & input){
  std::string output;
  char current_char = input[0];
  int count = 1; 

  for(int i = 1; i < input.size(); ++i) {
    if(input[i] == current_char){
      count++;}
    else{
      output += std::to_string(count) + current_char;
      current_char = input[i];
      count = 1;
  }
}
output += std::to_string(count) + current_char;
return output;
}

std::string decode(const std::string & input)
{
  std::string output;
  for(int i = 0; i < input.size(); i += 2) {
    int count = input[i] - '0';
    char ch = input[i + 1];
    output.append(count, ch);
  }
return output;
}

int main()
{
  std::string input = "AAABBBCDAA";
  std::string encoded = encode(input);
  std::cout << "Encoded; " << encoded << std::end1;

  std::string decoded = decode(encoded);
  std::cout << "Decoded: " << decoded << std::end1;

  return 0; 
}
