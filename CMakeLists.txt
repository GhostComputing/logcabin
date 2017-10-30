cmake_minimum_required(VERSION 3.7)

project(logcabin2)

add_compile_options(-Wall)
add_compile_options(-Wextra)
add_compile_options(-Wcast-align)
add_compile_options(-Wcast-qual)
add_compile_options(-Wconversion)
add_compile_options(-Wformat=2)
add_compile_options(-Wmissing-format-attribute)
add_compile_options(-Wno-non-template-friend)
add_compile_options(-Wno-unused-parameter)
add_compile_options(-Woverloaded-virtual)
add_compile_options(-Wwrite-strings)
add_compile_options(-DSWIG)
#add_compile_options(-Weffc++) # it will generate lots of error message and compile failed

add_compile_options(-std=c++11)
add_compile_options(-O0)
add_compile_options(-ggdb3)
add_compile_options(-fno-access-control)
add_compile_options(-fpermissive)

# Compile LogCabin
include_directories(
            ${CMAKE_CURRENT_SOURCE_DIR}
            ${CMAKE_CURRENT_SOURCE_DIR}/include
            ${CMAKE_CURRENT_SOURCE_DIR}/Protocol/Client
            ${CMAKE_CURRENT_SOURCE_DIR}/Deps/gtest/include
)

set(CLIENT_SOURCE_FILES
            Client/Backoff.cc
            Client/Client.cc
            Client/ClientImpl.cc
            Client/LeaderRPC.cc
            Client/MockClientImpl.cc
            Client/SessionManager.cc
            Client/Util.cc
)

set(CORE_SOURCE_FILES
            Core/Buffer.cc
            Core/Checksum.cc
            Core/ConditionVariable.cc
            Core/Config.cc
            Core/Debug.cc
            Core/ProtoBuf.cc
            Core/Random.cc
            Core/RollingStat.cc
            Core/StringUtil.cc
            Core/ThreadId.cc
            Core/Time.cc
            Core/Util.cc
)

set(EVENT_SOURCE_FILES
            Event/File.cc
            Event/Loop.cc
            Event/Signal.cc
            Event/Timer.cc
)

set(RPC_SOURCE_FILES
            RPC/Address.cc
            RPC/ClientRPC.cc
            RPC/ClientSession.cc
            RPC/MessageSocket.cc
            RPC/OpaqueClientRPC.cc
            RPC/OpaqueServer.cc
            RPC/OpaqueServerRPC.cc
            RPC/Protocol.cc
            RPC/Server.cc
            RPC/ServerRPC.cc
            RPC/ThreadDispatchService.cc
)

set(SERVER_SOURCE_FILES
            Server/ClientService.cc
            Server/ControlService.cc
            Server/Globals.cc
            Server/RaftConsensus.cc
            Server/RaftConsensusInvariants.cc
            Server/RaftService.cc
            Server/ServerStats.cc
            Server/StateMachine.cc
)

set(STORAGE_SOURCE_FILES
            Storage/FilesystemUtil.cc
            Storage/Layout.cc
            Storage/Log.cc
            Storage/LogFactory.cc
            Storage/MemoryLog.cc
            Storage/SegmentedLog.cc
            Storage/SimpleFileLog.cc
            Storage/SnapshotFile.cc
)

set(TREE_SOURCE_FILES
            Tree/ProtoBuf.cc
            Tree/Tree.cc
)

set(PROTOBUF_CLIENT_SOURCE_FILES
        Protocol/Client/Client.pb.cc
)

set(PROTOBUF_RAFT_SOURCE_FILES
        Protocol/Raft/Raft.pb.cc
        Protocol/Raft/RaftLogMetadata.pb.cc
)

set(PROTOBUF_SERVER_SOURCE_FILES
        Protocol/Server/ServerControl.pb.cc
        Protocol/Server/ServerStats.pb.cc
)

set(PROTOBUF_SNAPSHOT_SOURCE_FILES
        Protocol/Snapshot/SnapshotMetadata.pb.cc
        Protocol/Snapshot/SnapshotStateMachine.pb.cc
        Protocol/Snapshot/SnapshotStats.pb.cc
)

