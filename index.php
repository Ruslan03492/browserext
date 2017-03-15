<?php
$browser = new PhpBrowser();
$browser->load('http://tiro.by');
echo $browser->title();
