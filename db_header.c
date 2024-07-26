/*
example to achieve BDB_HEADER
BDB_HEADER=$(cat db_header.c |cc -I$TERMUX_PREFIX/include -P -E -| tail -n 1| sed -e 's/[\ \t]//g')
*/
#include <db.h>
DB_VERSION_MAJOR.DB_VERSION_MINOR
