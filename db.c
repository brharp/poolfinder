#include <mysql/mysql.h>
#include <stdio.h>
#include <stdlib.h>

MYSQL mysql;

void pf_init_db()
{
	mysql_init(&mysql);
	mysql_options(&mysql, MYSQL_READ_DEFAULT_GROUP, "pf");
	if (!mysql_real_connect(&mysql, NULL, NULL, NULL, NULL, 0, NULL, 0))
		{
			fprintf(stderr, "Failed to connect to database: Error: %s\n",
				mysql_error(&mysql));
		}
}

int pf_get_migrations(void)
{
	int schemaversion = 0;
	MYSQL_RES *result;
	MYSQL_ROW row;

	if (!mysql_query(&mysql, "SELECT MAX(id) FROM migrations"))
		{
			result = mysql_store_result(&mysql);
			if ((row = mysql_fetch_row(result)))
				{
					schemaversion = atoi(row[0]);
				}
			mysql_free_result(result);
		}

	return schemaversion;
}

#define PF_SET_SCHEMA_VERSION_STMT "INSERT INTO migrations(id) VALUES(?)"

void pf_add_migration(int version)
{
	stmt = mysql_stmt_init(mysql);
	mysql_stmt_prepare(stmt, PF_SET_SCHEMA_VERSION_STMT, strlen(PF_SET_SCHEMA_VERSION_STMT));

	memset(bind, 0, sizeof(bind);

	bind[0].buffer_type = MYSQL_TYPE_INT;
	bind[0].buffer = (char *) &schemaversion;

	mysql_stmt_bind_param(stmt, bind);
	mysql_stmt_execute(stmt);
	mysql_stmt_close(stmt);
}

#define SETSCHEMAVERSION "insert into schemaversion(id) values(?)"
#define GETSCHEMAVERSION "select id from schemaversion order by id desc"

int getschemaversion() {
  int version = -1;
  mysql_query(GETSCHEMAVERSION);
  if ((result = mysql_store_result(&mysql)))
    {
      if ((row = mysql_fetch_row(result)))
          version = atoi(row[0]);
      mysql_free_result(result);
    }
  return version;
}

setschemaversion(int version) {
  mysql_prepare_stmt(stmt, SETSCHEMAVERSION, strlen(SETSCHEMAVERSION));
  mysql_stmt_bind_param(stmt, &varschemaversion);
  bind.buffer_type = MYSQL_TYPE_INT;
  bind.buffer = (char *) &version;
  mysql_stmt_execute(stmt);
}

void pf_update_db(void)
{
	switch (getschemaversion())
		{
		case -1:
			fprintf(stderr, "Failed to get schema version: %s\n", mysql_error(&mysql));
			break;
		case 0:
			if (mysql_query(&mysql, "create table schemaversion (id INT)"))
				{
					fprintf(stderr, "Failed to create table: Error: %s\n",
						mysql_error(&mysql));
				};
			setschemaversion(1);
		case 1:
			// ... more changes here ...
		}
}

#ifdef TEST
/* cc -DTEST -lmysqlclient db.c */
int main (int argc, char *argv[])
{
	pf_init_db();
	pf_update_db();
	mysql_close(&mysql);
	mysql_library_end();
}
#endif

