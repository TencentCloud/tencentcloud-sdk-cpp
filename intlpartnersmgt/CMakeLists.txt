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

set(intlpartnersmgt_public_header
  include/tencentcloud/intlpartnersmgt/v20220928/IntlpartnersmgtClient.h
  )

set(intlpartnersmgt_public_header_model
  include/tencentcloud/intlpartnersmgt/v20220928/model/GetCountryCodesRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryPartnerCreditResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherListByUinRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherAmountByUinResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherAmountByUinItem.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditAllocationHistoryData.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/AllocateCustomerCreditRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/GetCountryCodesResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryCustomersCreditRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditByUinListRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/CreateAccountResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryPartnerCreditRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditByUinListResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherPoolResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditAllocationHistoryResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/CreateAccountRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryDirectCustomersCreditRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/AllocateCustomerCreditResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherListByUinVoucherItem.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherAmountByUinRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryDirectCustomersCreditData.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditAllocationHistoryRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/CountryCodeItem.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryDirectCustomersCreditResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherListByUinResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherPoolRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherListByUinItem.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryCustomersCreditData.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryCustomersCreditResponse.h
  )

set(intlpartnersmgt_src
  src/v20220928/IntlpartnersmgtClient.cpp
  src/v20220928/model/GetCountryCodesRequest.cpp
  src/v20220928/model/QueryPartnerCreditResponse.cpp
  src/v20220928/model/QueryVoucherListByUinRequest.cpp
  src/v20220928/model/QueryVoucherAmountByUinResponse.cpp
  src/v20220928/model/QueryVoucherAmountByUinItem.cpp
  src/v20220928/model/QueryCreditAllocationHistoryData.cpp
  src/v20220928/model/AllocateCustomerCreditRequest.cpp
  src/v20220928/model/GetCountryCodesResponse.cpp
  src/v20220928/model/QueryCustomersCreditRequest.cpp
  src/v20220928/model/QueryCreditByUinListRequest.cpp
  src/v20220928/model/CreateAccountResponse.cpp
  src/v20220928/model/QueryPartnerCreditRequest.cpp
  src/v20220928/model/QueryCreditByUinListResponse.cpp
  src/v20220928/model/QueryVoucherPoolResponse.cpp
  src/v20220928/model/QueryCreditAllocationHistoryResponse.cpp
  src/v20220928/model/CreateAccountRequest.cpp
  src/v20220928/model/QueryDirectCustomersCreditRequest.cpp
  src/v20220928/model/AllocateCustomerCreditResponse.cpp
  src/v20220928/model/QueryVoucherListByUinVoucherItem.cpp
  src/v20220928/model/QueryVoucherAmountByUinRequest.cpp
  src/v20220928/model/QueryDirectCustomersCreditData.cpp
  src/v20220928/model/QueryCreditAllocationHistoryRequest.cpp
  src/v20220928/model/CountryCodeItem.cpp
  src/v20220928/model/QueryDirectCustomersCreditResponse.cpp
  src/v20220928/model/QueryVoucherListByUinResponse.cpp
  src/v20220928/model/QueryVoucherPoolRequest.cpp
  src/v20220928/model/QueryVoucherListByUinItem.cpp
  src/v20220928/model/QueryCustomersCreditData.cpp
  src/v20220928/model/QueryCustomersCreditResponse.cpp
  )

set(intlpartnersmgt_include
    include/tencentcloud/intlpartnersmgt
  )

add_library(intlpartnersmgt ${LIB_TYPE}
  ${intlpartnersmgt_public_header}
  ${intlpartnersmgt_public_header_model}
  ${intlpartnersmgt_src})

set_target_properties(intlpartnersmgt
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}intlpartnersmgt
  )

target_include_directories(intlpartnersmgt
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(intlpartnersmgt
  core)

#install(FILES ${intlpartnersmgt_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/intlpartnersmgt/v20220928)
#install(FILES ${intlpartnersmgt_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/intlpartnersmgt/v20220928/model)
install(DIRECTORY ${intlpartnersmgt_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS intlpartnersmgt
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
