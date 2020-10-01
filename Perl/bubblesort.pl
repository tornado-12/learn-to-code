sub bbl_sort {
  if (defined wantarray) {
    @_ = wantarray ? @_ : @{shift(@_)};
  }

  SCAN: {
    foreach (0..(@_-2)) {
      if ($_[$_] gt $_[$_+1]) {
        @_[$_, $_+1] = @_[$_+1, $_];
        redo SCAN;
      }
    }
  }

  wantarray ? @_ : [@_];
}

# Try it, showing one of the games
my ($first, $second, $third) = qw(not in order?);
bbl_sort($first, $second, $third);
print map "$_\n", $first, $second, $third;