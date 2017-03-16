<?php
$browser = new PhpBrowser();
$browser->load('http://google.com');
echo $browser->title();