set(PROTOBUF_STORAGE_SOURCE_FILES
        Protocol/Storage/SegmentedLog.pb.cc
        Protocol/Storage/SimpleFileLog.pb.cc
)

set(PROTOBUF_TREE_SOURCE_FILES
        Protocol/Tree/Snapshot.pb.cc
)

set(PROTOBUF_TEST_SOURCE_FILES
        Protocol/Test/ProtoBufTest.pb.cc
)

set(PROTOCOL_SOURCE_FILES
        ${PROTOBUF_CLIENT_SOURCE_FILES}
        ${PROTOBUF_RAFT_SOURCE_FILES}
        ${PROTOBUF_SERVER_SOURCE_FILES}
        ${PROTOBUF_SNAPSHOT_SOURCE_FILES}
        ${PROTOBUF_STORAGE_SOURCE_FILES}
        ${PROTOBUF_TREE_SOURCE_FILES}
        ${PROTOBUF_TEST_SOURCE_FILES}
)

file(GLOB CLIENT_TEST_SOURCE_FILES "Client/*Test.cc" "Client/*Mock.cc")
file(GLOB CORE_TEST_SOURCE_FILES "Core/*Test.cc" "Core/*Mock.cc")
file(GLOB EVENT_TEST_SOURCE_FILES "Event/*Test.cc" "Event/*Mock.cc")
file(GLOB RPC_TEST_SOURCE_FILES "RPC/*Test.cc" "RPC/*Mock.cc")
file(GLOB SERVER_TEST_SOURCE_FILES "Server/*Test.cc" "Server/*Mock.cc")
file(GLOB STORAGE_TEST_SOURCE_FILES "Storage/*Test.cc" "Storage/*Mock.cc")
file(GLOB TREE_TEST_SOURCE_FILES "Tree/*Test.cc" "Tree/*Mock.cc")

set(LOGCABIN_MAIN_SOURCE_FILES Server/Main.cc)
set(LOGCABIN_TEST_MAIN_SOURCE_FILES Test/TestRunner.cc)

if (APPLE)
    message(STATUS "Can not find library in non-Linux machine")
elseif (UNIX)
    find_library(PROTOBUF_LIB_STATIC NAMES "libprotobuf.a")
    find_library(CRYPTOPP_LIB_STATIC NAMES libcrypto++.a)
    set(THIRD_PARTY_LIBS
            ${PROTOBUF_LIB_STATIC}
            ${CRYPTOPP_LIB_STATIC}
            pthread
    )
else ()
    message(STATUS "Can not find library in non-Linux machine")
endif ()

add_executable(LogCabin
            ${LOGCABIN_MAIN_SOURCE_FILES}
            ${CLIENT_SOURCE_FILES}
            ${CORE_SOURCE_FILES}
            ${EVENT_SOURCE_FILES}
            ${RPC_SOURCE_FILES}
            ${SERVER_SOURCE_FILES}
            ${STORAGE_SOURCE_FILES}
            ${TREE_SOURCE_FILES}
            ${PROTOCOL_SOURCE_FILES}
)
target_link_libraries(LogCabin ${THIRD_PARTY_LIBS})

set(GTEST_LIB ${CMAKE_CURRENT_SOURCE_DIR}/Deps/gtest/build/libgtest.a)
add_custom_command(
        OUTPUT ${GTEST_LIB}
        COMMAND mkdir -p build
        COMMAND cd build && cmake .. && make
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/Deps/gtest
)
add_custom_target(gtest DEPENDS ${GTEST_LIB})

add_executable(TestRunner
        ${LOGCABIN_TEST_MAIN_SOURCE_FILES}
        ${CLIENT_SOURCE_FILES}
        ${CORE_SOURCE_FILES}
        ${EVENT_SOURCE_FILES}
        ${RPC_SOURCE_FILES}
        ${SERVER_SOURCE_FILES}
        ${STORAGE_SOURCE_FILES}
        ${TREE_SOURCE_FILES}
        ${PROTOCOL_SOURCE_FILES}

        ${CLIENT_TEST_SOURCE_FILES}
        ${CORE_TEST_SOURCE_FILES}
        ${EVENT_TEST_SOURCE_FILES}
        ${RPC_TEST_SOURCE_FILES}
        ${SERVER_TEST_SOURCE_FILES}
        ${STORAGE_TEST_SOURCE_FILES}
        ${TREE_TEST_SOURCE_FILES}
)
add_dependencies(TestRunner gtest)
target_link_libraries(TestRunner ${THIRD_PARTY_LIBS} ${GTEST_LIB})

