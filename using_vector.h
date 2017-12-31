#include <vector>
#include <iostream>
using namespace std;
template<class I, class E>
class assocTab
{
public:
    struct Final
    {
        I id;
        E employee;
    };
    vector <Final> list;

    void Add(I id,E val)
    {
        Final* p = new Final;
        p->id = id;
        p->employee = val;
        list.push_back(*p);
    }
    friend ostream& operator<<(ostream& o, const assocTab& src)
    {
        unsigned int size = src.list.size();
        int i;
        o << "People:" << endl;
        for ( i = 0; i< size; i++ )
        {
            /* std::cout << *it; ... */
            o << "ID: " << src.list[i].id << endl;
            o << src.list[i].employee;
            o << "------------------------------------------------" << endl;
        }
        return o;
    }
    E* Find(I var)
    {
        unsigned int size = list.size();
        int i;
        for ( i = 0; i< size; i++ )
        {
            if(list[i].id == var)
                return &(list[i].employee);
        }
        return NULL;
    }
};
