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

set(ic_public_header
  include/tencentcloud/ic/v20190307/IcClient.h
  )

set(ic_public_header_model
  include/tencentcloud/ic/v20190307/model/DescribeCardsResponse.h
  include/tencentcloud/ic/v20190307/model/DescribeCardResponse.h
  include/tencentcloud/ic/v20190307/model/CardInfo.h
  include/tencentcloud/ic/v20190307/model/DescribeAppRequest.h
  include/tencentcloud/ic/v20190307/model/PayForExtendDataResponse.h
  include/tencentcloud/ic/v20190307/model/ModifyUserCardRemarkRequest.h
  include/tencentcloud/ic/v20190307/model/SendMultiSmsRequest.h
  include/tencentcloud/ic/v20190307/model/ResRenew.h
  include/tencentcloud/ic/v20190307/model/ResOrderIds.h
  include/tencentcloud/ic/v20190307/model/DescribeSmsResponse.h
  include/tencentcloud/ic/v20190307/model/ResSms.h
  include/tencentcloud/ic/v20190307/model/DescribeAppResponse.h
  include/tencentcloud/ic/v20190307/model/DescribeCardRequest.h
  include/tencentcloud/ic/v20190307/model/SendSmsResponse.h
  include/tencentcloud/ic/v20190307/model/SendSmsRequest.h
  include/tencentcloud/ic/v20190307/model/SmsRet.h
  include/tencentcloud/ic/v20190307/model/AppInfo.h
  include/tencentcloud/ic/v20190307/model/RenewCardsResponse.h
  include/tencentcloud/ic/v20190307/model/PayForExtendDataRequest.h
  include/tencentcloud/ic/v20190307/model/SmsSid.h
  include/tencentcloud/ic/v20190307/model/SendMultiSmsResponse.h
  include/tencentcloud/ic/v20190307/model/CardList.h
  include/tencentcloud/ic/v20190307/model/DescribeSmsRequest.h
  include/tencentcloud/ic/v20190307/model/ModifyUserCardRemarkResponse.h
  include/tencentcloud/ic/v20190307/model/DescribeCardsRequest.h
  include/tencentcloud/ic/v20190307/model/RenewCardsRequest.h
  )

set(ic_src
  src/v20190307/IcClient.cpp
  src/v20190307/model/DescribeCardsResponse.cpp
  src/v20190307/model/DescribeCardResponse.cpp
  src/v20190307/model/CardInfo.cpp
  src/v20190307/model/DescribeAppRequest.cpp
  src/v20190307/model/PayForExtendDataResponse.cpp
  src/v20190307/model/ModifyUserCardRemarkRequest.cpp
  src/v20190307/model/SendMultiSmsRequest.cpp
  src/v20190307/model/ResRenew.cpp
  src/v20190307/model/ResOrderIds.cpp
  src/v20190307/model/DescribeSmsResponse.cpp
  src/v20190307/model/ResSms.cpp
  src/v20190307/model/DescribeAppResponse.cpp
  src/v20190307/model/DescribeCardRequest.cpp
  src/v20190307/model/SendSmsResponse.cpp
  src/v20190307/model/SendSmsRequest.cpp
  src/v20190307/model/SmsRet.cpp
  src/v20190307/model/AppInfo.cpp
  src/v20190307/model/RenewCardsResponse.cpp
  src/v20190307/model/PayForExtendDataRequest.cpp
  src/v20190307/model/SmsSid.cpp
  src/v20190307/model/SendMultiSmsResponse.cpp
  src/v20190307/model/CardList.cpp
  src/v20190307/model/DescribeSmsRequest.cpp
  src/v20190307/model/ModifyUserCardRemarkResponse.cpp
  src/v20190307/model/DescribeCardsRequest.cpp
  src/v20190307/model/RenewCardsRequest.cpp
  )

set(ic_include
    include/tencentcloud/ic
  )

add_library(ic ${LIB_TYPE}
  ${ic_public_header}
  ${ic_public_header_model}
  ${ic_src})

set_target_properties(ic
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ic
  )

target_include_directories(ic
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ic
  core)

#install(FILES ${ic_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ic/v20190307)
#install(FILES ${ic_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ic/v20190307/model)
install(DIRECTORY ${ic_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ic
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
