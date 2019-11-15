get_filename_component(outvar strn.cmake ABSOLUTE)
message("get_filename_component result: ${outvar}")
string(REPLACE "strn.cmake" "img.jpg" outvar ${outvar})
message("string replace result: ${outvar}")
file(DOWNLOAD http://i.imgur.com/RFWMSfo.jpg ${outvar}) # why not, cmake
