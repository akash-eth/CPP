#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    
    // string s1;
    // cin >> s1;
    // string s2;
    // cin >> s2;

    // // concatenate !!
    // cout << "simple concatenate: " << s1+s2 << endl;
    
    
    // // Append function !!
    // cout << "using append: " << s1.append(s2) << endl;

    // // accessing a particular char !!
    // cout << "printing only character: " << s1[5];

    // // clear fucntion !!
    // s1.clear();

    // // compare strings !!
    // string s1 = "abc";
    // string s2 = "abc";
    // if(s2.compare(s1) == 0) {
    //     cout << "strings are equal";
    // }

    // // to check if string is empty or not !!
    // string s1 = "akash";
    // if(s1.empty()) {
    //     cout << "string is empty" << endl;
    // } 
    // else {
    //     cout << "string is not empty" << endl;
    // }

    // s1.clear();
    // cout << "after clear is applied:" << endl;
    // if(s1.empty()) {
    //     cout << "string is empty" << endl;
    // } 
    // else {
    //     cout << "string is not empty" << endl;
    // }

    // // erase fucntion !!
    // // which is used to delete elements from a list container. 
    // // This function can be used to remove a single element or a range of elements from the specified list container
    // string s1 = "akashbhardwaj";
    // s1.erase(3, 2); // arg1: index from where to start erase, arg2: no. of elements to erase
    // cout << s1;

    // // find function !!
    // // returns the starting index of the found substring if it is availble in the string
    // string s1 = "akashbhardwaj";
    // cout << s1.find("bhar");
    
    // // insert function !!.
    // // arg1: index no. on which you want to insert, arg2: string you want to insert
    // string s1 = "akashbhardwaj";
    // s1.insert(5, "ji");
    // cout << s1; 

    // // substr(): if you want to fetch a substring from a string
    // string s1 = "akashbhardwaj";
    // string s = s1.substr(4, 7); // arg1: starting index, arg2: till how many chars
    // cout << s << endl;

    // // stoi(): convert numeric string to integer !!
    // string s1 = "786";
    // int s = stoi(s1);
    // cout << s+2;

    // // to_string(): use to convert int to str;
    // int s1 = 786;
    // cout << to_string(s1) + "2";

    // sort a string:
    // add #include<algorithm>
    string s = "akashbhardwaj";
    sort(s.begin(), s.end());
    cout << s;


    return 0;
}