#!/usr/bin/perl -w
#Program usage: perl  PROGRAM  LIST_OF_INTEGERS
#example: 
#perl mergeSort.pl 3 2 1 139 17 -3 3 5 0 1 9 -33 3 0 5335 4 -3 3

use strict;

### MAIN ###

# ensure a list has been passed with program call
if($#ARGV == -1) {
    print STDERR "ERROR: You must specify a list of integers.\n".
        "EXAMPLE: perl mergeSort.pl 1 7 20 11 2\n\n";
    exit(-1);
}

# print outputs
print "\nBEFORE: [";
for $_ (@ARGV){
    print $_, " ";
}
print "]\n";


### merge sort ###
print scalar (@ARGV), " elements\n";  # print # elements
my @sol = @ARGV; # copy list
mergeSort( \@sol );


# more printing
print " AFTER: [";
for $_ (@sol){
    print $_, " ";
}
print "]\n";

# ensure sort was correct, comparing with built-in sort
print "CONFIRMED SORT WAS CORRECT? ";
my @sorted = sort {$a <=> $b} @ARGV; # built in numerical sort

my $i = my $j = 0;
while( $i < scalar(@sol) || $j < scalar(@sorted)){
    if( $sol[$i++] != $sorted[$j++] ){
        print "FALSE\n\n";
        exit(0);
    }
}
print "TRUE\n\n";

### END MAIN ###


# break array down in half until sorted, then call merge
#
# arg0 = array
sub mergeSort{
    my $arr = shift; #take argument (reference to array)

    #base case: array size is 1 implies it is sorted
    if( scalar(@$arr) == 1){
        return;
    }

    my $bound = int( scalar(@$arr)/2 ) ; # half array size
    my @left = @$arr[ 0 .. ($bound - 1) ]; # first half of array
    my @right = @$arr[ $bound .. ( scalar(@$arr)-1) ]; # remaining half

    # recurse while both halves must still be broken down
    mergeSort( \@left );
    mergeSort( \@right );

    # merge the two sorted halves
    merge( \@left, \@right, $arr ); #pass references

}#end sort()


# called by sort
# merge arrays a & b into arr
#
# arg0,1 = references to the two sorted arrays a & b
#   arg2 = merged array that shall contain elements of a & b
sub merge{

    #store reference to arrays
    my $aRef = shift; # store arg0 = pointer to array a
    my $bRef = shift;
    my $arr = shift;

    #store dereferences of arrays a & b
    my @a = @{$aRef};
    my @b = @{$bRef};

    my $r = my $i = my $j = 0; # indexers for @arr, @a, @b

    #fill arr in proper order while a and b both contain elements
    while( ($i < scalar(@a)) && ($j < scalar(@b)) ){
        if( $a[$i] > $b[$j]){
            @$arr[$r] = $b[$j];
            $j++;
        }
        else{
            @$arr[$r] = $a[$i];
            $i++;
        }
        $r++;
    }

    #once the while loop is broken, this means a or b has been emptied,
    #so simply need to fill arr with elements of the remaining array,
    #so fill arr with remaining (if any) elements of a
    while( $i < scalar(@a) ){
        @$arr[$r++] = $a[$i++];
    }

    #fill arr with remaining (if any) elements of b
    while( $j < scalar(@b) ){
        @$arr[$r++] = $b[$j++];
    }
}#end merge()