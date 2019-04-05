#!/ bin/bash
subject="[ Crontab modified ]"
/*xxxxxxxxxxx*/ > modified_crontab.txt
mail -s "$subject" "root@lol.fr" < modified_crontab.txt
