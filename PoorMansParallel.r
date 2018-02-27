
# !!! insert name of package in which this is inserted

get_nb_threads <- function() {
  .Call("get_nb_threads",  PACKAGE = "")
}

set_nb_threads <- function(n) {
  if(missing(n))
    .Call("set_nb_threads_to_default", PACKAGE = "")
  else
    .Call("set_nb_threads",  PACKAGE = "", n)
}



