#include "hashtable.h"
#include <iostream>
#include <cstring>

using namespace std;

void beszurEleje(List** elem, string ujAdat, string ind)
{
    List* ujElem = new List();
    ujElem->adat = ujAdat;
    ujElem->kulcs = ind;

    ujElem->kov = *elem;
    ujElem->elozo = NULL;
    if (*elem != NULL)
    {
        (*elem)->elozo = ujElem;
    }
    *elem = ujElem;
}

void beszurElemUtan(List* elozoElem, string ujAdat, string ind)
{
    if (elozoElem == NULL)
    {
        cout << "A megadott elem nem lehet egy NULL pointer" << endl;
        return;
    }
    List* ujElem = new List();
    ujElem->kulcs = ind;
    ujElem->adat = ujAdat;

    ujElem->kov = elozoElem->kov;
    elozoElem->kov = ujElem;
    ujElem->elozo = elozoElem;
    if (ujElem->kov != NULL)
    {
        ujElem->kov->elozo = ujElem;
    }
}

void beszurElemEle(List* kovElem, string ujAdat, string ind)
{
    if (kovElem == NULL)
    {
        cout << "A megadott elem nem lehet egy NULL pointer" << endl;
        return;
    }
    List* ujElem = new List();
    ujElem->kulcs = ind;
    ujElem->adat = ujAdat;

    ujElem->elozo = kovElem->elozo;
    kovElem->elozo = ujElem;
    ujElem->kov = kovElem;

    if (ujElem->elozo != NULL)
    {
        ujElem->elozo->kov = ujElem;
    }
}

void beszurVege(List** elem, string ujAdat, string ind)
{
    List* ujElem = new List();
    List* utolso = *elem;

    ujElem->adat = ujAdat;
    ujElem->kulcs = ind;

    ujElem->kov = NULL;

    if (elem == NULL)
    {
        ujElem->elozo = NULL;
        *elem = ujElem;
        return;
    }

    while (utolso->kov != NULL)
    {
        utolso = utolso->kov;
    }

    utolso->kov = ujElem;
    ujElem->elozo = utolso;
}

void torol(List** elem, List* mitTorol)
{
    if (*elem == NULL)
    {
        cout << "A lista ures.";
        return;
    }
    if (mitTorol == NULL)
    {
        cout << "A torlendo elem egy NULL pointer.";
        return;
    }

    if (*elem == mitTorol)
    {
        *elem = mitTorol->kov;
    }
    if (mitTorol->kov != NULL)
    {
        mitTorol->kov->elozo = mitTorol->elozo;
    }
    if (mitTorol->elozo != NULL)
    {
        mitTorol->elozo->kov = mitTorol->kov;
    }
    delete mitTorol;
}

void kiir(List* elem)
{
    while (elem != NULL)
    {
        cout << elem->kulcs << " " << elem->adat << ";\t";
        elem = elem->kov;
    }
}

Hash::Hash()
{
    this->meret = 15;
    this->maxElemek = 0;
    this->map.resize(meret);
}

Hash::~Hash()
{
    for (int i = 0; i < this->meret; i++)
    {
        delete map[i];
    }
}

int convert(string x)
{
    int s = 0;
    for (unsigned i = 0; i < x.size(); i++)
    {
        s += x[i];
    }
    return s;
}

int Hash::hashFunction(string x)
{
    int s = convert(x);
    return (s % meret);
}

void Hash::beszur(string kulcs, string ert)
{
    int index;
    index = hashFunction(kulcs);
    if (map[index] != NULL)
    {
        beszurVege(&map[index], ert, kulcs);
        return;
    }
    beszurEleje(&map[index], ert, kulcs);
    maxElemek++;
}

List* Hash::megKeres(string kulcs)
{
    int index = hashFunction(kulcs);
    for (List* i = map[index]; i != NULL; i = i->kov)
    {
        if (i->kulcs == kulcs)
        {
            return i;
        }
    }
    return NULL;
}

void Hash::torles(string kulcs)
{
    auto it = megKeres(kulcs);
    int index = hashFunction(kulcs);
    if (it != NULL)
    {
        torol(&map[index], it);
        maxElemek--;
    }
}

void Hash::kiirTabla()
{
    for (int i = 0; i < meret; i++)
    {
        cout << i + 1 << " --> ";
        kiir(map[i]);
        cout << endl;
    }
}