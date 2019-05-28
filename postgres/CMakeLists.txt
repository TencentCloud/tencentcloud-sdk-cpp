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

set(postgres_public_header
  include/tencentcloud/postgres/v20170312/PostgresClient.h
  )

set(postgres_public_header_model
  include/tencentcloud/postgres/v20170312/model/CreateDBInstancesRequest.h
  include/tencentcloud/postgres/v20170312/model/RestartDBInstanceRequest.h
  include/tencentcloud/postgres/v20170312/model/InquiryPriceRenewDBInstanceRequest.h
  include/tencentcloud/postgres/v20170312/model/SetAutoRenewFlagRequest.h
  include/tencentcloud/postgres/v20170312/model/DescribeOrdersResponse.h
  include/tencentcloud/postgres/v20170312/model/DescribeDBXlogsRequest.h
  include/tencentcloud/postgres/v20170312/model/InquiryPriceCreateDBInstancesResponse.h
  include/tencentcloud/postgres/v20170312/model/AccountInfo.h
  include/tencentcloud/postgres/v20170312/model/InquiryPriceUpgradeDBInstanceRequest.h
  include/tencentcloud/postgres/v20170312/model/DescribeAccountsRequest.h
  include/tencentcloud/postgres/v20170312/model/DescribeDBErrlogsResponse.h
  include/tencentcloud/postgres/v20170312/model/InquiryPriceCreateDBInstancesRequest.h
  include/tencentcloud/postgres/v20170312/model/ModifyDBInstanceNameRequest.h
  include/tencentcloud/postgres/v20170312/model/InquiryPriceUpgradeDBInstanceResponse.h
  include/tencentcloud/postgres/v20170312/model/DescribeDBInstancesRequest.h
  include/tencentcloud/postgres/v20170312/model/ErrLogDetail.h
  include/tencentcloud/postgres/v20170312/model/ModifyAccountRemarkResponse.h
  include/tencentcloud/postgres/v20170312/model/ModifyDBInstancesProjectResponse.h
  include/tencentcloud/postgres/v20170312/model/RenewInstanceResponse.h
  include/tencentcloud/postgres/v20170312/model/DescribeZonesRequest.h
  include/tencentcloud/postgres/v20170312/model/SpecInfo.h
  include/tencentcloud/postgres/v20170312/model/RegionInfo.h
  include/tencentcloud/postgres/v20170312/model/InitDBInstancesRequest.h
  include/tencentcloud/postgres/v20170312/model/RestartDBInstanceResponse.h
  include/tencentcloud/postgres/v20170312/model/SetAutoRenewFlagResponse.h
  include/tencentcloud/postgres/v20170312/model/DescribeDBInstancesResponse.h
  include/tencentcloud/postgres/v20170312/model/UpgradeDBInstanceResponse.h
  include/tencentcloud/postgres/v20170312/model/DBInstance.h
  include/tencentcloud/postgres/v20170312/model/DescribeProductConfigResponse.h
  include/tencentcloud/postgres/v20170312/model/ResetAccountPasswordResponse.h
  include/tencentcloud/postgres/v20170312/model/ResetAccountPasswordRequest.h
  include/tencentcloud/postgres/v20170312/model/DescribeProductConfigRequest.h
  include/tencentcloud/postgres/v20170312/model/CloseDBExtranetAccessRequest.h
  include/tencentcloud/postgres/v20170312/model/InitDBInstancesResponse.h
  include/tencentcloud/postgres/v20170312/model/DescribeDBBackupsRequest.h
  include/tencentcloud/postgres/v20170312/model/SpecItemInfo.h
  include/tencentcloud/postgres/v20170312/model/OpenDBExtranetAccessResponse.h
  include/tencentcloud/postgres/v20170312/model/Filter.h
  include/tencentcloud/postgres/v20170312/model/RenewInstanceRequest.h
  include/tencentcloud/postgres/v20170312/model/PgDeal.h
  include/tencentcloud/postgres/v20170312/model/DescribeRegionsResponse.h
  include/tencentcloud/postgres/v20170312/model/ZoneInfo.h
  include/tencentcloud/postgres/v20170312/model/DescribeAccountsResponse.h
  include/tencentcloud/postgres/v20170312/model/InquiryPriceRenewDBInstanceResponse.h
  include/tencentcloud/postgres/v20170312/model/DescribeDBErrlogsRequest.h
  include/tencentcloud/postgres/v20170312/model/DBBackup.h
  include/tencentcloud/postgres/v20170312/model/DBInstanceNetInfo.h
  include/tencentcloud/postgres/v20170312/model/ModifyDBInstancesProjectRequest.h
  include/tencentcloud/postgres/v20170312/model/ModifyDBInstanceNameResponse.h
  include/tencentcloud/postgres/v20170312/model/CloseDBExtranetAccessResponse.h
  include/tencentcloud/postgres/v20170312/model/SlowlogDetail.h
  include/tencentcloud/postgres/v20170312/model/DescribeDBInstanceAttributeResponse.h
  include/tencentcloud/postgres/v20170312/model/DescribeDBSlowlogsRequest.h
  include/tencentcloud/postgres/v20170312/model/OpenDBExtranetAccessRequest.h
  include/tencentcloud/postgres/v20170312/model/DescribeDBBackupsResponse.h
  include/tencentcloud/postgres/v20170312/model/DescribeRegionsRequest.h
  include/tencentcloud/postgres/v20170312/model/DescribeZonesResponse.h
  include/tencentcloud/postgres/v20170312/model/NormalQueryItem.h
  include/tencentcloud/postgres/v20170312/model/UpgradeDBInstanceRequest.h
  include/tencentcloud/postgres/v20170312/model/DescribeDBXlogsResponse.h
  include/tencentcloud/postgres/v20170312/model/DescribeDBInstanceAttributeRequest.h
  include/tencentcloud/postgres/v20170312/model/DescribeOrdersRequest.h
  include/tencentcloud/postgres/v20170312/model/DescribeDBSlowlogsResponse.h
  include/tencentcloud/postgres/v20170312/model/ModifyAccountRemarkRequest.h
  include/tencentcloud/postgres/v20170312/model/CreateDBInstancesResponse.h
  include/tencentcloud/postgres/v20170312/model/Xlog.h
  )

