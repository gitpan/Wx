#############################################################################
## Name:        Bitmap.pm
## Purpose:     Wx::Timer and Wx::TimerRunner
## Author:      Mattia Barbon
## Modified by:
## Created:     14/ 2/2001
## RCS-ID:      
## Copyright:   (c) 2001 Mattia Barbon
## Licence:     This program is free software; you can redistribute it and/or
##              modify it under the same terms as Perl itself
#############################################################################

package Wx::Timer;

use strict;
use Carp;

sub new {
  my $class = shift;

  @_ == 0                              && return Wx::Timer::newDefault( $class, );
  Wx::_match( @_, $Wx::_wehd_n, 1, 1 ) && return Wx::Timer::newEH( $class, @_ );
  croak Wx::_ovl_error;
}

package Wx::TimerRunner;

use strict;
use Carp;
use UNIVERSAL qw(isa);

sub new {
  my $class = shift;
  my $this = { TIMER => shift };

  if( @_ > 0 ) { $this->{TIMER}->Start( @_ ) }

  bless $this, $class;

  $this;
}

sub DESTROY {
  my $this = shift;

  $this->{TIMER}->Stop if $this->{TIMER}->IsRunning;
}

sub Start {
  my( $this, $milliseconds, $oneshot ) = @_;

  $this->{TIMER}->Start( $milliseconds, $oneshot );
}

1;

# Local variables: #
# mode: cperl #
# End: #
