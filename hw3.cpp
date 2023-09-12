
#include <iostream>
using namespace std;

class Human {
public:

    int HairLength = 40; //сантиметри 
    int ArmFingers = 10;
    string EyeColor = "green";
    string HairColor = "red";
    string Name;
    string Gender;

public:
    int Hunger;
    int Health;
    int Happiness;
    int Fatigue; //втомленність 
    int Hotness;
    int Skill;

public:
    void Talk(string phrase) {
        if (Fatigue < 80 && Happiness >= 5) {
            cout << phrase;
            Happiness++;
            Fatigue++;
        }
        if (Fatigue >= 80 && Happiness < 5) {
            cout << Name << " не бажає говорити";
        }
    }
    void PlayGuitar(Guitar& what) {
        if (Fatigue < 25 && Health >= 10) {
            what.playGuitar();
            Skill++;
            Happiness++;
            Fatigue++;
        }
        if (Fatigue >= 15 && Health < 10)
        {
            cout << Name << " занадто втомлені";
        }
    }
    void Eat(string meal) {
        if (Hunger < 10) {
            cout << Name << " з'їв " << meal;
            Hunger--;
            Happiness++;
            Health++;
        }
        if (Hunger >= 10)
        {
            cout << Name << " ситий";
        }
    }
    void Read(Book& what) {
        if (Fatigue < 40) {
            what.ReadBook();
            Happiness++;
            Fatigue--;
        }
        if (Fatigue > 40) {
            cout << Name << " занадто втомлені";
        }
    }
    void OpenWindow(Room& what) {
            cout << "Дуже спекотно ";
            what.WindowOpen();
            Hotness--;
    }
    void PetCat(Cat& who) {
        cout << "Яка чудова кішка! ";
        who.Mrrr();
        Health++;
        Happiness++;
        Fatigue--;
    }
};


class Room {
public:

    int Length = 10; //метри 
    int Width = 7;
    string WallColor = "pink";
    int Height = 4;
    string DoorColor = "white";
    string Name;

public:
    int Illumination;
    int Freshness;
    int Comfort;
    int Noisiness;
    int DustLevel;

public:
    void DoorOpen() {
        cout << "Двері відкриті";
        DustLevel++;
        Freshness++;
        Comfort--;
    }
    void WindowOpen() {
        cout << "Вікна відкрито";
        Illumination++;
        Freshness++;
        Noisiness++;
    }
    void LightOn() {
        if (Illumination <= 10) {
            cout << "Світло ввімкнено";
            Illumination++;
            Comfort++;
        }
        if (Illumination > 10)
        {
            cout << "В кімнаті достатньо світла"; 
        }
    }
    void CurtainClosed() {
        if (Illumination > 30) {
            cout << "Штори закрито";
            Comfort++;
            Illumination--;
        }
        if (Illumination <= 30)
        {
            cout << "Занадто темно для закритих штор";
        }
    }
    void TV() {
        cout << "Телевізор увімкнено";
        Comfort++;
        Illumination++;
        Noisiness++;
    }
};


class Cat {
public:

    int LegAmount = 4;
    int EarsAmount = 2;
    string Color = "gray";
    string SecondColor = "black";
    string Name;
    string Gender;

public:
    int Hunger;
    int Health;
    int Happiness;
    int Fatigue; //втомленність 
    int Irritability; //роздратування

public:
    void Mrrr() {
        if (Happiness >= 30) {
            cout << Name << "Кіт мурчить";
            Happiness++;
            Health++;
            Fatigue--;
            Irritability--;
        }
        if (Happiness < 30)
        {
            cout << Name << " занадто сумний"; 
        }
    }
    void Eat(string meal) {
        if (Hunger < 10) {
            cout << "Кіт їсть " << meal;
            Health++;
            Fatigue++;
            Irritability--;
            Happiness++;
            Hunger--;
        }
        if (Hunger >= 10)
        {
            cout << Name << " ситий";
        }
    }
    void Stretch() {
        cout << Name << " потягнувся";
        Fatigue++;
        Irritability--;
    }
    void OpenDoor(Room& what) {
        if (Fatigue < 30) {
            what.DoorOpen();
            Fatigue++;
        }
        if (Fatigue >= 30)
        {
            cout << Name << " занадто втомленний";
        }
    }
    void Hiss() {
        if (Irritability >= 30 && Happiness < 10) {
            cout << Name << " шипить";
            Fatigue++;
            Irritability++;
            Happiness--;
        }
        if (Irritability < 30 && Happiness >= 10) {
            cout << Name << " занадто задоволений щоб шипіти";
        }
    }
};


