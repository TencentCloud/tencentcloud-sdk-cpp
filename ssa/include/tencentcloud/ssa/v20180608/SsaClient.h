/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_SSA_V20180608_SSACLIENT_H_
#define TENCENTCLOUD_SSA_V20180608_SSACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ssa/v20180608/model/DescribeAlarmStatRequest.h>
#include <tencentcloud/ssa/v20180608/model/DescribeAlarmStatResponse.h>
#include <tencentcloud/ssa/v20180608/model/DescribeAssetDetailRequest.h>
#include <tencentcloud/ssa/v20180608/model/DescribeAssetDetailResponse.h>
#include <tencentcloud/ssa/v20180608/model/DescribeAssetDetailListRequest.h>
#include <tencentcloud/ssa/v20180608/model/DescribeAssetDetailListResponse.h>
#include <tencentcloud/ssa/v20180608/model/DescribeAssetListRequest.h>
#include <tencentcloud/ssa/v20180608/model/DescribeAssetListResponse.h>
#include <tencentcloud/ssa/v20180608/model/DescribeCheckConfigAssetListRequest.h>
#include <tencentcloud/ssa/v20180608/model/DescribeCheckConfigAssetListResponse.h>
#include <tencentcloud/ssa/v20180608/model/DescribeCheckConfigDetailRequest.h>
#include <tencentcloud/ssa/v20180608/model/DescribeCheckConfigDetailResponse.h>
#include <tencentcloud/ssa/v20180608/model/DescribeComplianceAssetListRequest.h>
#include <tencentcloud/ssa/v20180608/model/DescribeComplianceAssetListResponse.h>
#include <tencentcloud/ssa/v20180608/model/DescribeComplianceDetailRequest.h>
#include <tencentcloud/ssa/v20180608/model/DescribeComplianceDetailResponse.h>
#include <tencentcloud/ssa/v20180608/model/DescribeComplianceListRequest.h>
#include <tencentcloud/ssa/v20180608/model/DescribeComplianceListResponse.h>
#include <tencentcloud/ssa/v20180608/model/DescribeConfigListRequest.h>
#include <tencentcloud/ssa/v20180608/model/DescribeConfigListResponse.h>
#include <tencentcloud/ssa/v20180608/model/DescribeDomainListRequest.h>
#include <tencentcloud/ssa/v20180608/model/DescribeDomainListResponse.h>
#include <tencentcloud/ssa/v20180608/model/DescribeEventDetailRequest.h>
#include <tencentcloud/ssa/v20180608/model/DescribeEventDetailResponse.h>
#include <tencentcloud/ssa/v20180608/model/DescribeLeakDetectionListRequest.h>
#include <tencentcloud/ssa/v20180608/model/DescribeLeakDetectionListResponse.h>
#include <tencentcloud/ssa/v20180608/model/DescribeMappingResultsRequest.h>
#include <tencentcloud/ssa/v20180608/model/DescribeMappingResultsResponse.h>
#include <tencentcloud/ssa/v20180608/model/DescribeSocAlertDetailsRequest.h>
#include <tencentcloud/ssa/v20180608/model/DescribeSocAlertDetailsResponse.h>
#include <tencentcloud/ssa/v20180608/model/DescribeSocAlertListRequest.h>
#include <tencentcloud/ssa/v20180608/model/DescribeSocAlertListResponse.h>
#include <tencentcloud/ssa/v20180608/model/DescribeSocCheckItemListRequest.h>
#include <tencentcloud/ssa/v20180608/model/DescribeSocCheckItemListResponse.h>
#include <tencentcloud/ssa/v20180608/model/DescribeSocCheckResultListRequest.h>
#include <tencentcloud/ssa/v20180608/model/DescribeSocCheckResultListResponse.h>
#include <tencentcloud/ssa/v20180608/model/DescribeSocCspmComplianceRequest.h>
#include <tencentcloud/ssa/v20180608/model/DescribeSocCspmComplianceResponse.h>
#include <tencentcloud/ssa/v20180608/model/DescribeVulDetailRequest.h>
#include <tencentcloud/ssa/v20180608/model/DescribeVulDetailResponse.h>
#include <tencentcloud/ssa/v20180608/model/DescribeVulListRequest.h>
#include <tencentcloud/ssa/v20180608/model/DescribeVulListResponse.h>
#include <tencentcloud/ssa/v20180608/model/SaDivulgeScanRuleMutateRequest.h>
#include <tencentcloud/ssa/v20180608/model/SaDivulgeScanRuleMutateResponse.h>
#include <tencentcloud/ssa/v20180608/model/SaEventPubRequest.h>
#include <tencentcloud/ssa/v20180608/model/SaEventPubResponse.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            class SsaClient : public AbstractClient
            {
            public:
                SsaClient(const Credential &credential, const std::string &region);
                SsaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeAlarmStatResponse> DescribeAlarmStatOutcome;
                typedef std::future<DescribeAlarmStatOutcome> DescribeAlarmStatOutcomeCallable;
                typedef std::function<void(const SsaClient*, const Model::DescribeAlarmStatRequest&, DescribeAlarmStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetDetailResponse> DescribeAssetDetailOutcome;
                typedef std::future<DescribeAssetDetailOutcome> DescribeAssetDetailOutcomeCallable;
                typedef std::function<void(const SsaClient*, const Model::DescribeAssetDetailRequest&, DescribeAssetDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetDetailListResponse> DescribeAssetDetailListOutcome;
                typedef std::future<DescribeAssetDetailListOutcome> DescribeAssetDetailListOutcomeCallable;
                typedef std::function<void(const SsaClient*, const Model::DescribeAssetDetailListRequest&, DescribeAssetDetailListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetDetailListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetListResponse> DescribeAssetListOutcome;
                typedef std::future<DescribeAssetListOutcome> DescribeAssetListOutcomeCallable;
                typedef std::function<void(const SsaClient*, const Model::DescribeAssetListRequest&, DescribeAssetListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCheckConfigAssetListResponse> DescribeCheckConfigAssetListOutcome;
                typedef std::future<DescribeCheckConfigAssetListOutcome> DescribeCheckConfigAssetListOutcomeCallable;
                typedef std::function<void(const SsaClient*, const Model::DescribeCheckConfigAssetListRequest&, DescribeCheckConfigAssetListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckConfigAssetListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCheckConfigDetailResponse> DescribeCheckConfigDetailOutcome;
                typedef std::future<DescribeCheckConfigDetailOutcome> DescribeCheckConfigDetailOutcomeCallable;
                typedef std::function<void(const SsaClient*, const Model::DescribeCheckConfigDetailRequest&, DescribeCheckConfigDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckConfigDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComplianceAssetListResponse> DescribeComplianceAssetListOutcome;
                typedef std::future<DescribeComplianceAssetListOutcome> DescribeComplianceAssetListOutcomeCallable;
                typedef std::function<void(const SsaClient*, const Model::DescribeComplianceAssetListRequest&, DescribeComplianceAssetListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComplianceAssetListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComplianceDetailResponse> DescribeComplianceDetailOutcome;
                typedef std::future<DescribeComplianceDetailOutcome> DescribeComplianceDetailOutcomeCallable;
                typedef std::function<void(const SsaClient*, const Model::DescribeComplianceDetailRequest&, DescribeComplianceDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComplianceDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComplianceListResponse> DescribeComplianceListOutcome;
                typedef std::future<DescribeComplianceListOutcome> DescribeComplianceListOutcomeCallable;
                typedef std::function<void(const SsaClient*, const Model::DescribeComplianceListRequest&, DescribeComplianceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComplianceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigListResponse> DescribeConfigListOutcome;
                typedef std::future<DescribeConfigListOutcome> DescribeConfigListOutcomeCallable;
                typedef std::function<void(const SsaClient*, const Model::DescribeConfigListRequest&, DescribeConfigListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainListResponse> DescribeDomainListOutcome;
                typedef std::future<DescribeDomainListOutcome> DescribeDomainListOutcomeCallable;
                typedef std::function<void(const SsaClient*, const Model::DescribeDomainListRequest&, DescribeDomainListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventDetailResponse> DescribeEventDetailOutcome;
                typedef std::future<DescribeEventDetailOutcome> DescribeEventDetailOutcomeCallable;
                typedef std::function<void(const SsaClient*, const Model::DescribeEventDetailRequest&, DescribeEventDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLeakDetectionListResponse> DescribeLeakDetectionListOutcome;
                typedef std::future<DescribeLeakDetectionListOutcome> DescribeLeakDetectionListOutcomeCallable;
                typedef std::function<void(const SsaClient*, const Model::DescribeLeakDetectionListRequest&, DescribeLeakDetectionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLeakDetectionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMappingResultsResponse> DescribeMappingResultsOutcome;
                typedef std::future<DescribeMappingResultsOutcome> DescribeMappingResultsOutcomeCallable;
                typedef std::function<void(const SsaClient*, const Model::DescribeMappingResultsRequest&, DescribeMappingResultsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMappingResultsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSocAlertDetailsResponse> DescribeSocAlertDetailsOutcome;
                typedef std::future<DescribeSocAlertDetailsOutcome> DescribeSocAlertDetailsOutcomeCallable;
                typedef std::function<void(const SsaClient*, const Model::DescribeSocAlertDetailsRequest&, DescribeSocAlertDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSocAlertDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSocAlertListResponse> DescribeSocAlertListOutcome;
                typedef std::future<DescribeSocAlertListOutcome> DescribeSocAlertListOutcomeCallable;
                typedef std::function<void(const SsaClient*, const Model::DescribeSocAlertListRequest&, DescribeSocAlertListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSocAlertListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSocCheckItemListResponse> DescribeSocCheckItemListOutcome;
                typedef std::future<DescribeSocCheckItemListOutcome> DescribeSocCheckItemListOutcomeCallable;
                typedef std::function<void(const SsaClient*, const Model::DescribeSocCheckItemListRequest&, DescribeSocCheckItemListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSocCheckItemListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSocCheckResultListResponse> DescribeSocCheckResultListOutcome;
                typedef std::future<DescribeSocCheckResultListOutcome> DescribeSocCheckResultListOutcomeCallable;
                typedef std::function<void(const SsaClient*, const Model::DescribeSocCheckResultListRequest&, DescribeSocCheckResultListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSocCheckResultListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSocCspmComplianceResponse> DescribeSocCspmComplianceOutcome;
                typedef std::future<DescribeSocCspmComplianceOutcome> DescribeSocCspmComplianceOutcomeCallable;
                typedef std::function<void(const SsaClient*, const Model::DescribeSocCspmComplianceRequest&, DescribeSocCspmComplianceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSocCspmComplianceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulDetailResponse> DescribeVulDetailOutcome;
                typedef std::future<DescribeVulDetailOutcome> DescribeVulDetailOutcomeCallable;
                typedef std::function<void(const SsaClient*, const Model::DescribeVulDetailRequest&, DescribeVulDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulListResponse> DescribeVulListOutcome;
                typedef std::future<DescribeVulListOutcome> DescribeVulListOutcomeCallable;
                typedef std::function<void(const SsaClient*, const Model::DescribeVulListRequest&, DescribeVulListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulListAsyncHandler;
                typedef Outcome<Core::Error, Model::SaDivulgeScanRuleMutateResponse> SaDivulgeScanRuleMutateOutcome;
                typedef std::future<SaDivulgeScanRuleMutateOutcome> SaDivulgeScanRuleMutateOutcomeCallable;
                typedef std::function<void(const SsaClient*, const Model::SaDivulgeScanRuleMutateRequest&, SaDivulgeScanRuleMutateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SaDivulgeScanRuleMutateAsyncHandler;
                typedef Outcome<Core::Error, Model::SaEventPubResponse> SaEventPubOutcome;
                typedef std::future<SaEventPubOutcome> SaEventPubOutcomeCallable;
                typedef std::function<void(const SsaClient*, const Model::SaEventPubRequest&, SaEventPubOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SaEventPubAsyncHandler;



                /**
                 *安全大屏-用户威胁告警信息
                 * @param req DescribeAlarmStatRequest
                 * @return DescribeAlarmStatOutcome
                 */
                DescribeAlarmStatOutcome DescribeAlarmStat(const Model::DescribeAlarmStatRequest &request);
                void DescribeAlarmStatAsync(const Model::DescribeAlarmStatRequest& request, const DescribeAlarmStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmStatOutcomeCallable DescribeAlarmStatCallable(const Model::DescribeAlarmStatRequest& request);

                /**
                 *资产安全页资产详情
                 * @param req DescribeAssetDetailRequest
                 * @return DescribeAssetDetailOutcome
                 */
                DescribeAssetDetailOutcome DescribeAssetDetail(const Model::DescribeAssetDetailRequest &request);
                void DescribeAssetDetailAsync(const Model::DescribeAssetDetailRequest& request, const DescribeAssetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetDetailOutcomeCallable DescribeAssetDetailCallable(const Model::DescribeAssetDetailRequest& request);

                /**
                 *资产条件查询
                 * @param req DescribeAssetDetailListRequest
                 * @return DescribeAssetDetailListOutcome
                 */
                DescribeAssetDetailListOutcome DescribeAssetDetailList(const Model::DescribeAssetDetailListRequest &request);
                void DescribeAssetDetailListAsync(const Model::DescribeAssetDetailListRequest& request, const DescribeAssetDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetDetailListOutcomeCallable DescribeAssetDetailListCallable(const Model::DescribeAssetDetailListRequest& request);

                /**
                 *资产安全资产列表
                 * @param req DescribeAssetListRequest
                 * @return DescribeAssetListOutcome
                 */
                DescribeAssetListOutcome DescribeAssetList(const Model::DescribeAssetListRequest &request);
                void DescribeAssetListAsync(const Model::DescribeAssetListRequest& request, const DescribeAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetListOutcomeCallable DescribeAssetListCallable(const Model::DescribeAssetListRequest& request);

                /**
                 *云安全配置管理资产组列表
                 * @param req DescribeCheckConfigAssetListRequest
                 * @return DescribeCheckConfigAssetListOutcome
                 */
                DescribeCheckConfigAssetListOutcome DescribeCheckConfigAssetList(const Model::DescribeCheckConfigAssetListRequest &request);
                void DescribeCheckConfigAssetListAsync(const Model::DescribeCheckConfigAssetListRequest& request, const DescribeCheckConfigAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCheckConfigAssetListOutcomeCallable DescribeCheckConfigAssetListCallable(const Model::DescribeCheckConfigAssetListRequest& request);

                /**
                 *云安全配置检查项详情
                 * @param req DescribeCheckConfigDetailRequest
                 * @return DescribeCheckConfigDetailOutcome
                 */
                DescribeCheckConfigDetailOutcome DescribeCheckConfigDetail(const Model::DescribeCheckConfigDetailRequest &request);
                void DescribeCheckConfigDetailAsync(const Model::DescribeCheckConfigDetailRequest& request, const DescribeCheckConfigDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCheckConfigDetailOutcomeCallable DescribeCheckConfigDetailCallable(const Model::DescribeCheckConfigDetailRequest& request);

                /**
                 *合规管理-资产列表
                 * @param req DescribeComplianceAssetListRequest
                 * @return DescribeComplianceAssetListOutcome
                 */
                DescribeComplianceAssetListOutcome DescribeComplianceAssetList(const Model::DescribeComplianceAssetListRequest &request);
                void DescribeComplianceAssetListAsync(const Model::DescribeComplianceAssetListRequest& request, const DescribeComplianceAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComplianceAssetListOutcomeCallable DescribeComplianceAssetListCallable(const Model::DescribeComplianceAssetListRequest& request);

                /**
                 *合规管理检查项详情
                 * @param req DescribeComplianceDetailRequest
                 * @return DescribeComplianceDetailOutcome
                 */
                DescribeComplianceDetailOutcome DescribeComplianceDetail(const Model::DescribeComplianceDetailRequest &request);
                void DescribeComplianceDetailAsync(const Model::DescribeComplianceDetailRequest& request, const DescribeComplianceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComplianceDetailOutcomeCallable DescribeComplianceDetailCallable(const Model::DescribeComplianceDetailRequest& request);

                /**
                 *合规管理总览页检查项列表
                 * @param req DescribeComplianceListRequest
                 * @return DescribeComplianceListOutcome
                 */
                DescribeComplianceListOutcome DescribeComplianceList(const Model::DescribeComplianceListRequest &request);
                void DescribeComplianceListAsync(const Model::DescribeComplianceListRequest& request, const DescribeComplianceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComplianceListOutcomeCallable DescribeComplianceListCallable(const Model::DescribeComplianceListRequest& request);

                /**
                 *云配置检查项总览页检查项列表
                 * @param req DescribeConfigListRequest
                 * @return DescribeConfigListOutcome
                 */
                DescribeConfigListOutcome DescribeConfigList(const Model::DescribeConfigListRequest &request);
                void DescribeConfigListAsync(const Model::DescribeConfigListRequest& request, const DescribeConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigListOutcomeCallable DescribeConfigListCallable(const Model::DescribeConfigListRequest& request);

                /**
                 *域名列表信息
                 * @param req DescribeDomainListRequest
                 * @return DescribeDomainListOutcome
                 */
                DescribeDomainListOutcome DescribeDomainList(const Model::DescribeDomainListRequest &request);
                void DescribeDomainListAsync(const Model::DescribeDomainListRequest& request, const DescribeDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainListOutcomeCallable DescribeDomainListCallable(const Model::DescribeDomainListRequest& request);

                /**
                 *获取安全事件详情
                 * @param req DescribeEventDetailRequest
                 * @return DescribeEventDetailOutcome
                 */
                DescribeEventDetailOutcome DescribeEventDetail(const Model::DescribeEventDetailRequest &request);
                void DescribeEventDetailAsync(const Model::DescribeEventDetailRequest& request, const DescribeEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventDetailOutcomeCallable DescribeEventDetailCallable(const Model::DescribeEventDetailRequest& request);

                /**
                 *获取泄露列表
                 * @param req DescribeLeakDetectionListRequest
                 * @return DescribeLeakDetectionListOutcome
                 */
                DescribeLeakDetectionListOutcome DescribeLeakDetectionList(const Model::DescribeLeakDetectionListRequest &request);
                void DescribeLeakDetectionListAsync(const Model::DescribeLeakDetectionListRequest& request, const DescribeLeakDetectionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLeakDetectionListOutcomeCallable DescribeLeakDetectionListCallable(const Model::DescribeLeakDetectionListRequest& request);

                /**
                 *获取测绘列表
                 * @param req DescribeMappingResultsRequest
                 * @return DescribeMappingResultsOutcome
                 */
                DescribeMappingResultsOutcome DescribeMappingResults(const Model::DescribeMappingResultsRequest &request);
                void DescribeMappingResultsAsync(const Model::DescribeMappingResultsRequest& request, const DescribeMappingResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMappingResultsOutcomeCallable DescribeMappingResultsCallable(const Model::DescribeMappingResultsRequest& request);

                /**
                 *返回告警详情
                 * @param req DescribeSocAlertDetailsRequest
                 * @return DescribeSocAlertDetailsOutcome
                 */
                DescribeSocAlertDetailsOutcome DescribeSocAlertDetails(const Model::DescribeSocAlertDetailsRequest &request);
                void DescribeSocAlertDetailsAsync(const Model::DescribeSocAlertDetailsRequest& request, const DescribeSocAlertDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSocAlertDetailsOutcomeCallable DescribeSocAlertDetailsCallable(const Model::DescribeSocAlertDetailsRequest& request);

                /**
                 *拉取告警列表
                 * @param req DescribeSocAlertListRequest
                 * @return DescribeSocAlertListOutcome
                 */
                DescribeSocAlertListOutcome DescribeSocAlertList(const Model::DescribeSocAlertListRequest &request);
                void DescribeSocAlertListAsync(const Model::DescribeSocAlertListRequest& request, const DescribeSocAlertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSocAlertListOutcomeCallable DescribeSocAlertListCallable(const Model::DescribeSocAlertListRequest& request);

                /**
                 *云安全配置检查项列表
                 * @param req DescribeSocCheckItemListRequest
                 * @return DescribeSocCheckItemListOutcome
                 */
                DescribeSocCheckItemListOutcome DescribeSocCheckItemList(const Model::DescribeSocCheckItemListRequest &request);
                void DescribeSocCheckItemListAsync(const Model::DescribeSocCheckItemListRequest& request, const DescribeSocCheckItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSocCheckItemListOutcomeCallable DescribeSocCheckItemListCallable(const Model::DescribeSocCheckItemListRequest& request);

                /**
                 *云安全配置检查项结果列表
                 * @param req DescribeSocCheckResultListRequest
                 * @return DescribeSocCheckResultListOutcome
                 */
                DescribeSocCheckResultListOutcome DescribeSocCheckResultList(const Model::DescribeSocCheckResultListRequest &request);
                void DescribeSocCheckResultListAsync(const Model::DescribeSocCheckResultListRequest& request, const DescribeSocCheckResultListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSocCheckResultListOutcomeCallable DescribeSocCheckResultListCallable(const Model::DescribeSocCheckResultListRequest& request);

                /**
                 *合规详情项
                 * @param req DescribeSocCspmComplianceRequest
                 * @return DescribeSocCspmComplianceOutcome
                 */
                DescribeSocCspmComplianceOutcome DescribeSocCspmCompliance(const Model::DescribeSocCspmComplianceRequest &request);
                void DescribeSocCspmComplianceAsync(const Model::DescribeSocCspmComplianceRequest& request, const DescribeSocCspmComplianceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSocCspmComplianceOutcomeCallable DescribeSocCspmComplianceCallable(const Model::DescribeSocCspmComplianceRequest& request);

                /**
                 *漏洞列表页，获取漏洞详情信息
                 * @param req DescribeVulDetailRequest
                 * @return DescribeVulDetailOutcome
                 */
                DescribeVulDetailOutcome DescribeVulDetail(const Model::DescribeVulDetailRequest &request);
                void DescribeVulDetailAsync(const Model::DescribeVulDetailRequest& request, const DescribeVulDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulDetailOutcomeCallable DescribeVulDetailCallable(const Model::DescribeVulDetailRequest& request);

                /**
                 *漏洞管理页，获取漏洞列表
                 * @param req DescribeVulListRequest
                 * @return DescribeVulListOutcome
                 */
                DescribeVulListOutcome DescribeVulList(const Model::DescribeVulListRequest &request);
                void DescribeVulListAsync(const Model::DescribeVulListRequest& request, const DescribeVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulListOutcomeCallable DescribeVulListCallable(const Model::DescribeVulListRequest& request);

                /**
                 *SaDivulgeScanRuleMutate
                 * @param req SaDivulgeScanRuleMutateRequest
                 * @return SaDivulgeScanRuleMutateOutcome
                 */
                SaDivulgeScanRuleMutateOutcome SaDivulgeScanRuleMutate(const Model::SaDivulgeScanRuleMutateRequest &request);
                void SaDivulgeScanRuleMutateAsync(const Model::SaDivulgeScanRuleMutateRequest& request, const SaDivulgeScanRuleMutateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SaDivulgeScanRuleMutateOutcomeCallable SaDivulgeScanRuleMutateCallable(const Model::SaDivulgeScanRuleMutateRequest& request);

                /**
                 *安全事件通用字段
                 * @param req SaEventPubRequest
                 * @return SaEventPubOutcome
                 */
                SaEventPubOutcome SaEventPub(const Model::SaEventPubRequest &request);
                void SaEventPubAsync(const Model::SaEventPubRequest& request, const SaEventPubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SaEventPubOutcomeCallable SaEventPubCallable(const Model::SaEventPubRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_SSACLIENT_H_
