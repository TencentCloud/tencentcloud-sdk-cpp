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

set(tcb_public_header
  include/tencentcloud/tcb/v20180608/TcbClient.h
  )

set(tcb_public_header_model
  include/tencentcloud/tcb/v20180608/model/CreateHostingDomainResponse.h
  include/tencentcloud/tcb/v20180608/model/CreateStaticStoreResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribeEnvLimitRequest.h
  include/tencentcloud/tcb/v20180608/model/DescribeQuotaDataResponse.h
  include/tencentcloud/tcb/v20180608/model/CheckTcbServiceResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribeEndUserLoginStatisticRequest.h
  include/tencentcloud/tcb/v20180608/model/StorageInfo.h
  include/tencentcloud/tcb/v20180608/model/LoginStatistic.h
  include/tencentcloud/tcb/v20180608/model/FunctionInfo.h
  include/tencentcloud/tcb/v20180608/model/CommonServiceAPIRequest.h
  include/tencentcloud/tcb/v20180608/model/DescribeEndUsersResponse.h
  include/tencentcloud/tcb/v20180608/model/AuthDomain.h
  include/tencentcloud/tcb/v20180608/model/LogServiceInfo.h
  include/tencentcloud/tcb/v20180608/model/CreateStaticStoreRequest.h
  include/tencentcloud/tcb/v20180608/model/CommonServiceAPIResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribeEndUserStatisticResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribePostpayPackageFreeQuotasRequest.h
  include/tencentcloud/tcb/v20180608/model/CreateAuthDomainResponse.h
  include/tencentcloud/tcb/v20180608/model/ModifyEnvRequest.h
  include/tencentcloud/tcb/v20180608/model/DescribeEndUsersRequest.h
  include/tencentcloud/tcb/v20180608/model/DescribeEnvsRequest.h
  include/tencentcloud/tcb/v20180608/model/DescribeQuotaDataRequest.h
  include/tencentcloud/tcb/v20180608/model/ReinstateEnvResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribeEndUserStatisticRequest.h
  include/tencentcloud/tcb/v20180608/model/PackageFreeQuotaInfo.h
  include/tencentcloud/tcb/v20180608/model/DescribeEnvFreeQuotaResponse.h
  include/tencentcloud/tcb/v20180608/model/CheckTcbServiceRequest.h
  include/tencentcloud/tcb/v20180608/model/ModifyDatabaseACLResponse.h
  include/tencentcloud/tcb/v20180608/model/StaticStorageInfo.h
  include/tencentcloud/tcb/v20180608/model/DescribeExtraPkgBillingInfoResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribeExtraPkgBillingInfoRequest.h
  include/tencentcloud/tcb/v20180608/model/DescribeEnvFreeQuotaRequest.h
  include/tencentcloud/tcb/v20180608/model/DatabasesInfo.h
  include/tencentcloud/tcb/v20180608/model/DescribeAuthDomainsRequest.h
  include/tencentcloud/tcb/v20180608/model/DeleteEndUserRequest.h
  include/tencentcloud/tcb/v20180608/model/DescribeAuthDomainsResponse.h
  include/tencentcloud/tcb/v20180608/model/ReinstateEnvRequest.h
  include/tencentcloud/tcb/v20180608/model/DescribeDatabaseACLRequest.h
  include/tencentcloud/tcb/v20180608/model/CreateHostingDomainRequest.h
  include/tencentcloud/tcb/v20180608/model/DestroyStaticStoreResponse.h
  include/tencentcloud/tcb/v20180608/model/DeleteEndUserResponse.h
  include/tencentcloud/tcb/v20180608/model/EnvBillingInfoItem.h
  include/tencentcloud/tcb/v20180608/model/PlatformStatistic.h
  include/tencentcloud/tcb/v20180608/model/DescribeDatabaseACLResponse.h
  include/tencentcloud/tcb/v20180608/model/EnvInfo.h
  include/tencentcloud/tcb/v20180608/model/DestroyEnvRequest.h
  include/tencentcloud/tcb/v20180608/model/DestroyEnvResponse.h
  include/tencentcloud/tcb/v20180608/model/ModifyDatabaseACLRequest.h
  include/tencentcloud/tcb/v20180608/model/DestroyStaticStoreRequest.h
  include/tencentcloud/tcb/v20180608/model/PostpayEnvQuota.h
  include/tencentcloud/tcb/v20180608/model/EndUserInfo.h
  include/tencentcloud/tcb/v20180608/model/DescribeEnvLimitResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribePostpayPackageFreeQuotasResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribeEndUserLoginStatisticResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribeEnvsResponse.h
  include/tencentcloud/tcb/v20180608/model/ModifyEnvResponse.h
  include/tencentcloud/tcb/v20180608/model/OrderInfo.h
  include/tencentcloud/tcb/v20180608/model/CreateAuthDomainRequest.h
  )

