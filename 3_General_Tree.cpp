#include<iostream>
using namespace std;
class Node{
public:
    char ch[25];
    int ch_count;
    Node * sec[10]; 
};

class GT{
    Node *root;

public:
    void create(){
        cout<<"Enter a book name: ";
        cin>>root->ch;
        cout<<"Enter number of Chapters: ";
        cin>>root->ch_count;
        for(int i=0;i<root->ch_count;i++){
            root->sec[i] = new Node;
            cout<<"Enter Chapter "<<i<<" name: ";
            cin>>root->sec[i]->ch;
            cout<<"Enter SubChapters in Chapter: "<<i<<"  ";
            cin>>root->sec[i]->ch_count;
            for(int j=0;j<root->sec[i]->ch_count;j++){
                cout<<"Enter SubChapters name: ";
                root->sec[i]->sec[j] =new Node;
                cin>>root->sec[i]->sec[j]->ch;
            }
        }
    }

    void display(){
        cout<<"Chapter Name: "<<root->ch<<endl;
        for(int i=0;i<root->ch_count;i++){  
            cout<<"Subchapter Name: "<<root->ch[i]<<endl;
            for(int j=0; j<root->sec[i]->ch_count;j++){
                cout<<"Section Name: "<<root->sec[i]->sec[j]->ch<<endl;
            }
        }
    }
};
int main(){
    GT gt;
    gt.create();
    gt.display();
}