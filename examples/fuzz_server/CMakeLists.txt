include_directories(
   .
)

set(server_example_control_SRCS
   fuzz_server_control.c
   static_model.c
)

IF(MSVC)
set_source_files_properties(${fuzz_server_control_SRCS}
                                       PROPERTIES LANGUAGE CXX)
ENDIF(MSVC)

add_executable(fuzz_server_control
  ${fuzz_server_control_SRCS}
)

target_link_libraries(fuzz_server_control
    iec61850
)
