create table schedule (city text, swimtype text, pool text, dt date, start time, end time);
delimiter //
create procedure schedule(c text, ds date, de date, p text, t text, s time, e time)
begin
  set @d = ds;
  while @d < de do
    insert into schedule values (c, t, p, @d, s, e);
    set @d = date_add(@d, interval 1 day);
  end while;
end//
delimiter ;
set @city = 'Guelph';
set @swimtype = 'Public swim';
set @pool = 'West End Community Centre';
set @date1 = date('2016/9/6');
set @date2 = date('2017/4/2');
call schedule(@city, @date1, @date2, @swimtype, @pool, 'Public swim', '06:00', '08:00');
