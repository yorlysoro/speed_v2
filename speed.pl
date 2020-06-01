use strict;
use warnings;
require 'axel.pl';

my ($fun1, $fun2) = @ARGV;
my $count = 0;
foreach (0..$#ARGV)
{
	$count++;
}
if(not defined $fun1)
{
	print "No ha declarado la accion a hacer\n";
	print "Use upgrade, dist-upgrade, upgrade-all o install\n";
}
elsif($fun1 eq "upgrade" || $fun1 eq "dist-upgrade" || $fun1 eq "upgrade-all")
{
	verificar1($fun1);
}
elsif($count == 2 && $fun1 eq "install")
{
	verificar2($fun1,$fun2);
}
else
{
	print "Use upgrade, dist-upgrade, upgrade-all o install seguido del nombre del programa\n";
}
