create table schedule (city text, swimtype text, pool text, dt date, start time, end time);
delimiter //
create procedure schedule(c text, ds date, de date, p text, t text, s time, e time)
begin
  set @d = ds;
  while @d < de do
    if weekday(@d) == @wkday then
      insert into schedule values (c, t, p, @d, s, e);
    end if
    set @d = date_add(@d, interval 1 day);
  end while;
end
create procedure ins(s time, e time)
begin
  call schedule(@city, @date1, @date2, @pool, @swimtype, s, e);
end
//
delimiter ;
set @city = 'Guelph';
set @date1 = date('2016/9/6');
set @date2 = date('2017/4/2');
set @pool = 'West End Community Centre';
set @swimtype = 'Public swim';
set @wkday = MON;
call ins('14:00', '15:00');
set @wkday = FRI;
call ins('19:30', '21:00');
set @wkday = SAT;
call ins('14:00', '15:00');
