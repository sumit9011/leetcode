# Write your MySQL query statement below
select a.student_id ,a.student_name,b.subject_name,coalesce(count(c.subject_name),0) as attended_exams
from Students a
cross join Subjects b 
left join Examinations c on c.subject_name=b.subject_name and a.student_id=c.student_id
group by a.student_id,a.student_name,b.subject_name
order by a.student_id, a.student_name,b.subject_name;

