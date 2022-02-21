#include <iostream>
#include <string>

void LastWordCount(std::string strInput) {
    //checking for space characters at the end of the string strInput
        //if there are any, they get deleted
    while(strInput.back() == ' ') {
        strInput.erase(strInput.end() - 1, strInput.end());
    }
    
    //initializing space delimiter
    std::string delim = " ";
    
    //initializing start position and end position
    auto start = 0;
    auto end = strInput.find(delim);
    
    //looping through entire length of the sample string
        //changing our start position to the first letter of the next word in string
            //and our end position to the next delimiter/end of string
    while(end != std::string::npos) {
        start = end + delim.length();
        end = strInput.find(delim, start);
    }
    
    //creating substring using last starting position and end position
        //storing it into temp string
            //printing out size of temp
    std::string temp = strInput.substr(start, end);
    std::cout << temp.size();
    
}

int main() {
    //sample string
    std::string s = " fly me to the moon ";
    
    //calling LastWordCount function with sample string as the argument
    LastWordCount(s);
    
}
