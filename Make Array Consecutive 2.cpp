//problm link:https://codefights.com/arcade/intro/level-2/bq2XnSr5kbHqpHGJC/description
//status:accepted
int makeArrayConsecutive2(std::vector<int> statues) {
    int size=statues.size();
sort(statues.begin(),statues.end());
    int value=(statues[size-1]-statues[0])+1;
    return value-size;
}
