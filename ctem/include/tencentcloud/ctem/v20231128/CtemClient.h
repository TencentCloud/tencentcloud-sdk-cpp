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

#ifndef TENCENTCLOUD_CTEM_V20231128_CTEMCLIENT_H_
#define TENCENTCLOUD_CTEM_V20231128_CTEMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ctem/v20231128/model/CreateAppRequest.h>
#include <tencentcloud/ctem/v20231128/model/CreateAppResponse.h>
#include <tencentcloud/ctem/v20231128/model/CreateAssetRequest.h>
#include <tencentcloud/ctem/v20231128/model/CreateAssetResponse.h>
#include <tencentcloud/ctem/v20231128/model/CreateCustomerRequest.h>
#include <tencentcloud/ctem/v20231128/model/CreateCustomerResponse.h>
#include <tencentcloud/ctem/v20231128/model/CreateDomainRequest.h>
#include <tencentcloud/ctem/v20231128/model/CreateDomainResponse.h>
#include <tencentcloud/ctem/v20231128/model/CreateEnterpriseRequest.h>
#include <tencentcloud/ctem/v20231128/model/CreateEnterpriseResponse.h>
#include <tencentcloud/ctem/v20231128/model/CreateHttpRequest.h>
#include <tencentcloud/ctem/v20231128/model/CreateHttpResponse.h>
#include <tencentcloud/ctem/v20231128/model/CreateJobRecordRequest.h>
#include <tencentcloud/ctem/v20231128/model/CreateJobRecordResponse.h>
#include <tencentcloud/ctem/v20231128/model/CreateManageRequest.h>
#include <tencentcloud/ctem/v20231128/model/CreateManageResponse.h>
#include <tencentcloud/ctem/v20231128/model/CreatePortRequest.h>
#include <tencentcloud/ctem/v20231128/model/CreatePortResponse.h>
#include <tencentcloud/ctem/v20231128/model/CreateSeedsRequest.h>
#include <tencentcloud/ctem/v20231128/model/CreateSeedsResponse.h>
#include <tencentcloud/ctem/v20231128/model/CreateSubDomainRequest.h>
#include <tencentcloud/ctem/v20231128/model/CreateSubDomainResponse.h>
#include <tencentcloud/ctem/v20231128/model/CreateSuspiciousAssetRequest.h>
#include <tencentcloud/ctem/v20231128/model/CreateSuspiciousAssetResponse.h>
#include <tencentcloud/ctem/v20231128/model/CreateWechatAppletRequest.h>
#include <tencentcloud/ctem/v20231128/model/CreateWechatAppletResponse.h>
#include <tencentcloud/ctem/v20231128/model/CreateWechatOfficialAccountRequest.h>
#include <tencentcloud/ctem/v20231128/model/CreateWechatOfficialAccountResponse.h>
#include <tencentcloud/ctem/v20231128/model/DeleteAppsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DeleteAppsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DeleteAssetsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DeleteAssetsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DeleteDomainsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DeleteDomainsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DeleteEnterprisesRequest.h>
#include <tencentcloud/ctem/v20231128/model/DeleteEnterprisesResponse.h>
#include <tencentcloud/ctem/v20231128/model/DeleteHttpsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DeleteHttpsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DeleteManagesRequest.h>
#include <tencentcloud/ctem/v20231128/model/DeleteManagesResponse.h>
#include <tencentcloud/ctem/v20231128/model/DeletePortsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DeletePortsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DeleteSeedsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DeleteSeedsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DeleteSubDomainsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DeleteSubDomainsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DeleteSuspiciousAssetsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DeleteSuspiciousAssetsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DeleteWechatAppletsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DeleteWechatAppletsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DeleteWechatOfficialAccountsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DeleteWechatOfficialAccountsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeApiSecsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeApiSecsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeAppsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeAppsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeAssetsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeAssetsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeConfigsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeConfigsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeCustomersRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeCustomersResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeDarkWebsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeDarkWebsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeDomainsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeDomainsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeEnterprisesRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeEnterprisesResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeFakeAppsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeFakeAppsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeFakeMiniProgramsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeFakeMiniProgramsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeFakeWebsitesRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeFakeWebsitesResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeFakeWechatOfficialsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeFakeWechatOfficialsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeGithubsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeGithubsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeHttpsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeHttpsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeJobRecordDetailsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeJobRecordDetailsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeJobRecordsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeJobRecordsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeLeakageCodesRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeLeakageCodesResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeLeakageDatasRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeLeakageDatasResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeLeakageEmailsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeLeakageEmailsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeManagesRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeManagesResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeNetDisksRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeNetDisksResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribePortsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribePortsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeSeedsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeSeedsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeSensitiveInfosRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeSensitiveInfosResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeSubDomainsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeSubDomainsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeSuspiciousAssetsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeSuspiciousAssetsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeVulsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeVulsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeWeakPasswordsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeWeakPasswordsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeWechatAppletsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeWechatAppletsResponse.h>
#include <tencentcloud/ctem/v20231128/model/DescribeWechatOfficialAccountsRequest.h>
#include <tencentcloud/ctem/v20231128/model/DescribeWechatOfficialAccountsResponse.h>
#include <tencentcloud/ctem/v20231128/model/IgnoreDataRequest.h>
#include <tencentcloud/ctem/v20231128/model/IgnoreDataResponse.h>
#include <tencentcloud/ctem/v20231128/model/ModifyCustomerRequest.h>
#include <tencentcloud/ctem/v20231128/model/ModifyCustomerResponse.h>
#include <tencentcloud/ctem/v20231128/model/ModifyLabelRequest.h>
#include <tencentcloud/ctem/v20231128/model/ModifyLabelResponse.h>
#include <tencentcloud/ctem/v20231128/model/ModifySeedStatusRequest.h>
#include <tencentcloud/ctem/v20231128/model/ModifySeedStatusResponse.h>
#include <tencentcloud/ctem/v20231128/model/StopJobRecordRequest.h>
#include <tencentcloud/ctem/v20231128/model/StopJobRecordResponse.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            class CtemClient : public AbstractClient
            {
            public:
                CtemClient(const Credential &credential, const std::string &region);
                CtemClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateAppResponse> CreateAppOutcome;
                typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::CreateAppRequest&, CreateAppOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssetResponse> CreateAssetOutcome;
                typedef std::future<CreateAssetOutcome> CreateAssetOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::CreateAssetRequest&, CreateAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCustomerResponse> CreateCustomerOutcome;
                typedef std::future<CreateCustomerOutcome> CreateCustomerOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::CreateCustomerRequest&, CreateCustomerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDomainResponse> CreateDomainOutcome;
                typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::CreateDomainRequest&, CreateDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEnterpriseResponse> CreateEnterpriseOutcome;
                typedef std::future<CreateEnterpriseOutcome> CreateEnterpriseOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::CreateEnterpriseRequest&, CreateEnterpriseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnterpriseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHttpResponse> CreateHttpOutcome;
                typedef std::future<CreateHttpOutcome> CreateHttpOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::CreateHttpRequest&, CreateHttpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHttpAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateJobRecordResponse> CreateJobRecordOutcome;
                typedef std::future<CreateJobRecordOutcome> CreateJobRecordOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::CreateJobRecordRequest&, CreateJobRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateManageResponse> CreateManageOutcome;
                typedef std::future<CreateManageOutcome> CreateManageOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::CreateManageRequest&, CreateManageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateManageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePortResponse> CreatePortOutcome;
                typedef std::future<CreatePortOutcome> CreatePortOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::CreatePortRequest&, CreatePortOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePortAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSeedsResponse> CreateSeedsOutcome;
                typedef std::future<CreateSeedsOutcome> CreateSeedsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::CreateSeedsRequest&, CreateSeedsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSeedsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSubDomainResponse> CreateSubDomainOutcome;
                typedef std::future<CreateSubDomainOutcome> CreateSubDomainOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::CreateSubDomainRequest&, CreateSubDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSuspiciousAssetResponse> CreateSuspiciousAssetOutcome;
                typedef std::future<CreateSuspiciousAssetOutcome> CreateSuspiciousAssetOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::CreateSuspiciousAssetRequest&, CreateSuspiciousAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSuspiciousAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWechatAppletResponse> CreateWechatAppletOutcome;
                typedef std::future<CreateWechatAppletOutcome> CreateWechatAppletOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::CreateWechatAppletRequest&, CreateWechatAppletOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWechatAppletAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWechatOfficialAccountResponse> CreateWechatOfficialAccountOutcome;
                typedef std::future<CreateWechatOfficialAccountOutcome> CreateWechatOfficialAccountOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::CreateWechatOfficialAccountRequest&, CreateWechatOfficialAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWechatOfficialAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAppsResponse> DeleteAppsOutcome;
                typedef std::future<DeleteAppsOutcome> DeleteAppsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DeleteAppsRequest&, DeleteAppsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAssetsResponse> DeleteAssetsOutcome;
                typedef std::future<DeleteAssetsOutcome> DeleteAssetsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DeleteAssetsRequest&, DeleteAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDomainsResponse> DeleteDomainsOutcome;
                typedef std::future<DeleteDomainsOutcome> DeleteDomainsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DeleteDomainsRequest&, DeleteDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEnterprisesResponse> DeleteEnterprisesOutcome;
                typedef std::future<DeleteEnterprisesOutcome> DeleteEnterprisesOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DeleteEnterprisesRequest&, DeleteEnterprisesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEnterprisesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteHttpsResponse> DeleteHttpsOutcome;
                typedef std::future<DeleteHttpsOutcome> DeleteHttpsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DeleteHttpsRequest&, DeleteHttpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHttpsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteManagesResponse> DeleteManagesOutcome;
                typedef std::future<DeleteManagesOutcome> DeleteManagesOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DeleteManagesRequest&, DeleteManagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteManagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePortsResponse> DeletePortsOutcome;
                typedef std::future<DeletePortsOutcome> DeletePortsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DeletePortsRequest&, DeletePortsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePortsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSeedsResponse> DeleteSeedsOutcome;
                typedef std::future<DeleteSeedsOutcome> DeleteSeedsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DeleteSeedsRequest&, DeleteSeedsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSeedsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSubDomainsResponse> DeleteSubDomainsOutcome;
                typedef std::future<DeleteSubDomainsOutcome> DeleteSubDomainsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DeleteSubDomainsRequest&, DeleteSubDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSubDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSuspiciousAssetsResponse> DeleteSuspiciousAssetsOutcome;
                typedef std::future<DeleteSuspiciousAssetsOutcome> DeleteSuspiciousAssetsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DeleteSuspiciousAssetsRequest&, DeleteSuspiciousAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSuspiciousAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWechatAppletsResponse> DeleteWechatAppletsOutcome;
                typedef std::future<DeleteWechatAppletsOutcome> DeleteWechatAppletsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DeleteWechatAppletsRequest&, DeleteWechatAppletsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWechatAppletsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWechatOfficialAccountsResponse> DeleteWechatOfficialAccountsOutcome;
                typedef std::future<DeleteWechatOfficialAccountsOutcome> DeleteWechatOfficialAccountsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DeleteWechatOfficialAccountsRequest&, DeleteWechatOfficialAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWechatOfficialAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApiSecsResponse> DescribeApiSecsOutcome;
                typedef std::future<DescribeApiSecsOutcome> DescribeApiSecsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeApiSecsRequest&, DescribeApiSecsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiSecsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAppsResponse> DescribeAppsOutcome;
                typedef std::future<DescribeAppsOutcome> DescribeAppsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeAppsRequest&, DescribeAppsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetsResponse> DescribeAssetsOutcome;
                typedef std::future<DescribeAssetsOutcome> DescribeAssetsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeAssetsRequest&, DescribeAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigsResponse> DescribeConfigsOutcome;
                typedef std::future<DescribeConfigsOutcome> DescribeConfigsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeConfigsRequest&, DescribeConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomersResponse> DescribeCustomersOutcome;
                typedef std::future<DescribeCustomersOutcome> DescribeCustomersOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeCustomersRequest&, DescribeCustomersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDarkWebsResponse> DescribeDarkWebsOutcome;
                typedef std::future<DescribeDarkWebsOutcome> DescribeDarkWebsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeDarkWebsRequest&, DescribeDarkWebsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDarkWebsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainsResponse> DescribeDomainsOutcome;
                typedef std::future<DescribeDomainsOutcome> DescribeDomainsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeDomainsRequest&, DescribeDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnterprisesResponse> DescribeEnterprisesOutcome;
                typedef std::future<DescribeEnterprisesOutcome> DescribeEnterprisesOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeEnterprisesRequest&, DescribeEnterprisesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnterprisesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFakeAppsResponse> DescribeFakeAppsOutcome;
                typedef std::future<DescribeFakeAppsOutcome> DescribeFakeAppsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeFakeAppsRequest&, DescribeFakeAppsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFakeAppsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFakeMiniProgramsResponse> DescribeFakeMiniProgramsOutcome;
                typedef std::future<DescribeFakeMiniProgramsOutcome> DescribeFakeMiniProgramsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeFakeMiniProgramsRequest&, DescribeFakeMiniProgramsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFakeMiniProgramsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFakeWebsitesResponse> DescribeFakeWebsitesOutcome;
                typedef std::future<DescribeFakeWebsitesOutcome> DescribeFakeWebsitesOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeFakeWebsitesRequest&, DescribeFakeWebsitesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFakeWebsitesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFakeWechatOfficialsResponse> DescribeFakeWechatOfficialsOutcome;
                typedef std::future<DescribeFakeWechatOfficialsOutcome> DescribeFakeWechatOfficialsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeFakeWechatOfficialsRequest&, DescribeFakeWechatOfficialsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFakeWechatOfficialsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGithubsResponse> DescribeGithubsOutcome;
                typedef std::future<DescribeGithubsOutcome> DescribeGithubsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeGithubsRequest&, DescribeGithubsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGithubsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHttpsResponse> DescribeHttpsOutcome;
                typedef std::future<DescribeHttpsOutcome> DescribeHttpsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeHttpsRequest&, DescribeHttpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHttpsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJobRecordDetailsResponse> DescribeJobRecordDetailsOutcome;
                typedef std::future<DescribeJobRecordDetailsOutcome> DescribeJobRecordDetailsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeJobRecordDetailsRequest&, DescribeJobRecordDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobRecordDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJobRecordsResponse> DescribeJobRecordsOutcome;
                typedef std::future<DescribeJobRecordsOutcome> DescribeJobRecordsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeJobRecordsRequest&, DescribeJobRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLeakageCodesResponse> DescribeLeakageCodesOutcome;
                typedef std::future<DescribeLeakageCodesOutcome> DescribeLeakageCodesOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeLeakageCodesRequest&, DescribeLeakageCodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLeakageCodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLeakageDatasResponse> DescribeLeakageDatasOutcome;
                typedef std::future<DescribeLeakageDatasOutcome> DescribeLeakageDatasOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeLeakageDatasRequest&, DescribeLeakageDatasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLeakageDatasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLeakageEmailsResponse> DescribeLeakageEmailsOutcome;
                typedef std::future<DescribeLeakageEmailsOutcome> DescribeLeakageEmailsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeLeakageEmailsRequest&, DescribeLeakageEmailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLeakageEmailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeManagesResponse> DescribeManagesOutcome;
                typedef std::future<DescribeManagesOutcome> DescribeManagesOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeManagesRequest&, DescribeManagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeManagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetDisksResponse> DescribeNetDisksOutcome;
                typedef std::future<DescribeNetDisksOutcome> DescribeNetDisksOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeNetDisksRequest&, DescribeNetDisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetDisksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePortsResponse> DescribePortsOutcome;
                typedef std::future<DescribePortsOutcome> DescribePortsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribePortsRequest&, DescribePortsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePortsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSeedsResponse> DescribeSeedsOutcome;
                typedef std::future<DescribeSeedsOutcome> DescribeSeedsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeSeedsRequest&, DescribeSeedsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSeedsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSensitiveInfosResponse> DescribeSensitiveInfosOutcome;
                typedef std::future<DescribeSensitiveInfosOutcome> DescribeSensitiveInfosOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeSensitiveInfosRequest&, DescribeSensitiveInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSensitiveInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubDomainsResponse> DescribeSubDomainsOutcome;
                typedef std::future<DescribeSubDomainsOutcome> DescribeSubDomainsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeSubDomainsRequest&, DescribeSubDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSuspiciousAssetsResponse> DescribeSuspiciousAssetsOutcome;
                typedef std::future<DescribeSuspiciousAssetsOutcome> DescribeSuspiciousAssetsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeSuspiciousAssetsRequest&, DescribeSuspiciousAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSuspiciousAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulsResponse> DescribeVulsOutcome;
                typedef std::future<DescribeVulsOutcome> DescribeVulsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeVulsRequest&, DescribeVulsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWeakPasswordsResponse> DescribeWeakPasswordsOutcome;
                typedef std::future<DescribeWeakPasswordsOutcome> DescribeWeakPasswordsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeWeakPasswordsRequest&, DescribeWeakPasswordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWeakPasswordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWechatAppletsResponse> DescribeWechatAppletsOutcome;
                typedef std::future<DescribeWechatAppletsOutcome> DescribeWechatAppletsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeWechatAppletsRequest&, DescribeWechatAppletsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWechatAppletsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWechatOfficialAccountsResponse> DescribeWechatOfficialAccountsOutcome;
                typedef std::future<DescribeWechatOfficialAccountsOutcome> DescribeWechatOfficialAccountsOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::DescribeWechatOfficialAccountsRequest&, DescribeWechatOfficialAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWechatOfficialAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::IgnoreDataResponse> IgnoreDataOutcome;
                typedef std::future<IgnoreDataOutcome> IgnoreDataOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::IgnoreDataRequest&, IgnoreDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IgnoreDataAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomerResponse> ModifyCustomerOutcome;
                typedef std::future<ModifyCustomerOutcome> ModifyCustomerOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::ModifyCustomerRequest&, ModifyCustomerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLabelResponse> ModifyLabelOutcome;
                typedef std::future<ModifyLabelOutcome> ModifyLabelOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::ModifyLabelRequest&, ModifyLabelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLabelAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySeedStatusResponse> ModifySeedStatusOutcome;
                typedef std::future<ModifySeedStatusOutcome> ModifySeedStatusOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::ModifySeedStatusRequest&, ModifySeedStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySeedStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::StopJobRecordResponse> StopJobRecordOutcome;
                typedef std::future<StopJobRecordOutcome> StopJobRecordOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::StopJobRecordRequest&, StopJobRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopJobRecordAsyncHandler;



                /**
                 *添加APP资产
                 * @param req CreateAppRequest
                 * @return CreateAppOutcome
                 */
                CreateAppOutcome CreateApp(const Model::CreateAppRequest &request);
                void CreateAppAsync(const Model::CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAppOutcomeCallable CreateAppCallable(const Model::CreateAppRequest& request);

                /**
                 *添加主机资产
                 * @param req CreateAssetRequest
                 * @return CreateAssetOutcome
                 */
                CreateAssetOutcome CreateAsset(const Model::CreateAssetRequest &request);
                void CreateAssetAsync(const Model::CreateAssetRequest& request, const CreateAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssetOutcomeCallable CreateAssetCallable(const Model::CreateAssetRequest& request);

                /**
                 *创建企业
                 * @param req CreateCustomerRequest
                 * @return CreateCustomerOutcome
                 */
                CreateCustomerOutcome CreateCustomer(const Model::CreateCustomerRequest &request);
                void CreateCustomerAsync(const Model::CreateCustomerRequest& request, const CreateCustomerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustomerOutcomeCallable CreateCustomerCallable(const Model::CreateCustomerRequest& request);

                /**
                 *添加主域名数据
                 * @param req CreateDomainRequest
                 * @return CreateDomainOutcome
                 */
                CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest &request);
                void CreateDomainAsync(const Model::CreateDomainRequest& request, const CreateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDomainOutcomeCallable CreateDomainCallable(const Model::CreateDomainRequest& request);

                /**
                 *添加企业架构资产
                 * @param req CreateEnterpriseRequest
                 * @return CreateEnterpriseOutcome
                 */
                CreateEnterpriseOutcome CreateEnterprise(const Model::CreateEnterpriseRequest &request);
                void CreateEnterpriseAsync(const Model::CreateEnterpriseRequest& request, const CreateEnterpriseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEnterpriseOutcomeCallable CreateEnterpriseCallable(const Model::CreateEnterpriseRequest& request);

                /**
                 *添加网站资产
                 * @param req CreateHttpRequest
                 * @return CreateHttpOutcome
                 */
                CreateHttpOutcome CreateHttp(const Model::CreateHttpRequest &request);
                void CreateHttpAsync(const Model::CreateHttpRequest& request, const CreateHttpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHttpOutcomeCallable CreateHttpCallable(const Model::CreateHttpRequest& request);

                /**
                 *启动测绘
                 * @param req CreateJobRecordRequest
                 * @return CreateJobRecordOutcome
                 */
                CreateJobRecordOutcome CreateJobRecord(const Model::CreateJobRecordRequest &request);
                void CreateJobRecordAsync(const Model::CreateJobRecordRequest& request, const CreateJobRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateJobRecordOutcomeCallable CreateJobRecordCallable(const Model::CreateJobRecordRequest& request);

                /**
                 *添加后台数据
                 * @param req CreateManageRequest
                 * @return CreateManageOutcome
                 */
                CreateManageOutcome CreateManage(const Model::CreateManageRequest &request);
                void CreateManageAsync(const Model::CreateManageRequest& request, const CreateManageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateManageOutcomeCallable CreateManageCallable(const Model::CreateManageRequest& request);

                /**
                 *添加端口服务资产
                 * @param req CreatePortRequest
                 * @return CreatePortOutcome
                 */
                CreatePortOutcome CreatePort(const Model::CreatePortRequest &request);
                void CreatePortAsync(const Model::CreatePortRequest& request, const CreatePortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePortOutcomeCallable CreatePortCallable(const Model::CreatePortRequest& request);

                /**
                 *创建种子
                 * @param req CreateSeedsRequest
                 * @return CreateSeedsOutcome
                 */
                CreateSeedsOutcome CreateSeeds(const Model::CreateSeedsRequest &request);
                void CreateSeedsAsync(const Model::CreateSeedsRequest& request, const CreateSeedsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSeedsOutcomeCallable CreateSeedsCallable(const Model::CreateSeedsRequest& request);

                /**
                 *添加子域名数据
                 * @param req CreateSubDomainRequest
                 * @return CreateSubDomainOutcome
                 */
                CreateSubDomainOutcome CreateSubDomain(const Model::CreateSubDomainRequest &request);
                void CreateSubDomainAsync(const Model::CreateSubDomainRequest& request, const CreateSubDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSubDomainOutcomeCallable CreateSubDomainCallable(const Model::CreateSubDomainRequest& request);

                /**
                 *添加影子资产
                 * @param req CreateSuspiciousAssetRequest
                 * @return CreateSuspiciousAssetOutcome
                 */
                CreateSuspiciousAssetOutcome CreateSuspiciousAsset(const Model::CreateSuspiciousAssetRequest &request);
                void CreateSuspiciousAssetAsync(const Model::CreateSuspiciousAssetRequest& request, const CreateSuspiciousAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSuspiciousAssetOutcomeCallable CreateSuspiciousAssetCallable(const Model::CreateSuspiciousAssetRequest& request);

                /**
                 *添加微信小程序资产
                 * @param req CreateWechatAppletRequest
                 * @return CreateWechatAppletOutcome
                 */
                CreateWechatAppletOutcome CreateWechatApplet(const Model::CreateWechatAppletRequest &request);
                void CreateWechatAppletAsync(const Model::CreateWechatAppletRequest& request, const CreateWechatAppletAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWechatAppletOutcomeCallable CreateWechatAppletCallable(const Model::CreateWechatAppletRequest& request);

                /**
                 *添加微信公众号资产
                 * @param req CreateWechatOfficialAccountRequest
                 * @return CreateWechatOfficialAccountOutcome
                 */
                CreateWechatOfficialAccountOutcome CreateWechatOfficialAccount(const Model::CreateWechatOfficialAccountRequest &request);
                void CreateWechatOfficialAccountAsync(const Model::CreateWechatOfficialAccountRequest& request, const CreateWechatOfficialAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWechatOfficialAccountOutcomeCallable CreateWechatOfficialAccountCallable(const Model::CreateWechatOfficialAccountRequest& request);

                /**
                 *删除APP数据
                 * @param req DeleteAppsRequest
                 * @return DeleteAppsOutcome
                 */
                DeleteAppsOutcome DeleteApps(const Model::DeleteAppsRequest &request);
                void DeleteAppsAsync(const Model::DeleteAppsRequest& request, const DeleteAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAppsOutcomeCallable DeleteAppsCallable(const Model::DeleteAppsRequest& request);

                /**
                 *删除主机资产数据
                 * @param req DeleteAssetsRequest
                 * @return DeleteAssetsOutcome
                 */
                DeleteAssetsOutcome DeleteAssets(const Model::DeleteAssetsRequest &request);
                void DeleteAssetsAsync(const Model::DeleteAssetsRequest& request, const DeleteAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAssetsOutcomeCallable DeleteAssetsCallable(const Model::DeleteAssetsRequest& request);

                /**
                 *删除主域名数据
                 * @param req DeleteDomainsRequest
                 * @return DeleteDomainsOutcome
                 */
                DeleteDomainsOutcome DeleteDomains(const Model::DeleteDomainsRequest &request);
                void DeleteDomainsAsync(const Model::DeleteDomainsRequest& request, const DeleteDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDomainsOutcomeCallable DeleteDomainsCallable(const Model::DeleteDomainsRequest& request);

                /**
                 *删除企业架构数据
                 * @param req DeleteEnterprisesRequest
                 * @return DeleteEnterprisesOutcome
                 */
                DeleteEnterprisesOutcome DeleteEnterprises(const Model::DeleteEnterprisesRequest &request);
                void DeleteEnterprisesAsync(const Model::DeleteEnterprisesRequest& request, const DeleteEnterprisesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEnterprisesOutcomeCallable DeleteEnterprisesCallable(const Model::DeleteEnterprisesRequest& request);

                /**
                 *删除网站资产数据
                 * @param req DeleteHttpsRequest
                 * @return DeleteHttpsOutcome
                 */
                DeleteHttpsOutcome DeleteHttps(const Model::DeleteHttpsRequest &request);
                void DeleteHttpsAsync(const Model::DeleteHttpsRequest& request, const DeleteHttpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteHttpsOutcomeCallable DeleteHttpsCallable(const Model::DeleteHttpsRequest& request);

                /**
                 *删除后台数据
                 * @param req DeleteManagesRequest
                 * @return DeleteManagesOutcome
                 */
                DeleteManagesOutcome DeleteManages(const Model::DeleteManagesRequest &request);
                void DeleteManagesAsync(const Model::DeleteManagesRequest& request, const DeleteManagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteManagesOutcomeCallable DeleteManagesCallable(const Model::DeleteManagesRequest& request);

                /**
                 *删除端口数据
                 * @param req DeletePortsRequest
                 * @return DeletePortsOutcome
                 */
                DeletePortsOutcome DeletePorts(const Model::DeletePortsRequest &request);
                void DeletePortsAsync(const Model::DeletePortsRequest& request, const DeletePortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePortsOutcomeCallable DeletePortsCallable(const Model::DeletePortsRequest& request);

                /**
                 *删除种子
                 * @param req DeleteSeedsRequest
                 * @return DeleteSeedsOutcome
                 */
                DeleteSeedsOutcome DeleteSeeds(const Model::DeleteSeedsRequest &request);
                void DeleteSeedsAsync(const Model::DeleteSeedsRequest& request, const DeleteSeedsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSeedsOutcomeCallable DeleteSeedsCallable(const Model::DeleteSeedsRequest& request);

                /**
                 *删除子域名数据
                 * @param req DeleteSubDomainsRequest
                 * @return DeleteSubDomainsOutcome
                 */
                DeleteSubDomainsOutcome DeleteSubDomains(const Model::DeleteSubDomainsRequest &request);
                void DeleteSubDomainsAsync(const Model::DeleteSubDomainsRequest& request, const DeleteSubDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSubDomainsOutcomeCallable DeleteSubDomainsCallable(const Model::DeleteSubDomainsRequest& request);

                /**
                 *删除影子资产数据
                 * @param req DeleteSuspiciousAssetsRequest
                 * @return DeleteSuspiciousAssetsOutcome
                 */
                DeleteSuspiciousAssetsOutcome DeleteSuspiciousAssets(const Model::DeleteSuspiciousAssetsRequest &request);
                void DeleteSuspiciousAssetsAsync(const Model::DeleteSuspiciousAssetsRequest& request, const DeleteSuspiciousAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSuspiciousAssetsOutcomeCallable DeleteSuspiciousAssetsCallable(const Model::DeleteSuspiciousAssetsRequest& request);

                /**
                 *删除微信小程序数据
                 * @param req DeleteWechatAppletsRequest
                 * @return DeleteWechatAppletsOutcome
                 */
                DeleteWechatAppletsOutcome DeleteWechatApplets(const Model::DeleteWechatAppletsRequest &request);
                void DeleteWechatAppletsAsync(const Model::DeleteWechatAppletsRequest& request, const DeleteWechatAppletsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWechatAppletsOutcomeCallable DeleteWechatAppletsCallable(const Model::DeleteWechatAppletsRequest& request);

                /**
                 *删除微信公众号数据
                 * @param req DeleteWechatOfficialAccountsRequest
                 * @return DeleteWechatOfficialAccountsOutcome
                 */
                DeleteWechatOfficialAccountsOutcome DeleteWechatOfficialAccounts(const Model::DeleteWechatOfficialAccountsRequest &request);
                void DeleteWechatOfficialAccountsAsync(const Model::DeleteWechatOfficialAccountsRequest& request, const DeleteWechatOfficialAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWechatOfficialAccountsOutcomeCallable DeleteWechatOfficialAccountsCallable(const Model::DeleteWechatOfficialAccountsRequest& request);

                /**
                 *查看API安全数据
                 * @param req DescribeApiSecsRequest
                 * @return DescribeApiSecsOutcome
                 */
                DescribeApiSecsOutcome DescribeApiSecs(const Model::DescribeApiSecsRequest &request);
                void DescribeApiSecsAsync(const Model::DescribeApiSecsRequest& request, const DescribeApiSecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiSecsOutcomeCallable DescribeApiSecsCallable(const Model::DescribeApiSecsRequest& request);

                /**
                 *查看移动端资产
                 * @param req DescribeAppsRequest
                 * @return DescribeAppsOutcome
                 */
                DescribeAppsOutcome DescribeApps(const Model::DescribeAppsRequest &request);
                void DescribeAppsAsync(const Model::DescribeAppsRequest& request, const DescribeAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAppsOutcomeCallable DescribeAppsCallable(const Model::DescribeAppsRequest& request);

                /**
                 *查看主机资产
                 * @param req DescribeAssetsRequest
                 * @return DescribeAssetsOutcome
                 */
                DescribeAssetsOutcome DescribeAssets(const Model::DescribeAssetsRequest &request);
                void DescribeAssetsAsync(const Model::DescribeAssetsRequest& request, const DescribeAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetsOutcomeCallable DescribeAssetsCallable(const Model::DescribeAssetsRequest& request);

                /**
                 *查看目录爆破数据
                 * @param req DescribeConfigsRequest
                 * @return DescribeConfigsOutcome
                 */
                DescribeConfigsOutcome DescribeConfigs(const Model::DescribeConfigsRequest &request);
                void DescribeConfigsAsync(const Model::DescribeConfigsRequest& request, const DescribeConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigsOutcomeCallable DescribeConfigsCallable(const Model::DescribeConfigsRequest& request);

                /**
                 *查看企业列表
                 * @param req DescribeCustomersRequest
                 * @return DescribeCustomersOutcome
                 */
                DescribeCustomersOutcome DescribeCustomers(const Model::DescribeCustomersRequest &request);
                void DescribeCustomersAsync(const Model::DescribeCustomersRequest& request, const DescribeCustomersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomersOutcomeCallable DescribeCustomersCallable(const Model::DescribeCustomersRequest& request);

                /**
                 *查看暗网数据
                 * @param req DescribeDarkWebsRequest
                 * @return DescribeDarkWebsOutcome
                 */
                DescribeDarkWebsOutcome DescribeDarkWebs(const Model::DescribeDarkWebsRequest &request);
                void DescribeDarkWebsAsync(const Model::DescribeDarkWebsRequest& request, const DescribeDarkWebsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDarkWebsOutcomeCallable DescribeDarkWebsCallable(const Model::DescribeDarkWebsRequest& request);

                /**
                 *查看主域名数据
                 * @param req DescribeDomainsRequest
                 * @return DescribeDomainsOutcome
                 */
                DescribeDomainsOutcome DescribeDomains(const Model::DescribeDomainsRequest &request);
                void DescribeDomainsAsync(const Model::DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainsOutcomeCallable DescribeDomainsCallable(const Model::DescribeDomainsRequest& request);

                /**
                 *查看企业架构数据
                 * @param req DescribeEnterprisesRequest
                 * @return DescribeEnterprisesOutcome
                 */
                DescribeEnterprisesOutcome DescribeEnterprises(const Model::DescribeEnterprisesRequest &request);
                void DescribeEnterprisesAsync(const Model::DescribeEnterprisesRequest& request, const DescribeEnterprisesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnterprisesOutcomeCallable DescribeEnterprisesCallable(const Model::DescribeEnterprisesRequest& request);

                /**
                 *查询仿冒应用
                 * @param req DescribeFakeAppsRequest
                 * @return DescribeFakeAppsOutcome
                 */
                DescribeFakeAppsOutcome DescribeFakeApps(const Model::DescribeFakeAppsRequest &request);
                void DescribeFakeAppsAsync(const Model::DescribeFakeAppsRequest& request, const DescribeFakeAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFakeAppsOutcomeCallable DescribeFakeAppsCallable(const Model::DescribeFakeAppsRequest& request);

                /**
                 *查询仿冒小程序
                 * @param req DescribeFakeMiniProgramsRequest
                 * @return DescribeFakeMiniProgramsOutcome
                 */
                DescribeFakeMiniProgramsOutcome DescribeFakeMiniPrograms(const Model::DescribeFakeMiniProgramsRequest &request);
                void DescribeFakeMiniProgramsAsync(const Model::DescribeFakeMiniProgramsRequest& request, const DescribeFakeMiniProgramsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFakeMiniProgramsOutcomeCallable DescribeFakeMiniProgramsCallable(const Model::DescribeFakeMiniProgramsRequest& request);

                /**
                 *查询仿冒网站
                 * @param req DescribeFakeWebsitesRequest
                 * @return DescribeFakeWebsitesOutcome
                 */
                DescribeFakeWebsitesOutcome DescribeFakeWebsites(const Model::DescribeFakeWebsitesRequest &request);
                void DescribeFakeWebsitesAsync(const Model::DescribeFakeWebsitesRequest& request, const DescribeFakeWebsitesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFakeWebsitesOutcomeCallable DescribeFakeWebsitesCallable(const Model::DescribeFakeWebsitesRequest& request);

                /**
                 *查询仿冒公众号
                 * @param req DescribeFakeWechatOfficialsRequest
                 * @return DescribeFakeWechatOfficialsOutcome
                 */
                DescribeFakeWechatOfficialsOutcome DescribeFakeWechatOfficials(const Model::DescribeFakeWechatOfficialsRequest &request);
                void DescribeFakeWechatOfficialsAsync(const Model::DescribeFakeWechatOfficialsRequest& request, const DescribeFakeWechatOfficialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFakeWechatOfficialsOutcomeCallable DescribeFakeWechatOfficialsCallable(const Model::DescribeFakeWechatOfficialsRequest& request);

                /**
                 *查看Github泄露数据
                 * @param req DescribeGithubsRequest
                 * @return DescribeGithubsOutcome
                 */
                DescribeGithubsOutcome DescribeGithubs(const Model::DescribeGithubsRequest &request);
                void DescribeGithubsAsync(const Model::DescribeGithubsRequest& request, const DescribeGithubsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGithubsOutcomeCallable DescribeGithubsCallable(const Model::DescribeGithubsRequest& request);

                /**
                 *查看http数据
                 * @param req DescribeHttpsRequest
                 * @return DescribeHttpsOutcome
                 */
                DescribeHttpsOutcome DescribeHttps(const Model::DescribeHttpsRequest &request);
                void DescribeHttpsAsync(const Model::DescribeHttpsRequest& request, const DescribeHttpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHttpsOutcomeCallable DescribeHttpsCallable(const Model::DescribeHttpsRequest& request);

                /**
                 *查看链路详情
                 * @param req DescribeJobRecordDetailsRequest
                 * @return DescribeJobRecordDetailsOutcome
                 */
                DescribeJobRecordDetailsOutcome DescribeJobRecordDetails(const Model::DescribeJobRecordDetailsRequest &request);
                void DescribeJobRecordDetailsAsync(const Model::DescribeJobRecordDetailsRequest& request, const DescribeJobRecordDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobRecordDetailsOutcomeCallable DescribeJobRecordDetailsCallable(const Model::DescribeJobRecordDetailsRequest& request);

                /**
                 *查看任务运行记录列表
                 * @param req DescribeJobRecordsRequest
                 * @return DescribeJobRecordsOutcome
                 */
                DescribeJobRecordsOutcome DescribeJobRecords(const Model::DescribeJobRecordsRequest &request);
                void DescribeJobRecordsAsync(const Model::DescribeJobRecordsRequest& request, const DescribeJobRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobRecordsOutcomeCallable DescribeJobRecordsCallable(const Model::DescribeJobRecordsRequest& request);

                /**
                 *获取代码泄露数据
                 * @param req DescribeLeakageCodesRequest
                 * @return DescribeLeakageCodesOutcome
                 */
                DescribeLeakageCodesOutcome DescribeLeakageCodes(const Model::DescribeLeakageCodesRequest &request);
                void DescribeLeakageCodesAsync(const Model::DescribeLeakageCodesRequest& request, const DescribeLeakageCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLeakageCodesOutcomeCallable DescribeLeakageCodesCallable(const Model::DescribeLeakageCodesRequest& request);

                /**
                 *获取数据泄露事件
                 * @param req DescribeLeakageDatasRequest
                 * @return DescribeLeakageDatasOutcome
                 */
                DescribeLeakageDatasOutcome DescribeLeakageDatas(const Model::DescribeLeakageDatasRequest &request);
                void DescribeLeakageDatasAsync(const Model::DescribeLeakageDatasRequest& request, const DescribeLeakageDatasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLeakageDatasOutcomeCallable DescribeLeakageDatasCallable(const Model::DescribeLeakageDatasRequest& request);

                /**
                 *获取邮箱泄露数据
                 * @param req DescribeLeakageEmailsRequest
                 * @return DescribeLeakageEmailsOutcome
                 */
                DescribeLeakageEmailsOutcome DescribeLeakageEmails(const Model::DescribeLeakageEmailsRequest &request);
                void DescribeLeakageEmailsAsync(const Model::DescribeLeakageEmailsRequest& request, const DescribeLeakageEmailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLeakageEmailsOutcomeCallable DescribeLeakageEmailsCallable(const Model::DescribeLeakageEmailsRequest& request);

                /**
                 *查看后台管理数据
                 * @param req DescribeManagesRequest
                 * @return DescribeManagesOutcome
                 */
                DescribeManagesOutcome DescribeManages(const Model::DescribeManagesRequest &request);
                void DescribeManagesAsync(const Model::DescribeManagesRequest& request, const DescribeManagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeManagesOutcomeCallable DescribeManagesCallable(const Model::DescribeManagesRequest& request);

                /**
                 *查看网盘泄露数据
                 * @param req DescribeNetDisksRequest
                 * @return DescribeNetDisksOutcome
                 */
                DescribeNetDisksOutcome DescribeNetDisks(const Model::DescribeNetDisksRequest &request);
                void DescribeNetDisksAsync(const Model::DescribeNetDisksRequest& request, const DescribeNetDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetDisksOutcomeCallable DescribeNetDisksCallable(const Model::DescribeNetDisksRequest& request);

                /**
                 *查看端口数据
                 * @param req DescribePortsRequest
                 * @return DescribePortsOutcome
                 */
                DescribePortsOutcome DescribePorts(const Model::DescribePortsRequest &request);
                void DescribePortsAsync(const Model::DescribePortsRequest& request, const DescribePortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePortsOutcomeCallable DescribePortsCallable(const Model::DescribePortsRequest& request);

                /**
                 *查看种子列表
                 * @param req DescribeSeedsRequest
                 * @return DescribeSeedsOutcome
                 */
                DescribeSeedsOutcome DescribeSeeds(const Model::DescribeSeedsRequest &request);
                void DescribeSeedsAsync(const Model::DescribeSeedsRequest& request, const DescribeSeedsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSeedsOutcomeCallable DescribeSeedsCallable(const Model::DescribeSeedsRequest& request);

                /**
                 *查看敏感信息泄露数据
                 * @param req DescribeSensitiveInfosRequest
                 * @return DescribeSensitiveInfosOutcome
                 */
                DescribeSensitiveInfosOutcome DescribeSensitiveInfos(const Model::DescribeSensitiveInfosRequest &request);
                void DescribeSensitiveInfosAsync(const Model::DescribeSensitiveInfosRequest& request, const DescribeSensitiveInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSensitiveInfosOutcomeCallable DescribeSensitiveInfosCallable(const Model::DescribeSensitiveInfosRequest& request);

                /**
                 *查看子域名数据
                 * @param req DescribeSubDomainsRequest
                 * @return DescribeSubDomainsOutcome
                 */
                DescribeSubDomainsOutcome DescribeSubDomains(const Model::DescribeSubDomainsRequest &request);
                void DescribeSubDomainsAsync(const Model::DescribeSubDomainsRequest& request, const DescribeSubDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubDomainsOutcomeCallable DescribeSubDomainsCallable(const Model::DescribeSubDomainsRequest& request);

                /**
                 *查看影子资产
                 * @param req DescribeSuspiciousAssetsRequest
                 * @return DescribeSuspiciousAssetsOutcome
                 */
                DescribeSuspiciousAssetsOutcome DescribeSuspiciousAssets(const Model::DescribeSuspiciousAssetsRequest &request);
                void DescribeSuspiciousAssetsAsync(const Model::DescribeSuspiciousAssetsRequest& request, const DescribeSuspiciousAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSuspiciousAssetsOutcomeCallable DescribeSuspiciousAssetsCallable(const Model::DescribeSuspiciousAssetsRequest& request);

                /**
                 *查看漏洞数据
                 * @param req DescribeVulsRequest
                 * @return DescribeVulsOutcome
                 */
                DescribeVulsOutcome DescribeVuls(const Model::DescribeVulsRequest &request);
                void DescribeVulsAsync(const Model::DescribeVulsRequest& request, const DescribeVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulsOutcomeCallable DescribeVulsCallable(const Model::DescribeVulsRequest& request);

                /**
                 *查看弱口令数据
                 * @param req DescribeWeakPasswordsRequest
                 * @return DescribeWeakPasswordsOutcome
                 */
                DescribeWeakPasswordsOutcome DescribeWeakPasswords(const Model::DescribeWeakPasswordsRequest &request);
                void DescribeWeakPasswordsAsync(const Model::DescribeWeakPasswordsRequest& request, const DescribeWeakPasswordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWeakPasswordsOutcomeCallable DescribeWeakPasswordsCallable(const Model::DescribeWeakPasswordsRequest& request);

                /**
                 *查看微信小程序
                 * @param req DescribeWechatAppletsRequest
                 * @return DescribeWechatAppletsOutcome
                 */
                DescribeWechatAppletsOutcome DescribeWechatApplets(const Model::DescribeWechatAppletsRequest &request);
                void DescribeWechatAppletsAsync(const Model::DescribeWechatAppletsRequest& request, const DescribeWechatAppletsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWechatAppletsOutcomeCallable DescribeWechatAppletsCallable(const Model::DescribeWechatAppletsRequest& request);

                /**
                 *查看公众号数据
                 * @param req DescribeWechatOfficialAccountsRequest
                 * @return DescribeWechatOfficialAccountsOutcome
                 */
                DescribeWechatOfficialAccountsOutcome DescribeWechatOfficialAccounts(const Model::DescribeWechatOfficialAccountsRequest &request);
                void DescribeWechatOfficialAccountsAsync(const Model::DescribeWechatOfficialAccountsRequest& request, const DescribeWechatOfficialAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWechatOfficialAccountsOutcomeCallable DescribeWechatOfficialAccountsCallable(const Model::DescribeWechatOfficialAccountsRequest& request);

                /**
                 *忽略数据
                 * @param req IgnoreDataRequest
                 * @return IgnoreDataOutcome
                 */
                IgnoreDataOutcome IgnoreData(const Model::IgnoreDataRequest &request);
                void IgnoreDataAsync(const Model::IgnoreDataRequest& request, const IgnoreDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IgnoreDataOutcomeCallable IgnoreDataCallable(const Model::IgnoreDataRequest& request);

                /**
                 *编辑企业
                 * @param req ModifyCustomerRequest
                 * @return ModifyCustomerOutcome
                 */
                ModifyCustomerOutcome ModifyCustomer(const Model::ModifyCustomerRequest &request);
                void ModifyCustomerAsync(const Model::ModifyCustomerRequest& request, const ModifyCustomerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomerOutcomeCallable ModifyCustomerCallable(const Model::ModifyCustomerRequest& request);

                /**
                 *修改标签
                 * @param req ModifyLabelRequest
                 * @return ModifyLabelOutcome
                 */
                ModifyLabelOutcome ModifyLabel(const Model::ModifyLabelRequest &request);
                void ModifyLabelAsync(const Model::ModifyLabelRequest& request, const ModifyLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLabelOutcomeCallable ModifyLabelCallable(const Model::ModifyLabelRequest& request);

                /**
                 *修改种子状态
                 * @param req ModifySeedStatusRequest
                 * @return ModifySeedStatusOutcome
                 */
                ModifySeedStatusOutcome ModifySeedStatus(const Model::ModifySeedStatusRequest &request);
                void ModifySeedStatusAsync(const Model::ModifySeedStatusRequest& request, const ModifySeedStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySeedStatusOutcomeCallable ModifySeedStatusCallable(const Model::ModifySeedStatusRequest& request);

                /**
                 *停止扫描
                 * @param req StopJobRecordRequest
                 * @return StopJobRecordOutcome
                 */
                StopJobRecordOutcome StopJobRecord(const Model::StopJobRecordRequest &request);
                void StopJobRecordAsync(const Model::StopJobRecordRequest& request, const StopJobRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopJobRecordOutcomeCallable StopJobRecordCallable(const Model::StopJobRecordRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_CTEMCLIENT_H_
