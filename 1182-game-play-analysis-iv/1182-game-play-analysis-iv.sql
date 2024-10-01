# Write your MySQL query statement below

with First_Login as(
    select player_id,min(event_date) as first_login_date
    from Activity 
    group by player_id
),
 Next_Login as(
    select a.player_id
    from Activity a
    join First_Login f
    on a.player_id=f.player_id
    where a.event_date=date_add(f.first_login_date,interval 1 day)
)

select round(count(distinct b.player_id)/count(distinct a.player_id),2) as fraction
from First_Login a
left join Next_Login b
on a.player_id=b.player_id;