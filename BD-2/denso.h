#ifndef DENSO_H
#define DENSO_H

#include <bits/stdc++.h>
#include <QString>
#include <QDebug>

using namespace  std;

class Node{
public:
    int registro;
    QString cuenta,name,saldo;
public:
    Node(int a,string b,string c,string d){
        cuenta=QString::fromStdString(b);
        name=QString::fromStdString(c);
        saldo=QString::fromStdString(d);
        registro=a;
    }
    bool operator!=(const Node &v1){
        return name!=v1.name;
    }
    bool operator==(const Node &v1){
        return name==v1.name;
    }
    bool operator>(const Node &v1){
        return name>v1.name;
    }
    bool operator<(const Node &v1){
        return name<v1.name;
    }
};

class Denso{
public:
    map<string,vector<Node*>> Index;
    list<Node*> Registre;
    list<Node*> Indexado;
    int i;
    string type;
public:
    Denso(){
        i=0;
    }
    auto find(int a,list<Node*> &abc){
        for (auto it=abc.begin();it!=abc.end();it++){
            if((*(it))->registro==a){
                return *it;
            }
        }
    }
    void insert(string b,string c,string d){
        Node *a=new Node(i,b,c,d);
        Registre.push_back(a);
        i++;
    }
    void refresh(int flag){
        if(flag==1){
            IndexDense();
        }
        else if(flag==2){
            IndexDisperse();
        }
    }
    void IndexDense(){
        Index.clear();
        for (auto it=Registre.begin();it!=Registre.end();it++){
            Node *a=(*(it));
            Index[a->name.toStdString()].push_back(&(*a));
        }
        Indexado.clear();
        for(auto it=Index.begin();it!=Index.end();it++){
            for(auto ite=it->second.begin();ite!=it->second.end();ite++){
                Indexado.push_back(*ite);
            }
        }
    }
    void IndexDisperse(){
        Index.clear();
        IndexDense();
        for(auto it=Index.begin();it!=Index.end();it++){
            auto ite=it;
            ite++;
            it->second.insert(it->second.end(),ite->second.begin(),ite->second.end());
            if(ite==Index.end()){
                break;
            }
            Index.erase(ite);
        }
        Indexado.clear();
        for(auto it=Index.begin();it!=Index.end();it++){
            for(auto ite=it->second.begin();ite!=it->second.end();ite++){
                Indexado.push_back(*ite);
            }
        }
    }
    void Load(){
        ifstream is("Registros.txt");
        if(is){
            string line;
            while (getline(is,line)) {
                stringstream ss(line);
                string primer;
                getline(ss,primer,',');
                string nombre;
                getline(ss,nombre,',');
                string valor;
                getline(ss,valor,',');
                insert(primer,nombre,valor);
            }
            is.close();
        }
    }
    void Delete1(int a){
        if(!Indexado.empty()){
            Registre.remove(find(a,Registre));
            Indexado.remove(find(a,Indexado));
            bool flag=false;
            auto it=Index.begin();
            for(;it!=Index.end();it++){
                for(auto ite=it->second.begin();ite!=it->second.end();ite++){
                    if((*(ite))->registro==a){
                        it->second.erase(ite);
                        flag=true;
                        break;
                    }
                }
                if(flag==true) break;
            }
            if(it->second.empty()){
                Index.erase(it);
            }
        }
        else{
            Registre.remove(find(a,Registre));
        }
    }
};

#endif // DENSO_H
