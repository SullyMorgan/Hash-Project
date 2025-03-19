#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

class List
{
public:
    string adat;
    string kulcs;
    List* kov;
    List* elozo;
};

void beszurEleje(List** elem, string ujAdat, string ind);
void beszurElemUtan(List* elozoElem, string ujAdat, string ind);
void beszurElemEle(List* kovElem, string ujAdat, string ind);
void beszurVege(List** elem, string ujAdat, string ind);
void torol(List** elem, List* mitTorol);
void kiir(List* elem);

class Hash
{
    int meret;
    int maxElemek;
    vector<List*> map;
    int hashFunction(string);

public:
    Hash();
    ~Hash();
    void beszur(string kulcs, string ert);
    void torles(string);
    List* megKeres(string kulcs);
    void kiirTabla();
};