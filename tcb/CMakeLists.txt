#
# Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
  include/tencentcloud/tcb/v20180608/model/DescribeEnvLimitResponse.h
  include/tencentcloud/tcb/v20180608/model/ListTablesResponse.h
  include/tencentcloud/tcb/v20180608/model/CheckTcbServiceResponse.h
  include/tencentcloud/tcb/v20180608/model/ModifySafeRuleRequest.h
  include/tencentcloud/tcb/v20180608/model/BindCloudBaseAccessDomainRequest.h
  include/tencentcloud/tcb/v20180608/model/ModifyEnvPlanRequest.h
  include/tencentcloud/tcb/v20180608/model/CloudBaseClientQPSPolicy.h
  include/tencentcloud/tcb/v20180608/model/ModifyClsTopicResponse.h
  include/tencentcloud/tcb/v20180608/model/CreateIndex.h
  include/tencentcloud/tcb/v20180608/model/ClusterDetail.h
  include/tencentcloud/tcb/v20180608/model/DbInstance.h
  include/tencentcloud/tcb/v20180608/model/DescribeMySQLClusterDetailResponse.h
  include/tencentcloud/tcb/v20180608/model/DeleteUsersResp.h
  include/tencentcloud/tcb/v20180608/model/DescribeEnvLimitRequest.h
  include/tencentcloud/tcb/v20180608/model/DescribeCloudBaseBuildServiceResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribeMySQLTaskStatusRequest.h
  include/tencentcloud/tcb/v20180608/model/DropIndex.h
  include/tencentcloud/tcb/v20180608/model/ModifyUserResponse.h
  include/tencentcloud/tcb/v20180608/model/LogResObject.h
  include/tencentcloud/tcb/v20180608/model/ModifyEnvResponse.h
  include/tencentcloud/tcb/v20180608/model/BindCloudBaseAccessDomainResponse.h
  include/tencentcloud/tcb/v20180608/model/LogServiceInfo.h
  include/tencentcloud/tcb/v20180608/model/DescribeBaasPackageListRequest.h
  include/tencentcloud/tcb/v20180608/model/ClsInfo.h
  include/tencentcloud/tcb/v20180608/model/DescribeAuthDomainsResponse.h
  include/tencentcloud/tcb/v20180608/model/ModifyCloudBaseGWAPIRequest.h
  include/tencentcloud/tcb/v20180608/model/ModifyClsTopicRequest.h
  include/tencentcloud/tcb/v20180608/model/CreateHostingDomainRequest.h
  include/tencentcloud/tcb/v20180608/model/ModifyDatabaseACLRequest.h
  include/tencentcloud/tcb/v20180608/model/DestroyStaticStoreRequest.h
  include/tencentcloud/tcb/v20180608/model/MySQLNetDetail.h
  include/tencentcloud/tcb/v20180608/model/MgoKeySchema.h
  include/tencentcloud/tcb/v20180608/model/DescribeHostingDomainTaskRequest.h
  include/tencentcloud/tcb/v20180608/model/DescribeUserListResp.h
  include/tencentcloud/tcb/v20180608/model/BaasPackageInfo.h
  include/tencentcloud/tcb/v20180608/model/DescribeQuotaDataResponse.h
  include/tencentcloud/tcb/v20180608/model/CreateBillDealResponse.h
  include/tencentcloud/tcb/v20180608/model/CreateMySQLResult.h
  include/tencentcloud/tcb/v20180608/model/KVPair.h
  include/tencentcloud/tcb/v20180608/model/FunctionInfo.h
  include/tencentcloud/tcb/v20180608/model/CreateEnvResponse.h
  include/tencentcloud/tcb/v20180608/model/RunCommandsResponse.h
  include/tencentcloud/tcb/v20180608/model/RunSqlResponse.h
  include/tencentcloud/tcb/v20180608/model/CreateUserResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribeEnvAccountCircleRequest.h
  include/tencentcloud/tcb/v20180608/model/RenewEnvResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribeMySQLClusterDetailRequest.h
  include/tencentcloud/tcb/v20180608/model/CreateStaticStoreRequest.h
  include/tencentcloud/tcb/v20180608/model/CreateAuthDomainResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribeEnvsRequest.h
  include/tencentcloud/tcb/v20180608/model/Tag.h
  include/tencentcloud/tcb/v20180608/model/EditAuthConfigResponse.h
  include/tencentcloud/tcb/v20180608/model/RenewEnvRequest.h
  include/tencentcloud/tcb/v20180608/model/DestroyMySQLResponse.h
  include/tencentcloud/tcb/v20180608/model/UpdateTableResponse.h
  include/tencentcloud/tcb/v20180608/model/ModifyEnvPlanResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribeCreateMySQLResultRequest.h
  include/tencentcloud/tcb/v20180608/model/LogObject.h
  include/tencentcloud/tcb/v20180608/model/DestroyStaticStoreResponse.h
  include/tencentcloud/tcb/v20180608/model/DeleteUsersResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribeUserListResponse.h
  include/tencentcloud/tcb/v20180608/model/CreateTableRequest.h
  include/tencentcloud/tcb/v20180608/model/CreateMySQLResponse.h
  include/tencentcloud/tcb/v20180608/model/DeleteAuthDomainResponse.h
  include/tencentcloud/tcb/v20180608/model/DeleteTableRequest.h
  include/tencentcloud/tcb/v20180608/model/CreateCloudBaseGWAPIRequest.h
  include/tencentcloud/tcb/v20180608/model/DestroyEnvRequest.h
  include/tencentcloud/tcb/v20180608/model/DestroyEnvResponse.h
  include/tencentcloud/tcb/v20180608/model/DeleteTableResponse.h
  include/tencentcloud/tcb/v20180608/model/RunSqlRequest.h
  include/tencentcloud/tcb/v20180608/model/DestroyMySQLRequest.h
  include/tencentcloud/tcb/v20180608/model/DescribeEnvsResponse.h
  include/tencentcloud/tcb/v20180608/model/CreateAuthDomainRequest.h
  include/tencentcloud/tcb/v20180608/model/CreateHostingDomainResponse.h
  include/tencentcloud/tcb/v20180608/model/MySQLTaskStatus.h
  include/tencentcloud/tcb/v20180608/model/DescribeCreateMySQLResult.h
  include/tencentcloud/tcb/v20180608/model/DeleteCloudBaseGWAPIRequest.h
  include/tencentcloud/tcb/v20180608/model/CreateCloudBaseGWAPIResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribeCreateMySQLResultResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribeSafeRuleRequest.h
  include/tencentcloud/tcb/v20180608/model/DeleteUsersRequest.h
  include/tencentcloud/tcb/v20180608/model/DescribeBaasPackageListResponse.h
  include/tencentcloud/tcb/v20180608/model/SearchClsLogResponse.h
  include/tencentcloud/tcb/v20180608/model/MgoIndexKeys.h
  include/tencentcloud/tcb/v20180608/model/DescribeStaticStoreRequest.h
  include/tencentcloud/tcb/v20180608/model/ModifyCloudBaseGWAPIResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribeSafeRuleResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribeTablesResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribeEnvAccountCircleResponse.h
  include/tencentcloud/tcb/v20180608/model/User.h
  include/tencentcloud/tcb/v20180608/model/MgoCommandParam.h
  include/tencentcloud/tcb/v20180608/model/ModifyDatabaseACLResponse.h
  include/tencentcloud/tcb/v20180608/model/StaticStorageInfo.h
  include/tencentcloud/tcb/v20180608/model/CreateTableResponse.h
  include/tencentcloud/tcb/v20180608/model/DestroyMySQLResult.h
  include/tencentcloud/tcb/v20180608/model/DescribeCloudBaseGWAPIResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribeCloudBaseGWAPIRequest.h
  include/tencentcloud/tcb/v20180608/model/CreateMySQLRequest.h
  include/tencentcloud/tcb/v20180608/model/DatabasesInfo.h
  include/tencentcloud/tcb/v20180608/model/DescribeCloudBaseGWServiceResponse.h
  include/tencentcloud/tcb/v20180608/model/ReinstateEnvRequest.h
  include/tencentcloud/tcb/v20180608/model/DescribeDatabaseACLRequest.h
  include/tencentcloud/tcb/v20180608/model/DescribeMySQLTaskStatusResponse.h
  include/tencentcloud/tcb/v20180608/model/TableInfo.h
  include/tencentcloud/tcb/v20180608/model/DeleteCloudBaseGWDomainRequest.h
  include/tencentcloud/tcb/v20180608/model/DescribeTablesRequest.h
  include/tencentcloud/tcb/v20180608/model/DescribeUserListRequest.h
  include/tencentcloud/tcb/v20180608/model/DescribeStaticStoreResponse.h
  include/tencentcloud/tcb/v20180608/model/ListTablesRequest.h
  include/tencentcloud/tcb/v20180608/model/DescribeQuotaDataRequest.h
  include/tencentcloud/tcb/v20180608/model/CreateStaticStoreResponse.h
  include/tencentcloud/tcb/v20180608/model/EditAuthConfigRequest.h
  include/tencentcloud/tcb/v20180608/model/Indexkey.h
  include/tencentcloud/tcb/v20180608/model/StorageInfo.h
  include/tencentcloud/tcb/v20180608/model/ModifyUserResp.h
  include/tencentcloud/tcb/v20180608/model/ModifySafeRuleResponse.h
  include/tencentcloud/tcb/v20180608/model/BindCloudBaseGWDomainResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribeTableRequest.h
  include/tencentcloud/tcb/v20180608/model/EnvInfo.h
  include/tencentcloud/tcb/v20180608/model/AuthDomain.h
  include/tencentcloud/tcb/v20180608/model/CloudBaseGWAPIQPSPolicy.h
  include/tencentcloud/tcb/v20180608/model/PermissionInfo.h
  include/tencentcloud/tcb/v20180608/model/DescribeHostingDomainTaskResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribeTableResponse.h
  include/tencentcloud/tcb/v20180608/model/CreateBillDealRequest.h
  include/tencentcloud/tcb/v20180608/model/CloudBaseOption.h
  include/tencentcloud/tcb/v20180608/model/IndexInfo.h
  include/tencentcloud/tcb/v20180608/model/DescribeCloudBaseGWServiceRequest.h
  include/tencentcloud/tcb/v20180608/model/DescribeCloudBaseBuildServiceRequest.h
  include/tencentcloud/tcb/v20180608/model/SearchClsLogRequest.h
  include/tencentcloud/tcb/v20180608/model/MongoConnector.h
  include/tencentcloud/tcb/v20180608/model/CheckTcbServiceRequest.h
  include/tencentcloud/tcb/v20180608/model/Pager.h
  include/tencentcloud/tcb/v20180608/model/DeleteCloudBaseGWAPIResponse.h
  include/tencentcloud/tcb/v20180608/model/CreateEnvRequest.h
  include/tencentcloud/tcb/v20180608/model/RunCommandsRequest.h
  include/tencentcloud/tcb/v20180608/model/IndexAccesses.h
  include/tencentcloud/tcb/v20180608/model/MySQLClusterDetail.h
  include/tencentcloud/tcb/v20180608/model/DescribeAuthDomainsRequest.h
  include/tencentcloud/tcb/v20180608/model/StaticStoreInfo.h
  include/tencentcloud/tcb/v20180608/model/CreateUserRequest.h
  include/tencentcloud/tcb/v20180608/model/DeleteAuthDomainRequest.h
  include/tencentcloud/tcb/v20180608/model/UpdateTableRequest.h
  include/tencentcloud/tcb/v20180608/model/DeleteCloudBaseGWDomainResponse.h
  include/tencentcloud/tcb/v20180608/model/DescribeDatabaseACLResponse.h
  include/tencentcloud/tcb/v20180608/model/ReinstateEnvResponse.h
  include/tencentcloud/tcb/v20180608/model/CloudBaseGWService.h
  include/tencentcloud/tcb/v20180608/model/ModifyEnvRequest.h
  include/tencentcloud/tcb/v20180608/model/ModifyUserRequest.h
  include/tencentcloud/tcb/v20180608/model/BindCloudBaseGWDomainRequest.h
  include/tencentcloud/tcb/v20180608/model/CreateUserResp.h
  include/tencentcloud/tcb/v20180608/model/CloudBaseGWAPI.h
  )

