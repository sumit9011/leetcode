# Write your MySQL query statement below
select a.customer_id,count(a.customer_id) as count_no_trans
from Visits a
left join Transactions b
on a.visit_id= b.visit_id
where a.visit_id not in (select visit_id from Transactions)
group by a.customer_id;