add_library(logcabin STATIC
        ${CLIENT_SOURCE_FILES}
        ${CORE_SOURCE_FILES}
        ${EVENT_SOURCE_FILES}
        ${RPC_SOURCE_FILES}
        ${SERVER_SOURCE_FILES}
        ${STORAGE_SOURCE_FILES}
        ${TREE_SOURCE_FILES}
        ${PROTOCOL_SOURCE_FILES}
)

add_executable(Benchmark ${CMAKE_CURRENT_SOURCE_DIR}/Examples/Benchmark.cc)
target_link_libraries(Benchmark logcabin ${THIRD_PARTY_LIBS})
add_executable(FailoverTest ${CMAKE_CURRENT_SOURCE_DIR}/Examples/FailoverTest.cc)
target_link_libraries(FailoverTest logcabin ${THIRD_PARTY_LIBS})
add_executable(HelloWorld ${CMAKE_CURRENT_SOURCE_DIR}/Examples/HelloWorld.cc)
target_link_libraries(HelloWorld logcabin ${THIRD_PARTY_LIBS})
add_executable(Reconfigure ${CMAKE_CURRENT_SOURCE_DIR}/Examples/Reconfigure.cc)
target_link_libraries(Reconfigure logcabin ${THIRD_PARTY_LIBS})
add_executable(ReconfigureTest ${CMAKE_CURRENT_SOURCE_DIR}/Examples/ReconfigureTest.cc)
target_link_libraries(ReconfigureTest logcabin ${THIRD_PARTY_LIBS})
add_executable(SmokeTest ${CMAKE_CURRENT_SOURCE_DIR}/Examples/SmokeTest.cc)
target_link_libraries(SmokeTest logcabin ${THIRD_PARTY_LIBS})
add_executable(TreeOps ${CMAKE_CURRENT_SOURCE_DIR}/Examples/TreeOps.cc)
target_link_libraries(TreeOps logcabin ${THIRD_PARTY_LIBS})
add_executable(ServerControl ${CMAKE_CURRENT_SOURCE_DIR}/Client/ServerControl.cc)
target_link_libraries(ServerControl logcabin ${THIRD_PARTY_LIBS})
add_executable(Tool ${CMAKE_CURRENT_SOURCE_DIR}/Storage/Tool.cc ${STORAGE_SOURCE_FILES} ${PROTOBUF_SNAPSHOT_SOURCE_FILES})
target_link_libraries(Tool logcabin ${THIRD_PARTY_LIBS})

set(INSTALL_PATH ${CMAKE_CURRENT_BINARY_DIR}/logcabin)
install(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/LogCabin DESTINATION ${INSTALL_PATH}/bin/)
install(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/TestRunner DESTINATION ${INSTALL_PATH}/bin/)
install(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/Benchmark DESTINATION ${INSTALL_PATH}/bin/)
install(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/FailoverTest DESTINATION ${INSTALL_PATH}/bin/)
install(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/HelloWorld DESTINATION ${INSTALL_PATH}/bin/)
install(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/Reconfigure DESTINATION ${INSTALL_PATH}/bin/)
install(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/ReconfigureTest DESTINATION ${INSTALL_PATH}/bin/)
install(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/SmokeTest DESTINATION ${INSTALL_PATH}/bin/)
install(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/TreeOps DESTINATION ${INSTALL_PATH}/bin/)
install(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/ServerControl DESTINATION ${INSTALL_PATH}/bin/)
install(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/Tool DESTINATION ${INSTALL_PATH}/bin/)
install(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/liblogcabin.a DESTINATION ${INSTALL_PATH}/lib/)
