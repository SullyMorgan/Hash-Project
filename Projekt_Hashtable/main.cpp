#include "hashtable.h"
#include <cstdlib>
#include <fstream>

ifstream f("championsleague.txt");
ifstream g("premierleague.txt");
ifstream h("laliga.txt");
ifstream k("serieA.txt");

using namespace std;

void jatekosok(Hash &tablazat)
{
    //Man united
    tablazat.beszur("Andre Onana", "Csapat: Manchester United || Mezszam: 24 || Pozicio: Kapus || Csatlakozasi ev: 2023 || Nemzetiseg: Cameroon || Kor: 28 ev");
    tablazat.beszur("Diogo Dalot", "Csapat: Manchester United || Mezszam: 20 || Pozicio: Jobb hatved || Csatlakozasi ev: 2018 || Nemzetiseg: Portugal || Kor: 25 ev");
    tablazat.beszur("Jonny Evans", "Csapat: Manchester United || Mezszam: 35 || Pozicio: Kozep hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Eszak-Irorszag || Kor: 36 ev");
    tablazat.beszur("Willy Kambwala", "Csapat: Manchester United || Mezszam: 53 || Pozicio: Kozep hatved || Csatlakozasi ev: 2020 || Nemzetiseg: Francia || Kor: 19 ev");
    tablazat.beszur("Victor Lindelof", "Csapat: Manchester United || Mezszam: 2 || Pozicio: Kozep hatved || Csatlakozasi ev: 2017 || Nemzetiseg: Sved || Kor: 29 ev");
    tablazat.beszur("Harry Maguire", "Csapat: Manchester United || Mezszam: 5 || Pozicio: Kozep hatved || Csatlakozasi ev: 2019 || Nemzetiseg: Anglia || Kor: 31 ev");
    tablazat.beszur("Lisandro Martinez", "Csapat: Manchester United || Mezszam: 6 || Pozicio: Kozep hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Argentina || Kor: 26 ev");
    tablazat.beszur("Raphael Varane", "Csapat: Manchester United || Mezszam: 19 || Pozicio: Kozep hatved || Csatlakozasi ev: 2021 || Nemzetiseg: Francia || Kor: 31 ev");
    tablazat.beszur("Aaron Wan-Bissaka", "Csapat: Manchester United || Mezszam: 29 || Pozicio: Jobb hatved || Csatlakozasi ev: 2019 || Nemzetiseg: Anglia || Kor: 26 ev");
    tablazat.beszur("Luke Shaw", "Csapat: Manchester United || Mezszam: 23 || Pozicio: Bal hatved || Csatlakozasi ev: 2014 || Nemzetiseg: Anglia || Kor: 28 ev");
    tablazat.beszur("Sofyan Amrabat", "Csapat: Manchester United || Mezszam: 4 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Marokko || Kor: 27 ev");
    tablazat.beszur("Casemiro", "Csapat: Manchester United || Mezszam: 18 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2022 || Nemzetiseg: Brazilia || Kor: 32 ev");
    tablazat.beszur("Christian Eriksen", "Csapat: Manchester United || Mezszam: 14 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2022 || Nemzetiseg: Dania || Kor: 32 ev");
    tablazat.beszur("Bruno Fernandes", "Csapat: Manchester United || Mezszam: 8 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2020 || Nemzetiseg: Portugal || Kor: 29 ev");
    tablazat.beszur("Kobbie Mainoo", "Csapat: Manchester United || Mezszam: 37 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2021 || Nemzetiseg: Anglia || Kor: 19 ev");
    tablazat.beszur("Scott McTominay", "Csapat: Manchester United || Mezszam: 39 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2012 || Nemzetiseg: Skot || Kor: 27 ev");
    tablazat.beszur("Mason Mount", "Csapat: Manchester United || Mezszam: 7 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Anglia || Kor: 25 ev");
    tablazat.beszur("Antony", "Csapat: Manchester United || Mezszam: 21 || Pozicio: Tamado || Csatlakozasi ev: 2022 || Nemzetiseg: Brazilia || Kor: 24 ev");
    tablazat.beszur("Amad Diallo", "Csapat: Manchester United || Mezszam: 16 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2021 || Nemzetiseg: Elefantcsontpart || Kor: 21 ev");
    tablazat.beszur("Omari Forson", "Csapat: Manchester United || Mezszam: 62 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2020 || Nemzetiseg: Angol || Kor: 19 ev");
    tablazat.beszur("Alejandro Garnacho", "Csapat: Manchester United || Mezszam: 17 || Pozicio: Tamado || Csatlakozasi ev: 2020 || Nemzetiseg: Argentina || Kor: 19 ev");
    tablazat.beszur("Rasmus Hojlund", "Csapat: Manchester United || Mezszam: 11 || Pozicio: Csatar || Csatlakozasi ev: 2023 || Nemzetiseg: Dania || Kor: 21 ev");
    tablazat.beszur("Anthony Martial", "Csapat: Manchester United || Mezszam: 9 || Pozicio: Csatar || Csatlakozasi ev: 2015 || Nemzetiseg: Francia || Kor: 28 ev");
    tablazat.beszur("Marcus Rashford", "Csapat: Manchester United || Mezszam: 10 || Pozicio: Tamado || Csatlakozasi ev: 2014 || Nemzetiseg: Anglia || Kor: 26 ev");

    //Liverpool
    tablazat.beszur("Alisson", "Csapat: Liverpool || Mezszam: 1 || Pozicio: Kapus || Csatlakozasi ev: 2018 || Nemzetiseg: Brazilia || Kor: 31 ev");
    tablazat.beszur("Kelleher Caoimhin", "Csapat: Liverpool || Mezszam: 62 || Pozicio: Kapus || Csatlakozasi ev: 2029 || Nemzetiseg: Irorszag || Kor: 25 ev");
    tablazat.beszur("Trent Alexander-Arnold", "Csapat: Liverpool || Mezszam: 66 || Pozicio: Jobb hatved || Csatlakozasi ev: 2016 || Nemzetiseg: Anglia || Kor: 25 ev");
    tablazat.beszur("Conor Bradley", "Csapat: Liverpool || Mezszam: 84 || Pozicio: Jobb hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Anglia || Kor: 20 ev");
    tablazat.beszur("Joe Gomez", "Csapat: Liverpool || Mezszam: 2 || Pozicio: Kozep hatved || Csatlakozasi ev: 2015 || Nemzetiseg: Anglia || Kor: 26 ev");
    tablazat.beszur("Ibrahima Konate", "Csapat: Liverpool || Mezszam: 5 || Pozicio: Kozep hatved || Csatlakozasi ev: 2021 || Nemzetiseg: Francia || Kor: 24 ev");
    tablazat.beszur("Joel Matip", "Csapat: Liverpool || Mezszam: 32 || Pozicio: Kozep hatved || Csatlakozasi ev: 2016 || Nemzetiseg: Cameroon || Kor: 32 ev");
    tablazat.beszur("Jarell Quansah", "Csapat: Liverpool || Mezszam: 78 || Pozicio: Kozep hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Anglia || Kor: 21 ev");
    tablazat.beszur("Andrew Robertson", "Csapat: Liverpool || Mezszam: 26 || Pozicio: Bal hatved || Csatlakozasi ev: 2017 || Nemzetiseg: Skot || Kor: 30 ev");
    tablazat.beszur("Tsimikas Konstantinos", "Csapat: Liverpool || Mezszam: 21 || Pozicio: Bal hatved || Csatlakozasi ev: 2020 || Nemzetiseg: Gorog || Kor: 27 ev");
    tablazat.beszur("Virgil van Dijk", "Csapat: Liverpool || Mezszam: 4 || Pozicio: Kozep hatved || Csatlakozasi ev: 2028 || Nemzetiseg: Holland || Kor: 32 ev");
    tablazat.beszur("Bobby Clark", "Csapat: Liverpool || Mezszam: 42 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2022 || Nemzetiseg: Anglia || Kor: 19 ev");
    tablazat.beszur("Harvey Elliot", "Csapat: Liverpool || Mezszam: 19 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2021 || Nemzetiseg: Anglia || Kor: 21 ev");
    tablazat.beszur("Wataru Endo", "Csapat: Liverpool || Mezszam: 3 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Japan || Kor: 31 ev");
    tablazat.beszur("Ryan Gravenberch", "Csapat: Liverpool || Mezszam: 38 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Holland || Kor: 21 ev");
    tablazat.beszur("Curtis Jones", "Csapat: Liverpool || Mezszam: 17 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2020 || Nemzetiseg: Anglia || Kor: 23 ev");
    tablazat.beszur("Alexis Mac Allister", "Csapat: Liverpool || Mezszam: 10 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Argentina || Kor: 25 ev");
    tablazat.beszur("Szoboszlai Dominik", "Csapat: Liverpool || Mezszam: 8 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Magyar || Kor: 23 ev");
    tablazat.beszur("Thiago", "Csapat: Liverpool || Mezszam: 6 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2020 || Nemzetiseg: Spanyol || Kor: 33 ev");
    tablazat.beszur("Luis Diaz", "Csapat: Liverpool || Mezszam: 7 || Pozicio: Tamado || Csatlakozasi ev: 2022 || Nemzetiseg: Columbia || Kor: 27 ev");
    tablazat.beszur("Diogo Jota", "Csapat: Liverpool || Mezszam: 20 || Pozicio: Tamado || Csatlakozasi ev: 2020 || Nemzetiseg: Portugal || Kor: 27 ev");
    tablazat.beszur("Cody Gakpo", "Csapat: Liverpool || Mezszam: 18 || Pozicio: Tamado || Csatlakozasi ev: 2023 || Nemzetiseg: Holland || Kor: 24 ev");
    tablazat.beszur("Darwin Nunez", "Csapat: Liverpool || Mezszam: 9 || Pozicio: Csatar || Csatlakozasi ev: 2022 || Nemzetiseg: Uruguay || Kor: 24 ev");
    tablazat.beszur("Mohamed Salah", "Csapat: Liverpool || Mezszam: 11 || Pozicio: Tamado || Csatlakozasi ev: 2027 || Nemzetiseg: Egyiptom || Kor: 31 ev");

    //Man city
    tablazat.beszur("Ederson", "Csapat: Manchester City || Mezszam: 31 || Pozicio: Kapus || Csatlakozasi ev: 2027 || Nemzetiseg: Brazilia || Kor: 30 ev");
    tablazat.beszur("Stefan Ortega", "Csapat: Manchester City || Mezszam: 18 || Pozicio: Kapus || Csatlakozasi ev: 2022 || Nemzetiseg: Nemet || Kor: 31 ev");
    tablazat.beszur("Manuel Akanji", "Csapat: Manchester City || Mezszam: 25 || Pozicio: Kozep hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Svajc || Kor: 28 ev");
    tablazat.beszur("Nathan Ake", "Csapat: Manchester City || Mezszam: 6 || Pozicio: Kozep hatved || Csatlakozasi ev: 2020 || Nemzetiseg: Holland || Kor: 29 ev");
    tablazat.beszur("Ruben Dias", "Csapat: Manchester City || Mezszam: 3 || Pozicio: Kozep hatved || Csatlakozasi ev: 2020 || Nemzetiseg: Portugal || Kor: 26 ev");
    tablazat.beszur("Josko Gvardiol", "Csapat: Manchester City || Mezszam: 24 || Pozicio: Kozep hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Horvat || Kor: 2 ev");
    tablazat.beszur("Rico Lewis", "Csapat: Manchester City || Mezszam: 82 || Pozicio: Jobb hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Anglia || Kor: 19 ev");
    tablazat.beszur("John Stones", "Csapat: Manchester City || Mezszam: 5 || Pozicio: Kozep hatved || Csatlakozasi ev: 2016 || Nemzetiseg: Anglia || Kor: 29 ev");
    tablazat.beszur("Kyle Walker", "Csapat: Manchester City || Mezszam: 2 || Pozicio: Jobb hatved || Csatlakozasi ev: 2017 || Nemzetiseg: Anglia || Kor: 33 ev");
    tablazat.beszur("Oscar Bobb", "Csapat: Manchester City || Mezszam: 52 || Pozicio: Tamado || Csatlakozasi ev: 2023 || Nemzetiseg: Norveg || Kor: 20 ev");
    tablazat.beszur("Kevin De Bruyne", "Csapat: Manchester City || Mezszam: 17 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2015 || Nemzetiseg: Belgium || Kor: 32 ev");
    tablazat.beszur("Phil Foden", "Csapat: Manchester City || Mezszam: 47 || Pozicio: Tamado || Csatlakozasi ev: 2017 || Nemzetiseg: Anglia || Kor: 23 ev");
    tablazat.beszur("Sergio Gomez", "Csapat: Manchester City || Mezszam: 21 || Pozicio: Bal hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Spanyol || Kor: 23 ev");
    tablazat.beszur("Jack Grealish", "Csapat: Manchester City || Mezszam: 10 || Pozicio: Tamado || Csatlakozasi ev: 2021 || Nemzetiseg: Anglia || Kor: 28 ev");
    tablazat.beszur("Mateo Kovacic", "Csapat: Manchester City || Mezszam: 8 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023|| Nemzetiseg: Horvat || Kor: 29 ev");
    tablazat.beszur("Matheus Nunes", "Csapat: Manchester City || Mezszam: 27 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Portugal || Kor: 25 ev");
    tablazat.beszur("Rodri", "Csapat: Manchester City || Mezszam: 16 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2019 || Nemzetiseg: Spanyol || Kor: 27 ev");
    tablazat.beszur("Bernardo Silva", "Csapat: Manchester City || Mezszam: 20 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2017 || Nemzetiseg: Portugal || Kor: 29 ev");
    tablazat.beszur("Julian Alvarez", "Csapat: Manchester City || Mezszam: 19 || Pozicio: Csatar || Csatlakozasi ev: 2022 || Nemzetiseg: Argentina || Kor: 24 ev");
    tablazat.beszur("Jeremy Doku", "Csapat: Manchester City || Mezszam: 11 || Pozicio: Tamado || Csatlakozasi ev: 2023 || Nemzetiseg: Belgium || Kor: 21 ev");
    tablazat.beszur("Erling Haaland", "Csapat: Manchester City || Mezszam: 9 || Pozicio: Csatar || Csatlakozasi ev: 2022 || Nemzetiseg: Norveg || Kor: 23 ev");

    //Arsenal
    tablazat.beszur("Aaron Ramsdale", "Csapat: Arsenal || Mezszam: 1 || Pozicio: Kapus || Csatlakozasi ev: 2021 || Nemzetiseg: Anglia || Kor: 25 ev");
    tablazat.beszur("David Raya", "Csapat: Arsenal || Mezszam: 22 || Pozicio: Kapus || Csatlakozasi ev: 2023 || Nemzetiseg: Spanyol || Kor: 28 ev");
    tablazat.beszur("Cedric Soares", "Csapat: Arsenal || Mezszam: 17 || Pozicio: Jobb hatved || Csatlakozasi ev: 2020 || Nemzetiseg: Portugal || Kor: 32 ev");
    tablazat.beszur("Gabriel Magalhaes", "Csapat: Arsenal || Mezszam: 6 || Pozicio: Kozep hatved || Csatlakozasi ev: 2020 || Nemzetiseg: Brazilia || Kor: 26 ev");
    tablazat.beszur("Jakub Kiwior", "Csapat: Arsenal || Mezszam: 15 || Pozicio: Bal hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Lengyel || Kor: 24 ev");
    tablazat.beszur("William Saliba", "Csapat: Arsenal || Mezszam: 2 || Pozicio: Kozep hatved || Csatlakozasi ev: 2019 || Nemzetiseg: Francia || Kor: 23 ev");
    tablazat.beszur("Takehiro Tomiyasu", "Csapat: Arsenal || Mezszam: 18 || Pozicio: Jobb hatved || Csatlakozasi ev: 2021 || Nemzetiseg: Japan || Kor: 25 ev");
    tablazat.beszur("Ben White", "Csapat: Arsenal || Mezszam: 4 || Pozicio: Jobb hatved || Csatlakozasi ev: 2021 || Nemzetiseg: Anglia || Kor: 26 ev");
    tablazat.beszur("Oleksandr Zinchenko", "Csapat: Arsenal || Mezszam: 35 || Pozicio: Bal hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Ukrajna || Kor: 27 ev");
    tablazat.beszur("Mohamed Elneny", "Csapat: Arsenal || Mezszam: 25 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2016 || Nemzetiseg: Egyiptom || Kor: 31 ev");
    tablazat.beszur("Kai Havertz", "Csapat: Arsenal || Mezszam: 29 || Pozicio: Tamado || Csatlakozasi ev: 2023 || Nemzetiseg: Nemet || Kor: 24 ev");
    tablazat.beszur("Jorginho", "Csapat: Arsenal || Mezszam: 20 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Olasz || Kor: 32 ev");
    tablazat.beszur("Ethan Nwaneri", "Csapat: Arsenal || Mezszam: 63 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Anglia || Kor: 17 ev");
    tablazat.beszur("Martin Odegaard", "Csapat: Arsenal || Mezszam: 8 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2021 || Nemzetiseg: Norveg || Kor: 25 ev");
    tablazat.beszur("Thomas Partey", "Csapat: Arsenal || Mezszam: 5 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2020 || Nemzetiseg: Ghana || Kor: 30 ev");
    tablazat.beszur("Declan Rice", "Csapat: Arsenal || Mezszam: 41 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Anglia || Kor: 25 ev");
    tablazat.beszur("Bukayo Saka", "Csapat: Arsenal || Mezszam: 7 || Pozicio: Tamado || Csatlakozasi ev: 2019 || Nemzetiseg: Anglia || Kor: 22 ev");
    tablazat.beszur("Emile Smith Rowe", "Csapat: Arsenal || Mezszam: 10 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2020 || Nemzetiseg: Anglia || Kor: 23 ev");
    tablazat.beszur("Fabio Vieira", "Csapat: Arsenal || Mezszam: 21 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2022 || Nemzetiseg: Portugal || Kor: 23 ev");
    tablazat.beszur("Gabriel Jesus", "Csapat: Arsenal || Mezszam: 9 || Pozicio: Csatar || Csatlakozasi ev: 2022 || Nemzetiseg: Brazilia || Kor: 27 ev");
    tablazat.beszur("Gabriel Martinelli", "Csapat: Arsenal || Mezszam: 11 || Pozicio: Tamado || Csatlakozasi ev: 2019 || Nemzetiseg: Brazilia || Kor: 22 ev");
    tablazat.beszur("Reiss Nelson", "Csapat: Arsenal || Mezszam: 24 || Pozicio: Tamado || Csatlakozasi ev: 2019 || Nemzetiseg: Anglia || Kor: 24 ev");
    tablazat.beszur("Eddie Nketiah", "Csapat: Arsenal || Mezszam: 14 || Pozicio: Csatar || Csatlakozasi ev: 2019 || Nemzetiseg: Anglia || Kor: 24 ev");
    tablazat.beszur("Leandro Trossard", "Csapat: Arsenal || Mezszam: 19 || Pozicio: Tamado || Csatlakozasi ev: 2023 || Nemzetiseg: Belgium || Kor: 29 ev");

    //Chelsea
    tablazat.beszur("Djordje Petrovic", "Csapat: Chelsea || Mezszam: 28 || Pozicio: Kapus || Csatlakozasi ev: 2023 || Nemzetiseg: Szerbia || Kor: 24 ev");
    tablazat.beszur("Robert Sanchez", "Csapat: Chelsea || Mezszam: 1 || Pozicio: Kapus || Csatlakozasi ev: 2023 || Nemzetiseg: Spanyol || Kor: 26 ev");
    tablazat.beszur("Benoit Badiashile", "Csapat: Chelsea || Mezszam: 5 || Pozicio: Kozep hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Francia || Kor: 23 ev");
    tablazat.beszur("Trevoh Chalobah", "Csapat: Chelsea || Mezszam: 14 || Pozicio: Kozep hatved || Csatlakozasi ev: 2021 || Nemzetiseg: Anglia || Kor: 24 ev");
    tablazat.beszur("Ben Chilwell", "Csapat: Chelsea || Mezszam: 21 || Pozicio: Bal hatved || Csatlakozasi ev: 2020 || Nemzetiseg: Anglia || Kor: 27 ev");
    tablazat.beszur("Levi Colwill", "Csapat: Chelsea || Mezszam: 26 || Pozicio: Kozep hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Anglia || Kor: 21 ev");
    tablazat.beszur("Marc Cucurella", "Csapat: Chelsea || Mezszam: 3 || Pozicio: Bal hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Spanyol || Kor: 25 ev");
    tablazat.beszur("Axel Disasi", "Csapat: Chelsea || Mezszam: 2 || Pozicio: Kozep hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Francia || Kor: 26 ev");
    tablazat.beszur("Malo Gusto", "Csapat: Chelsea || Mezszam: 27 || Pozicio: Jobb hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Francia || Kor: 20 ev");
    tablazat.beszur("Reece James", "Csapat: Chelsea || Mezszam: 24 || Pozicio: Jobb hatved || Csatlakozasi ev: 2019 || Nemzetiseg: Anglia || Kor: 24 ev");
    tablazat.beszur("Thiago Silva", "Csapat: Chelsea || Mezszam: 6 || Pozicio: Kozep hatved || Csatlakozasi ev: 2020 || Nemzetiseg: Brazil || Kor: 39 ev");
    tablazat.beszur("Moises Caicedo", "Csapat: Chelsea || Mezszam: 25 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Ecuador || Kor: 22 ev");
    tablazat.beszur("Cesare Casadei", "Csapat: Chelsea || Mezszam: 31 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2022 || Nemzetiseg: Olasz || Kor: 21 ev");
    tablazat.beszur("Carney Chukwuemeka", "Csapat: Chelsea || Mezszam: 17 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2022 || Nemzetiseg: Anglia || Kor: 20 ev");
    tablazat.beszur("Enzo Fernandez", "Csapat: Chelsea || Mezszam: 8 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Argentina || Kor: 23 ev");
    tablazat.beszur("Conor Gallagher", "Csapat: Chelsea || Mezszam: 23 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2022 || Nemzetiseg: Anglia || Kor: 24 ev");
    tablazat.beszur("Romeo Lavia", "Csapat: Chelsea || Mezszam: 45 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Belgium || Kor: 20 ev");
    tablazat.beszur("Christopher Nkunku", "Csapat: Chelsea || Mezszam: 18 || Pozicio: Tamado || Csatlakozasi ev: 2023 || Nemzetiseg: Francia || Kor: 26 ev");
    tablazat.beszur("Cole Palmer", "Csapat: Chelsea || Mezszam: 20 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Anglia || Kor: 21 ev");
    tablazat.beszur("Lesley Ugochukwu", "Csapat: Chelsea || Mezszam: 16 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Francia || Kor: 20 ev");
    tablazat.beszur("Deivid Washington", "Csapat: Chelsea || Mezszam: 36 || Pozicio: Csatar || Csatlakozasi ev: 2023 || Nemzetiseg: Brazil || Kor: 18 ev");
    tablazat.beszur("Nicolas Jackson", "Csapat: Chelsea || Mezszam: 15 || Pozicio: Csatar || Csatlakozasi ev: 2023 || Nemzetiseg: Senegal || Kor: 22 ev");
    tablazat.beszur("Noni Madueke", "Csapat: Chelsea || Mezszam: 11 || Pozicio: Tamado || Csatlakozasi ev: 2023 || Nemzetiseg: Anglia || Kor: 22 ev");
    tablazat.beszur("Mykhailo Mudryk", "Csapat: Chelsea || Mezszam: 10 || Pozicio: Tamado || Csatlakozasi ev: 2023 || Nemzetiseg: Ukrajna || Kor: 23 ev");
    tablazat.beszur("Raheem Sterling", "Csapat: Chelsea || Mezszam: 7 || Pozicio: Tamado || Csatlakozasi ev: 2022 || Nemzetiseg: Anglia || Kor: 29 ev");

    //tottenham
    tablazat.beszur("Guglielmo Vicario", "Csapat: Tottenham Hotspur || Mezszam: 13 || Pozicio: Kapus || Csatlakozasi ev: 2023 || Nemzetiseg: Olasz || Kor: 27 ev");
    tablazat.beszur("Ben Davies", "Csapat: Tottenham Hotspur || Mezszam: 33 || Pozicio: Bal hatved || Csatlakozasi ev: 2014 || Nemzetiseg: Wales || Kor: 31 ev");
    tablazat.beszur("Radu Dragusin", "Csapat: Tottenham Hotspur || Mezszam: 6 || Pozicio: Kozep hatved || Csatlakozasi ev: 2024 || Nemzetiseg: Roman || Kor: 22 ev");
    tablazat.beszur("Emerson Royal", "Csapat: Tottenham Hotspur || Mezszam: 12 || Pozicio: Jobb hatved || Csatlakozasi ev: 2021 || Nemzetiseg: Brazil || Kor: 25 ev");
    tablazat.beszur("Pedro Porro", "Csapat: Tottenham Hotspur || Mezszam: 23 || Pozicio: Jobb hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Spanyol || Kor: 24 ev");
    tablazat.beszur("Cristian Romero", "Csapat: Tottenham Hotspur || Mezszam: 17 || Pozicio: Kozep hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Argentina || Kor: 26 ev");
    tablazat.beszur("Destiny Udogie", "Csapat: Tottenham Hotspur || Mezszam: 38 || Pozicio: Bal hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Olasz || Kor: 21 ev");
    tablazat.beszur("Micky van de Ven", "Csapat: Tottenham Hotspur || Mezszam: 37 || Pozicio: Kozep hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Holland || Kor: 23 ev");
    tablazat.beszur("Rodrigo Bentancur", "Csapat: Tottenham Hotspur || Mezszam: 30 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2022 || Nemzetiseg: Uruguay || Kor: 26 ev");
    tablazat.beszur("Yves Bissouma", "Csapat: Tottenham Hotspur || Mezszam: 8 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2022 || Nemzetiseg: Mali || Kor: 27 ev");
    tablazat.beszur("Pierre-Emile Hojbjerg", "Csapat: Tottenham Hotspur || Mezszam: 5 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2020 || Nemzetiseg: Dania || Kor: 28 ev");
    tablazat.beszur("James Maddison", "Csapat: Tottenham Hotspur || Mezszam: 10 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Anglia || Kor: 27 ev");
    tablazat.beszur("Pape Matar Sarr", "Csapat: Tottenham Hotspur || Mezszam: 29 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2021 || Nemzetiseg: Senegal || Kor: 21 ev");
    tablazat.beszur("Oliver Skipp", "Csapat: Tottenham Hotspur || Mezszam: 4 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2018 || Nemzetiseg: Anglia || Kor: 23 ev");
    tablazat.beszur("Jamie Donley", "Csapat: Tottenham Hotspur || Mezszam: 63 || Pozicio: Tamado || Csatlakozasi ev: 2022 || Nemzetiseg: Anglia || Kor: 19 ev");
    tablazat.beszur("Bryan Gil", "Csapat: Tottenham Hotspur || Mezszam: 11 || Pozicio: Tamado || Csatlakozasi ev: 2021 || Nemzetiseg: Spanyol || Kor: 23 ev");
    tablazat.beszur("Brennan Johnson", "Csapat: Tottenham Hotspur || Mezszam: 22 || Pozicio: Tamado || Csatlakozasi ev: 2023 || Nemzetiseg: Wales || Kor: 22 ev");
    tablazat.beszur("Dejan Kulusevski", "Csapat: Tottenham Hotspur || Mezszam: 21 || Pozicio: Tamado || Csatlakozasi ev: 2023 || Nemzetiseg: Sved || Kor: 24 ev");
    tablazat.beszur("Richarlison", "Csapat: Tottenham Hotspur || Mezszam: 9 || Pozicio: Csatar || Csatlakozasi ev: 2022 || Nemzetiseg: Brazil || Kor: 26 ev");
    tablazat.beszur("Dane Scarlett", "Csapat: Tottenham Hotspur || Mezszam: 44 || Pozicio: Csatar || Csatlakozasi ev: 2021 || Nemzetiseg: Anglia || Kor: 20 ev");
    tablazat.beszur("Son Heung-Min", "Csapat: Tottenham Hotspur || Mezszam: 7 || Pozicio: Tamado || Csatlakozasi ev: 2015 || Nemzetiseg: Del Korea || Kor: 31 ev");
    tablazat.beszur("Timo Werner", "Csapat: Tottenham Hotspur || Mezszam: 16 || Pozicio: Csatar || Csatlakozasi ev: 2024 || Nemzetiseg: Nemet || Kor: 28 ev");

    //real madrid
    tablazat.beszur("Kepa Arrizabalaga", "Csapat: Real Madrid || Mezszam: 25 || Pozicio: Kapus || Csatlakozasi ev: 2023 || Nemzetiseg: Spanyol || Kor: 29 ev");
    tablazat.beszur("Andriy Lunin", "Csapat: Real Madrid || Mezszam: 13 || Pozicio: Kapus || Csatlakozasi ev: 2018 || Nemzetiseg: Ukrajna || Kor: 25 ev");
    tablazat.beszur("Thibaut Courtois", "Csapat: Real Madrid || Mezszam: 1 || Pozicio: Kapus || Csatlakozasi ev: 2018 || Nemzetiseg: Belgium || Kor: 31 ev");
    tablazat.beszur("David Alaba", "Csapat: Real Madrid || Mezszam: 4 || Pozicio: Kozep hatved || Csatlakozasi ev: 2021 || Nemzetiseg: Ausztria || Kor: 31 ev");
    tablazat.beszur("Dani Carvajal", "Csapat: Real Madrid || Mezszam: 2 || Pozicio: Jobb hatved || Csatlakozasi ev: 2013 || Nemzetiseg: Spanyol || Kor: 32 ev");
    tablazat.beszur("Nacho Fernandez", "Csapat: Real Madrid || Mezszam: 6 || Pozicio: Kozep hatved || Csatlakozasi ev: 2012 || Nemzetiseg: Spanyol || Kor: 34 ev");
    tablazat.beszur("Fran Garcia", "Csapat: Real Madrid || Mezszam: 20 || Pozicio: Bal hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Spanyol || Kor: 24 ev");
    tablazat.beszur("Ferland Mendy", "Csapat: Real Madrid || Mezszam: 23 || Pozicio: Bal hatved || Csatlakozasi ev: 2019 || Nemzetiseg: Francia || Kor: 28 ev");
    tablazat.beszur("Eder Militao", "Csapat: Real Madrid || Mezszam: 3 || Pozicio: Kozep hatved || Csatlakozasi ev: 2019 || Nemzetiseg: Brazilia || Kor: 26 ev");
    tablazat.beszur("Antonio Rudiger", "Csapat: Real Madrid || Mezszam: 22 || Pozicio: Kozep hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Nemet || Kor: 31 ev");
    tablazat.beszur("Lucas Vazquez", "Csapat: Real Madrid || Mezszam: 17 || Pozicio: Jobb hatved || Csatlakozasi ev: 2015 || Nemzetiseg: Spanyol || Kor: 32 ev");
    tablazat.beszur("Jude Bellingham", "Csapat: Real Madrid || Mezszam: 5 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Anglia || Kor: 20 ev");
    tablazat.beszur("Eduardo Camavinga", "Csapat: Real Madrid || Mezszam: 12 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2021 || Nemzetiseg: Francia || Kor: 21 ev");
    tablazat.beszur("Dani Ceballos", "Csapat: Real Madrid || Mezszam: 19 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2017 || Nemzetiseg: Spanyol || Kor: 27 ev");
    tablazat.beszur("Brahim Diaz", "Csapat: Real Madrid || Mezszam: 21 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2019 || Nemzetiseg: Marokko || Kor: 24 ev");
    tablazat.beszur("Arda Guler", "Csapat: Real Madrid || Mezszam: 24 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Torok || Kor: 19 ev");
    tablazat.beszur("Toni Kroos", "Csapat: Real Madrid || Mezszam: 8 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2014 || Nemzetiseg: Nemet || Kor: 34 ev");
    tablazat.beszur("Luka Modric", "Csapat: Real Madrid || Mezszam: 10 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2012 || Nemzetiseg: Horvat || Kor: 38 ev");
    tablazat.beszur("Aurelien Tchouameni", "Csapat: Real Madrid || Mezszam: 18 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2022 || Nemzetiseg: Francia || Kor: 24 ev");
    tablazat.beszur("Federico Valverde", "Csapat: Real Madrid || Mezszam: 15 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2018 || Nemzetiseg: Uruguay || Kor: 25 ev");
    tablazat.beszur("Joselu", "Csapat: Real Madrid || Mezszam: 14 || Pozicio: Csatar || Csatlakozasi ev: 2023 || Nemzetiseg: Spanyol || Kor: 34 ev");
    tablazat.beszur("Rodrygo", "Csapat: Real Madrid || Mezszam: 11 || Pozicio: Tamado || Csatlakozasi ev: 2019 || Nemzetiseg: Brazill || Kor: 23 ev");
    tablazat.beszur("Vinicius Junior", "Csapat: Real Madrid || Mezszam: 7 || Pozicio: Tamado || Csatlakozasi ev: 2018 || Nemzetiseg: Brazil || Kor: 23 ev");

    //barcelona
    tablazat.beszur("Inaki Pena", "Csapat: Barcelona || Mezszam: 13 || Pozicio: Kapus || Csatlakozasi ev: 2022 || Nemzetiseg: Spanyol || Kor: 25 ev");
    tablazat.beszur("Marc-Andre ter Stegen", "Csapat: Barcelona || Mezszam: 1 || Pozicio: Kapus || Csatlakozasi ev: 2014 || Nemzetiseg: Nemet || Kor: 32 ev");
    tablazat.beszur("Marcos Alonso", "Csapat: Barcelona || Mezszam: 17 || Pozicio: Bal hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Spanyol || Kor: 33 ev");
    tablazat.beszur("Ronald Araujo", "Csapat: Barcelona || Mezszam: 4 || Pozicio: Kozep hatved || Csatlakozasi ev: 2020 || Nemzetiseg: Uruguay || Kor: 25 ev");
    tablazat.beszur("Alejandro Balde", "Csapat: Barcelona || Mezszam: 3 || Pozicio: Bal hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Spanyol || Kor: 20 ev");
    tablazat.beszur("Joao Cancelo", "Csapat: Barcelona || Mezszam: 2 || Pozicio: Jobb hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Portugalia || Kor: 29 ev");
    tablazat.beszur("Andreas Christensen", "Csapat: Barcelona || Mezszam: 15 || Pozicio: Kozep hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Dania || Kor: 28 ev");
    tablazat.beszur("Pau Cubarsi", "Csapat: Barcelona || Mezszam: 33 || Pozicio: Kozep hatved || Csatlakozasi ev: 2024 || Nemzetiseg: Spanyol || Kor: 17 ev");
    tablazat.beszur("Jules Kounde", "Csapat: Barcelona || Mezszam: 23 || Pozicio: Kozep hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Francia || Kor: 25 ev");
    tablazat.beszur("Inigo Martinez", "Csapat: Barcelona || Mezszam: 5 || Pozicio: Kozep hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Spanyol || Kor: 32 ev");
    tablazat.beszur("Gavi", "Csapat: Barcelona || Mezszam: 6 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2021 || Nemzetiseg: Spanyol || Kor: 19 ev");
    tablazat.beszur("Ilkay Gundogan", "Csapat: Barcelona || Mezszam: 22 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Nemet || Kor: 33 ev");
    tablazat.beszur("Fermin Lopez", "Csapat: Barcelona || Mezszam: 16 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Spanyol || Kor: 20 ev");
    tablazat.beszur("Pedri", "Csapat: Barcelona || Mezszam: 8 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2019 || Nemzetiseg: Spanyol || Kor: 21 ev");
    tablazat.beszur("Sergi Roberto", "Csapat: Barcelona || Mezszam: 20 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2013 || Nemzetiseg: Spanyol || Kor: 32 ev");
    tablazat.beszur("Oriol Romeu", "Csapat: Barcelona || Mezszam: 18 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Spanyol || Kor: 32 ev");
    tablazat.beszur("Frenkie de Jong", "Csapat: Barcelona || Mezszam: 21 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2019 || Nemzetiseg: Holland || Kor: 26 ev");
    tablazat.beszur("Joao Felix", "Csapat: Barcelona || Mezszam: 14 || Pozicio: Tamado || Csatlakozasi ev: 2023 || Nemzetiseg: Portugalia || Kor: 24 ev");
    tablazat.beszur("Robert Lewandowski", "Csapat: Barcelona || Mezszam: 9 || Pozicio: Csatar || Csatlakozasi ev: 2022 || Nemzetiseg: Lengyel || Kor: 35 ev");
    tablazat.beszur("Raphinha", "Csapat: Barcelona || Mezszam: 11 || Pozicio: Tamado || Csatlakozasi ev: 2022 || Nemzetiseg: Brazil || Kor: 27 ev");
    tablazat.beszur("Ferran Torres", "Csapat: Barcelona || Mezszam: 7 || Pozicio: Tamado || Csatlakozasi ev: 2022 || Nemzetiseg: Spanyol || Kor: 24 ev");
    tablazat.beszur("Vitor Roque", "Csapat: Barcelona || Mezszam: 19 || Pozicio: Csatar || Csatlakozasi ev: 2024 || Nemzetiseg: Brazil || Kor: 19 ev");
    tablazat.beszur("Lamine Yamal", "Csapat: Barcelona || Mezszam: 27 || Pozicio: Tamado || Csatlakozasi ev: 2023 || Nemzetiseg: Spanyol || Kor: 16 ev");

    //atletico
    tablazat.beszur("Jan Oblak", "Csapat: Atletico Madrid || Mezszam: 13 || Pozicio: Kapus || Csatlakozasi ev: 2014 || Nemzetiseg: Szlovenia || Kor: 31 ev");
    tablazat.beszur("Cesar Azpilicueta", "Csapat: Atletico Madrid || Mezszam: 3 || Pozicio: Jobb hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Spanyol || Kor: 34 ev");
    tablazat.beszur("Gabriel Paulista", "Csapat: Atletico Madrid || Mezszam: 4 || Pozicio: Kozep hatved || Csatlakozasi ev: 2024 || Nemzetiseg: Brazil || Kor: 33 ev");
    tablazat.beszur("Jose Maria Gimenez", "Csapat: Atletico Madrid || Mezszam: 2 || Pozicio: Kozep hatved || Csatlakozasi ev: 2013 || Nemzetiseg: Uruguay || Kor: 29 ev");
    tablazat.beszur("Mario Hermoso", "Csapat: Atletico Madrid || Mezszam: 22 || Pozicio: Kozep hatved || Csatlakozasi ev: 2019 || Nemzetiseg: Spanyol || Kor: 28 ev");
    tablazat.beszur("Reinildo Mandava", "Csapat: Atletico Madrid || Mezszam: 23 || Pozicio: Bal hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Mozambik || Kor: 30 ev");
    tablazat.beszur("Nahuel Molina", "Csapat: Atletico Madrid || Mezszam: 16 || Pozicio: Jobb hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Argentina || Kor: 26 ev");
    tablazat.beszur("Stefan Savic", "Csapat: Atletico Madrid || Mezszam: 15 || Pozicio: Kozep hatved || Csatlakozasi ev: 2015 || Nemzetiseg: Montenegro || Kor: 33 ev");
    tablazat.beszur("Pablo Barrios", "Csapat: Atletico Madrid || Mezszam: 24 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Spanyol || Kor: 20 ev");
    tablazat.beszur("Angel Correa", "Csapat: Atletico Madrid || Mezszam: 10 || Pozicio: Tamado || Csatlakozasi ev: 2015 || Nemzetiseg: Argentina || Kor: 29 ev");
    tablazat.beszur("Koke", "Csapat: Atletico Madrid || Mezszam: 6 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2011 || Nemzetiseg: Spanyol || Kor: 32 ev");
    tablazat.beszur("Samuel Lino", "Csapat: Atletico Madrid || Mezszam: 12 || Pozicio: Tamado || Csatlakozasi ev: 2022 || Nemzetiseg: Brazil || Kor: 24 ev");
    tablazat.beszur("Marcos Llorente", "Csapat: Atletico Madrid || Mezszam: 14 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2019 || Nemzetiseg: Spanyol || Kor: 29 ev");
    tablazat.beszur("Saul Niguez", "Csapat: Atletico Madrid || Mezszam: 8 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2013 || Nemzetiseg: Spanyol || Kor: 29 ev");
    tablazat.beszur("Arthur Vermeeren", "Csapat: Atletico Madrid || Mezszam: 18 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2024 || Nemzetiseg: Belgium || Kor: 19 ev");
    tablazat.beszur("Axel Witsel", "Csapat: Atletico Madrid || Mezszam: 20 || Pozicio: Kozep hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Belgium || Kor: 35 ev");
    tablazat.beszur("Rodrigo de Paul", "Csapat: Atletico Madrid || Mezszam: 5 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2021 || Nemzetiseg: Argentina || Kor: 29 ev");
    tablazat.beszur("Memphis Depay", "Csapat: Atletico Madrid || Mezszam: 9 || Pozicio: Csatar || Csatlakozasi ev: 2023 || Nemzetiseg: Holland || Kor: 30 ev");
    tablazat.beszur("Antoine Griezmann", "Csapat: Atletico Madrid || Mezszam: 7 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Francia || Kor: 33 ev");
    tablazat.beszur("Alvaro Morata", "Csapat: Atletico Madrid || Mezszam: 19 || Pozicio: Csatar || Csatlakozasi ev: 2020 || Nemzetiseg: Spanyol || Kor: 31 ev");
    tablazat.beszur("Rodrigo Riquelme", "Csapat: Atletico Madrid || Mezszam: 17 || Pozicio: Tamado || Csatlakozasi ev: 2020 || Nemzetiseg: Spanyol || Kor: 24 ev");

    //Bayern
    tablazat.beszur("Manuel Neuer", "Csapat: Bayern Munchen || Mezszam: 1 || Pozicio: Kapus || Csatlakozasi ev: 2011 || Nemzetiseg: Nemet || Kor: 38 ev");
    tablazat.beszur("Sven Ulreich", "Csapat: Bayern Munchen || Mezszam: 26 || Pozicio: Kapus || Csatlakozasi ev: 2021 || Nemzetiseg: Nemet || Kor: 35 ev");
    tablazat.beszur("Sacha Boey", "Csapat: Bayern Munchen || Mezszam: 23 || Pozicio: Jobb hatved || Csatlakozasi ev: 2024 || Nemzetiseg: Francia || Kor: 23 ev");
    tablazat.beszur("Alphonso Davies", "Csapat: Bayern Munchen || Mezszam: 19 || Pozicio: Bal hatved || Csatlakozasi ev: 2019 || Nemzetiseg: Kanada || Kor: 23 ev");
    tablazat.beszur("Eric Dier", "Csapat: Bayern Munchen || Mezszam: 15 || Pozicio: Kozep hatved || Csatlakozasi ev: 2024 || Nemzetiseg: Anglia || Kor: 30 ev");
    tablazat.beszur("Raphael Guerreiro", "Csapat: Bayern Munchen || Mezszam: 22 || Pozicio: Bal hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Portugalia || Kor: 30 ev");
    tablazat.beszur("Kim Min-Jae", "Csapat: Bayern Munchen || Mezszam: 3 || Pozicio: Kozep hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Del Korea || Kor: 27 ev");
    tablazat.beszur("Noussair Mazraoui", "Csapat: Bayern Munchen || Mezszam: 40 || Pozicio: Jobb hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Marokko || Kor: 26 ev");
    tablazat.beszur("Bouna Sarr", "Csapat: Bayern Munchen || Mezszam: 20 || Pozicio: Jobb hatved || Csatlakozasi ev: 2020 || Nemzetiseg: Senegal || Kor: 32 ev");
    tablazat.beszur("Dayot Upamecano", "Csapat: Bayern Munchen || Mezszam: 2 || Pozicio: Kozep hatved || Csatlakozasi ev: 2021 || Nemzetiseg: Francia || Kor: 25 ev");
    tablazat.beszur("Matthijs de Ligt", "Csapat: Bayern Munchen || Mezszam: 4 || Pozicio: Kozep hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Holland || Kor: 24 ev");
    tablazat.beszur("Leon Goretzka", "Csapat: Bayern Munchen || Mezszam: 8 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2018 || Nemzetiseg: Nemet || Kor: 29 ev");
    tablazat.beszur("Joshua Kimmich", "Csapat: Bayern Munchen || Mezszam: 6 || Pozicio: Jobb hatved / Kozeppalyas || Csatlakozasi ev: 2015 || Nemzetiseg: Nemet || Kor: 29 ev");
    tablazat.beszur("Konrad Laimer", "Csapat: Bayern Munchen || Mezszam: 27 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Ausztria || Kor: 26 ev");
    tablazat.beszur("Jamal Musiala", "Csapat: Bayern Munchen || Mezszam: 42 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2020 || Nemzetiseg: Nemet || Kor: 21 ev");
    tablazat.beszur("Aleksandar Pavlovic", "Csapat: Bayern Munchen || Mezszam: 45 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Nemet || Kor: 20 ev");
    tablazat.beszur("Eric Maxim Choupo-Moting", "Csapat: Bayern Munchen || Mezszam: 13 || Pozicio: Csatar || Csatlakozasi ev: 2020 || Nemzetiseg: Cameroon || Kor: 35 ev");
    tablazat.beszur("Kingsley Coman", "Csapat: Bayern Munchen || Mezszam: 11 || Pozicio: Tamado || Csatlakozasi ev: 2017 || Nemzetiseg: Francia || Kor: 27 ev");
    tablazat.beszur("Serge Gnabry", "Csapat: Bayern Munchen || Mezszam: 7 || Pozicio: Tamado || Csatlakozasi ev: 2017 || Nemzetiseg: Nemet || Kor: 28 ev");
    tablazat.beszur("Harry Kane", "Csapat: Bayern Munchen || Mezszam: 9 || Pozicio: Csatar || Csatlakozasi ev: 2023 || Nemzetiseg: Anglia || Kor: 30 ev");
    tablazat.beszur("Thomas Muller", "Csapat: Bayern Munchen || Mezszam: 25 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2009 || Nemzetiseg: Nemet || Kor: 34 ev");
    tablazat.beszur("Leroy Sane", "Csapat: Bayern Munchen || Mezszam: 10 || Pozicio: Tamado || Csatlakozasi ev: 2020 || Nemzetiseg: Nemet || Kor: 28 ev");
    tablazat.beszur("Mathys Tel", "Csapat: Bayern Munchen || Mezszam: 39 || Pozicio: Tamado || Csatlakozasi ev: 2022 || Nemzetiseg: Francia || Kor: 19 ev");
    tablazat.beszur("Bryan Zaragoza", "Csapat: Bayern Munchen || Mezszam: 17 || Pozicio: Tamado || Csatlakozasi ev: 2024 || Nemzetiseg: Spanyol || Kor: 22 ev");

    //Bayer  leverkuses
    tablazat.beszur("Jeremie Frimpong", "Csapat: Bayer Leverkusen || Mezszam: 30 || Pozicio: Jobb hatved || Csatlakozasi ev: 2021 || Nemzetiseg: Holland || Kor: 23 ev");
    tablazat.beszur("Alejandro Grimaldo", "Csapat: Bayer Leverkusen || Mezszam: 20 || Pozicio: Bal hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Spanyol || Kor: 28 ev");
    tablazat.beszur("Josip Stanisic", "Csapat: Bayer Leverkusen || Mezszam: 2 || Pozicio: Kozep hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Horvat || Kor: 24 ev");
    tablazat.beszur("Jonathan Tah", "Csapat: Bayer Leverkusen || Mezszam: 4 || Pozicio: Kozep hatved || Csatlakozasi ev: 2015 || Nemzetiseg: Nemet || Kor: 28 ev");
    tablazat.beszur("Edmond Tapsoba", "Csapat: Bayer Leverkusen || Mezszam: 12 || Pozicio: Kozep hatved || Csatlakozasi ev: 2020 || Nemzetiseg: Burkina Faso || Kor: 25 ev");
    tablazat.beszur("Nathan Tella", "Csapat: Bayer Leverkusen || Mezszam: 19 || Pozicio: Tamado || Csatlakozasi ev: 2023 || Nemzetiseg: Nigeria || Kor: 24 ev");
    tablazat.beszur("Florian Wirtz", "Csapat: Bayer Leverkusen || Mezszam: 10 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2020 || Nemzetiseg: Nemet || Kor: 21 ev");
    tablazat.beszur("Granit Xhaka", "Csapat: Bayer Leverkusen || Mezszam: 34 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Svajc || Kor: 31 ev");
    tablazat.beszur("Victor Boniface", "Csapat: Bayer Leverkusen || Mezszam: 22 || Pozicio: Csatar || Csatlakozasi ev: 2023 || Nemzetiseg: Nigeria || Kor: 23 ev");
    tablazat.beszur("Jonas Hofmann", "Csapat: Bayer Leverkusen || Mezszam: 7 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Nemet || Kor: 31 ev");
    tablazat.beszur("Borja Iglesias", "Csapat: Bayer Leverkusen || Mezszam: 9 || Pozicio: Csatar || Csatlakozasi ev: 2024 || Nemzetiseg: Spanyol || Kor: 31 ev");
    tablazat.beszur("Patrik Schick", "Csapat: Bayer Leverkusen || Mezszam: 14 || Pozicio: Csatar || Csatlakozasi ev: 2020 || Nemzetiseg: Cseh || Kor: 28 ev");

    //Dortmund
    tablazat.beszur("Gregor Kobel", "Csapat: Borussia Dortmund || Mezszam: 1 || Pozicio: Kapus || Csatlakozasi ev: 2021 || Nemzetiseg: Svajc || Kor: 26 ev");
    tablazat.beszur("Alexander Meyer", "Csapat: Borussia Dortmund || Mezszam: 33 || Pozicio: Kapus || Csatlakozasi ev: 2022 || Nemzetiseg: Nemet || Kor: 33 ev");
    tablazat.beszur("Ramy Bensebaini", "Csapat: Borussia Dortmund || Mezszam: 5 || Pozicio: Bal hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Algeria || Kor: 29 ev");
    tablazat.beszur("Mats Hummels", "Csapat: Borussia Dortmund || Mezszam: 15 || Pozicio: Kozep hatved || Csatlakozasi ev: 2019 || Nemzetiseg: Nemet || Kor: 35 ev");
    tablazat.beszur("Ian Maatsen", "Csapat: Borussia Dortmund || Mezszam: 22 || Pozicio: Bal hatved || Csatlakozasi ev: 2024 || Nemzetiseg: Holland || Kor: 22 ev");
    tablazat.beszur("Mateu Morey", "Csapat: Borussia Dortmund || Mezszam: 2 || Pozicio: Jobb hatved || Csatlakozasi ev: 2019 || Nemzetiseg: Spanyol || Kor: 24 ev");
    tablazat.beszur("Julian Ryerson", "Csapat: Borussia Dortmund || Mezszam: 26 || Pozicio: Jobb hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Norveg || Kor: 26 ev");
    tablazat.beszur("Nico Schlotterbeck", "Csapat: Borussia Dortmund || Mezszam: 4 || Pozicio: Kozep hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Nemet || Kor: 24 ev");
    tablazat.beszur("Niklas Sule", "Csapat: Borussia Dortmund || Mezszam: 25 || Pozicio: Kozep hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Nemet || Kor: 28 ev");
    tablazat.beszur("Julian Brandt", "Csapat: Borussia Dortmund || Mezszam: 19 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2019 || Nemzetiseg: Nemet || Kor: 28 ev");
    tablazat.beszur("Emre Can", "Csapat: Borussia Dortmund || Mezszam: 23 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2020 || Nemzetiseg: Nemet || Kor: 30 ev");
    tablazat.beszur("Felix Nmecha", "Csapat: Borussia Dortmund || Mezszam: 8 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Nemet || Kor: 23 ev");
    tablazat.beszur("Salih Ozcan", "Csapat: Borussia Dortmund || Mezszam: 6 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2022 || Nemzetiseg: Torok || Kor: 26 ev");
    tablazat.beszur("Ole Pohlmann", "Csapat: Borussia Dortmund || Mezszam: 30 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Nemet || Kor: 23 ev");
    tablazat.beszur("Marco Reus", "Csapat: Borussia Dortmund || Mezszam: 11 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2012 || Nemzetiseg: Nemet || Kor: 34 ev");
    tablazat.beszur("Marcel Sabitzer", "Csapat: Borussia Dortmund || Mezszam: 20 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Ausztria || Kor: 30 ev");
    tablazat.beszur("Marius Wolf", "Csapat: Borussia Dortmund || Mezszam: 17 || Pozicio: Jobb hatved || Csatlakozasi ev: 2018 || Nemzetiseg: Nemet || Kor: 28 ev");
    tablazat.beszur("Karim Adeyemi", "Csapat: Borussia Dortmund || Mezszam: 27 || Pozicio: Tamado || Csatlakozasi ev: 2022 || Nemzetiseg: Nemet || Kor: 22 ev");
    tablazat.beszur("Jamie Bynoe-Gittens", "Csapat: Borussia Dortmund || Mezszam: 43 || Pozicio: Tamado || Csatlakozasi ev: 2022 || Nemzetiseg: Anglia || Kor: 19 ev");
    tablazat.beszur("Julien Duranville", "Csapat: Borussia Dortmund || Mezszam: 16 || Pozicio: Tamado || Csatlakozasi ev: 2023 || Nemzetiseg: Belgium || Kor: 17 ev");
    tablazat.beszur("Niclas Fullkrug", "Csapat: Borussia Dortmund || Mezszam: 14 || Pozicio: Csatar || Csatlakozasi ev: 2023 || Nemzetiseg: Nemet || Kor: 31 ev");
    tablazat.beszur("Sebastian Haller", "Csapat: Borussia Dortmund || Mezszam: 9 || Pozicio: Csatar || Csatlakozasi ev: 2022 || Nemzetiseg: Elefantcsontpart || Kor: 29 ev");
    tablazat.beszur("Donyell Malen", "Csapat: Borussia Dortmund || Mezszam: 21 || Pozicio: Tamado || Csatlakozasi ev: 2021 || Nemzetiseg: Holland || Kor: 25 ev");
    tablazat.beszur("Jadon Sancho", "Csapat: Borussia Dortmund || Mezszam: 10 || Pozicio: Tamado || Csatlakozasi ev: 2024 || Nemzetiseg: Anglia || Kor: 24 ev");
    tablazat.beszur("Youssoufa Moukoko", "Csapat: Borussia Dortmund || Mezszam: 18 || Pozicio: Csatar || Csatlakozasi ev: 2020 || Nemzetiseg: Nemet || Kor: 19 ev");

    //PSG
    tablazat.beszur("Gianluigi Donnarumma", "Csapat: Paris Saint-Germain || Mezszam: 99 || Pozicio: Kapus || Csatlakozasi ev: 2021 || Nemzetiseg: Olasz || Kor: 25 ev");
    tablazat.beszur("Keylor Navas", "Csapat: Paris Saint-Germain || Mezszam: 1 || Pozicio: Kapus || Csatlakozasi ev: 2019 || Nemzetiseg: Costa Rica || Kor: 37 ev");
    tablazat.beszur("Arnau Tenas", "Csapat: Paris Saint-Germain || Mezszam: 80 || Pozicio: Kapus || Csatlakozasi ev: 2023 || Nemzetiseg: Spanyol || Kor: 22 ev");
    tablazat.beszur("Achraf Hakimi", "Csapat: Paris Saint-Germain || Mezszam: 2 || Pozicio: Jobb hatved || Csatlakozasi ev: 2021 || Nemzetiseg: Marokko || Kor: 25 ev");
    tablazat.beszur("Lucas Hernandez", "Csapat: Paris Saint-Germain || Mezszam: 21 || Pozicio: Kozep hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Francia || Kor: 28 ev");
    tablazat.beszur("Layvin Kurzawa", "Csapat: Paris Saint-Germain || Mezszam: 97 || Pozicio: Bal hatved || Csatlakozasi ev: 2015 || Nemzetiseg: Francia || Kor: 31 ev");
    tablazat.beszur("Marquinhos", "Csapat: Paris Saint-Germain || Mezszam: 5 || Pozicio: Kozep hatved || Csatlakozasi ev: 2013 || Nemzetiseg: Brazil || Kor: 29 ev");
    tablazat.beszur("Nuno Mendes", "Csapat: Paris Saint-Germain || Mezszam: 25 || Pozicio: Bal hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Portugalia || Kor: 21 ev");
    tablazat.beszur("Nordi Mukiele", "Csapat: Paris Saint-Germain || Mezszam: 26 || Pozicio: Jobb hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Francia || Kor: 26 ev");
    tablazat.beszur("Milan Skriniar", "Csapat: Paris Saint-Germain || Mezszam: 37 || Pozicio: Kozep hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Szlovakia || Kor: 29 ev");
    tablazat.beszur("Kang-In Lee", "Csapat: Paris Saint-Germain || Mezszam: 19 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Del Korea || Kor: 23 ev");
    tablazat.beszur("Danilo Pereira", "Csapat: Paris Saint-Germain || Mezszam: 15 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2021 || Nemzetiseg: Portugalia || Kor: 32 ev");
    tablazat.beszur("Fabian Ruiz", "Csapat: Paris Saint-Germain || Mezszam: 8 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2022 || Nemzetiseg: Spanyol || Kor: 28 ev");
    tablazat.beszur("Carlos Soler", "Csapat: Paris Saint-Germain || Mezszam: 28 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2022 || Nemzetiseg: Spanyol || Kor: 27 ev");
    tablazat.beszur("Manuel Ugarte", "Csapat: Paris Saint-Germain || Mezszam: 4 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Uruguay || Kor: 23 ev");
    tablazat.beszur("Vitinha", "Csapat: Paris Saint-Germain || Mezszam: 17 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2022 || Nemzetiseg: Portugalia || Kor: 24 ev");
    tablazat.beszur("Warren Zaire-Emery", "Csapat: Paris Saint-Germain || Mezszam: 33 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2022 || Nemzetiseg: Francia || Kor: 18 ev");
    tablazat.beszur("Marco Asensio", "Csapat: Paris Saint-Germain || Mezszam: 11 || Pozicio: Tamado || Csatlakozasi ev: 2023 || Nemzetiseg: Spanyol || Kor: 28 ev");
    tablazat.beszur("Bradley Barcola", "Csapat: Paris Saint-Germain || Mezszam: 29 || Pozicio: Tamado || Csatlakozasi ev: 2023 || Nemzetiseg: Francia || Kor: 21 ev");
    tablazat.beszur("Ousmane Dembele", "Csapat: Paris Saint-Germain || Mezszam: 10 || Pozicio: Tamado || Csatlakozasi ev: 2023 || Nemzetiseg: Francia || Kor: 26 ev");
    tablazat.beszur("Randal Kolo Muani", "Csapat: Paris Saint-Germain || Mezszam: 23 || Pozicio: Csatar || Csatlakozasi ev: 2023 || Nemzetiseg: Francia || Kor: 25 ev");
    tablazat.beszur("Kylian Mbappe", "Csapat: Paris Saint-Germain || Mezszam: 7 || Pozicio: Tamado || Csatlakozasi ev: 2018 || Nemzetiseg: Francia || Kor: 25 ev");
    tablazat.beszur("Goncalo Ramos", "Csapat: Paris Saint-Germain || Mezszam: 9 || Pozicio: Csatar || Csatlakozasi ev: 2024 || Nemzetiseg: Portugalia || Kor: 22 ev");

    //Inter
    tablazat.beszur("Emil Audero", "Csapat: Inter Milan || Mezszam: 77 || Pozicio: Kapus || Csatlakozasi ev: 2023 || Nemzetiseg: Olasz || Kor: 27 ev");
    tablazat.beszur("Yann Sommer", "Csapat: Inter Milan || Mezszam: 1 || Pozicio: Kapus || Csatlakozasi ev: 2023 || Nemzetiseg: Svajc || Kor: 35 ev");
    tablazat.beszur("Francesco Acerbi", "Csapat: Inter Milan || Mezszam: 15 || Pozicio: Kozep hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Olasz || Kor: 36 ev");
    tablazat.beszur("Alessandro Bastoni", "Csapat: Inter Milan || Mezszam: 95 || Pozicio: Kozep hatved || Csatlakozasi ev: 2017 || Nemzetiseg: Olasz || Kor: 25 ev");
    tablazat.beszur("Yann Bisseck", "Csapat: Inter Milan || Mezszam: 31 || Pozicio: Kozep hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Nemet || Kor: 23 ev");
    tablazat.beszur("Juan Cuadrado", "Csapat: Inter Milan || Mezszam: 7 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Columbia || Kor: 35 ev");
    tablazat.beszur("Matteo Darmian", "Csapat: Inter Milan || Mezszam: 36 || Pozicio: Jobb hatved || Csatlakozasi ev: 2021 || Nemzetiseg: Olasz || Kor: 34 ev");
    tablazat.beszur("Federico Dimarco", "Csapat: Inter Milan || Mezszam: 32 || Pozicio: Bal hatved || Csatlakozasi ev: 2018 || Nemzetiseg: Olasz || Kor: 26 ev");
    tablazat.beszur("Denzel Dumfries", "Csapat: Inter Milan || Mezszam: 2 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2021 || Nemzetiseg: Holland || Kor: 28 ev");
    tablazat.beszur("Benjamin Pavard", "Csapat: Inter Milan || Mezszam: 28 || Pozicio: Kozep hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Francia || Kor: 28 ev");
    tablazat.beszur("Stefan de Vrij", "Csapat: Inter Milan || Mezszam: 6 || Pozicio: Kozep hatved || Csatlakozasi ev: 2018 || Nemzetiseg: Holland || Kor: 32 ev");
    tablazat.beszur("Kristjan Asllani", "Csapat: Inter Milan || Mezszam: 21 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Albania || Kor: 22 ev");
    tablazat.beszur("Nicolo Barella", "Csapat: Inter Milan || Mezszam: 23 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2020 || Nemzetiseg: Olasz || Kor: 27 ev");
    tablazat.beszur("Hakan Calhanoglu", "Csapat: Inter Milan || Mezszam: 20 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2021 || Nemzetiseg: Torok || Kor: 30 ev");
    tablazat.beszur("Davide Frattesi", "Csapat: Inter Milan || Mezszam: 16 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Olasz || Kor: 24 ev");
    tablazat.beszur("Davy Klaassen", "Csapat: Inter Milan || Mezszam: 14 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Holland || Kor: 31 ev");
    tablazat.beszur("Henrikh Mkhitaryan", "Csapat: Inter Milan || Mezszam: 22 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2022 || Nemzetiseg: Ormeny || Kor: 35 ev");
    tablazat.beszur("Stefano Sensi", "Csapat: Inter Milan || Mezszam: 5 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2020 || Nemzetiseg: Olasz || Kor: 28 ev");
    tablazat.beszur("Marko Arnautovic", "Csapat: Inter Milan || Mezszam: 8 || Pozicio: Csatar || Csatlakozasi ev: 2023 || Nemzetiseg: Ausztria || Kor: 35 ev");
    tablazat.beszur("Tajon Buchanan", "Csapat: Inter Milan || Mezszam: 17 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2024 || Nemzetiseg: Kanada || Kor: 25 ev");
    tablazat.beszur("Lautaro Martinez", "Csapat: Inter Milan || Mezszam: 10 || Pozicio: Csatar || Csatlakozasi ev: 2018 || Nemzetiseg: Argentina || Kor: 26 ev");
    tablazat.beszur("Alexis Sanchez", "Csapat: Inter Milan || Mezszam: 70 || Pozicio: Tamado || Csatlakozasi ev: 2023 || Nemzetiseg: Chile || Kor: 35 ev");
    tablazat.beszur("Marcus Thuram", "Csapat: Inter Milan || Mezszam: 9 || Pozicio: Csatar || Csatlakozasi ev: 2023 || Nemzetiseg: Francia || Kor: 26 ev");

    //ac milan
    tablazat.beszur("Mike Maignan", "Csapat: AC Milan || Mezszam: 16 || Pozicio: Kapus || Csatlakozasi ev: 2021 || Nemzetiseg: Francia || Kor: 28 ev");
    tablazat.beszur("Antonio Mirante", "Csapat: AC Milan || Mezszam: 83 || Pozicio: Kapus || Csatlakozasi ev: 2021 || Nemzetiseg: Olasz || Kor: 40 ev");
    tablazat.beszur("Marco Sportiello", "Csapat: AC Milan || Mezszam: 57 || Pozicio: Kapus || Csatlakozasi ev: 2023 || Nemzetiseg: Olasz || Kor: 31 ev");
    tablazat.beszur("Davide Calabria", "Csapat: AC Milan || Mezszam: 2 || Pozicio: Jobb hatved || Csatlakozasi ev: 2015 || Nemzetiseg: Olasz || Kor: 27 e");
    tablazat.beszur("Alessandro Florenzi", "Csapat: AC Milan || Mezszam: 42 || Pozicio: Jobb hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Olasz || Kor: 33 ev");
    tablazat.beszur("Theo Hernandez", "Csapat: AC Milan || Mezszam: 19 || Pozicio: Bal hatved || Csatlakozasi ev: 2019 || Nemzetiseg: Francia || Kor: 26 ev");
    tablazat.beszur("Pierre Kalulu", "Csapat: AC Milan || Mezszam: 20 || Pozicio: Kozep hatved || Csatlakozasi ev: 2020 || Nemzetiseg: Francia || Kor: 23 ev");
    tablazat.beszur("Simon Kjaer", "Csapat: AC Milan || Mezszam: 24 || Pozicio: Kozep hatved || Csatlakozasi ev: 2020 || Nemzetiseg: Dania || Kor: 35 ev");
    tablazat.beszur("Malick Thiaw", "Csapat: AC Milan || Mezszam: 28 || Pozicio: Kozep hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Nemet || Kor: 22 ev");
    tablazat.beszur("Fikayo Tomori", "Csapat: AC Milan || Mezszam: 23 || Pozicio: Kozep hatved || Csatlakozasi ev: 2021 || Nemzetiseg: Anglia || Kor: 26 ev");
    tablazat.beszur("Yacine Adli", "Csapat: AC Milan || Mezszam: 7 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2021 || Nemzetiseg: Francia || Kor: 23 ev");
    tablazat.beszur("Ismael Bennacer", "Csapat: AC Milan || Mezszam: 4 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2019 || Nemzetiseg: Algeria || Kor: 26 ev");
    tablazat.beszur("Ruben Loftus-Cheek", "Csapat: AC Milan || Mezszam: 8 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Anglia || Kor: 28 ev");
    tablazat.beszur("Yunus Musah", "Csapat: AC Milan || Mezszam: 80 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: USA || Kor: 21 ev");
    tablazat.beszur("Tommaso Pobega", "Csapat: AC Milan || Mezszam: 32 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2018 || Nemzetiseg: Olasz || Kor: 24 ev");
    tablazat.beszur("Tijjani Reijnders", "Csapat: AC Milan || Mezszam: 14 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2013 || Nemzetiseg: Holland || Kor: 25 ev");
    tablazat.beszur("Filippo Terracciano", "Csapat: AC Milan || Mezszam: 38 || Pozicio: Jobb hatved || Csatlakozasi ev: 2024 || Nemzetiseg: Olasz || Kor: 21 ev");
    tablazat.beszur("Samuel Chukwueze", "Csapat: AC Milan || Mezszam: 21 || Pozicio: Tamado || Csatlakozasi ev: 2013 || Nemzetiseg: Nigeria || Kor: 24 ev");
    tablazat.beszur("Luka Jovic", "Csapat: AC Milan || Mezszam: 15 || Pozicio: Csatar || Csatlakozasi ev: 2023 || Nemzetiseg: Szerbia || Kor: 26 ev");
    tablazat.beszur("Rafael Leao", "Csapat: AC Milan || Mezszam: 10 || Pozicio: Tamado || Csatlakozasi ev: 2019 || Nemzetiseg: Portugalia || Kor: 24 ev");
    tablazat.beszur("Noah Okafor", "Csapat: AC Milan || Mezszam: 17 || Pozicio: Csatar || Csatlakozasi ev: 2023 || Nemzetiseg: Svajc || Kor: 23 ev");
    tablazat.beszur("Christian Pulisic", "Csapat: AC Milan || Mezszam: 11 || Pozicio: Tamado || Csatlakozasi ev: 2023 || Nemzetiseg: USA || Kor: 25 ev");
    tablazat.beszur("Olivier Giroud", "Csapat: AC Milan || Mezszam: 9 || Pozicio: Csatar || Csatlakozasi ev: 2021 || Nemzetiseg: Francia || Kor: 37 ev");

    //Juventus
    tablazat.beszur("Perin Mattia", "Csapat: Juventus || Mezszam: 36 || Pozicio: Kapus || Csatlakozasi ev: 2018 || Nemzetiseg: Olasz || Kor: 31 ev");
    tablazat.beszur("Szczesny Wojciech", "Csapat: Juventus || Mezszam: 1 || Pozicio: Kapus || Csatlakozasi ev: 2017 || Nemzetiseg: Lengyel || Kor: 34 ev");
    tablazat.beszur("Alex Sandro", "Csapat: Juventus || Mezszam: 12 || Pozicio: Bal hatved || Csatlakozasi ev: 2015 || Nemzetiseg: Brazil || Kor: 33 ev");
    tablazat.beszur("Bremer", "Csapat: Juventus || Mezszam: 3 || Pozicio: Kozep hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Brazil || Kor: 27 ev");
    tablazat.beszur("Danilo", "Csapat: Juventus || Mezszam: 6 || Pozicio: Kozep hatved || Csatlakozasi ev: 2019 || Nemzetiseg: Brazil || Kor: 32 ev");
    tablazat.beszur("Mattia De Sciglio", "Csapat: Juventus || Mezszam: 2 || Pozicio: Jobb hatved || Csatlakozasi ev: 2017 || Nemzetiseg: Olasz || Kor: 31 ev");
    tablazat.beszur("Federico Gatti", "Csapat: Juventus || Mezszam: 4 || Pozicio: Kozep hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Olasz || Kor: 25 ev");
    tablazat.beszur("Daniele Rugani", "Csapat: Juventus || Mezszam: 24 || Pozicio: Kozep hatved || Csatlakozasi ev: 2015 || Nemzetiseg: Olasz || Kor: 29 ev");
    tablazat.beszur("Carlos Alcaraz", "Csapat: Juventus || Mezszam: 26 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2024 || Nemzetiseg: Argentina || Kor: 21 ev");
    tablazat.beszur("Andrea Cambiaso", "Csapat: Juventus || Mezszam: 27 || Pozicio: Bal hatved || Csatlakozasi ev: 2022 || Nemzetiseg: Olasz || Kor: 24 ev");
    tablazat.beszur("Filip Kostic", "Csapat: Juventus || Mezszam: 11 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2022 || Nemzetiseg: Szerbia || Kor: 31 ev");
    tablazat.beszur("Manuel Locatelli", "Csapat: Juventus || Mezszam: 5 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Olasz || Kor: 26 ev");
    tablazat.beszur("Weston McKennie", "Csapat: Juventus || Mezszam: 16 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2021 || Nemzetiseg: USA || Kor: 25 ev");
    tablazat.beszur("Fabio Miretti", "Csapat: Juventus || Mezszam: 20 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2022 || Nemzetiseg: Olasz || Kor: 20 ev");
    tablazat.beszur("Hans Nicolussi Caviglia", "Csapat: Juventus || Mezszam: 41 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: Olasz || Kor: 23 ev");
    tablazat.beszur("Adrien Rabiot", "Csapat: Juventus || Mezszam: 25 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2019 || Nemzetiseg: Francia || Kor: 29 ev");
    tablazat.beszur("Timothy Weah", "Csapat: Juventus || Mezszam: 22 || Pozicio: Kozeppalyas || Csatlakozasi ev: 2023 || Nemzetiseg: USA || Kor: 24 ev");
    tablazat.beszur("Federico Chiesa", "Csapat: Juventus || Mezszam: 7 || Pozicio: Tamado || Csatlakozasi ev: 2022 || Nemzetiseg: Olasz || Kor: 26 ev");
    tablazat.beszur("Samuel Iling Junior", "Csapat: Juventus || Mezszam: 17 || Pozicio: Tamado || Csatlakozasi ev: 2022 || Nemzetiseg: Anglia || Kor: 20 ev");
    tablazat.beszur("Moise Kean", "Csapat: Juventus || Mezszam: 18 || Pozicio: Csatar || Csatlakozasi ev: 2023 || Nemzetiseg: Olasz || Kor: 24 ev");
    tablazat.beszur("Arkadiusz Milik", "Csapat: Juventus || Mezszam: 14 || Pozicio: Csatar || Csatlakozasi ev: 2023 || Nemzetiseg: Lengyel || Kor: 30 ev");
    tablazat.beszur("Dusan Vlahovic", "Csapat: Juventus || Mezszam: 9 || Pozicio: Csatar || Csatlakozasi ev: 2022 || Nemzetiseg: Szerbia || Kor: 24 ev");
    tablazat.beszur("Yildiz Kenan", "Csapat: Juventus || Mezszam: 15 || Pozicio: Csatar || Csatlakozasi ev: 2023 || Nemzetiseg: Torok || Kor: 18 ev");

    //mas hires jatekosok
    tablazat.beszur("Romelu Lukaku", "Csapat: AS Roma || Mezszam: 90 || Pozicio: Csatar || Csatlakozasi ev: 2023 || Nemzetiseg: Belgium || Kor: 30 ev");
    tablazat.beszur("Paulo Dybala", "Csapat: AS Roma || Mezszam: 21 || Pozicio: Tamado || Csatlakozasi ev: 2022 || Nemzetiseg: Argentina || Kor: 30 ev");
    tablazat.beszur("Cristiano Ronaldo", "Csapat: Al-Nassr || Mezszam: 7 || Pozicio: Csatar || Csatlakozasi ev: 2023 || Nemzetiseg: Portugalia || Kor: 29 ev");
    tablazat.beszur("Lionel Messi", "Csapat: Inter Miami || Mezszam: 10 || Pozicio: Tamado || Csatlakozasi ev: 2023 || Nemzetiseg: Argentina || Kor: 26 ev");
    tablazat.beszur("Neymar", "Csapat: Al-Hilal || Mezszam: 10 || Pozicio: Tamado || Csatlakozasi ev: 2023 || Nemzetiseg: Brazil || Kor: 32 ev");
    tablazat.beszur("Luis Suarez", "Csapat: Inter Miami || Mezszam: 9 || Pozicio: Csatar || Csatlakozasi ev: 2024 || Nemzetiseg: Uruguay || Kor: 37 ev");
    tablazat.beszur("Karim Benzema", "Csapat: Al-Ittihad || Mezszam: 9 || Pozicio: Csatar || Csatlakozasi ev: 2023 || Nemzetiseg: Francia || Kor: 36 ev");
    tablazat.beszur("Ronaldo Nazario", "Nem aktiv");
    tablazat.beszur("David Beckham", "Nem aktiv");
    tablazat.beszur("Robin van Persie", "Nem aktiv");
    tablazat.beszur("Thierry Henry", "Nem aktiv");
    tablazat.beszur("Wayne Rooney", "Nem aktiv");
    tablazat.beszur("Roy Keane", "Nem aktiv");
    tablazat.beszur("Fernando Torres", "Nem aktiv");
    tablazat.beszur("Frank Lampard", "Nem aktiv");
    tablazat.beszur("Steven Gerrard", "Nem aktiv");
    tablazat.beszur("Gary Neville", "Nem aktiv");
    tablazat.beszur("Roberto Carlos", "Nem aktiv");
    tablazat.beszur("Puskas Ferenc", "Nem aktiv");
    tablazat.beszur("Michael Owen", "Nem aktiv");
    tablazat.beszur("Gheorghe Hagi", "Nem aktiv");
    tablazat.beszur("Marco van Basten", "Nem aktiv");
    tablazat.beszur("Gerd Muller", "Nem aktiv");
    tablazat.beszur("Ryan Giggs", "Nem aktiv");
    tablazat.beszur("Paul Scholes", "Nem aktiv");
    tablazat.beszur("Didier Drogba", "Nem aktiv");
    tablazat.beszur("John Terry", "Nem aktiv");
    tablazat.beszur("Sergio Ramos", "Csapat: Sevilla || Mezszam: 4 || Pozicio: Kozep hatved || Csatlakozasi ev: 2023 || Nemzetiseg: Spanyol || Kor: 38 ev");
    tablazat.beszur("Pepe", "Csapat: Porto || Mezszam: 3 || Pozicio: Kozep hatved || Csatlakozasi ev: 2019 || Nemzetiseg: Portugalia || Kor: 41 ev");
    tablazat.beszur("Angel Di Maria", "Csapat: Benfica || Mezszam: 11 || Pozicio: Tamado || Csatlakozasi ev: 2023 || Nemzetiseg: Argentina || Kor: 36 ev");
    tablazat.beszur("Zinedine Zidane", "Nem aktiv");
    tablazat.beszur("Iniesta", "Nem aktiv");
    tablazat.beszur("Sir Bobby Charlton", "Nem aktiv");
    tablazat.beszur("George Best", "Nem aktiv");
    tablazat.beszur("Diego Maradona", "Nem aktiv");
    tablazat.beszur("Pele", "Nem aktiv");

    // edzok
    tablazat.beszur("Erik ten Hag", "Edzo || Manchester United");
    tablazat.beszur("Pep Guardiola", "Edzo || Manchester City");
    tablazat.beszur("Jurgen Klopp", "Edzo || Liverpool");
    tablazat.beszur("Mauricio Pochettino", "Edzo || Chelsea");
    tablazat.beszur("Ange Postecoglou", "Edzo || Tottenham Hotspur");
    tablazat.beszur("Eddie Howe", "Edzo || Newcastle");
    tablazat.beszur("Mikel Arteta", "Edzo || Arsenal");
    tablazat.beszur("Xavi", "Edzo || Barcelona");
    tablazat.beszur("Carlo Ancelotti", "Edzo || Real Madrid");
    tablazat.beszur("Diego Simeone", "Edzo || Atletico Madrid");
    tablazat.beszur("Luis Enrique", "Edzo || Paris Saint-Germain");
    tablazat.beszur("Xabi Alonso", "Edzo || Bayer Leverkusen");
}

