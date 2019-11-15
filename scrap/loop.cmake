set(list "a;b;c")
foreach(e IN LISTS list)
    message("i'm on ${e}")
endforeach()

set(still_a_list q w e)
foreach(e IN LISTS still_a_list)
    message("i'm on ${e}")
endforeach()
