# Write your MySQL query statement below

select a.user_id,
       round( avg(case when b.action='confirmed' then 1 else 0 end) ,2)as confirmation_rate
from Signups a
left join Confirmations b
on a.user_id=b.user_id
group by a.user_id;        
