//problem link:https://codefights.com/arcade/intro/level-1/s5PbmwxfECC52PWyQ
//status:accepted
bool checkPalindrome(std::string inputString) {
    string x=inputString;
     reverse(inputString.begin(),inputString.end());
    if(x==inputString){
        return 1;
    }
    else return 0;
}

