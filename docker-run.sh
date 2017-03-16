#!/usr/bin/env bash

chmod u+s 'which Xvfb'
echo "Xvfb :0 > /dev/null 2>&1 &" >> /etc/rc.local
echo "export DISPLAY=:0.0" >> /etc/apache2/envvars
cd /var/www/html && ./build.sh && /install.sh
echo "extension=browserext.so" >> /etc/php5/apache2/php.ini
service apache2 restart