set(tcb_src
  src/v20180608/TcbClient.cpp
  src/v20180608/model/CreateHostingDomainResponse.cpp
  src/v20180608/model/CreateStaticStoreResponse.cpp
  src/v20180608/model/DescribeEnvLimitRequest.cpp
  src/v20180608/model/DescribeQuotaDataResponse.cpp
  src/v20180608/model/CheckTcbServiceResponse.cpp
  src/v20180608/model/DescribeEndUserLoginStatisticRequest.cpp
  src/v20180608/model/StorageInfo.cpp
  src/v20180608/model/LoginStatistic.cpp
  src/v20180608/model/FunctionInfo.cpp
  src/v20180608/model/CommonServiceAPIRequest.cpp
  src/v20180608/model/DescribeEndUsersResponse.cpp
  src/v20180608/model/AuthDomain.cpp
  src/v20180608/model/LogServiceInfo.cpp
  src/v20180608/model/CreateStaticStoreRequest.cpp
  src/v20180608/model/CommonServiceAPIResponse.cpp
  src/v20180608/model/DescribeEndUserStatisticResponse.cpp
  src/v20180608/model/DescribePostpayPackageFreeQuotasRequest.cpp
  src/v20180608/model/CreateAuthDomainResponse.cpp
  src/v20180608/model/ModifyEnvRequest.cpp
  src/v20180608/model/DescribeEndUsersRequest.cpp
  src/v20180608/model/DescribeEnvsRequest.cpp
  src/v20180608/model/DescribeQuotaDataRequest.cpp
  src/v20180608/model/ReinstateEnvResponse.cpp
  src/v20180608/model/DescribeEndUserStatisticRequest.cpp
  src/v20180608/model/PackageFreeQuotaInfo.cpp
  src/v20180608/model/DescribeEnvFreeQuotaResponse.cpp
  src/v20180608/model/CheckTcbServiceRequest.cpp
  src/v20180608/model/ModifyDatabaseACLResponse.cpp
  src/v20180608/model/StaticStorageInfo.cpp
  src/v20180608/model/DescribeExtraPkgBillingInfoResponse.cpp
  src/v20180608/model/DescribeExtraPkgBillingInfoRequest.cpp
  src/v20180608/model/DescribeEnvFreeQuotaRequest.cpp
  src/v20180608/model/DatabasesInfo.cpp
  src/v20180608/model/DescribeAuthDomainsRequest.cpp
  src/v20180608/model/DeleteEndUserRequest.cpp
  src/v20180608/model/DescribeAuthDomainsResponse.cpp
  src/v20180608/model/ReinstateEnvRequest.cpp
  src/v20180608/model/DescribeDatabaseACLRequest.cpp
  src/v20180608/model/CreateHostingDomainRequest.cpp
  src/v20180608/model/DestroyStaticStoreResponse.cpp
  src/v20180608/model/DeleteEndUserResponse.cpp
  src/v20180608/model/EnvBillingInfoItem.cpp
  src/v20180608/model/PlatformStatistic.cpp
  src/v20180608/model/DescribeDatabaseACLResponse.cpp
  src/v20180608/model/EnvInfo.cpp
  src/v20180608/model/DestroyEnvRequest.cpp
  src/v20180608/model/DestroyEnvResponse.cpp
  src/v20180608/model/ModifyDatabaseACLRequest.cpp
  src/v20180608/model/DestroyStaticStoreRequest.cpp
  src/v20180608/model/PostpayEnvQuota.cpp
  src/v20180608/model/EndUserInfo.cpp
  src/v20180608/model/DescribeEnvLimitResponse.cpp
  src/v20180608/model/DescribePostpayPackageFreeQuotasResponse.cpp
  src/v20180608/model/DescribeEndUserLoginStatisticResponse.cpp
  src/v20180608/model/DescribeEnvsResponse.cpp
  src/v20180608/model/ModifyEnvResponse.cpp
  src/v20180608/model/OrderInfo.cpp
  src/v20180608/model/CreateAuthDomainRequest.cpp
  )

set(tcb_include
    include/tencentcloud/tcb
  )

add_library(tcb ${LIB_TYPE}
  ${tcb_public_header}
  ${tcb_public_header_model}
  ${tcb_src})

set_target_properties(tcb
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tcb
  )

target_include_directories(tcb
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tcb
  core)

#install(FILES ${tcb_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tcb/v20180608)
#install(FILES ${tcb_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tcb/v20180608/model)
install(DIRECTORY ${tcb_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tcb
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
