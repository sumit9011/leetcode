# Write your MySQL query statement below

with First_Orders as(
    select customer_id, min(order_date) as first_order_date
    from Delivery
    group by customer_id
),
    First_Orders_Details as(
        select d.customer_id,d.order_date,d.customer_pref_delivery_date
        from Delivery d
        join First_Orders f
        on d.customer_id=f.customer_id
        and d.order_date=f.first_order_date
    )

    select round((sum(case when order_date=customer_pref_delivery_date then 1 else 0 end)/count(*))*100,2) as immediate_percentage
    from First_Orders_Details;

