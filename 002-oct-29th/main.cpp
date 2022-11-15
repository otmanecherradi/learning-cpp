//
//  main.cpp
//  002-oct-29th
//
//

#include <iostream>

using namespace std;

void fill(int *table, int *nbr)
{
  cout << "the dimension ? ";
  cin >> *nbr;

  cout << "FILLING THE TABLE BY INDEXES" << endl;
  for (int idx = 0; idx < *nbr; idx++)
  {
    cout << "the number of nbr=" << idx + 1 << "? ";
    cin >> table[idx];
  }
}

void show(int *table, int nbr)
{
  cout << "READING THE TABLE BY INDEXES" << endl;
  for (int idx = 0; idx < nbr; idx++)
  {
    cout << table[idx] << "\t";
  }
}

typedef struct
{
  int month;
  int year;
} ReleaseDate;

typedef struct
{
  char name[100];
  float price;

  ReleaseDate release_date;
} Article;

void read(Article *a)
{
  cout << "Article name? ";
  cin >> a->name;
  cout << endl;

  cout << "Article price? ";
  cin >> a->price;
  cout << endl;
}

void show(Article a)
{
  cout << "Article " << a.name << " costs $" << a.price << endl;
}


Article read_article()
{
  Article a;

  cout << "Article name? ";
  cin >> a.name;
  cout << endl;

  cout << "Article price? ";
  cin >> a.price;
  cout << endl;

  return a;
}

void read_all_articles(Article *articles, int dim)
{

  for (int idx = 0; idx < dim; idx += 1)
    articles[idx] = read_article();
}

int search_all_articles(Article *articles, int dim, char name[100])
{
  for (int idx = 0; idx < dim; idx += 1)
  {
    if (strcmp(articles[idx].name, name) == 0)
    {
      return idx;
    }
  }
    
    return -1;
}

int main(int argc, const char * argv[]) {
    {
        // tables
        
        int table[5];
        int nbr = 5;

        cout << "FILLING THE TABLE BY INDEXES" << endl;
        for (int idx = 0; idx < nbr; idx++)
        {
          cout << "the number of nbr=" << idx + 1 << "? ";
          cin >> table[idx];
        }

        cout << "READING THE TABLE BY POINTERS" << endl;

        for (int *nbr_pointer = table; nbr_pointer < table + nbr; nbr_pointer++)
        {
          cout << "nbr_pointer: " << nbr_pointer << endl;
          cout << "*nbr_pointer: " << *nbr_pointer << endl;

          cout << "---------------------------------------" << endl;
        }
    }
    
    {
        // tables - biz
        
        int table[5];
        int nbr;

        fill(table, &nbr);
        show(table, nbr);
    }
    
    {
        // tables - biz
        
        char p[] = "amine";

        cout << p << endl;

        p[2] = '\0';
        cout << p << endl;

        char q[sizeof(p) / sizeof(p[0])];

        strcpy(q, p);

        cout << "q = " << q << endl;

        if (strcmp(p, q) < 0)
            cout << p << " < " << q << endl;
        else if (strcmp(p, q) > 0)
            cout << p << " > " << q << endl;
        else
            cout << p << " = " << q << endl;
    }
    
    {
        // structures
        
        Article a;

        cout << "Article name? ";
        cin >> a.name;
        cout << endl;

        cout << "Article price? ";
        cin >> a.price;
        cout << endl;

        cout << "Article release month? ";
        cin >> a.release_date.month;
        cout << endl;

        cout << "Article release year? ";
        cin >> a.release_date.year;
        cout << endl;

        cout << "Article " << a.name << " was released on " << a.release_date.month << " of the year " << a.release_date.year << " and costs $" << a.price << endl;
    }
    
    {
        // structures - biz
        
        Article a;

        read(&a);
        show(a);
    }
    
    {
        // structures - exercice
        
        int dim = 3;
        Article *articles = new Article[dim];

        read_all_articles(articles, dim);

        int article_idx = search_all_articles(articles, dim, "Macbook");
        show(articles[article_idx]);
    }
}
