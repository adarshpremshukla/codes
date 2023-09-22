#include<iostream>
#include<unordered_map>
#include<map>

using namespace std;

// unordered map me chije random form me print hoti hai but map me order preserved hota hai
// unordered_map complexity constant time but in map log(n) time

int main()
{
    //creation
    unordered_map<string,int> m;

    //insertion

    //mathod 1
    pair<string,int> p = make_pair("Adarsh",1);
    m.insert(p);

    //method 2
    pair<string,int> q ("Shukla",2);
    m.insert(q);

    //method 3
    m["Rishi"] = 3;

    //what will happen
    m["Rishi"] = 4;    // update kr dega


    //search

    cout << m["Rishi"] << endl;
    cout << m.at("Adarsh") << endl;

    // cout << m.at("Shubhi") << endl;   // throws an error

    cout << m["Shubhi"] << endl;   // 0 will print

    cout << m.at("Shubhi") << endl;  // Now its working and print the 0 bcz uper shubhi me 0 add ho gya hai

    cout<<m.size()<<endl;

    cout<<m.count("Anshu")<<endl;    //Not present to 0 will print

    m.erase("Rishi");
    cout<<m.size()<<endl;

    //iteration via for loop
    for(auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    //iteration via iterator
    unordered_map<string,int> :: iterator it = m.begin();

    while(it != m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
}
