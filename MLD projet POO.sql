#------------------------------------------------------------
#        Script MySQL.
#------------------------------------------------------------


#------------------------------------------------------------
# Table: personnel
#------------------------------------------------------------

CREATE TABLE personnel(
        ID_personnel Int  Auto_increment  NOT NULL ,
        first_name   Varchar (100) NOT NULL ,
        last_name    Varchar (100) NOT NULL ,
        hire_date    Date NOT NULL ,
        titre        Varchar (100) NOT NULL
	,CONSTRAINT personnel_PK PRIMARY KEY (ID_personnel)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: article
#------------------------------------------------------------

CREATE TABLE article(
        ID_article     Int  Auto_increment  NOT NULL ,
        article_ref    Varchar (100) NOT NULL ,
        stock_quantity Int NOT NULL ,
        price_TVA      Float NOT NULL ,
        price_HT       Float NOT NULL
	,CONSTRAINT article_PK PRIMARY KEY (ID_article)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Address
#------------------------------------------------------------

CREATE TABLE Address(
        ID_address          Int  Auto_increment  NOT NULL ,
        Address_facturation Varchar (100) NOT NULL ,
        Address_livraison   Varchar (100) NOT NULL ,
        Address_personnel   Varchar (100) NOT NULL ,
        enumville           Int NOT NULL
	,CONSTRAINT Address_PK PRIMARY KEY (ID_address)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: payment
#------------------------------------------------------------

CREATE TABLE payment(
        ID_payment      Int  Auto_increment  NOT NULL ,
        payment_methode Varchar (50) NOT NULL ,
        payment_date    Date NOT NULL ,
        Montant         DECIMAL (15,3)  NOT NULL
	,CONSTRAINT payment_PK PRIMARY KEY (ID_payment)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: Orders
#------------------------------------------------------------

CREATE TABLE Orders(
        ID_order         Int  Auto_increment  NOT NULL ,
        order_date       Date NOT NULL ,
        delivry_date     Date NOT NULL ,
        reduction        Float NOT NULL ,
        article_quantity Int NOT NULL ,
        oreder_ref       Varchar (50) NOT NULL ,
        ID_payment       Int NOT NULL
	,CONSTRAINT Orders_PK PRIMARY KEY (ID_order)

	,CONSTRAINT Orders_payment_FK FOREIGN KEY (ID_payment) REFERENCES payment(ID_payment)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: customer
#------------------------------------------------------------

CREATE TABLE customer(
        ID_customer      Int  Auto_increment  NOT NULL ,
        first_name       Varchar (100) NOT NULL ,
        last_name        Varchar (100) NOT NULL ,
        birthdate        Date NOT NULL ,
        first_order_date Date NOT NULL ,
        ID_payment       Int NOT NULL
	,CONSTRAINT customer_PK PRIMARY KEY (ID_customer)

	,CONSTRAINT customer_payment_FK FOREIGN KEY (ID_payment) REFERENCES payment(ID_payment)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: leave
#------------------------------------------------------------

CREATE TABLE leave(
        ID_address   Int NOT NULL ,
        ID_personnel Int NOT NULL
	,CONSTRAINT leave_PK PRIMARY KEY (ID_address,ID_personnel)

	,CONSTRAINT leave_Address_FK FOREIGN KEY (ID_address) REFERENCES Address(ID_address)
	,CONSTRAINT leave_personnel0_FK FOREIGN KEY (ID_personnel) REFERENCES personnel(ID_personnel)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: live_C
#------------------------------------------------------------

CREATE TABLE live_C(
        ID_customer Int NOT NULL ,
        ID_address  Int NOT NULL
	,CONSTRAINT live_C_PK PRIMARY KEY (ID_customer,ID_address)

	,CONSTRAINT live_C_customer_FK FOREIGN KEY (ID_customer) REFERENCES customer(ID_customer)
	,CONSTRAINT live_C_Address0_FK FOREIGN KEY (ID_address) REFERENCES Address(ID_address)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: choose
#------------------------------------------------------------

CREATE TABLE choose(
        ID_order   Int NOT NULL ,
        ID_article Int NOT NULL ,
        qte        Int NOT NULL
	,CONSTRAINT choose_PK PRIMARY KEY (ID_order,ID_article)

	,CONSTRAINT choose_Orders_FK FOREIGN KEY (ID_order) REFERENCES Orders(ID_order)
	,CONSTRAINT choose_article0_FK FOREIGN KEY (ID_article) REFERENCES article(ID_article)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: supervisor
#------------------------------------------------------------

CREATE TABLE supervisor(
        ID_personnel            Int NOT NULL ,
        ID_personnel_supervisor Int NOT NULL
	,CONSTRAINT supervisor_PK PRIMARY KEY (ID_personnel,ID_personnel_supervisor)

	,CONSTRAINT supervisor_personnel_FK FOREIGN KEY (ID_personnel) REFERENCES personnel(ID_personnel)
	,CONSTRAINT supervisor_personnel0_FK FOREIGN KEY (ID_personnel_supervisor) REFERENCES personnel(ID_personnel)
)ENGINE=InnoDB;


#------------------------------------------------------------
# Table: facturation
#------------------------------------------------------------

CREATE TABLE facturation(
        ID_customer Int NOT NULL ,
        ID_address  Int NOT NULL
	,CONSTRAINT facturation_PK PRIMARY KEY (ID_customer,ID_address)

	,CONSTRAINT facturation_customer_FK FOREIGN KEY (ID_customer) REFERENCES customer(ID_customer)
	,CONSTRAINT facturation_Address0_FK FOREIGN KEY (ID_address) REFERENCES Address(ID_address)
)ENGINE=InnoDB;

