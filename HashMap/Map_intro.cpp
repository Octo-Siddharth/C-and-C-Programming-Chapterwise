//Introduction to Map and all its STL uses
#include<iostream>
#include<map>

using namespace std;

int main()
{
    //Creation using ordered_map/map TC O(logn) based on bst
    map<string, int> m;
    //Insertion Type1
    pair<string, int> pair1 = make_pair("Siddhartha", 3);
    m.insert(pair1);
    //Insertion Type2
    pair<string, int> pair2("Rakshit", 2);
    m.insert(pair2);
    //Insertion Type3
    m["Name"] = 1; //First time is creation
    m["My"] = 2;//Scecond time is updation
    //Search
    cout<<m["Siddhartha"]<<endl;
    cout<<m.at("Rakshit")<<endl;

    //Difference in line (what if something thing is not declared)
    cout<<m["Stepan"]<<endl;
    cout<<m.at("Stepan")<<endl;

    //Size
    cout<<m.size()<<endl;

    //Check presence
    cout<<m.count("MauMau")<<endl;
    cout<<m.count("Name")<<endl;

    //Erase
    m.erase("My");
    cout<<m.size()<<endl;
    //Traverse 1
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    //Traverse 2
    //Iterator
    map<string, int> :: iterator it = m.begin();
    while (it != m.end())
    {
        cout<<it-> first<<" "<<it->second<<endl;
        it++;
    }
    return 0;
}