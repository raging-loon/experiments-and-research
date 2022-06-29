use Data::Dumper qw(Dumper);
open(FH, '<',"/etc/passwd") or die $!;

sub print_users{
  my @comp = $_[0];
  print @comp[0], "\n";
}

while(<FH>){
  my @components = split /:/, $_;
  # print Dumper \@components;
  print_users @components;

}
close(FH);