cmake_minimum_required(VERSION 3.7)

project(logcabin2)

add_compile_options(-std=c++11)
add_compile_options(-O0)
add_compile_options(-ggdb3)
add_compile_options(-fpermissive)
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
add_compile_options(-fno-access-control)
#add_compile_options(-Weffc++)

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

set(PROTOCOL_SOURCE_FILES
            Protocol/Client/Client.pb.cc
            Protocol/Raft/Raft.pb.cc
            Protocol/Raft/RaftLogMetadata.pb.cc
            Protocol/Server/ServerControl.pb.cc
            Protocol/Server/ServerStats.pb.cc
            Protocol/Snapshot/SnapshotMetadata.pb.cc
            Protocol/Snapshot/SnapshotStateMachine.pb.cc
            Protocol/Snapshot/SnapshotStats.pb.cc
            Protocol/Storage/SegmentedLog.pb.cc
            Protocol/Storage/SimpleFileLog.pb.cc
            Protocol/Tree/Snapshot.pb.cc
            Protocol/Test/ProtoBufTest.pb.cc
)

file(GLOB CLIENT_TEST_SOURCE_FILES "Client/*Test.cc" "Client/*Mock.cc")
file(GLOB CORE_TEST_SOURCE_FILES "Core/*Test.cc" "Core/*Mock.cc")
file(GLOB EVENT_TEST_SOURCE_FILES "Event/*Test.cc" "Event/*Mock.cc")
file(GLOB RPC_TEST_SOURCE_FILES "RPC/*Test.cc" "RPC/*Mock.cc")
file(GLOB SERVER_TEST_SOURCE_FILES "Server/*Test.cc" "Server/*Mock.cc")
file(GLOB STORAGE_TEST_SOURCE_FILES "Storage/*Test.cc" "Storage/*Mock.cc")
file(GLOB TREE_TEST_SOURCE_FILES "Tree/*Test.cc" "Tree/*Mock.cc")

set(LOGCABIN_MAIN_SOURCE_FILES Server/Main.cc)
set(LOGCABIN_TEST_MAIN_SOURCE_FILES test/TestRunner.cc)

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

set(INSTALL_PATH ${CMAKE_CURRENT_BINARY_DIR}/logcabin)
install(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/LogCabin DESTINATION ${INSTALL_PATH}/bin/)
install(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/TestRunner DESTINATION ${INSTALL_PATH}/bin/)
install(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/liblogcabin.a DESTINATION ${INSTALL_PATH}/lib/)
