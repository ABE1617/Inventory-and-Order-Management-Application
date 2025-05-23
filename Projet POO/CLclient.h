#pragma once
ref class CLclient
{
private:
    int id_Client;
    System::String^ nom;
    System::String^ prenom;
    System::String^ date_naissance;
    System::String^ date_premiere_cmd;

public:

    int getIdclient();
    void setIdclient(int idclient);

    System::String^ getnom();
    void setnom(System::String^ nom);

    System::String^ getprenom();
    void setprenom(System::String^ prenom);


    System::String^ getdatenaissance();
    void setdatenaissance(System::String^ datenaissance);

    System::String^ getdatepremierecmd();
    void setdatepremierecmd(System::String^ datepremierecmd);




    System::String^ Select() override;
    System::String^ Insert() override;
    System::String^ Delete() override;
    System::String^ Update() override;

};