set(tcb_src
  src/v20180608/TcbClient.cpp
  src/v20180608/model/DescribeEnvLimitResponse.cpp
  src/v20180608/model/ListTablesResponse.cpp
  src/v20180608/model/CheckTcbServiceResponse.cpp
  src/v20180608/model/ModifySafeRuleRequest.cpp
  src/v20180608/model/BindCloudBaseAccessDomainRequest.cpp
  src/v20180608/model/ModifyEnvPlanRequest.cpp
  src/v20180608/model/CloudBaseClientQPSPolicy.cpp
  src/v20180608/model/ModifyClsTopicResponse.cpp
  src/v20180608/model/CreateIndex.cpp
  src/v20180608/model/ClusterDetail.cpp
  src/v20180608/model/DbInstance.cpp
  src/v20180608/model/DescribeMySQLClusterDetailResponse.cpp
  src/v20180608/model/DeleteUsersResp.cpp
  src/v20180608/model/DescribeEnvLimitRequest.cpp
  src/v20180608/model/DescribeCloudBaseBuildServiceResponse.cpp
  src/v20180608/model/DescribeMySQLTaskStatusRequest.cpp
  src/v20180608/model/DropIndex.cpp
  src/v20180608/model/ModifyUserResponse.cpp
  src/v20180608/model/LogResObject.cpp
  src/v20180608/model/ModifyEnvResponse.cpp
  src/v20180608/model/BindCloudBaseAccessDomainResponse.cpp
  src/v20180608/model/LogServiceInfo.cpp
  src/v20180608/model/DescribeBaasPackageListRequest.cpp
  src/v20180608/model/ClsInfo.cpp
  src/v20180608/model/DescribeAuthDomainsResponse.cpp
  src/v20180608/model/ModifyCloudBaseGWAPIRequest.cpp
  src/v20180608/model/ModifyClsTopicRequest.cpp
  src/v20180608/model/CreateHostingDomainRequest.cpp
  src/v20180608/model/ModifyDatabaseACLRequest.cpp
  src/v20180608/model/DestroyStaticStoreRequest.cpp
  src/v20180608/model/MySQLNetDetail.cpp
  src/v20180608/model/MgoKeySchema.cpp
  src/v20180608/model/DescribeHostingDomainTaskRequest.cpp
  src/v20180608/model/DescribeUserListResp.cpp
  src/v20180608/model/BaasPackageInfo.cpp
  src/v20180608/model/DescribeQuotaDataResponse.cpp
  src/v20180608/model/CreateBillDealResponse.cpp
  src/v20180608/model/CreateMySQLResult.cpp
  src/v20180608/model/KVPair.cpp
  src/v20180608/model/FunctionInfo.cpp
  src/v20180608/model/CreateEnvResponse.cpp
  src/v20180608/model/RunCommandsResponse.cpp
  src/v20180608/model/RunSqlResponse.cpp
  src/v20180608/model/CreateUserResponse.cpp
  src/v20180608/model/DescribeEnvAccountCircleRequest.cpp
  src/v20180608/model/RenewEnvResponse.cpp
  src/v20180608/model/DescribeMySQLClusterDetailRequest.cpp
  src/v20180608/model/CreateStaticStoreRequest.cpp
  src/v20180608/model/CreateAuthDomainResponse.cpp
  src/v20180608/model/DescribeEnvsRequest.cpp
  src/v20180608/model/Tag.cpp
  src/v20180608/model/EditAuthConfigResponse.cpp
  src/v20180608/model/RenewEnvRequest.cpp
  src/v20180608/model/DestroyMySQLResponse.cpp
  src/v20180608/model/UpdateTableResponse.cpp
  src/v20180608/model/ModifyEnvPlanResponse.cpp
  src/v20180608/model/DescribeCreateMySQLResultRequest.cpp
  src/v20180608/model/LogObject.cpp
  src/v20180608/model/DestroyStaticStoreResponse.cpp
  src/v20180608/model/DeleteUsersResponse.cpp
  src/v20180608/model/DescribeUserListResponse.cpp
  src/v20180608/model/CreateTableRequest.cpp
  src/v20180608/model/CreateMySQLResponse.cpp
  src/v20180608/model/DeleteAuthDomainResponse.cpp
  src/v20180608/model/DeleteTableRequest.cpp
  src/v20180608/model/CreateCloudBaseGWAPIRequest.cpp
  src/v20180608/model/DestroyEnvRequest.cpp
  src/v20180608/model/DestroyEnvResponse.cpp
  src/v20180608/model/DeleteTableResponse.cpp
  src/v20180608/model/RunSqlRequest.cpp
  src/v20180608/model/DestroyMySQLRequest.cpp
  src/v20180608/model/DescribeEnvsResponse.cpp
  src/v20180608/model/CreateAuthDomainRequest.cpp
  src/v20180608/model/CreateHostingDomainResponse.cpp
  src/v20180608/model/MySQLTaskStatus.cpp
  src/v20180608/model/DescribeCreateMySQLResult.cpp
  src/v20180608/model/DeleteCloudBaseGWAPIRequest.cpp
  src/v20180608/model/CreateCloudBaseGWAPIResponse.cpp
  src/v20180608/model/DescribeCreateMySQLResultResponse.cpp
  src/v20180608/model/DescribeSafeRuleRequest.cpp
  src/v20180608/model/DeleteUsersRequest.cpp
  src/v20180608/model/DescribeBaasPackageListResponse.cpp
  src/v20180608/model/SearchClsLogResponse.cpp
  src/v20180608/model/MgoIndexKeys.cpp
  src/v20180608/model/DescribeStaticStoreRequest.cpp
  src/v20180608/model/ModifyCloudBaseGWAPIResponse.cpp
  src/v20180608/model/DescribeSafeRuleResponse.cpp
  src/v20180608/model/DescribeTablesResponse.cpp
  src/v20180608/model/DescribeEnvAccountCircleResponse.cpp
  src/v20180608/model/User.cpp
  src/v20180608/model/MgoCommandParam.cpp
  src/v20180608/model/ModifyDatabaseACLResponse.cpp
  src/v20180608/model/StaticStorageInfo.cpp
  src/v20180608/model/CreateTableResponse.cpp
  src/v20180608/model/DestroyMySQLResult.cpp
  src/v20180608/model/DescribeCloudBaseGWAPIResponse.cpp
  src/v20180608/model/DescribeCloudBaseGWAPIRequest.cpp
  src/v20180608/model/CreateMySQLRequest.cpp
  src/v20180608/model/DatabasesInfo.cpp
  src/v20180608/model/DescribeCloudBaseGWServiceResponse.cpp
  src/v20180608/model/ReinstateEnvRequest.cpp
  src/v20180608/model/DescribeDatabaseACLRequest.cpp
  src/v20180608/model/DescribeMySQLTaskStatusResponse.cpp
  src/v20180608/model/TableInfo.cpp
  src/v20180608/model/DeleteCloudBaseGWDomainRequest.cpp
  src/v20180608/model/DescribeTablesRequest.cpp
  src/v20180608/model/DescribeUserListRequest.cpp
  src/v20180608/model/DescribeStaticStoreResponse.cpp
  src/v20180608/model/ListTablesRequest.cpp
  src/v20180608/model/DescribeQuotaDataRequest.cpp
  src/v20180608/model/CreateStaticStoreResponse.cpp
  src/v20180608/model/EditAuthConfigRequest.cpp
  src/v20180608/model/Indexkey.cpp
  src/v20180608/model/StorageInfo.cpp
  src/v20180608/model/ModifyUserResp.cpp
  src/v20180608/model/ModifySafeRuleResponse.cpp
  src/v20180608/model/BindCloudBaseGWDomainResponse.cpp
  src/v20180608/model/DescribeTableRequest.cpp
  src/v20180608/model/EnvInfo.cpp
  src/v20180608/model/AuthDomain.cpp
  src/v20180608/model/CloudBaseGWAPIQPSPolicy.cpp
  src/v20180608/model/PermissionInfo.cpp
  src/v20180608/model/DescribeHostingDomainTaskResponse.cpp
  src/v20180608/model/DescribeTableResponse.cpp
  src/v20180608/model/CreateBillDealRequest.cpp
  src/v20180608/model/CloudBaseOption.cpp
  src/v20180608/model/IndexInfo.cpp
  src/v20180608/model/DescribeCloudBaseGWServiceRequest.cpp
  src/v20180608/model/DescribeCloudBaseBuildServiceRequest.cpp
  src/v20180608/model/SearchClsLogRequest.cpp
  src/v20180608/model/MongoConnector.cpp
  src/v20180608/model/CheckTcbServiceRequest.cpp
  src/v20180608/model/Pager.cpp
  src/v20180608/model/DeleteCloudBaseGWAPIResponse.cpp
  src/v20180608/model/CreateEnvRequest.cpp
  src/v20180608/model/RunCommandsRequest.cpp
  src/v20180608/model/IndexAccesses.cpp
  src/v20180608/model/MySQLClusterDetail.cpp
  src/v20180608/model/DescribeAuthDomainsRequest.cpp
  src/v20180608/model/StaticStoreInfo.cpp
  src/v20180608/model/CreateUserRequest.cpp
  src/v20180608/model/DeleteAuthDomainRequest.cpp
  src/v20180608/model/UpdateTableRequest.cpp
  src/v20180608/model/DeleteCloudBaseGWDomainResponse.cpp
  src/v20180608/model/DescribeDatabaseACLResponse.cpp
  src/v20180608/model/ReinstateEnvResponse.cpp
  src/v20180608/model/CloudBaseGWService.cpp
  src/v20180608/model/ModifyEnvRequest.cpp
  src/v20180608/model/ModifyUserRequest.cpp
  src/v20180608/model/BindCloudBaseGWDomainRequest.cpp
  src/v20180608/model/CreateUserResp.cpp
  src/v20180608/model/CloudBaseGWAPI.cpp
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
