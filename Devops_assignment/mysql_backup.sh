DBNAME=weboniselab
DATE=`date +"%Y%m%d"`
SQLFILE=$DBNAME-${DATE}.sql

echo "Creating backup wait a minute"
sudo mysqldump --opt --user=root $DBNAME > $SQLFILE
gzip $SQLFILE
echo "Done"

