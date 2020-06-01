use strict;
use warnings;
 
#~ my ($name, $number) = @ARGV;
 
#~ if (not defined $name) {
  #~ die "Need name\n";
#~ }
 
#~ if ($name eq "upgrade" || $name eq "dist-upgrade") {
  #~ print "Save '$name' and '$number'\n";
  #~ # guarda el nombre/número en la base de datos
#~ }
#~ elsif (defined $name && defined $number)
#~ {
	#~ print "Las dos\n";
#~ }
 
#~ print "Fetch '$name'\n";
my ($fun1, $fun2) = @ARGV;
my @fun3 = ($fun1, $fun2);
my $count = 0;
foreach (0..$#ARGV)
{
	$count++;
}
print "$count\n";
