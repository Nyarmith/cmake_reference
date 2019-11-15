function(add outvar arg1 arg2)
    math(EXPR out "${arg1} + ${arg2}")
    set(${outvar} ${out} PARENT_SCOPE)
endfunction()

set(ayy 0)
add(ayy 2 3)
message("result: ${ayy}")