set(postgres_src
  src/v20170312/PostgresClient.cpp
  src/v20170312/model/CreateDBInstancesRequest.cpp
  src/v20170312/model/RestartDBInstanceRequest.cpp
  src/v20170312/model/InquiryPriceRenewDBInstanceRequest.cpp
  src/v20170312/model/SetAutoRenewFlagRequest.cpp
  src/v20170312/model/DescribeOrdersResponse.cpp
  src/v20170312/model/DescribeDBXlogsRequest.cpp
  src/v20170312/model/InquiryPriceCreateDBInstancesResponse.cpp
  src/v20170312/model/AccountInfo.cpp
  src/v20170312/model/InquiryPriceUpgradeDBInstanceRequest.cpp
  src/v20170312/model/DescribeAccountsRequest.cpp
  src/v20170312/model/DescribeDBErrlogsResponse.cpp
  src/v20170312/model/InquiryPriceCreateDBInstancesRequest.cpp
  src/v20170312/model/ModifyDBInstanceNameRequest.cpp
  src/v20170312/model/InquiryPriceUpgradeDBInstanceResponse.cpp
  src/v20170312/model/DescribeDBInstancesRequest.cpp
  src/v20170312/model/ErrLogDetail.cpp
  src/v20170312/model/ModifyAccountRemarkResponse.cpp
  src/v20170312/model/ModifyDBInstancesProjectResponse.cpp
  src/v20170312/model/RenewInstanceResponse.cpp
  src/v20170312/model/DescribeZonesRequest.cpp
  src/v20170312/model/SpecInfo.cpp
  src/v20170312/model/RegionInfo.cpp
  src/v20170312/model/InitDBInstancesRequest.cpp
  src/v20170312/model/RestartDBInstanceResponse.cpp
  src/v20170312/model/SetAutoRenewFlagResponse.cpp
  src/v20170312/model/DescribeDBInstancesResponse.cpp
  src/v20170312/model/UpgradeDBInstanceResponse.cpp
  src/v20170312/model/DBInstance.cpp
  src/v20170312/model/DescribeProductConfigResponse.cpp
  src/v20170312/model/ResetAccountPasswordResponse.cpp
  src/v20170312/model/ResetAccountPasswordRequest.cpp
  src/v20170312/model/DescribeProductConfigRequest.cpp
  src/v20170312/model/CloseDBExtranetAccessRequest.cpp
  src/v20170312/model/InitDBInstancesResponse.cpp
  src/v20170312/model/DescribeDBBackupsRequest.cpp
  src/v20170312/model/SpecItemInfo.cpp
  src/v20170312/model/OpenDBExtranetAccessResponse.cpp
  src/v20170312/model/Filter.cpp
  src/v20170312/model/RenewInstanceRequest.cpp
  src/v20170312/model/PgDeal.cpp
  src/v20170312/model/DescribeRegionsResponse.cpp
  src/v20170312/model/ZoneInfo.cpp
  src/v20170312/model/DescribeAccountsResponse.cpp
  src/v20170312/model/InquiryPriceRenewDBInstanceResponse.cpp
  src/v20170312/model/DescribeDBErrlogsRequest.cpp
  src/v20170312/model/DBBackup.cpp
  src/v20170312/model/DBInstanceNetInfo.cpp
  src/v20170312/model/ModifyDBInstancesProjectRequest.cpp
  src/v20170312/model/ModifyDBInstanceNameResponse.cpp
  src/v20170312/model/CloseDBExtranetAccessResponse.cpp
  src/v20170312/model/SlowlogDetail.cpp
  src/v20170312/model/DescribeDBInstanceAttributeResponse.cpp
  src/v20170312/model/DescribeDBSlowlogsRequest.cpp
  src/v20170312/model/OpenDBExtranetAccessRequest.cpp
  src/v20170312/model/DescribeDBBackupsResponse.cpp
  src/v20170312/model/DescribeRegionsRequest.cpp
  src/v20170312/model/DescribeZonesResponse.cpp
  src/v20170312/model/NormalQueryItem.cpp
  src/v20170312/model/UpgradeDBInstanceRequest.cpp
  src/v20170312/model/DescribeDBXlogsResponse.cpp
  src/v20170312/model/DescribeDBInstanceAttributeRequest.cpp
  src/v20170312/model/DescribeOrdersRequest.cpp
  src/v20170312/model/DescribeDBSlowlogsResponse.cpp
  src/v20170312/model/ModifyAccountRemarkRequest.cpp
  src/v20170312/model/CreateDBInstancesResponse.cpp
  src/v20170312/model/Xlog.cpp
  )

set(postgres_include
    include/tencentcloud/postgres
  )

add_library(postgres ${LIB_TYPE}
  ${postgres_public_header}
  ${postgres_public_header_model}
  ${postgres_src})

set_target_properties(postgres
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}postgres
  )

target_include_directories(postgres
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(postgres
  core)

#install(FILES ${postgres_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/postgres/v20170312)
#install(FILES ${postgres_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/postgres/v20170312/model)
install(DIRECTORY ${postgres_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS postgres
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
