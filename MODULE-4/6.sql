-- Drop the teachers table from the school_db database. 
-- Drop the students table from the school_db database and verify that the table has been removed.

alter table students drop constraint fk_teacher_id;

drop table teachers;
drop table students;

show tables;