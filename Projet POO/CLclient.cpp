#include "CLclient.h"
#include "pch.h"

System::String^ CLclient::getdatenaissance()
{
    return date_naissance;
}

int CLclient::getIdclient()
{
    return id_Client;
}

void CLclient::setIdclient(int idclient)
{
    id_Client = idclient;
}


System::String^ CLclient::getnom()
{
    return nom;
}

void CLclient::setnom(System::String^ nom)
{
    this->nom = nom;
}

System::String^ CLclient::getprenom()
{
    return prenom;
}

void CLclient::setprenom(System::String^ prenom)
{
    this->prenom = prenom;
}

void CLclient::setdatenaissance(System::String^ datenaissance)
{
    date_naissance = datenaissance;
}

System::String^ CLclient::getdatepremierecmd()
{
    return date_premiere_cmd;
}

void CLclient::setdatepremierecmd(System::String^ datepremierecmd)
{
    date_premiere_cmd = datepremierecmd;
}

System::String^ CLclient::Select()
{
    return "select * from Client where client_nom = " + this->nom + " and client_prenom = " + this->prenom + ";";
}

System::String^ CLclient::Insert()
{
    return "insert into Client (nom, prenom, datenaissance, date_premiere_cmd,) values('" + this->nom + "','" + this->prenom + "','" + this->date_naissance + "','" + this->date_premiere_cmd + "');";
}

System::String^ CLclient::Delete()
{
    return "delete from Client where id_client=" + this->id_Client + ";";
}

System::String^ CLclient::Update()
{
    return "";
}
