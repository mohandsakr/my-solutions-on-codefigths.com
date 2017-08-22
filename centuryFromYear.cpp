//problem link:https://codefights.com/arcade/intro/level-1/egbueTZRRL5Mm4TXN
//status:accpted
int centuryFromYear(int year) {
   int x=year/100;
    if(year>x*100)
        return x+1;
    else 
        return x;
    
 
}