void beolvas(Hash& champions, Hash &premier, Hash &laliga, Hash &serieA)
{
    for (int i = 0; i < 68; i++)
    {
        string ev, csapat;
        f >> ev >> csapat;
        champions.beszur(ev, csapat);
    }

    for (int i = 0; i < 124; i++)
    {
        string ev, csapat;
        g >> ev >> csapat;
        premier.beszur(ev, csapat);
    }

    for (int i = 0; i < 93; i++)
    {
        string ev, csapat;
        h >> ev >> csapat;
        laliga.beszur(ev, csapat);
    }

    for (int i = 0; i < 120; i++)
    {
        string ev, csapat;
        k >> ev >> csapat;
        serieA.beszur(ev, csapat);
    }

    f.close();
    g.close();
    h.close();
    k.close();
}

void jatek(Hash &champions, Hash &premier, Hash &laliga, Hash &serieA)
{
    bool ok = false;
    while (!ok)
    {
        cout << "Kerlek valassz egy jatekmodot: Champions League (1), Premier League (2), LaLiga (3), Serie A (4), Kilepes (5): ";

        int mod;
        cin >> mod;
        
        if (mod == 5)
        {
            ok = true;
        }

        if (mod == 1)
        {
            int evszam = rand() % 68;
            evszam += 1956;
            string ev = to_string(evszam);

            List* keres = champions.megKeres(ev);

            cout << "Melyik csapat nyerte meg a Bajnokok Ligajat " << evszam << " evben?" << endl;

            int i;
            for (i = 3; i > 0; i--)
            {
                cout << "Van meg " << i << " probalkozasod." << endl;
                cout << "Csapatnev: ";

                string csapat;
                cin >> csapat;

                if (csapat == keres->adat)
                {
                    cout << "Gratulalok! " << csapat << " a helyes valasz." << endl;
                    cout << endl;
                    break;
                }
                else
                {
                    cout << "Helytelen valasz." << endl;
                }
            }
            if (i == 0)
            {
                cout << "Sajnos nem talaltad ki. A helyes valasz: " << keres->adat << endl;
                cout << endl;
            }
        }

        if (mod == 2)
        {
            int evszam = rand() % 124;
            evszam += 1889;
            string ev = to_string(evszam);

            List* keres = premier.megKeres(ev);

            cout << "Melyik csapat nyerte meg a Premier League-t " << evszam << " evben?" << endl;

            int i;
            for (i = 3; i > 0; i--)
            {
                cout << "Van meg " << i << " probalkozasod." << endl;

                cout << "Csapatnev: ";
                string csapat;
                cin >> csapat;

                if (csapat == keres->adat)
                {
                    cout << "Gratulalok! " << csapat << " a helyes valasz." << endl;
                    cout << endl;
                    break;
                }
                else
                {
                    cout << "Helytelen valasz." << endl;
                }
            }
            if (i == 0)
            {
                cout << "Sajnos nem talaltad ki. A helyes valasz: " << keres->adat << endl;
                cout << endl;
            }
        }

        if (mod == 3)
        {
            int evszam = rand() % 85;
            evszam += 1929;
            string ev = to_string(evszam);

            List* keres = laliga.megKeres(ev);

            cout << "Melyik csapat nyerte meg a LaLiga-t " << evszam << "-ban?" << endl;

            int i;
            for (i = 3; i > 0; i--)
            {
                cout << "Van meg " << i << " probalkozasod." << endl;
                cout << "Csapatnev: ";
                string csapat;
                cin >> csapat;
                if (csapat == keres->adat)
                {
                    cout << "Gratulalok! " << csapat << " a helyes valasz." << endl;
                    cout << endl;
                    break;
                }
                else
                {
                    cout << "Helytelen valasz." << endl;
                }
            }
            if (i == 0)
            {
                cout << "Sajnos nem talaltad ki. A helyes valasz: " << keres->adat << endl;
                cout << endl;
            }
        }

        if (mod == 4)
        {
            int evszam = rand() % 120;
            evszam += 1898;
            string ev = to_string(evszam);

            List* keres = serieA.megKeres(ev);

            cout << "Melyik csapat nyerte meg a Serie A-t " << evszam << "-ban?" << endl;

            int i;
            for (i = 3; i > 0; i--)
            {
                cout << "Van meg " << i << " probalkozasod." << endl;

                cout << "Csapatnev: ";
                string csapat;
                cin >> csapat;

                if (csapat == keres->adat)
                {
                    cout << "Gratulalok! " << csapat << " a helyes valasz." << endl;
                    cout << endl;
                    break;
                }
                else
                {
                    cout << "Helytelen valasz." << endl;
                }
            }
            if (i == 0)
            {
                cout << "Sajnos nem talaltad ki. A helyes valasz: " << keres->adat << endl;
                cout << endl;
            }
        }
    }
}

int main()
{
    srand(time(NULL));

    Hash hashTable;
    jatekosok(hashTable);

    bool ok = false;
    while (!ok)
    {
        string jatekos;
        cout << "Kerlek add meg a jatekost: ";
        getline(cin, jatekos);

        List* keresett = hashTable.megKeres(jatekos);
        if (jatekos == "ok")
        {
            ok = true;
        }
        if (keresett != nullptr)
        {
            cout << keresett->adat << endl;
            cout << endl;
            cout << "Ha nem szeretnel mas jatekost megnezni, kerlek ird azt hogy <ok>." << endl;
        }
        else if (jatekos != "ok")
        {
            cout << "Nincsenek adatok errol a jatekosrol. " << endl;
            cout << endl;
        }
    }

    Hash champions, premier, laliga, serieA;

    beolvas(champions, premier, laliga, serieA);
    jatek(champions, premier, laliga, serieA);
    //champions.kiirTabla();
    
    return 0;
}