class Book {
public:

    int PagesAmount = 250;
    string BookName = "Тарантула";
    string Author = "Боб Ділан";
    string Year = "1971";
    string PublishingHouse = "Macmillan & Scribner";

public:
    int Wearness;
    int Interestingness;
    int Health;
    int Waiting;

public:
    void ReadBook() {
        if (Interestingness >= 50) {
            cout << "Ви прочли книгу";
            Interestingness++;
        }
        if (Interestingness < 50) {
            cout << "Вам не вистачає зацікавленності";
        }
    }
    void PutBookmark(string num_page) {
        cout << "Ви встановили закладку на " << num_page << " сторінці";
        Interestingness++;
        Waiting++;
    }
    void CoffeeSpot() {
        cout << "Ви пролили на книгу кофе";
        Health--;
        Wearness++;
    }
    void Wipe() {
        if (Health <= 980) {
            cout << "Книгу протерто";
            Health++;
        }
        if (Health > 980)
        {
            cout << "Книжку непотрібно протирати";
        }
    }
    void MakeNote(string note) {
        cout << "Ви залишили замітку: " << note;
        Interestingness++;
        Wearness++;
    }
};


class Guitar {
public:

    int StringAmount = 6;
    int FretAmount = 15;
    int BeltAmount = 1;
    string GuitarColor;
    string CompanyName;

public:
    int Wearness;
    int Interestingness;
    int Health;
    int Skill;
    int Noisiness;

public:
    void TuneGuitar() {
        cout << "Гітару налаштовано";
        Health++;
        Interestingness++;
    }
    void playGuitar() {
        if (Skill > 20) {
            cout << "Гітара грає";
            Wearness++;
            Interestingness++;
            Skill++;
            Noisiness++;
        }
        if (Skill <= 20)
        {
            cout << "Вам не вистачає вміння грати";
        }
    }
    void ChangeString(string number_of_string) {
        if (Wearness > 60) {
            cout << number_of_string << " замінено";
            Health++;
            Wearness--;
        }
        if (Wearness <= 60) {
            cout << "Міняти струни непотрібно, спробуйте Налаштувати гітару";
        }
    }
    void PracticeGuitar() {
        cout << "Приктика на гітарі";
        Interestingness++;
        Skill++;
        Noisiness++;
    }
    void PutCapo(string number_of_fret) {
        cout << "Капо встановлено на " << number_of_fret << "лад";
        Skill++;
    }
    void PutInCase() {
        cout << "Гітара в чохлі";
        Wearness--;
        Health++;
    }
};

int main()
{
    Human h;
    h.Gender = "non-binary";
    h.Name = "Nick";
    h.Hunger = 10;
    h.Health = 20;
    h.Happiness = 10;
    h.Fatigue = 10; 
    h.Hotness = 100;
    h.Skill = 0;

    Human v;
    h.Gender = "Female";
    v.Name = "Martha";
    h.Hunger = 10;
    h.Health = 20;
    h.Happiness = 30;
    h.Fatigue = 5;
    h.Hotness = -10;
    h.Skill = 100;

    Cat c;
    c.Gender = "Female";
    c.Name = "Sima";
    c.Hunger = 10;
    c.Health = 20;
    c.Happiness = 5;
    c.Fatigue = 0; 
    c.Irritability = 10; 

    Room r;
    r.Name = "Bedroom";
    r.Illumination = 150;
    r.Freshness = -10;
    r.Comfort = 5;
    r.Noisiness = 0;
    r.DustLevel = 23;


    Guitar g;
    g.GuitarColor = "yellow";
    g.CompanyName = "Gibson";
    g.Wearness = 0;
    g.Interestingness = 100;
    g.Health = 1000;
    g.Skill = 0;
    g.Noisiness = 0;

    Book b;
    b.Wearness = 0;
    b.Interestingness = 1000;
    b.Health = 1000;
    b.Waiting = 10;

    h.PetCat(c);
    h.Read(b);
    h.PlayGuitar(g);
    c.OpenDoor(r);
}