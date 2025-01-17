-- Create two new users user1 and user2 and grant user1 permission to SELECT from the courses table. 
-- Revoke the INSERT permission from user1 and give it to user2

create role student;

create user 'user1' identified by 'root' default role student;      
create user 'user2' identified by 'root' default role student;      

grant select on courses to 'user1';            
revoke insert on courses from 'user1';         
grant insert on courses to 'user2';            