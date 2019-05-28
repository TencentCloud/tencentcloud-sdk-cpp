#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(ocr_public_header
  include/tencentcloud/ocr/v20181119/OcrClient.h
  )

set(ocr_public_header_model
  include/tencentcloud/ocr/v20181119/model/ArithmeticOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/EnglishOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/GeneralAccurateOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/GeneralFastOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/TextTable.h
  include/tencentcloud/ocr/v20181119/model/GeneralAccurateOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/GeneralBasicOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/VinOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/EnglishOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/WaybillOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/IDCardOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/TextDetectionEn.h
  include/tencentcloud/ocr/v20181119/model/ArithmeticOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/TableOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/Coord.h
  include/tencentcloud/ocr/v20181119/model/WaybillOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/TextWaybill.h
  include/tencentcloud/ocr/v20181119/model/TextArithmetic.h
  include/tencentcloud/ocr/v20181119/model/IDCardOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/TextDetection.h
  include/tencentcloud/ocr/v20181119/model/VinOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/WaybillObj.h
  include/tencentcloud/ocr/v20181119/model/TableOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/GeneralFastOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/GeneralBasicOCRRequest.h
  )

set(ocr_src
  src/v20181119/OcrClient.cpp
  src/v20181119/model/ArithmeticOCRResponse.cpp
  src/v20181119/model/EnglishOCRRequest.cpp
  src/v20181119/model/GeneralAccurateOCRResponse.cpp
  src/v20181119/model/GeneralFastOCRRequest.cpp
  src/v20181119/model/TextTable.cpp
  src/v20181119/model/GeneralAccurateOCRRequest.cpp
  src/v20181119/model/GeneralBasicOCRResponse.cpp
  src/v20181119/model/VinOCRRequest.cpp
  src/v20181119/model/EnglishOCRResponse.cpp
  src/v20181119/model/WaybillOCRResponse.cpp
  src/v20181119/model/IDCardOCRResponse.cpp
  src/v20181119/model/TextDetectionEn.cpp
  src/v20181119/model/ArithmeticOCRRequest.cpp
  src/v20181119/model/TableOCRResponse.cpp
  src/v20181119/model/Coord.cpp
  src/v20181119/model/WaybillOCRRequest.cpp
  src/v20181119/model/TextWaybill.cpp
  src/v20181119/model/TextArithmetic.cpp
  src/v20181119/model/IDCardOCRRequest.cpp
  src/v20181119/model/TextDetection.cpp
  src/v20181119/model/VinOCRResponse.cpp
  src/v20181119/model/WaybillObj.cpp
  src/v20181119/model/TableOCRRequest.cpp
  src/v20181119/model/GeneralFastOCRResponse.cpp
  src/v20181119/model/GeneralBasicOCRRequest.cpp
  )

set(ocr_include
    include/tencentcloud/ocr
  )

add_library(ocr ${LIB_TYPE}
  ${ocr_public_header}
  ${ocr_public_header_model}
  ${ocr_src})

set_target_properties(ocr
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ocr
  )

target_include_directories(ocr
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ocr
  core)

#install(FILES ${ocr_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ocr/v20181119)
#install(FILES ${ocr_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ocr/v20181119/model)
install(DIRECTORY ${ocr_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ocr
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
