/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TCB_V20180608_TCBCLIENT_H_
#define TENCENTCLOUD_TCB_V20180608_TCBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tcb/v20180608/model/BindCloudBaseAccessDomainRequest.h>
#include <tencentcloud/tcb/v20180608/model/BindCloudBaseAccessDomainResponse.h>
#include <tencentcloud/tcb/v20180608/model/BindCloudBaseGWDomainRequest.h>
#include <tencentcloud/tcb/v20180608/model/BindCloudBaseGWDomainResponse.h>
#include <tencentcloud/tcb/v20180608/model/CheckTcbServiceRequest.h>
#include <tencentcloud/tcb/v20180608/model/CheckTcbServiceResponse.h>
#include <tencentcloud/tcb/v20180608/model/CreateAuthDomainRequest.h>
#include <tencentcloud/tcb/v20180608/model/CreateAuthDomainResponse.h>
#include <tencentcloud/tcb/v20180608/model/CreateBillDealRequest.h>
#include <tencentcloud/tcb/v20180608/model/CreateBillDealResponse.h>
#include <tencentcloud/tcb/v20180608/model/CreateCloudBaseGWAPIRequest.h>
#include <tencentcloud/tcb/v20180608/model/CreateCloudBaseGWAPIResponse.h>
#include <tencentcloud/tcb/v20180608/model/CreateEnvRequest.h>
#include <tencentcloud/tcb/v20180608/model/CreateEnvResponse.h>
#include <tencentcloud/tcb/v20180608/model/CreateHostingDomainRequest.h>
#include <tencentcloud/tcb/v20180608/model/CreateHostingDomainResponse.h>
#include <tencentcloud/tcb/v20180608/model/CreateMySQLRequest.h>
#include <tencentcloud/tcb/v20180608/model/CreateMySQLResponse.h>
#include <tencentcloud/tcb/v20180608/model/CreateStaticStoreRequest.h>
#include <tencentcloud/tcb/v20180608/model/CreateStaticStoreResponse.h>
#include <tencentcloud/tcb/v20180608/model/CreateTableRequest.h>
#include <tencentcloud/tcb/v20180608/model/CreateTableResponse.h>
#include <tencentcloud/tcb/v20180608/model/CreateUserRequest.h>
#include <tencentcloud/tcb/v20180608/model/CreateUserResponse.h>
#include <tencentcloud/tcb/v20180608/model/DeleteAuthDomainRequest.h>
#include <tencentcloud/tcb/v20180608/model/DeleteAuthDomainResponse.h>
#include <tencentcloud/tcb/v20180608/model/DeleteCloudBaseGWAPIRequest.h>
#include <tencentcloud/tcb/v20180608/model/DeleteCloudBaseGWAPIResponse.h>
#include <tencentcloud/tcb/v20180608/model/DeleteCloudBaseGWDomainRequest.h>
#include <tencentcloud/tcb/v20180608/model/DeleteCloudBaseGWDomainResponse.h>
#include <tencentcloud/tcb/v20180608/model/DeleteTableRequest.h>
#include <tencentcloud/tcb/v20180608/model/DeleteTableResponse.h>
#include <tencentcloud/tcb/v20180608/model/DeleteUsersRequest.h>
#include <tencentcloud/tcb/v20180608/model/DeleteUsersResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeAuthDomainsRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeAuthDomainsResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeBaasPackageListRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeBaasPackageListResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseBuildServiceRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseBuildServiceResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseGWAPIRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseGWAPIResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseGWServiceRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseGWServiceResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCreateMySQLResultRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeCreateMySQLResultResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeDatabaseACLRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeDatabaseACLResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvAccountCircleRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvAccountCircleResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvLimitRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvLimitResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvsRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeEnvsResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeHostingDomainTaskRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeHostingDomainTaskResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeMySQLClusterDetailRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeMySQLClusterDetailResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeMySQLTaskStatusRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeMySQLTaskStatusResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeQuotaDataRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeQuotaDataResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeSafeRuleRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeSafeRuleResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeStaticStoreRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeStaticStoreResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeTableRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeTableResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeTablesRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeTablesResponse.h>
#include <tencentcloud/tcb/v20180608/model/DescribeUserListRequest.h>
#include <tencentcloud/tcb/v20180608/model/DescribeUserListResponse.h>
#include <tencentcloud/tcb/v20180608/model/DestroyEnvRequest.h>
#include <tencentcloud/tcb/v20180608/model/DestroyEnvResponse.h>
#include <tencentcloud/tcb/v20180608/model/DestroyMySQLRequest.h>
#include <tencentcloud/tcb/v20180608/model/DestroyMySQLResponse.h>
#include <tencentcloud/tcb/v20180608/model/DestroyStaticStoreRequest.h>
#include <tencentcloud/tcb/v20180608/model/DestroyStaticStoreResponse.h>
#include <tencentcloud/tcb/v20180608/model/EditAuthConfigRequest.h>
#include <tencentcloud/tcb/v20180608/model/EditAuthConfigResponse.h>
#include <tencentcloud/tcb/v20180608/model/ListTablesRequest.h>
#include <tencentcloud/tcb/v20180608/model/ListTablesResponse.h>
#include <tencentcloud/tcb/v20180608/model/ModifyCloudBaseGWAPIRequest.h>
#include <tencentcloud/tcb/v20180608/model/ModifyCloudBaseGWAPIResponse.h>
#include <tencentcloud/tcb/v20180608/model/ModifyClsTopicRequest.h>
#include <tencentcloud/tcb/v20180608/model/ModifyClsTopicResponse.h>
#include <tencentcloud/tcb/v20180608/model/ModifyDatabaseACLRequest.h>
#include <tencentcloud/tcb/v20180608/model/ModifyDatabaseACLResponse.h>
#include <tencentcloud/tcb/v20180608/model/ModifyEnvRequest.h>
#include <tencentcloud/tcb/v20180608/model/ModifyEnvResponse.h>
#include <tencentcloud/tcb/v20180608/model/ModifyEnvPlanRequest.h>
#include <tencentcloud/tcb/v20180608/model/ModifyEnvPlanResponse.h>
#include <tencentcloud/tcb/v20180608/model/ModifySafeRuleRequest.h>
#include <tencentcloud/tcb/v20180608/model/ModifySafeRuleResponse.h>
#include <tencentcloud/tcb/v20180608/model/ModifyUserRequest.h>
#include <tencentcloud/tcb/v20180608/model/ModifyUserResponse.h>
#include <tencentcloud/tcb/v20180608/model/ReinstateEnvRequest.h>
#include <tencentcloud/tcb/v20180608/model/ReinstateEnvResponse.h>
#include <tencentcloud/tcb/v20180608/model/RenewEnvRequest.h>
#include <tencentcloud/tcb/v20180608/model/RenewEnvResponse.h>
#include <tencentcloud/tcb/v20180608/model/RunCommandsRequest.h>
#include <tencentcloud/tcb/v20180608/model/RunCommandsResponse.h>
#include <tencentcloud/tcb/v20180608/model/RunSqlRequest.h>
#include <tencentcloud/tcb/v20180608/model/RunSqlResponse.h>
#include <tencentcloud/tcb/v20180608/model/SearchClsLogRequest.h>
#include <tencentcloud/tcb/v20180608/model/SearchClsLogResponse.h>
#include <tencentcloud/tcb/v20180608/model/UpdateTableRequest.h>
#include <tencentcloud/tcb/v20180608/model/UpdateTableResponse.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            class TcbClient : public AbstractClient
            {
            public:
                TcbClient(const Credential &credential, const std::string &region);
                TcbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BindCloudBaseAccessDomainResponse> BindCloudBaseAccessDomainOutcome;
                typedef std::future<BindCloudBaseAccessDomainOutcome> BindCloudBaseAccessDomainOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::BindCloudBaseAccessDomainRequest&, BindCloudBaseAccessDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindCloudBaseAccessDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::BindCloudBaseGWDomainResponse> BindCloudBaseGWDomainOutcome;
                typedef std::future<BindCloudBaseGWDomainOutcome> BindCloudBaseGWDomainOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::BindCloudBaseGWDomainRequest&, BindCloudBaseGWDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindCloudBaseGWDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckTcbServiceResponse> CheckTcbServiceOutcome;
                typedef std::future<CheckTcbServiceOutcome> CheckTcbServiceOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CheckTcbServiceRequest&, CheckTcbServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckTcbServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAuthDomainResponse> CreateAuthDomainOutcome;
                typedef std::future<CreateAuthDomainOutcome> CreateAuthDomainOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CreateAuthDomainRequest&, CreateAuthDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuthDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBillDealResponse> CreateBillDealOutcome;
                typedef std::future<CreateBillDealOutcome> CreateBillDealOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CreateBillDealRequest&, CreateBillDealOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBillDealAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudBaseGWAPIResponse> CreateCloudBaseGWAPIOutcome;
                typedef std::future<CreateCloudBaseGWAPIOutcome> CreateCloudBaseGWAPIOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CreateCloudBaseGWAPIRequest&, CreateCloudBaseGWAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudBaseGWAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEnvResponse> CreateEnvOutcome;
                typedef std::future<CreateEnvOutcome> CreateEnvOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CreateEnvRequest&, CreateEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnvAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHostingDomainResponse> CreateHostingDomainOutcome;
                typedef std::future<CreateHostingDomainOutcome> CreateHostingDomainOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CreateHostingDomainRequest&, CreateHostingDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHostingDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMySQLResponse> CreateMySQLOutcome;
                typedef std::future<CreateMySQLOutcome> CreateMySQLOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CreateMySQLRequest&, CreateMySQLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMySQLAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStaticStoreResponse> CreateStaticStoreOutcome;
                typedef std::future<CreateStaticStoreOutcome> CreateStaticStoreOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CreateStaticStoreRequest&, CreateStaticStoreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStaticStoreAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTableResponse> CreateTableOutcome;
                typedef std::future<CreateTableOutcome> CreateTableOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CreateTableRequest&, CreateTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTableAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUserResponse> CreateUserOutcome;
                typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::CreateUserRequest&, CreateUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAuthDomainResponse> DeleteAuthDomainOutcome;
                typedef std::future<DeleteAuthDomainOutcome> DeleteAuthDomainOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DeleteAuthDomainRequest&, DeleteAuthDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAuthDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudBaseGWAPIResponse> DeleteCloudBaseGWAPIOutcome;
                typedef std::future<DeleteCloudBaseGWAPIOutcome> DeleteCloudBaseGWAPIOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DeleteCloudBaseGWAPIRequest&, DeleteCloudBaseGWAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudBaseGWAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudBaseGWDomainResponse> DeleteCloudBaseGWDomainOutcome;
                typedef std::future<DeleteCloudBaseGWDomainOutcome> DeleteCloudBaseGWDomainOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DeleteCloudBaseGWDomainRequest&, DeleteCloudBaseGWDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudBaseGWDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTableResponse> DeleteTableOutcome;
                typedef std::future<DeleteTableOutcome> DeleteTableOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DeleteTableRequest&, DeleteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUsersResponse> DeleteUsersOutcome;
                typedef std::future<DeleteUsersOutcome> DeleteUsersOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DeleteUsersRequest&, DeleteUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuthDomainsResponse> DescribeAuthDomainsOutcome;
                typedef std::future<DescribeAuthDomainsOutcome> DescribeAuthDomainsOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeAuthDomainsRequest&, DescribeAuthDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuthDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaasPackageListResponse> DescribeBaasPackageListOutcome;
                typedef std::future<DescribeBaasPackageListOutcome> DescribeBaasPackageListOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeBaasPackageListRequest&, DescribeBaasPackageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaasPackageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudBaseBuildServiceResponse> DescribeCloudBaseBuildServiceOutcome;
                typedef std::future<DescribeCloudBaseBuildServiceOutcome> DescribeCloudBaseBuildServiceOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeCloudBaseBuildServiceRequest&, DescribeCloudBaseBuildServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudBaseBuildServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudBaseGWAPIResponse> DescribeCloudBaseGWAPIOutcome;
                typedef std::future<DescribeCloudBaseGWAPIOutcome> DescribeCloudBaseGWAPIOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeCloudBaseGWAPIRequest&, DescribeCloudBaseGWAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudBaseGWAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudBaseGWServiceResponse> DescribeCloudBaseGWServiceOutcome;
                typedef std::future<DescribeCloudBaseGWServiceOutcome> DescribeCloudBaseGWServiceOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeCloudBaseGWServiceRequest&, DescribeCloudBaseGWServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudBaseGWServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCreateMySQLResultResponse> DescribeCreateMySQLResultOutcome;
                typedef std::future<DescribeCreateMySQLResultOutcome> DescribeCreateMySQLResultOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeCreateMySQLResultRequest&, DescribeCreateMySQLResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCreateMySQLResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDatabaseACLResponse> DescribeDatabaseACLOutcome;
                typedef std::future<DescribeDatabaseACLOutcome> DescribeDatabaseACLOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeDatabaseACLRequest&, DescribeDatabaseACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabaseACLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvAccountCircleResponse> DescribeEnvAccountCircleOutcome;
                typedef std::future<DescribeEnvAccountCircleOutcome> DescribeEnvAccountCircleOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeEnvAccountCircleRequest&, DescribeEnvAccountCircleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvAccountCircleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvLimitResponse> DescribeEnvLimitOutcome;
                typedef std::future<DescribeEnvLimitOutcome> DescribeEnvLimitOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeEnvLimitRequest&, DescribeEnvLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvsResponse> DescribeEnvsOutcome;
                typedef std::future<DescribeEnvsOutcome> DescribeEnvsOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeEnvsRequest&, DescribeEnvsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostingDomainTaskResponse> DescribeHostingDomainTaskOutcome;
                typedef std::future<DescribeHostingDomainTaskOutcome> DescribeHostingDomainTaskOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeHostingDomainTaskRequest&, DescribeHostingDomainTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostingDomainTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMySQLClusterDetailResponse> DescribeMySQLClusterDetailOutcome;
                typedef std::future<DescribeMySQLClusterDetailOutcome> DescribeMySQLClusterDetailOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeMySQLClusterDetailRequest&, DescribeMySQLClusterDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMySQLClusterDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMySQLTaskStatusResponse> DescribeMySQLTaskStatusOutcome;
                typedef std::future<DescribeMySQLTaskStatusOutcome> DescribeMySQLTaskStatusOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeMySQLTaskStatusRequest&, DescribeMySQLTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMySQLTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQuotaDataResponse> DescribeQuotaDataOutcome;
                typedef std::future<DescribeQuotaDataOutcome> DescribeQuotaDataOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeQuotaDataRequest&, DescribeQuotaDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQuotaDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSafeRuleResponse> DescribeSafeRuleOutcome;
                typedef std::future<DescribeSafeRuleOutcome> DescribeSafeRuleOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeSafeRuleRequest&, DescribeSafeRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSafeRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStaticStoreResponse> DescribeStaticStoreOutcome;
                typedef std::future<DescribeStaticStoreOutcome> DescribeStaticStoreOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeStaticStoreRequest&, DescribeStaticStoreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStaticStoreAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTableResponse> DescribeTableOutcome;
                typedef std::future<DescribeTableOutcome> DescribeTableOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeTableRequest&, DescribeTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTablesResponse> DescribeTablesOutcome;
                typedef std::future<DescribeTablesOutcome> DescribeTablesOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeTablesRequest&, DescribeTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserListResponse> DescribeUserListOutcome;
                typedef std::future<DescribeUserListOutcome> DescribeUserListOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DescribeUserListRequest&, DescribeUserListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserListAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyEnvResponse> DestroyEnvOutcome;
                typedef std::future<DestroyEnvOutcome> DestroyEnvOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DestroyEnvRequest&, DestroyEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyEnvAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyMySQLResponse> DestroyMySQLOutcome;
                typedef std::future<DestroyMySQLOutcome> DestroyMySQLOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DestroyMySQLRequest&, DestroyMySQLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyMySQLAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyStaticStoreResponse> DestroyStaticStoreOutcome;
                typedef std::future<DestroyStaticStoreOutcome> DestroyStaticStoreOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::DestroyStaticStoreRequest&, DestroyStaticStoreOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyStaticStoreAsyncHandler;
                typedef Outcome<Core::Error, Model::EditAuthConfigResponse> EditAuthConfigOutcome;
                typedef std::future<EditAuthConfigOutcome> EditAuthConfigOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::EditAuthConfigRequest&, EditAuthConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditAuthConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTablesResponse> ListTablesOutcome;
                typedef std::future<ListTablesOutcome> ListTablesOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::ListTablesRequest&, ListTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudBaseGWAPIResponse> ModifyCloudBaseGWAPIOutcome;
                typedef std::future<ModifyCloudBaseGWAPIOutcome> ModifyCloudBaseGWAPIOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::ModifyCloudBaseGWAPIRequest&, ModifyCloudBaseGWAPIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudBaseGWAPIAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClsTopicResponse> ModifyClsTopicOutcome;
                typedef std::future<ModifyClsTopicOutcome> ModifyClsTopicOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::ModifyClsTopicRequest&, ModifyClsTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClsTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDatabaseACLResponse> ModifyDatabaseACLOutcome;
                typedef std::future<ModifyDatabaseACLOutcome> ModifyDatabaseACLOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::ModifyDatabaseACLRequest&, ModifyDatabaseACLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatabaseACLAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEnvResponse> ModifyEnvOutcome;
                typedef std::future<ModifyEnvOutcome> ModifyEnvOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::ModifyEnvRequest&, ModifyEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEnvAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEnvPlanResponse> ModifyEnvPlanOutcome;
                typedef std::future<ModifyEnvPlanOutcome> ModifyEnvPlanOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::ModifyEnvPlanRequest&, ModifyEnvPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEnvPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySafeRuleResponse> ModifySafeRuleOutcome;
                typedef std::future<ModifySafeRuleOutcome> ModifySafeRuleOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::ModifySafeRuleRequest&, ModifySafeRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySafeRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserResponse> ModifyUserOutcome;
                typedef std::future<ModifyUserOutcome> ModifyUserOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::ModifyUserRequest&, ModifyUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserAsyncHandler;
                typedef Outcome<Core::Error, Model::ReinstateEnvResponse> ReinstateEnvOutcome;
                typedef std::future<ReinstateEnvOutcome> ReinstateEnvOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::ReinstateEnvRequest&, ReinstateEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReinstateEnvAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewEnvResponse> RenewEnvOutcome;
                typedef std::future<RenewEnvOutcome> RenewEnvOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::RenewEnvRequest&, RenewEnvOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewEnvAsyncHandler;
                typedef Outcome<Core::Error, Model::RunCommandsResponse> RunCommandsOutcome;
                typedef std::future<RunCommandsOutcome> RunCommandsOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::RunCommandsRequest&, RunCommandsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunCommandsAsyncHandler;
                typedef Outcome<Core::Error, Model::RunSqlResponse> RunSqlOutcome;
                typedef std::future<RunSqlOutcome> RunSqlOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::RunSqlRequest&, RunSqlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunSqlAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchClsLogResponse> SearchClsLogOutcome;
                typedef std::future<SearchClsLogOutcome> SearchClsLogOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::SearchClsLogRequest&, SearchClsLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchClsLogAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateTableResponse> UpdateTableOutcome;
                typedef std::future<UpdateTableOutcome> UpdateTableOutcomeCallable;
                typedef std::function<void(const TcbClient*, const Model::UpdateTableRequest&, UpdateTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTableAsyncHandler;



                /**
                 *绑定云开发自定义域名，用于云接入和静态托管
                 * @param req BindCloudBaseAccessDomainRequest
                 * @return BindCloudBaseAccessDomainOutcome
                 */
                BindCloudBaseAccessDomainOutcome BindCloudBaseAccessDomain(const Model::BindCloudBaseAccessDomainRequest &request);
                void BindCloudBaseAccessDomainAsync(const Model::BindCloudBaseAccessDomainRequest& request, const BindCloudBaseAccessDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindCloudBaseAccessDomainOutcomeCallable BindCloudBaseAccessDomainCallable(const Model::BindCloudBaseAccessDomainRequest& request);

                /**
                 *绑定自定义域名
                 * @param req BindCloudBaseGWDomainRequest
                 * @return BindCloudBaseGWDomainOutcome
                 */
                BindCloudBaseGWDomainOutcome BindCloudBaseGWDomain(const Model::BindCloudBaseGWDomainRequest &request);
                void BindCloudBaseGWDomainAsync(const Model::BindCloudBaseGWDomainRequest& request, const BindCloudBaseGWDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindCloudBaseGWDomainOutcomeCallable BindCloudBaseGWDomainCallable(const Model::BindCloudBaseGWDomainRequest& request);

                /**
                 *检查是否开通Tcb服务
                 * @param req CheckTcbServiceRequest
                 * @return CheckTcbServiceOutcome
                 */
                CheckTcbServiceOutcome CheckTcbService(const Model::CheckTcbServiceRequest &request);
                void CheckTcbServiceAsync(const Model::CheckTcbServiceRequest& request, const CheckTcbServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckTcbServiceOutcomeCallable CheckTcbServiceCallable(const Model::CheckTcbServiceRequest& request);

                /**
                 *增加安全域名。
云开发会校验网页应用请求的来源域名，您需要将来源域名加入到WEB安全域名列表中。
可以通过接口 [DescribeAuthDomains](https://cloud.tencent.com/document/product/876/42151) 获取当前已绑定生效的安全域名。

注意⚠️
  安全域名绑定成功之后，需要几分钟时间逐步生效。
                 * @param req CreateAuthDomainRequest
                 * @return CreateAuthDomainOutcome
                 */
                CreateAuthDomainOutcome CreateAuthDomain(const Model::CreateAuthDomainRequest &request);
                void CreateAuthDomainAsync(const Model::CreateAuthDomainRequest& request, const CreateAuthDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAuthDomainOutcomeCallable CreateAuthDomainCallable(const Model::CreateAuthDomainRequest& request);

                /**
                 *创建云开发产品计费订单，用于以下几种场景：
1. 购买云开发环境
2. 续费云开发环境
3. 变更云开发环境套餐
4. 购买云开发资源包
5. 购买云开发大促包

该接口支持下单并支付(CreateAndPay=true时)，此时会自动在腾讯云账户中扣除余额（余额不足会下单失败）。
该接口支持自动扣除代金券（AutoVoucher=true时），符合条件的代金券会被自动扣除。
                 * @param req CreateBillDealRequest
                 * @return CreateBillDealOutcome
                 */
                CreateBillDealOutcome CreateBillDeal(const Model::CreateBillDealRequest &request);
                void CreateBillDealAsync(const Model::CreateBillDealRequest& request, const CreateBillDealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBillDealOutcomeCallable CreateBillDealCallable(const Model::CreateBillDealRequest& request);

                /**
                 *创建云开发网关API
                 * @param req CreateCloudBaseGWAPIRequest
                 * @return CreateCloudBaseGWAPIOutcome
                 */
                CreateCloudBaseGWAPIOutcome CreateCloudBaseGWAPI(const Model::CreateCloudBaseGWAPIRequest &request);
                void CreateCloudBaseGWAPIAsync(const Model::CreateCloudBaseGWAPIRequest& request, const CreateCloudBaseGWAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudBaseGWAPIOutcomeCallable CreateCloudBaseGWAPICallable(const Model::CreateCloudBaseGWAPIRequest& request);

                /**
                 *本接口用于购买云开发环境。
该接口会自动下单并支付，会在腾讯云账户中扣除余额（余额不足会下单失败）。
该接口支持自动扣除代金券（AutoVoucher=true时），符合条件的代金券会被自动扣除。
环境下单成功之后会返回EnvId。EnvId是全局唯一表示。
环境发货是异步行为，后续可以通过接口 [DescribeEnvs ](https://cloud.tencent.com/document/product/876/34820) 查询环境状态和各项资源信息；通过 [DescribeBillingInfo](https://cloud.tencent.com/document/product/876/94390) 查询环境套餐信息，包括 到期时间、当前套餐等。
                 * @param req CreateEnvRequest
                 * @return CreateEnvOutcome
                 */
                CreateEnvOutcome CreateEnv(const Model::CreateEnvRequest &request);
                void CreateEnvAsync(const Model::CreateEnvRequest& request, const CreateEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEnvOutcomeCallable CreateEnvCallable(const Model::CreateEnvRequest& request);

                /**
                 *创建托管域名
                 * @param req CreateHostingDomainRequest
                 * @return CreateHostingDomainOutcome
                 */
                CreateHostingDomainOutcome CreateHostingDomain(const Model::CreateHostingDomainRequest &request);
                void CreateHostingDomainAsync(const Model::CreateHostingDomainRequest& request, const CreateHostingDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHostingDomainOutcomeCallable CreateHostingDomainCallable(const Model::CreateHostingDomainRequest& request);

                /**
                 *开通Mysql型数据库

开通后，可通过 [DescribeCreateMySQLResult ](https://cloud.tencent.com/document/api/876/128185) 查询开通结果，Mysql开通成功后，可通过接口设置数据库账号相关功能包括但不限于【创建账号、删除账号、查询可授权权限列表、查询账号已有权限、修改主机、修改配置、修改账号库表权限】、集群操作相关【查询集群参数、修改集群参数】，连接设置相关【关闭外网、开通外网、查询集群信息】，备份回档相关【创建手动回档、删除手动回档、修改自动备份配置信息、查询备份文件列表、集群回档、查询任务列表、获取table列表、获取集群数据库列表、查询备份下载地址】，相关功能接口文档：[TDSQL-C MySQL API文档](https://cloud.tencent.com/document/product/1003/48106)，可以通过 [RunSql](https://cloud.tencent.com/document/api/876/127880) 接口来执行 sql 命令，比如创建表格、插入数据、删除表格等 sql 命令
                 * @param req CreateMySQLRequest
                 * @return CreateMySQLOutcome
                 */
                CreateMySQLOutcome CreateMySQL(const Model::CreateMySQLRequest &request);
                void CreateMySQLAsync(const Model::CreateMySQLRequest& request, const CreateMySQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMySQLOutcomeCallable CreateMySQLCallable(const Model::CreateMySQLRequest& request);

                /**
                 *创建静态托管资源，包括COS和CDN，异步任务创建，查看创建结果需要根据DescribeStaticStore接口来查看
                 * @param req CreateStaticStoreRequest
                 * @return CreateStaticStoreOutcome
                 */
                CreateStaticStoreOutcome CreateStaticStore(const Model::CreateStaticStoreRequest &request);
                void CreateStaticStoreAsync(const Model::CreateStaticStoreRequest& request, const CreateStaticStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStaticStoreOutcomeCallable CreateStaticStoreCallable(const Model::CreateStaticStoreRequest& request);

                /**
                 *本接口(CreateTable)用于创建文档型数据库表，支持创建capped类型集合，暂时不支持分片表
                 * @param req CreateTableRequest
                 * @return CreateTableOutcome
                 */
                CreateTableOutcome CreateTable(const Model::CreateTableRequest &request);
                void CreateTableAsync(const Model::CreateTableRequest& request, const CreateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTableOutcomeCallable CreateTableCallable(const Model::CreateTableRequest& request);

                /**
                 *创建tcb用户
                 * @param req CreateUserRequest
                 * @return CreateUserOutcome
                 */
                CreateUserOutcome CreateUser(const Model::CreateUserRequest &request);
                void CreateUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUserOutcomeCallable CreateUserCallable(const Model::CreateUserRequest& request);

                /**
                 *删除合法域名。
云开发会校验网页应用请求的来源域名，您需要将来源域名加入到WEB安全域名列表中。
可以通过接口 [DescribeAuthDomains](https://cloud.tencent.com/document/product/876/42151) 获取当前已绑定生效的安全域名。

注意⚠️
安全域名被删除之后，可能会引起跨域问题，请谨慎操作。
                 * @param req DeleteAuthDomainRequest
                 * @return DeleteAuthDomainOutcome
                 */
                DeleteAuthDomainOutcome DeleteAuthDomain(const Model::DeleteAuthDomainRequest &request);
                void DeleteAuthDomainAsync(const Model::DeleteAuthDomainRequest& request, const DeleteAuthDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAuthDomainOutcomeCallable DeleteAuthDomainCallable(const Model::DeleteAuthDomainRequest& request);

                /**
                 *删除网关API
                 * @param req DeleteCloudBaseGWAPIRequest
                 * @return DeleteCloudBaseGWAPIOutcome
                 */
                DeleteCloudBaseGWAPIOutcome DeleteCloudBaseGWAPI(const Model::DeleteCloudBaseGWAPIRequest &request);
                void DeleteCloudBaseGWAPIAsync(const Model::DeleteCloudBaseGWAPIRequest& request, const DeleteCloudBaseGWAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudBaseGWAPIOutcomeCallable DeleteCloudBaseGWAPICallable(const Model::DeleteCloudBaseGWAPIRequest& request);

                /**
                 *删除网关域名
                 * @param req DeleteCloudBaseGWDomainRequest
                 * @return DeleteCloudBaseGWDomainOutcome
                 */
                DeleteCloudBaseGWDomainOutcome DeleteCloudBaseGWDomain(const Model::DeleteCloudBaseGWDomainRequest &request);
                void DeleteCloudBaseGWDomainAsync(const Model::DeleteCloudBaseGWDomainRequest& request, const DeleteCloudBaseGWDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudBaseGWDomainOutcomeCallable DeleteCloudBaseGWDomainCallable(const Model::DeleteCloudBaseGWDomainRequest& request);

                /**
                 *本接口(DeleteTable)用于删除文档型数据库表，删除表后表中数据将会被删除且无法恢复，请谨慎操作

接口入参中的 Tag 为文档型数据库的实例 Id，可以通过 [DescribeEnvs](https://cloud.tencent.com/document/api/876/34820) 接口返回的 EnvList[0].Databases[0].InstanceId 获取
                 * @param req DeleteTableRequest
                 * @return DeleteTableOutcome
                 */
                DeleteTableOutcome DeleteTable(const Model::DeleteTableRequest &request);
                void DeleteTableAsync(const Model::DeleteTableRequest& request, const DeleteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTableOutcomeCallable DeleteTableCallable(const Model::DeleteTableRequest& request);

                /**
                 *删除tcb用户
                 * @param req DeleteUsersRequest
                 * @return DeleteUsersOutcome
                 */
                DeleteUsersOutcome DeleteUsers(const Model::DeleteUsersRequest &request);
                void DeleteUsersAsync(const Model::DeleteUsersRequest& request, const DeleteUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUsersOutcomeCallable DeleteUsersCallable(const Model::DeleteUsersRequest& request);

                /**
                 *本接口用于获取当前环境的安全域名列表。
云开发会校验网页应用请求的来源域名，您需要将来源域名加入到WEB安全域名列表中。
可以通过接口 [CreateAuthDomain](https://cloud.tencent.com/document/product/876/42764) 增加安全域名。
                 * @param req DescribeAuthDomainsRequest
                 * @return DescribeAuthDomainsOutcome
                 */
                DescribeAuthDomainsOutcome DescribeAuthDomains(const Model::DescribeAuthDomainsRequest &request);
                void DescribeAuthDomainsAsync(const Model::DescribeAuthDomainsRequest& request, const DescribeAuthDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuthDomainsOutcomeCallable DescribeAuthDomainsCallable(const Model::DescribeAuthDomainsRequest& request);

                /**
                 *获取新套餐列表，含详情，如果传了PackageId，则只获取指定套餐详情
                 * @param req DescribeBaasPackageListRequest
                 * @return DescribeBaasPackageListOutcome
                 */
                DescribeBaasPackageListOutcome DescribeBaasPackageList(const Model::DescribeBaasPackageListRequest &request);
                void DescribeBaasPackageListAsync(const Model::DescribeBaasPackageListRequest& request, const DescribeBaasPackageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaasPackageListOutcomeCallable DescribeBaasPackageListCallable(const Model::DescribeBaasPackageListRequest& request);

                /**
                 *获取云托管代码上传url
                 * @param req DescribeCloudBaseBuildServiceRequest
                 * @return DescribeCloudBaseBuildServiceOutcome
                 */
                DescribeCloudBaseBuildServiceOutcome DescribeCloudBaseBuildService(const Model::DescribeCloudBaseBuildServiceRequest &request);
                void DescribeCloudBaseBuildServiceAsync(const Model::DescribeCloudBaseBuildServiceRequest& request, const DescribeCloudBaseBuildServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudBaseBuildServiceOutcomeCallable DescribeCloudBaseBuildServiceCallable(const Model::DescribeCloudBaseBuildServiceRequest& request);

                /**
                 *获取网关API列表
                 * @param req DescribeCloudBaseGWAPIRequest
                 * @return DescribeCloudBaseGWAPIOutcome
                 */
                DescribeCloudBaseGWAPIOutcome DescribeCloudBaseGWAPI(const Model::DescribeCloudBaseGWAPIRequest &request);
                void DescribeCloudBaseGWAPIAsync(const Model::DescribeCloudBaseGWAPIRequest& request, const DescribeCloudBaseGWAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudBaseGWAPIOutcomeCallable DescribeCloudBaseGWAPICallable(const Model::DescribeCloudBaseGWAPIRequest& request);

                /**
                 *获取网关服务
                 * @param req DescribeCloudBaseGWServiceRequest
                 * @return DescribeCloudBaseGWServiceOutcome
                 */
                DescribeCloudBaseGWServiceOutcome DescribeCloudBaseGWService(const Model::DescribeCloudBaseGWServiceRequest &request);
                void DescribeCloudBaseGWServiceAsync(const Model::DescribeCloudBaseGWServiceRequest& request, const DescribeCloudBaseGWServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudBaseGWServiceOutcomeCallable DescribeCloudBaseGWServiceCallable(const Model::DescribeCloudBaseGWServiceRequest& request);

                /**
                 *查询开通Mysql结果，`Response.Data.Status = "notexist"` 表示未开通，如果未开通，可以调用 [CreateMySQL](https://cloud.tencent.com/document/api/876/128186) 来开通
 `Response.Data. Status = "success"` 表示开通成功，Mysql开通成功后，可通过接口设置数据库账号相关功能包括但不限于【创建账号、删除账号、查询可授权权限列表、查询账号已有权限、修改主机、修改配置、修改账号库表权限】、集群操作相关【查询集群参数、修改集群参数】，连接设置相关【关闭外网、开通外网、查询集群信息】，备份回档相关【创建手动回档、删除手动回档、修改自动备份配置信息、查询备份文件列表、集群回档、查询任务列表、获取table列表、获取集群数据库列表、查询备份下载地址】，相关功能接口文档：[TDSQL-C MySQL API文档](https://cloud.tencent.com/document/product/1003/48106)，可以通过 [RunSql](https://cloud.tencent.com/document/api/876/127880) 接口来执行 sql 命令，比如创建表格、插入数据、删除表格等 sql 命令
                 * @param req DescribeCreateMySQLResultRequest
                 * @return DescribeCreateMySQLResultOutcome
                 */
                DescribeCreateMySQLResultOutcome DescribeCreateMySQLResult(const Model::DescribeCreateMySQLResultRequest &request);
                void DescribeCreateMySQLResultAsync(const Model::DescribeCreateMySQLResultRequest& request, const DescribeCreateMySQLResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCreateMySQLResultOutcomeCallable DescribeCreateMySQLResultCallable(const Model::DescribeCreateMySQLResultRequest& request);

                /**
                 *获取文档型数据库权限
                 * @param req DescribeDatabaseACLRequest
                 * @return DescribeDatabaseACLOutcome
                 */
                DescribeDatabaseACLOutcome DescribeDatabaseACL(const Model::DescribeDatabaseACLRequest &request);
                void DescribeDatabaseACLAsync(const Model::DescribeDatabaseACLRequest& request, const DescribeDatabaseACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDatabaseACLOutcomeCallable DescribeDatabaseACLCallable(const Model::DescribeDatabaseACLRequest& request);

                /**
                 *查询环境计费周期。
云开发环境的资源点都是按月结算的，每个月都有一定的抵扣额度。

例如：
  某个环境在 2026-01-05 购买了3个月个人版(到期时间: 2026-04-05)，则他可以在以下3个周期内，分别享有40000资源点的额度：
  1. 2026-01-05 ~ 2026-02-05 23:59:59
  2. 2026-02-06 ~ 2026-03-05 23:59:59
  3. 2026-03-06 ~ 2026-04-05 23:59:59

本接口，用于获取环境当前属于哪个计费周期内。
                 * @param req DescribeEnvAccountCircleRequest
                 * @return DescribeEnvAccountCircleOutcome
                 */
                DescribeEnvAccountCircleOutcome DescribeEnvAccountCircle(const Model::DescribeEnvAccountCircleRequest &request);
                void DescribeEnvAccountCircleAsync(const Model::DescribeEnvAccountCircleRequest& request, const DescribeEnvAccountCircleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvAccountCircleOutcomeCallable DescribeEnvAccountCircleCallable(const Model::DescribeEnvAccountCircleRequest& request);

                /**
                 *查询环境个数上限
                 * @param req DescribeEnvLimitRequest
                 * @return DescribeEnvLimitOutcome
                 */
                DescribeEnvLimitOutcome DescribeEnvLimit(const Model::DescribeEnvLimitRequest &request);
                void DescribeEnvLimitAsync(const Model::DescribeEnvLimitRequest& request, const DescribeEnvLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvLimitOutcomeCallable DescribeEnvLimitCallable(const Model::DescribeEnvLimitRequest& request);

                /**
                 *获取环境列表，含环境下的各个资源信息。尤其是各资源的唯一标识，是请求各资源的关键参数
                 * @param req DescribeEnvsRequest
                 * @return DescribeEnvsOutcome
                 */
                DescribeEnvsOutcome DescribeEnvs(const Model::DescribeEnvsRequest &request);
                void DescribeEnvsAsync(const Model::DescribeEnvsRequest& request, const DescribeEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvsOutcomeCallable DescribeEnvsCallable(const Model::DescribeEnvsRequest& request);

                /**
                 *查询静态托管域名任务状态
                 * @param req DescribeHostingDomainTaskRequest
                 * @return DescribeHostingDomainTaskOutcome
                 */
                DescribeHostingDomainTaskOutcome DescribeHostingDomainTask(const Model::DescribeHostingDomainTaskRequest &request);
                void DescribeHostingDomainTaskAsync(const Model::DescribeHostingDomainTaskRequest& request, const DescribeHostingDomainTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostingDomainTaskOutcomeCallable DescribeHostingDomainTaskCallable(const Model::DescribeHostingDomainTaskRequest& request);

                /**
                 *查询Mysql集群信息

调用该接口前需要先查询Mysql是否开通，可通过 [DescribeCreateMySQLResult ](https://cloud.tencent.com/document/api/876/128185) 查询，只有已开通的才能查到集群信息，Mysql开通成功后，可通过接口设置数据库账号相关功能包括但不限于【创建账号、删除账号、查询可授权权限列表、查询账号已有权限、修改主机、修改配置、修改账号库表权限】、集群操作相关【查询集群参数、修改集群参数】，连接设置相关【关闭外网、开通外网、查询集群信息】，备份回档相关【创建手动回档、删除手动回档、修改自动备份配置信息、查询备份文件列表、集群回档、查询任务列表、获取table列表、获取集群数据库列表、查询备份下载地址】，相关功能接口文档：[TDSQL-C MySQL API文档](https://cloud.tencent.com/document/product/1003/48106)，可以通过 [RunSql](https://cloud.tencent.com/document/api/876/127880) 接口来执行 sql 命令，比如创建表格、插入数据、删除表格等 sql 命令
                 * @param req DescribeMySQLClusterDetailRequest
                 * @return DescribeMySQLClusterDetailOutcome
                 */
                DescribeMySQLClusterDetailOutcome DescribeMySQLClusterDetail(const Model::DescribeMySQLClusterDetailRequest &request);
                void DescribeMySQLClusterDetailAsync(const Model::DescribeMySQLClusterDetailRequest& request, const DescribeMySQLClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMySQLClusterDetailOutcomeCallable DescribeMySQLClusterDetailCallable(const Model::DescribeMySQLClusterDetailRequest& request);

                /**
                 *查询Mysql任务状态
                 * @param req DescribeMySQLTaskStatusRequest
                 * @return DescribeMySQLTaskStatusOutcome
                 */
                DescribeMySQLTaskStatusOutcome DescribeMySQLTaskStatus(const Model::DescribeMySQLTaskStatusRequest &request);
                void DescribeMySQLTaskStatusAsync(const Model::DescribeMySQLTaskStatusRequest& request, const DescribeMySQLTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMySQLTaskStatusOutcomeCallable DescribeMySQLTaskStatusCallable(const Model::DescribeMySQLTaskStatusRequest& request);

                /**
                 *查询指定指标的配额使用量
                 * @param req DescribeQuotaDataRequest
                 * @return DescribeQuotaDataOutcome
                 */
                DescribeQuotaDataOutcome DescribeQuotaData(const Model::DescribeQuotaDataRequest &request);
                void DescribeQuotaDataAsync(const Model::DescribeQuotaDataRequest& request, const DescribeQuotaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQuotaDataOutcomeCallable DescribeQuotaDataCallable(const Model::DescribeQuotaDataRequest& request);

                /**
                 *查询数据库安全规则。
安全规则，用于控制C端用户的访问权限。详见 [安全规则介绍](https://cloud.tencent.com/document/product/876/123478) 。
                 * @param req DescribeSafeRuleRequest
                 * @return DescribeSafeRuleOutcome
                 */
                DescribeSafeRuleOutcome DescribeSafeRule(const Model::DescribeSafeRuleRequest &request);
                void DescribeSafeRuleAsync(const Model::DescribeSafeRuleRequest& request, const DescribeSafeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSafeRuleOutcomeCallable DescribeSafeRuleCallable(const Model::DescribeSafeRuleRequest& request);

                /**
                 *查看当前环境下静态托管资源信息，根据返回结果判断静态资源的状态
                 * @param req DescribeStaticStoreRequest
                 * @return DescribeStaticStoreOutcome
                 */
                DescribeStaticStoreOutcome DescribeStaticStore(const Model::DescribeStaticStoreRequest &request);
                void DescribeStaticStoreAsync(const Model::DescribeStaticStoreRequest& request, const DescribeStaticStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStaticStoreOutcomeCallable DescribeStaticStoreCallable(const Model::DescribeStaticStoreRequest& request);

                /**
                 *查询文档型数据库表的相关信息，包括索引等信息

接口入参中的 Tag 为文档型数据库的实例 Id，可以通过 [DescribeEnvs](https://cloud.tencent.com/document/api/876/34820) 接口返回的 EnvList[0].Databases[0].InstanceId 获取
                 * @param req DescribeTableRequest
                 * @return DescribeTableOutcome
                 */
                DescribeTableOutcome DescribeTable(const Model::DescribeTableRequest &request);
                void DescribeTableAsync(const Model::DescribeTableRequest& request, const DescribeTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableOutcomeCallable DescribeTableCallable(const Model::DescribeTableRequest& request);

                /**
                 *本接口(DescribeTables)用于查询文档型数据库所有表信息，包括表名、表中数据条数、表中数据量、索引个数及索引的大小等
                 * @param req DescribeTablesRequest
                 * @return DescribeTablesOutcome
                 */
                DescribeTablesOutcome DescribeTables(const Model::DescribeTablesRequest &request);
                void DescribeTablesAsync(const Model::DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTablesOutcomeCallable DescribeTablesCallable(const Model::DescribeTablesRequest& request);

                /**
                 *查询tcb用户列表
                 * @param req DescribeUserListRequest
                 * @return DescribeUserListOutcome
                 */
                DescribeUserListOutcome DescribeUserList(const Model::DescribeUserListRequest &request);
                void DescribeUserListAsync(const Model::DescribeUserListRequest& request, const DescribeUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserListOutcomeCallable DescribeUserListCallable(const Model::DescribeUserListRequest& request);

                /**
                 *本接口用于销毁云开发环境。
云开发环境遵循腾讯云包年包月预付费产品生命周期，因此环境销毁需要分两步：
1. 资源退费。此时会根据当前环境剩余有效期，自动退还相关费用(代金券不退)。退款后，环境进入隔离期。
2. 环境删除。环境在进入隔离期后15天会自动删除。也可以通过本接口，指定 IsForce=true 来强制删除隔离期环境。

**注意**⚠️
  1. 环境退费后进入隔离期，则所有资源均无法访问，控制台无法操作和管理。
  2. 环境被彻底删除后，所有数据均无法找回。请谨慎操作。

可以通过接口 [tcb:DescribeBillingInfo](https://cloud.tencent.com/document/product/876/94390) 查询环境计费状态。
                 * @param req DestroyEnvRequest
                 * @return DestroyEnvOutcome
                 */
                DestroyEnvOutcome DestroyEnv(const Model::DestroyEnvRequest &request);
                void DestroyEnvAsync(const Model::DestroyEnvRequest& request, const DestroyEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyEnvOutcomeCallable DestroyEnvCallable(const Model::DestroyEnvRequest& request);

                /**
                 *销毁Mysql

销毁后可以通过 [DescribeMySQLTaskStatus](https://cloud.tencent.com/document/api/876/128183) 接口查询销毁结果，如果 `Response.Data. Status = FAILED ` 表示销毁失败，可以重新调用销毁接口重试
                 * @param req DestroyMySQLRequest
                 * @return DestroyMySQLOutcome
                 */
                DestroyMySQLOutcome DestroyMySQL(const Model::DestroyMySQLRequest &request);
                void DestroyMySQLAsync(const Model::DestroyMySQLRequest& request, const DestroyMySQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyMySQLOutcomeCallable DestroyMySQLCallable(const Model::DestroyMySQLRequest& request);

                /**
                 *销毁静态托管资源，该接口创建异步销毁任务，资源最终状态可从DestroyStaticStore接口查看
                 * @param req DestroyStaticStoreRequest
                 * @return DestroyStaticStoreOutcome
                 */
                DestroyStaticStoreOutcome DestroyStaticStore(const Model::DestroyStaticStoreRequest &request);
                void DestroyStaticStoreAsync(const Model::DestroyStaticStoreRequest& request, const DestroyStaticStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyStaticStoreOutcomeCallable DestroyStaticStoreCallable(const Model::DestroyStaticStoreRequest& request);

                /**
                 *修改登录配置
                 * @param req EditAuthConfigRequest
                 * @return EditAuthConfigOutcome
                 */
                EditAuthConfigOutcome EditAuthConfig(const Model::EditAuthConfigRequest &request);
                void EditAuthConfigAsync(const Model::EditAuthConfigRequest& request, const EditAuthConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditAuthConfigOutcomeCallable EditAuthConfigCallable(const Model::EditAuthConfigRequest& request);

                /**
                 *本接口(ListTables)用于查询文档型数据库所有表信息，包括表名、表中数据条数、表中数据量、索引个数及索引的大小等

该接口跟 [DescribeTables](https://cloud.tencent.com/document/api/876/127962) 接口功能一致，后续该接口可能会下线，请使用 [DescribeTable](https://cloud.tencent.com/document/api/876/127962)接口
                 * @param req ListTablesRequest
                 * @return ListTablesOutcome
                 */
                ListTablesOutcome ListTables(const Model::ListTablesRequest &request);
                void ListTablesAsync(const Model::ListTablesRequest& request, const ListTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTablesOutcomeCallable ListTablesCallable(const Model::ListTablesRequest& request);

                /**
                 *修改云开发网关API
                 * @param req ModifyCloudBaseGWAPIRequest
                 * @return ModifyCloudBaseGWAPIOutcome
                 */
                ModifyCloudBaseGWAPIOutcome ModifyCloudBaseGWAPI(const Model::ModifyCloudBaseGWAPIRequest &request);
                void ModifyCloudBaseGWAPIAsync(const Model::ModifyCloudBaseGWAPIRequest& request, const ModifyCloudBaseGWAPIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudBaseGWAPIOutcomeCallable ModifyCloudBaseGWAPICallable(const Model::ModifyCloudBaseGWAPIRequest& request);

                /**
                 *修改日志主题
                 * @param req ModifyClsTopicRequest
                 * @return ModifyClsTopicOutcome
                 */
                ModifyClsTopicOutcome ModifyClsTopic(const Model::ModifyClsTopicRequest &request);
                void ModifyClsTopicAsync(const Model::ModifyClsTopicRequest& request, const ModifyClsTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClsTopicOutcomeCallable ModifyClsTopicCallable(const Model::ModifyClsTopicRequest& request);

                /**
                 *修改文档型数据库权限
                 * @param req ModifyDatabaseACLRequest
                 * @return ModifyDatabaseACLOutcome
                 */
                ModifyDatabaseACLOutcome ModifyDatabaseACL(const Model::ModifyDatabaseACLRequest &request);
                void ModifyDatabaseACLAsync(const Model::ModifyDatabaseACLRequest& request, const ModifyDatabaseACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDatabaseACLOutcomeCallable ModifyDatabaseACLCallable(const Model::ModifyDatabaseACLRequest& request);

                /**
                 *更新环境信息
                 * @param req ModifyEnvRequest
                 * @return ModifyEnvOutcome
                 */
                ModifyEnvOutcome ModifyEnv(const Model::ModifyEnvRequest &request);
                void ModifyEnvAsync(const Model::ModifyEnvRequest& request, const ModifyEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEnvOutcomeCallable ModifyEnvCallable(const Model::ModifyEnvRequest& request);

                /**
                 *本接口用于变更云开发环境套餐。
该接口会自动下单并支付，会在腾讯云账户中扣除余额（余额不足会下单失败）。
该接口支持自动扣除代金券（AutoVoucher=true时），符合条件的代金券会被自动扣除。
                 * @param req ModifyEnvPlanRequest
                 * @return ModifyEnvPlanOutcome
                 */
                ModifyEnvPlanOutcome ModifyEnvPlan(const Model::ModifyEnvPlanRequest &request);
                void ModifyEnvPlanAsync(const Model::ModifyEnvPlanRequest& request, const ModifyEnvPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEnvPlanOutcomeCallable ModifyEnvPlanCallable(const Model::ModifyEnvPlanRequest& request);

                /**
                 *设置数据库安全规则。
安全规则，用于控制C端用户的访问权限。详见 [安全规则介绍 ](https://cloud.tencent.com/document/product/876/123478)。
                 * @param req ModifySafeRuleRequest
                 * @return ModifySafeRuleOutcome
                 */
                ModifySafeRuleOutcome ModifySafeRule(const Model::ModifySafeRuleRequest &request);
                void ModifySafeRuleAsync(const Model::ModifySafeRuleRequest& request, const ModifySafeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySafeRuleOutcomeCallable ModifySafeRuleCallable(const Model::ModifySafeRuleRequest& request);

                /**
                 *修改tcb用户
                 * @param req ModifyUserRequest
                 * @return ModifyUserOutcome
                 */
                ModifyUserOutcome ModifyUser(const Model::ModifyUserRequest &request);
                void ModifyUserAsync(const Model::ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserOutcomeCallable ModifyUserCallable(const Model::ModifyUserRequest& request);

                /**
                 *针对已隔离的免费环境，可以通过本接口将其恢复访问。
                 * @param req ReinstateEnvRequest
                 * @return ReinstateEnvOutcome
                 */
                ReinstateEnvOutcome ReinstateEnv(const Model::ReinstateEnvRequest &request);
                void ReinstateEnvAsync(const Model::ReinstateEnvRequest& request, const ReinstateEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReinstateEnvOutcomeCallable ReinstateEnvCallable(const Model::ReinstateEnvRequest& request);

                /**
                 *本接口用于云开发环境套餐续费。
该接口会自动下单并支付，会在腾讯云账户中扣除余额（余额不足会下单失败）。
该接口支持自动扣除代金券（AutoVoucher=true时），符合条件的代金券会被自动扣除。
                 * @param req RenewEnvRequest
                 * @return RenewEnvOutcome
                 */
                RenewEnvOutcome RenewEnv(const Model::RenewEnvRequest &request);
                void RenewEnvAsync(const Model::RenewEnvRequest& request, const RenewEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewEnvOutcomeCallable RenewEnvCallable(const Model::RenewEnvRequest& request);

                /**
                 *本接口用于执行文档型数据库命令
                 * @param req RunCommandsRequest
                 * @return RunCommandsOutcome
                 */
                RunCommandsOutcome RunCommands(const Model::RunCommandsRequest &request);
                void RunCommandsAsync(const Model::RunCommandsRequest& request, const RunCommandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunCommandsOutcomeCallable RunCommandsCallable(const Model::RunCommandsRequest& request);

                /**
                 *执行MySQL语句

该接口用来执行 MySql 语句，比如创建表格、插入数据、修改数据、删除字段、添加索引等可以通过sql 语句实现的都可以使用该接口

调用该接口前需要先查询Mysql是否开通，可通过 [DescribeCreateMySQLResult ](https://cloud.tencent.com/document/api/876/128185) 查询，只有开通成功才能操作
                 * @param req RunSqlRequest
                 * @return RunSqlOutcome
                 */
                RunSqlOutcome RunSql(const Model::RunSqlRequest &request);
                void RunSqlAsync(const Model::RunSqlRequest& request, const RunSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunSqlOutcomeCallable RunSqlCallable(const Model::RunSqlRequest& request);

                /**
                 *搜索用户调用日志
                 * @param req SearchClsLogRequest
                 * @return SearchClsLogOutcome
                 */
                SearchClsLogOutcome SearchClsLog(const Model::SearchClsLogRequest &request);
                void SearchClsLogAsync(const Model::SearchClsLogRequest& request, const SearchClsLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchClsLogOutcomeCallable SearchClsLogCallable(const Model::SearchClsLogRequest& request);

                /**
                 *本接口(UpdateTable)用于修改文档型数据库表信息，当前可以支持创建和删除索引
                 * @param req UpdateTableRequest
                 * @return UpdateTableOutcome
                 */
                UpdateTableOutcome UpdateTable(const Model::UpdateTableRequest &request);
                void UpdateTableAsync(const Model::UpdateTableRequest& request, const UpdateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateTableOutcomeCallable UpdateTableCallable(const Model::UpdateTableRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_TCBCLIENT_H_
