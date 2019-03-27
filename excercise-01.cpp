/*
Nama        : Shania Salsabila
NPM         : 140810180014
Deskripsi   : excercise-01
Tahun       : 2019
*/
#include <iostream>

using namespace std;

struct Pembalap{
    int nomor;
    char nama;
    int waktu;
    Pembalap* next;
    Pembalap* prev;
};
void createNode(Pembalap* &p, int nomor, char nama){
    p=new Pembalap;
    p->nama=nama;
    p->nomor=nomor;
    p->waktu=0;
    p->next=NULL;
    p->prev=NULL;
}
void insertFirst(Pembalap* &head, Pembalap* node){
    if(head==NULL)
        head=node;
    else{
        node->next=head;
        node->prev=node;
        head=node;
    }
}
void insertBefore(Pembalap* &head, int nomorKey, Pembalap* node){
    Pembalap* pCari;
    if(pCari->next==NULL)
        pCari->next=node;
    else{
        node->next=pCari;
        node->prev=pCari->prev;
        pCari->prev->next=node;
        pCari->prev=node;
    }
}
void deleteByKey(Pembalap* &head, int nomorKey, Pembalap* &deleteNode);
void search(Pembalap* &firstNode, int nomorKey, Pembalap* &pToUpdate){
    pToUpdate=firstNode;
    while(pToUpdate->nomor!=nomorKey){
        pToUpdate=pToUpdate->next;
    }
}
void tranversal(Pembalap* head){
    Pembalap* help;
    if(head==NULL){
        cout<<"--List kosong--";
    }
    else{
        help=head;
        while(help!=NULL){
            cout<<"Nomor: "<<help->nomor<<endl;
            cout<<"Nama : "<<help->nama<<endl;
            cout<<"Waktu: "<<help->waktu<<endl;
            cout<<endl;
            help=help->next;
        }
        }
    }
}
void sortingByNomor(Pembalap* &head){
    Pembalap pBantu;
    pBantu=head;
    while(pBantu!=NULL){
        if(pBantu->nomor>pBantu->next->nomor);
    }
}
void update(Pembalap* firstNode, int nomorKey);

int main()
{
    Pembalap* head = NULL;
    Pembalap* pBaru = NULL;
    Pembalap* pToUpdate = NULL;
    char nama = a*

    for(int i=0;i<4;i++){
        createNode(pBaru,i+1,nama++);
        insertFirst(head,pBaru);
    }
    cout<<"\n>>>List"<<endl;
    tranversal(head);

    int keyNomor=2;

    cout<<"\n>>>Insert Before nomor"<<keyNomor<<endl;
    createNode(pBaru,99,'z');
    insertBefore(head,keyNomor,pBaru);
    tranversal(head);

    cout<<"\n>>> SortingByNomor"<<endl;
    sortingByNomor(head);
    tranversal(head);

    keyNomor=3;
    cout<<"\n>>>Delete nomor"<<keyNomor<<endl;
    Pembalap* pHapus = NULL:
        deleteByKey(head,keyNomor,pHapus);
        tranversal(head);

    keyNomor=4;
    cout<<"\n>>Update nomor"<<keyNomor<<endl;
    update(head,keyNomor);

    cout<<"\n>>>Update list\n";
    tranversal(head);
}
