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
#include <tencentcloud/ctem/v20231128/model/CreateCustomerRequest.h>
#include <tencentcloud/ctem/v20231128/model/CreateCustomerResponse.h>
#include <tencentcloud/ctem/v20231128/model/CreateJobRecordRequest.h>
#include <tencentcloud/ctem/v20231128/model/CreateJobRecordResponse.h>
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
#include <tencentcloud/ctem/v20231128/model/ModifyCustomerRequest.h>
#include <tencentcloud/ctem/v20231128/model/ModifyCustomerResponse.h>
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

                typedef Outcome<Core::Error, Model::CreateCustomerResponse> CreateCustomerOutcome;
                typedef std::future<CreateCustomerOutcome> CreateCustomerOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::CreateCustomerRequest&, CreateCustomerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateJobRecordResponse> CreateJobRecordOutcome;
                typedef std::future<CreateJobRecordOutcome> CreateJobRecordOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::CreateJobRecordRequest&, CreateJobRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobRecordAsyncHandler;
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
                typedef Outcome<Core::Error, Model::ModifyCustomerResponse> ModifyCustomerOutcome;
                typedef std::future<ModifyCustomerOutcome> ModifyCustomerOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::ModifyCustomerRequest&, ModifyCustomerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomerAsyncHandler;
                typedef Outcome<Core::Error, Model::StopJobRecordResponse> StopJobRecordOutcome;
                typedef std::future<StopJobRecordOutcome> StopJobRecordOutcomeCallable;
                typedef std::function<void(const CtemClient*, const Model::StopJobRecordRequest&, StopJobRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopJobRecordAsyncHandler;



                /**
                 *创建企业
                 * @param req CreateCustomerRequest
                 * @return CreateCustomerOutcome
                 */
                CreateCustomerOutcome CreateCustomer(const Model::CreateCustomerRequest &request);
                void CreateCustomerAsync(const Model::CreateCustomerRequest& request, const CreateCustomerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustomerOutcomeCallable CreateCustomerCallable(const Model::CreateCustomerRequest& request);

                /**
                 *启动测绘
                 * @param req CreateJobRecordRequest
                 * @return CreateJobRecordOutcome
                 */
                CreateJobRecordOutcome CreateJobRecord(const Model::CreateJobRecordRequest &request);
                void CreateJobRecordAsync(const Model::CreateJobRecordRequest& request, const CreateJobRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateJobRecordOutcomeCallable CreateJobRecordCallable(const Model::CreateJobRecordRequest& request);

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
                 *编辑企业
                 * @param req ModifyCustomerRequest
                 * @return ModifyCustomerOutcome
                 */
                ModifyCustomerOutcome ModifyCustomer(const Model::ModifyCustomerRequest &request);
                void ModifyCustomerAsync(const Model::ModifyCustomerRequest& request, const ModifyCustomerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomerOutcomeCallable ModifyCustomerCallable(const Model::ModifyCustomerRequest& request);

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
