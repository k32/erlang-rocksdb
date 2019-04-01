if(${TARGET_ARCH} STREQUAL ANDROID)
    ExternalProject_Add(AwsChecksums
        PREFIX ${AWS_DEPS_BUILD_DIR}
        GIT_REPOSITORY ${AWS_CHECKSUMS_URL}
        GIT_TAG ${AWS_CHECKSUMS_TAG}
        BUILD_IN_SOURCE 0
        UPDATE_COMMAND ""
        CMAKE_ARGS
        -DCMAKE_INSTALL_PREFIX=${AWS_DEPS_INSTALL_DIR}
        -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
        -DBUILD_SHARED_LIBS=${BUILD_SHARED_LIBS}
        -DCMAKE_TOOLCHAIN_FILE=${CMAKE_TOOLCHAIN_FILE}
        -DANDROID_NATIVE_API_LEVEL=${ANDROID_NATIVE_API_LEVEL}
        -DANDROID_ABI=${ANDROID_ABI}
        -DANDROID_TOOLCHAIN_NAME=${ANDROID_TOOLCHAIN_NAME}
        -DANDROID_STANDALONE_TOOLCHAIN=${ANDROID_STANDALONE_TOOLCHAIN}
        -DANDROID_STL=${ANDROID_STL}
        )
elseif(TARGET_ARCH STREQUAL "APPLE" AND DEFINED CMAKE_OSX_ARCHITECTURES AND NOT CMAKE_OSX_ARCHITECTURES STREQUAL "")
    message("Cross compiling aws-checksums for architecture ${CMAKE_OSX_ARCHITECTURES}")
    ExternalProject_Add(AwsChecksums
        PREFIX ${AWS_DEPS_BUILD_DIR}
        GIT_REPOSITORY ${AWS_CHECKSUMS_URL}
        GIT_TAG ${AWS_CHECKSUMS_TAG}
        BUILD_IN_SOURCE 0
        UPDATE_COMMAND ""
        CMAKE_ARGS
        -DCMAKE_INSTALL_PREFIX=${AWS_DEPS_INSTALL_DIR}
        -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
        -DBUILD_SHARED_LIBS=${BUILD_SHARED_LIBS}
        -DCMAKE_TOOLCHAIN_FILE=${CMAKE_TOOLCHAIN_FILE}
        -DCMAKE_OSX_SYSROOT=${CMAKE_OSX_SYSROOT}
        -DCMAKE_OSX_ARCHITECTURES=${CMAKE_OSX_ARCHITECTURES}
        -DCMAKE_SYSTEM_NAME=${CMAKE_SYSTEM_NAME}
        -DCMAKE_C_FLAGS=${CMAKE_C_FLAGS}
        )
else()
    ExternalProject_Add(AwsChecksums
        PREFIX ${AWS_DEPS_BUILD_DIR}
        GIT_REPOSITORY ${AWS_CHECKSUMS_URL}
        GIT_TAG ${AWS_CHECKSUMS_TAG}
        BUILD_IN_SOURCE 0
        UPDATE_COMMAND ""
        CMAKE_ARGS
        -DCMAKE_INSTALL_PREFIX=${AWS_DEPS_INSTALL_DIR}
        -DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
        -DBUILD_SHARED_LIBS=${BUILD_SHARED_LIBS}
        -DSTATIC_CRT=${STATIC_CRT}
        -DCMAKE_TOOLCHAIN_FILE=${CMAKE_TOOLCHAIN_FILE}
        -DCMAKE_RUNTIME_OUTPUT_DIRECTORY=${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
        )
endif()


