#include<iostream>
using namespace std;
#ifndef COMPANY_H
#define COMPANY_H
#include <string>
#include <vector>

class company {
    public:
    string cmpname;
    string cmpaddress;
    double package;
    int hiredstudents;
    vector<float> criteria; // CGPA and company exam
    int no_of_alumni;
    bool at_college; //present at college 

//constructor
company(const string &cmpname, const string &cmpaddress, double package, int hiredstudents, vector<float> criteria, int no_of_alumni, bool at_college){
    this->cmpname = cmpname;
    this->cmpaddress = cmpaddress;
    this->package = package;
    this->hiredstudents = hiredstudents;
    for(int i = 0;i<criteria.size();i++){
        this->criteria[i] = criteria[i];
    }
    this->no_of_alumni = no_of_alumni;
    this->at_college = at_college;
}

    //Getter
    string getcmpname() const{
        return cmpname;
    }
    string getcmpaddress() const{
        return cmpaddress;
    }
    double getpackage() const{
        return package;
    }
    int gethiredstudents() const{
        return hiredstudents;
    }
    int getno_of_alumni() const{
        return no_of_alumni;
    }
    bool getat_college() const{
        return at_college;
    }
    vector <float> getcriteria() const{
        return criteria;
    }

    //Setter
    void setname(const string &cmpname){
        this->cmpname = cmpname;
    }
    void setcmpadrress(const string &cmpaddress){
        this->cmpaddress = cmpaddress;
    }
    void setpackage(const double &package){
        this->package = package;
    }
    void sethiredstudents(const int &package){
        this->hiredstudents = hiredstudents;
    }
    void setno_of_alumni(const int &no_of_alumni){
        this->no_of_alumni = no_of_alumni;
    }
    void setat_college(const int &at_college){
        this->at_college = at_college;
    }
    void setcriteria(const vector<float> &criteria){
        this->criteria = criteria;
    }
};

#endif