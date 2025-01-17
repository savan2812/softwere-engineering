
-- Create a new database named school_db and a table called students with the 
-- following columns: student_id, student_name, age, class, and address. 
-- Insert five records into the students table and retrieve all records using the SELECT statement

create schema school_db;
use school_db;

create table students(
    student_id int,
    student_name varchar(25),
    age int,
    class varchar(25),
    address varchar(100)
);

insert into students
values (100, "Mohit",  10,  "6",  "sg highway ahmedabad"),
       (101, "Rajesh",     14,  "4",  "Shatrinagar ahmedabad"),
       (102, "Mohan",     09,  "5",  "chandkheda ahmedabad"),
       (103, "Soham",    12,  "5",  "New Ranip ahmedabad"),
       (104, "sonal",    11,  "7",  "vastrapura ahmedabad");
   
select * from students;
