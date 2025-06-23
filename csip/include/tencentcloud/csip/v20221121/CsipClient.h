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

#ifndef TENCENTCLOUD_CSIP_V20221121_CSIPCLIENT_H_
#define TENCENTCLOUD_CSIP_V20221121_CSIPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/csip/v20221121/model/AddNewBindRoleUserRequest.h>
#include <tencentcloud/csip/v20221121/model/AddNewBindRoleUserResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateDomainAndIpRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateDomainAndIpResponse.h>
#include <tencentcloud/csip/v20221121/model/CreateRiskCenterScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/CreateRiskCenterScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteDomainAndIpRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteDomainAndIpResponse.h>
#include <tencentcloud/csip/v20221121/model/DeleteRiskScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/DeleteRiskScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAlertListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAlertListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetViewVulRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeAssetViewVulRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCFWAssetStatisticsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCFWAssetStatisticsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSIPRiskStatisticsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCSIPRiskStatisticsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCVMAssetInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCVMAssetInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCVMAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCVMAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeCheckViewRisksRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeCheckViewRisksResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterPodAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeClusterPodAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDbAssetInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDbAssetInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDbAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDbAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeDomainAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeDomainAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposeAssetCategoryRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposeAssetCategoryResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposePathRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposePathResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposuresRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeExposuresResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeGatewayAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeGatewayAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeListenerListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeListenerListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeNICAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeNICAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeOrganizationInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeOrganizationInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeOrganizationUserInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeOrganizationUserInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeOtherCloudAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeOtherCloudAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribePublicIpAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribePublicIpAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRepositoryImageAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRepositoryImageAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewCFGRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewCFGRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewPortRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewPortRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewVULRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewVULRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewWeakPasswordRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterAssetViewWeakPasswordRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterCFGViewCFGRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterCFGViewCFGRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterPortViewPortRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterPortViewPortRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterServerRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterServerRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterVULViewVULRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterVULViewVULRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterWebsiteRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskCenterWebsiteRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskDetailListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskDetailListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskRuleDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskRuleDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskRulesRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeRiskRulesResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanReportListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanReportListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanStatisticRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanStatisticResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanTaskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeScanTaskListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSearchBugInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSearchBugInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSubUserInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSubUserInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeSubnetAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeSubnetAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeTaskLogListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeTaskLogListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeTaskLogURLRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeTaskLogURLResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeTopAttackInfoRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeTopAttackInfoResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeUebaRuleRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeUebaRuleResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULRiskAdvanceCFGListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULRiskAdvanceCFGListResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULRiskDetailRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVULRiskDetailResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVpcAssetsRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVpcAssetsResponse.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulViewVulRiskListRequest.h>
#include <tencentcloud/csip/v20221121/model/DescribeVulViewVulRiskListResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyOrganizationAccountStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyOrganizationAccountStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyRiskCenterRiskStatusRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyRiskCenterRiskStatusResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyRiskCenterScanTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyRiskCenterScanTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/ModifyUebaRuleSwitchRequest.h>
#include <tencentcloud/csip/v20221121/model/ModifyUebaRuleSwitchResponse.h>
#include <tencentcloud/csip/v20221121/model/StopRiskCenterTaskRequest.h>
#include <tencentcloud/csip/v20221121/model/StopRiskCenterTaskResponse.h>
#include <tencentcloud/csip/v20221121/model/UpdateAlertStatusListRequest.h>
#include <tencentcloud/csip/v20221121/model/UpdateAlertStatusListResponse.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            class CsipClient : public AbstractClient
            {
            public:
                CsipClient(const Credential &credential, const std::string &region);
                CsipClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddNewBindRoleUserResponse> AddNewBindRoleUserOutcome;
                typedef std::future<AddNewBindRoleUserOutcome> AddNewBindRoleUserOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::AddNewBindRoleUserRequest&, AddNewBindRoleUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddNewBindRoleUserAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDomainAndIpResponse> CreateDomainAndIpOutcome;
                typedef std::future<CreateDomainAndIpOutcome> CreateDomainAndIpOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateDomainAndIpRequest&, CreateDomainAndIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainAndIpAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRiskCenterScanTaskResponse> CreateRiskCenterScanTaskOutcome;
                typedef std::future<CreateRiskCenterScanTaskOutcome> CreateRiskCenterScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::CreateRiskCenterScanTaskRequest&, CreateRiskCenterScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRiskCenterScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDomainAndIpResponse> DeleteDomainAndIpOutcome;
                typedef std::future<DeleteDomainAndIpOutcome> DeleteDomainAndIpOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteDomainAndIpRequest&, DeleteDomainAndIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainAndIpAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRiskScanTaskResponse> DeleteRiskScanTaskOutcome;
                typedef std::future<DeleteRiskScanTaskOutcome> DeleteRiskScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DeleteRiskScanTaskRequest&, DeleteRiskScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRiskScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlertListResponse> DescribeAlertListOutcome;
                typedef std::future<DescribeAlertListOutcome> DescribeAlertListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAlertListRequest&, DescribeAlertListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetRiskListResponse> DescribeAssetRiskListOutcome;
                typedef std::future<DescribeAssetRiskListOutcome> DescribeAssetRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetRiskListRequest&, DescribeAssetRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetViewVulRiskListResponse> DescribeAssetViewVulRiskListOutcome;
                typedef std::future<DescribeAssetViewVulRiskListOutcome> DescribeAssetViewVulRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeAssetViewVulRiskListRequest&, DescribeAssetViewVulRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetViewVulRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCFWAssetStatisticsResponse> DescribeCFWAssetStatisticsOutcome;
                typedef std::future<DescribeCFWAssetStatisticsOutcome> DescribeCFWAssetStatisticsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCFWAssetStatisticsRequest&, DescribeCFWAssetStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCFWAssetStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCSIPRiskStatisticsResponse> DescribeCSIPRiskStatisticsOutcome;
                typedef std::future<DescribeCSIPRiskStatisticsOutcome> DescribeCSIPRiskStatisticsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCSIPRiskStatisticsRequest&, DescribeCSIPRiskStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCSIPRiskStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCVMAssetInfoResponse> DescribeCVMAssetInfoOutcome;
                typedef std::future<DescribeCVMAssetInfoOutcome> DescribeCVMAssetInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCVMAssetInfoRequest&, DescribeCVMAssetInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCVMAssetInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCVMAssetsResponse> DescribeCVMAssetsOutcome;
                typedef std::future<DescribeCVMAssetsOutcome> DescribeCVMAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCVMAssetsRequest&, DescribeCVMAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCVMAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCheckViewRisksResponse> DescribeCheckViewRisksOutcome;
                typedef std::future<DescribeCheckViewRisksOutcome> DescribeCheckViewRisksOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeCheckViewRisksRequest&, DescribeCheckViewRisksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCheckViewRisksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterAssetsResponse> DescribeClusterAssetsOutcome;
                typedef std::future<DescribeClusterAssetsOutcome> DescribeClusterAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterAssetsRequest&, DescribeClusterAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterPodAssetsResponse> DescribeClusterPodAssetsOutcome;
                typedef std::future<DescribeClusterPodAssetsOutcome> DescribeClusterPodAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeClusterPodAssetsRequest&, DescribeClusterPodAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterPodAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDbAssetInfoResponse> DescribeDbAssetInfoOutcome;
                typedef std::future<DescribeDbAssetInfoOutcome> DescribeDbAssetInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDbAssetInfoRequest&, DescribeDbAssetInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDbAssetInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDbAssetsResponse> DescribeDbAssetsOutcome;
                typedef std::future<DescribeDbAssetsOutcome> DescribeDbAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDbAssetsRequest&, DescribeDbAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDbAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainAssetsResponse> DescribeDomainAssetsOutcome;
                typedef std::future<DescribeDomainAssetsOutcome> DescribeDomainAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeDomainAssetsRequest&, DescribeDomainAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposeAssetCategoryResponse> DescribeExposeAssetCategoryOutcome;
                typedef std::future<DescribeExposeAssetCategoryOutcome> DescribeExposeAssetCategoryOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposeAssetCategoryRequest&, DescribeExposeAssetCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposeAssetCategoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposePathResponse> DescribeExposePathOutcome;
                typedef std::future<DescribeExposePathOutcome> DescribeExposePathOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposePathRequest&, DescribeExposePathOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposePathAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExposuresResponse> DescribeExposuresOutcome;
                typedef std::future<DescribeExposuresOutcome> DescribeExposuresOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeExposuresRequest&, DescribeExposuresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExposuresAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatewayAssetsResponse> DescribeGatewayAssetsOutcome;
                typedef std::future<DescribeGatewayAssetsOutcome> DescribeGatewayAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeGatewayAssetsRequest&, DescribeGatewayAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListenerListResponse> DescribeListenerListOutcome;
                typedef std::future<DescribeListenerListOutcome> DescribeListenerListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeListenerListRequest&, DescribeListenerListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenerListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNICAssetsResponse> DescribeNICAssetsOutcome;
                typedef std::future<DescribeNICAssetsOutcome> DescribeNICAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeNICAssetsRequest&, DescribeNICAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNICAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationInfoResponse> DescribeOrganizationInfoOutcome;
                typedef std::future<DescribeOrganizationInfoOutcome> DescribeOrganizationInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeOrganizationInfoRequest&, DescribeOrganizationInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrganizationUserInfoResponse> DescribeOrganizationUserInfoOutcome;
                typedef std::future<DescribeOrganizationUserInfoOutcome> DescribeOrganizationUserInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeOrganizationUserInfoRequest&, DescribeOrganizationUserInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrganizationUserInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOtherCloudAssetsResponse> DescribeOtherCloudAssetsOutcome;
                typedef std::future<DescribeOtherCloudAssetsOutcome> DescribeOtherCloudAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeOtherCloudAssetsRequest&, DescribeOtherCloudAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOtherCloudAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePublicIpAssetsResponse> DescribePublicIpAssetsOutcome;
                typedef std::future<DescribePublicIpAssetsOutcome> DescribePublicIpAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribePublicIpAssetsRequest&, DescribePublicIpAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePublicIpAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRepositoryImageAssetsResponse> DescribeRepositoryImageAssetsOutcome;
                typedef std::future<DescribeRepositoryImageAssetsOutcome> DescribeRepositoryImageAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRepositoryImageAssetsRequest&, DescribeRepositoryImageAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRepositoryImageAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterAssetViewCFGRiskListResponse> DescribeRiskCenterAssetViewCFGRiskListOutcome;
                typedef std::future<DescribeRiskCenterAssetViewCFGRiskListOutcome> DescribeRiskCenterAssetViewCFGRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterAssetViewCFGRiskListRequest&, DescribeRiskCenterAssetViewCFGRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterAssetViewCFGRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterAssetViewPortRiskListResponse> DescribeRiskCenterAssetViewPortRiskListOutcome;
                typedef std::future<DescribeRiskCenterAssetViewPortRiskListOutcome> DescribeRiskCenterAssetViewPortRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterAssetViewPortRiskListRequest&, DescribeRiskCenterAssetViewPortRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterAssetViewPortRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterAssetViewVULRiskListResponse> DescribeRiskCenterAssetViewVULRiskListOutcome;
                typedef std::future<DescribeRiskCenterAssetViewVULRiskListOutcome> DescribeRiskCenterAssetViewVULRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterAssetViewVULRiskListRequest&, DescribeRiskCenterAssetViewVULRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterAssetViewVULRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterAssetViewWeakPasswordRiskListResponse> DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome;
                typedef std::future<DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome> DescribeRiskCenterAssetViewWeakPasswordRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterAssetViewWeakPasswordRiskListRequest&, DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterAssetViewWeakPasswordRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterCFGViewCFGRiskListResponse> DescribeRiskCenterCFGViewCFGRiskListOutcome;
                typedef std::future<DescribeRiskCenterCFGViewCFGRiskListOutcome> DescribeRiskCenterCFGViewCFGRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterCFGViewCFGRiskListRequest&, DescribeRiskCenterCFGViewCFGRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterCFGViewCFGRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterPortViewPortRiskListResponse> DescribeRiskCenterPortViewPortRiskListOutcome;
                typedef std::future<DescribeRiskCenterPortViewPortRiskListOutcome> DescribeRiskCenterPortViewPortRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterPortViewPortRiskListRequest&, DescribeRiskCenterPortViewPortRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterPortViewPortRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterServerRiskListResponse> DescribeRiskCenterServerRiskListOutcome;
                typedef std::future<DescribeRiskCenterServerRiskListOutcome> DescribeRiskCenterServerRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterServerRiskListRequest&, DescribeRiskCenterServerRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterServerRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterVULViewVULRiskListResponse> DescribeRiskCenterVULViewVULRiskListOutcome;
                typedef std::future<DescribeRiskCenterVULViewVULRiskListOutcome> DescribeRiskCenterVULViewVULRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterVULViewVULRiskListRequest&, DescribeRiskCenterVULViewVULRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterVULViewVULRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskCenterWebsiteRiskListResponse> DescribeRiskCenterWebsiteRiskListOutcome;
                typedef std::future<DescribeRiskCenterWebsiteRiskListOutcome> DescribeRiskCenterWebsiteRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskCenterWebsiteRiskListRequest&, DescribeRiskCenterWebsiteRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskCenterWebsiteRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskDetailListResponse> DescribeRiskDetailListOutcome;
                typedef std::future<DescribeRiskDetailListOutcome> DescribeRiskDetailListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskDetailListRequest&, DescribeRiskDetailListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskDetailListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskRuleDetailResponse> DescribeRiskRuleDetailOutcome;
                typedef std::future<DescribeRiskRuleDetailOutcome> DescribeRiskRuleDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskRuleDetailRequest&, DescribeRiskRuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskRuleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRiskRulesResponse> DescribeRiskRulesOutcome;
                typedef std::future<DescribeRiskRulesOutcome> DescribeRiskRulesOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeRiskRulesRequest&, DescribeRiskRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanReportListResponse> DescribeScanReportListOutcome;
                typedef std::future<DescribeScanReportListOutcome> DescribeScanReportListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeScanReportListRequest&, DescribeScanReportListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanReportListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanStatisticResponse> DescribeScanStatisticOutcome;
                typedef std::future<DescribeScanStatisticOutcome> DescribeScanStatisticOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeScanStatisticRequest&, DescribeScanStatisticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanStatisticAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeScanTaskListResponse> DescribeScanTaskListOutcome;
                typedef std::future<DescribeScanTaskListOutcome> DescribeScanTaskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeScanTaskListRequest&, DescribeScanTaskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScanTaskListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSearchBugInfoResponse> DescribeSearchBugInfoOutcome;
                typedef std::future<DescribeSearchBugInfoOutcome> DescribeSearchBugInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSearchBugInfoRequest&, DescribeSearchBugInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSearchBugInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubUserInfoResponse> DescribeSubUserInfoOutcome;
                typedef std::future<DescribeSubUserInfoOutcome> DescribeSubUserInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSubUserInfoRequest&, DescribeSubUserInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubUserInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubnetAssetsResponse> DescribeSubnetAssetsOutcome;
                typedef std::future<DescribeSubnetAssetsOutcome> DescribeSubnetAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeSubnetAssetsRequest&, DescribeSubnetAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubnetAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskLogListResponse> DescribeTaskLogListOutcome;
                typedef std::future<DescribeTaskLogListOutcome> DescribeTaskLogListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeTaskLogListRequest&, DescribeTaskLogListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskLogListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskLogURLResponse> DescribeTaskLogURLOutcome;
                typedef std::future<DescribeTaskLogURLOutcome> DescribeTaskLogURLOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeTaskLogURLRequest&, DescribeTaskLogURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskLogURLAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopAttackInfoResponse> DescribeTopAttackInfoOutcome;
                typedef std::future<DescribeTopAttackInfoOutcome> DescribeTopAttackInfoOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeTopAttackInfoRequest&, DescribeTopAttackInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopAttackInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUebaRuleResponse> DescribeUebaRuleOutcome;
                typedef std::future<DescribeUebaRuleOutcome> DescribeUebaRuleOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeUebaRuleRequest&, DescribeUebaRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUebaRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVULListResponse> DescribeVULListOutcome;
                typedef std::future<DescribeVULListOutcome> DescribeVULListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVULListRequest&, DescribeVULListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVULListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVULRiskAdvanceCFGListResponse> DescribeVULRiskAdvanceCFGListOutcome;
                typedef std::future<DescribeVULRiskAdvanceCFGListOutcome> DescribeVULRiskAdvanceCFGListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVULRiskAdvanceCFGListRequest&, DescribeVULRiskAdvanceCFGListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVULRiskAdvanceCFGListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVULRiskDetailResponse> DescribeVULRiskDetailOutcome;
                typedef std::future<DescribeVULRiskDetailOutcome> DescribeVULRiskDetailOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVULRiskDetailRequest&, DescribeVULRiskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVULRiskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcAssetsResponse> DescribeVpcAssetsOutcome;
                typedef std::future<DescribeVpcAssetsOutcome> DescribeVpcAssetsOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVpcAssetsRequest&, DescribeVpcAssetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcAssetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulViewVulRiskListResponse> DescribeVulViewVulRiskListOutcome;
                typedef std::future<DescribeVulViewVulRiskListOutcome> DescribeVulViewVulRiskListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::DescribeVulViewVulRiskListRequest&, DescribeVulViewVulRiskListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulViewVulRiskListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyOrganizationAccountStatusResponse> ModifyOrganizationAccountStatusOutcome;
                typedef std::future<ModifyOrganizationAccountStatusOutcome> ModifyOrganizationAccountStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyOrganizationAccountStatusRequest&, ModifyOrganizationAccountStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOrganizationAccountStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRiskCenterRiskStatusResponse> ModifyRiskCenterRiskStatusOutcome;
                typedef std::future<ModifyRiskCenterRiskStatusOutcome> ModifyRiskCenterRiskStatusOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyRiskCenterRiskStatusRequest&, ModifyRiskCenterRiskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskCenterRiskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRiskCenterScanTaskResponse> ModifyRiskCenterScanTaskOutcome;
                typedef std::future<ModifyRiskCenterScanTaskOutcome> ModifyRiskCenterScanTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyRiskCenterScanTaskRequest&, ModifyRiskCenterScanTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRiskCenterScanTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUebaRuleSwitchResponse> ModifyUebaRuleSwitchOutcome;
                typedef std::future<ModifyUebaRuleSwitchOutcome> ModifyUebaRuleSwitchOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::ModifyUebaRuleSwitchRequest&, ModifyUebaRuleSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUebaRuleSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::StopRiskCenterTaskResponse> StopRiskCenterTaskOutcome;
                typedef std::future<StopRiskCenterTaskOutcome> StopRiskCenterTaskOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::StopRiskCenterTaskRequest&, StopRiskCenterTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopRiskCenterTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAlertStatusListResponse> UpdateAlertStatusListOutcome;
                typedef std::future<UpdateAlertStatusListOutcome> UpdateAlertStatusListOutcomeCallable;
                typedef std::function<void(const CsipClient*, const Model::UpdateAlertStatusListRequest&, UpdateAlertStatusListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAlertStatusListAsyncHandler;



                /**
                 *csip角色授权绑定接口
                 * @param req AddNewBindRoleUserRequest
                 * @return AddNewBindRoleUserOutcome
                 */
                AddNewBindRoleUserOutcome AddNewBindRoleUser(const Model::AddNewBindRoleUserRequest &request);
                void AddNewBindRoleUserAsync(const Model::AddNewBindRoleUserRequest& request, const AddNewBindRoleUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddNewBindRoleUserOutcomeCallable AddNewBindRoleUserCallable(const Model::AddNewBindRoleUserRequest& request);

                /**
                 *创建域名、ip相关信息
                 * @param req CreateDomainAndIpRequest
                 * @return CreateDomainAndIpOutcome
                 */
                CreateDomainAndIpOutcome CreateDomainAndIp(const Model::CreateDomainAndIpRequest &request);
                void CreateDomainAndIpAsync(const Model::CreateDomainAndIpRequest& request, const CreateDomainAndIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDomainAndIpOutcomeCallable CreateDomainAndIpCallable(const Model::CreateDomainAndIpRequest& request);

                /**
                 *创建风险中心扫描任务
                 * @param req CreateRiskCenterScanTaskRequest
                 * @return CreateRiskCenterScanTaskOutcome
                 */
                CreateRiskCenterScanTaskOutcome CreateRiskCenterScanTask(const Model::CreateRiskCenterScanTaskRequest &request);
                void CreateRiskCenterScanTaskAsync(const Model::CreateRiskCenterScanTaskRequest& request, const CreateRiskCenterScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRiskCenterScanTaskOutcomeCallable CreateRiskCenterScanTaskCallable(const Model::CreateRiskCenterScanTaskRequest& request);

                /**
                 *删除域名和ip请求
                 * @param req DeleteDomainAndIpRequest
                 * @return DeleteDomainAndIpOutcome
                 */
                DeleteDomainAndIpOutcome DeleteDomainAndIp(const Model::DeleteDomainAndIpRequest &request);
                void DeleteDomainAndIpAsync(const Model::DeleteDomainAndIpRequest& request, const DeleteDomainAndIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDomainAndIpOutcomeCallable DeleteDomainAndIpCallable(const Model::DeleteDomainAndIpRequest& request);

                /**
                 *删除风险中心扫描任务
                 * @param req DeleteRiskScanTaskRequest
                 * @return DeleteRiskScanTaskOutcome
                 */
                DeleteRiskScanTaskOutcome DeleteRiskScanTask(const Model::DeleteRiskScanTaskRequest &request);
                void DeleteRiskScanTaskAsync(const Model::DeleteRiskScanTaskRequest& request, const DeleteRiskScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRiskScanTaskOutcomeCallable DeleteRiskScanTaskCallable(const Model::DeleteRiskScanTaskRequest& request);

                /**
                 *告警中心全量告警列表接口
                 * @param req DescribeAlertListRequest
                 * @return DescribeAlertListOutcome
                 */
                DescribeAlertListOutcome DescribeAlertList(const Model::DescribeAlertListRequest &request);
                void DescribeAlertListAsync(const Model::DescribeAlertListRequest& request, const DescribeAlertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlertListOutcomeCallable DescribeAlertListCallable(const Model::DescribeAlertListRequest& request);

                /**
                 *资产视角下云资源配置风险列表
                 * @param req DescribeAssetRiskListRequest
                 * @return DescribeAssetRiskListOutcome
                 */
                DescribeAssetRiskListOutcome DescribeAssetRiskList(const Model::DescribeAssetRiskListRequest &request);
                void DescribeAssetRiskListAsync(const Model::DescribeAssetRiskListRequest& request, const DescribeAssetRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetRiskListOutcomeCallable DescribeAssetRiskListCallable(const Model::DescribeAssetRiskListRequest& request);

                /**
                 *获取资产视角的漏洞风险列表
                 * @param req DescribeAssetViewVulRiskListRequest
                 * @return DescribeAssetViewVulRiskListOutcome
                 */
                DescribeAssetViewVulRiskListOutcome DescribeAssetViewVulRiskList(const Model::DescribeAssetViewVulRiskListRequest &request);
                void DescribeAssetViewVulRiskListAsync(const Model::DescribeAssetViewVulRiskListRequest& request, const DescribeAssetViewVulRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetViewVulRiskListOutcomeCallable DescribeAssetViewVulRiskListCallable(const Model::DescribeAssetViewVulRiskListRequest& request);

                /**
                 *云防资产中心统计数据
                 * @param req DescribeCFWAssetStatisticsRequest
                 * @return DescribeCFWAssetStatisticsOutcome
                 */
                DescribeCFWAssetStatisticsOutcome DescribeCFWAssetStatistics(const Model::DescribeCFWAssetStatisticsRequest &request);
                void DescribeCFWAssetStatisticsAsync(const Model::DescribeCFWAssetStatisticsRequest& request, const DescribeCFWAssetStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCFWAssetStatisticsOutcomeCallable DescribeCFWAssetStatisticsCallable(const Model::DescribeCFWAssetStatisticsRequest& request);

                /**
                 *获取风险中心风险概况示例
                 * @param req DescribeCSIPRiskStatisticsRequest
                 * @return DescribeCSIPRiskStatisticsOutcome
                 */
                DescribeCSIPRiskStatisticsOutcome DescribeCSIPRiskStatistics(const Model::DescribeCSIPRiskStatisticsRequest &request);
                void DescribeCSIPRiskStatisticsAsync(const Model::DescribeCSIPRiskStatisticsRequest& request, const DescribeCSIPRiskStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCSIPRiskStatisticsOutcomeCallable DescribeCSIPRiskStatisticsCallable(const Model::DescribeCSIPRiskStatisticsRequest& request);

                /**
                 *cvm详情
                 * @param req DescribeCVMAssetInfoRequest
                 * @return DescribeCVMAssetInfoOutcome
                 */
                DescribeCVMAssetInfoOutcome DescribeCVMAssetInfo(const Model::DescribeCVMAssetInfoRequest &request);
                void DescribeCVMAssetInfoAsync(const Model::DescribeCVMAssetInfoRequest& request, const DescribeCVMAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCVMAssetInfoOutcomeCallable DescribeCVMAssetInfoCallable(const Model::DescribeCVMAssetInfoRequest& request);

                /**
                 *获取cvm列表
                 * @param req DescribeCVMAssetsRequest
                 * @return DescribeCVMAssetsOutcome
                 */
                DescribeCVMAssetsOutcome DescribeCVMAssets(const Model::DescribeCVMAssetsRequest &request);
                void DescribeCVMAssetsAsync(const Model::DescribeCVMAssetsRequest& request, const DescribeCVMAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCVMAssetsOutcomeCallable DescribeCVMAssetsCallable(const Model::DescribeCVMAssetsRequest& request);

                /**
                 *检查视角下云资源配置风险列表示例
                 * @param req DescribeCheckViewRisksRequest
                 * @return DescribeCheckViewRisksOutcome
                 */
                DescribeCheckViewRisksOutcome DescribeCheckViewRisks(const Model::DescribeCheckViewRisksRequest &request);
                void DescribeCheckViewRisksAsync(const Model::DescribeCheckViewRisksRequest& request, const DescribeCheckViewRisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCheckViewRisksOutcomeCallable DescribeCheckViewRisksCallable(const Model::DescribeCheckViewRisksRequest& request);

                /**
                 *集群列表
                 * @param req DescribeClusterAssetsRequest
                 * @return DescribeClusterAssetsOutcome
                 */
                DescribeClusterAssetsOutcome DescribeClusterAssets(const Model::DescribeClusterAssetsRequest &request);
                void DescribeClusterAssetsAsync(const Model::DescribeClusterAssetsRequest& request, const DescribeClusterAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterAssetsOutcomeCallable DescribeClusterAssetsCallable(const Model::DescribeClusterAssetsRequest& request);

                /**
                 *集群pod列表
                 * @param req DescribeClusterPodAssetsRequest
                 * @return DescribeClusterPodAssetsOutcome
                 */
                DescribeClusterPodAssetsOutcome DescribeClusterPodAssets(const Model::DescribeClusterPodAssetsRequest &request);
                void DescribeClusterPodAssetsAsync(const Model::DescribeClusterPodAssetsRequest& request, const DescribeClusterPodAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterPodAssetsOutcomeCallable DescribeClusterPodAssetsCallable(const Model::DescribeClusterPodAssetsRequest& request);

                /**
                 *db资产详情
                 * @param req DescribeDbAssetInfoRequest
                 * @return DescribeDbAssetInfoOutcome
                 */
                DescribeDbAssetInfoOutcome DescribeDbAssetInfo(const Model::DescribeDbAssetInfoRequest &request);
                void DescribeDbAssetInfoAsync(const Model::DescribeDbAssetInfoRequest& request, const DescribeDbAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDbAssetInfoOutcomeCallable DescribeDbAssetInfoCallable(const Model::DescribeDbAssetInfoRequest& request);

                /**
                 *数据库资产列表
                 * @param req DescribeDbAssetsRequest
                 * @return DescribeDbAssetsOutcome
                 */
                DescribeDbAssetsOutcome DescribeDbAssets(const Model::DescribeDbAssetsRequest &request);
                void DescribeDbAssetsAsync(const Model::DescribeDbAssetsRequest& request, const DescribeDbAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDbAssetsOutcomeCallable DescribeDbAssetsCallable(const Model::DescribeDbAssetsRequest& request);

                /**
                 *域名列表
                 * @param req DescribeDomainAssetsRequest
                 * @return DescribeDomainAssetsOutcome
                 */
                DescribeDomainAssetsOutcome DescribeDomainAssets(const Model::DescribeDomainAssetsRequest &request);
                void DescribeDomainAssetsAsync(const Model::DescribeDomainAssetsRequest& request, const DescribeDomainAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainAssetsOutcomeCallable DescribeDomainAssetsCallable(const Model::DescribeDomainAssetsRequest& request);

                /**
                 *暴露面资产分类
                 * @param req DescribeExposeAssetCategoryRequest
                 * @return DescribeExposeAssetCategoryOutcome
                 */
                DescribeExposeAssetCategoryOutcome DescribeExposeAssetCategory(const Model::DescribeExposeAssetCategoryRequest &request);
                void DescribeExposeAssetCategoryAsync(const Model::DescribeExposeAssetCategoryRequest& request, const DescribeExposeAssetCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExposeAssetCategoryOutcomeCallable DescribeExposeAssetCategoryCallable(const Model::DescribeExposeAssetCategoryRequest& request);

                /**
                 *查询互联网暴露节点
                 * @param req DescribeExposePathRequest
                 * @return DescribeExposePathOutcome
                 */
                DescribeExposePathOutcome DescribeExposePath(const Model::DescribeExposePathRequest &request);
                void DescribeExposePathAsync(const Model::DescribeExposePathRequest& request, const DescribeExposePathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExposePathOutcomeCallable DescribeExposePathCallable(const Model::DescribeExposePathRequest& request);

                /**
                 *互联网暴露资产列表
                 * @param req DescribeExposuresRequest
                 * @return DescribeExposuresOutcome
                 */
                DescribeExposuresOutcome DescribeExposures(const Model::DescribeExposuresRequest &request);
                void DescribeExposuresAsync(const Model::DescribeExposuresRequest& request, const DescribeExposuresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExposuresOutcomeCallable DescribeExposuresCallable(const Model::DescribeExposuresRequest& request);

                /**
                 *获取网关列表
                 * @param req DescribeGatewayAssetsRequest
                 * @return DescribeGatewayAssetsOutcome
                 */
                DescribeGatewayAssetsOutcome DescribeGatewayAssets(const Model::DescribeGatewayAssetsRequest &request);
                void DescribeGatewayAssetsAsync(const Model::DescribeGatewayAssetsRequest& request, const DescribeGatewayAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatewayAssetsOutcomeCallable DescribeGatewayAssetsCallable(const Model::DescribeGatewayAssetsRequest& request);

                /**
                 *查询clb监听器列表
                 * @param req DescribeListenerListRequest
                 * @return DescribeListenerListOutcome
                 */
                DescribeListenerListOutcome DescribeListenerList(const Model::DescribeListenerListRequest &request);
                void DescribeListenerListAsync(const Model::DescribeListenerListRequest& request, const DescribeListenerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenerListOutcomeCallable DescribeListenerListCallable(const Model::DescribeListenerListRequest& request);

                /**
                 *获取网卡列表
                 * @param req DescribeNICAssetsRequest
                 * @return DescribeNICAssetsOutcome
                 */
                DescribeNICAssetsOutcome DescribeNICAssets(const Model::DescribeNICAssetsRequest &request);
                void DescribeNICAssetsAsync(const Model::DescribeNICAssetsRequest& request, const DescribeNICAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNICAssetsOutcomeCallable DescribeNICAssetsCallable(const Model::DescribeNICAssetsRequest& request);

                /**
                 *查询集团账号详情
                 * @param req DescribeOrganizationInfoRequest
                 * @return DescribeOrganizationInfoOutcome
                 */
                DescribeOrganizationInfoOutcome DescribeOrganizationInfo(const Model::DescribeOrganizationInfoRequest &request);
                void DescribeOrganizationInfoAsync(const Model::DescribeOrganizationInfoRequest& request, const DescribeOrganizationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationInfoOutcomeCallable DescribeOrganizationInfoCallable(const Model::DescribeOrganizationInfoRequest& request);

                /**
                 *查询集团账号用户列表
                 * @param req DescribeOrganizationUserInfoRequest
                 * @return DescribeOrganizationUserInfoOutcome
                 */
                DescribeOrganizationUserInfoOutcome DescribeOrganizationUserInfo(const Model::DescribeOrganizationUserInfoRequest &request);
                void DescribeOrganizationUserInfoAsync(const Model::DescribeOrganizationUserInfoRequest& request, const DescribeOrganizationUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrganizationUserInfoOutcomeCallable DescribeOrganizationUserInfoCallable(const Model::DescribeOrganizationUserInfoRequest& request);

                /**
                 *资产列表
                 * @param req DescribeOtherCloudAssetsRequest
                 * @return DescribeOtherCloudAssetsOutcome
                 */
                DescribeOtherCloudAssetsOutcome DescribeOtherCloudAssets(const Model::DescribeOtherCloudAssetsRequest &request);
                void DescribeOtherCloudAssetsAsync(const Model::DescribeOtherCloudAssetsRequest& request, const DescribeOtherCloudAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOtherCloudAssetsOutcomeCallable DescribeOtherCloudAssetsCallable(const Model::DescribeOtherCloudAssetsRequest& request);

                /**
                 *ip公网列表
                 * @param req DescribePublicIpAssetsRequest
                 * @return DescribePublicIpAssetsOutcome
                 */
                DescribePublicIpAssetsOutcome DescribePublicIpAssets(const Model::DescribePublicIpAssetsRequest &request);
                void DescribePublicIpAssetsAsync(const Model::DescribePublicIpAssetsRequest& request, const DescribePublicIpAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePublicIpAssetsOutcomeCallable DescribePublicIpAssetsCallable(const Model::DescribePublicIpAssetsRequest& request);

                /**
                 *仓库镜像列表
                 * @param req DescribeRepositoryImageAssetsRequest
                 * @return DescribeRepositoryImageAssetsOutcome
                 */
                DescribeRepositoryImageAssetsOutcome DescribeRepositoryImageAssets(const Model::DescribeRepositoryImageAssetsRequest &request);
                void DescribeRepositoryImageAssetsAsync(const Model::DescribeRepositoryImageAssetsRequest& request, const DescribeRepositoryImageAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRepositoryImageAssetsOutcomeCallable DescribeRepositoryImageAssetsCallable(const Model::DescribeRepositoryImageAssetsRequest& request);

                /**
                 *获取资产视角的配置风险列表
                 * @param req DescribeRiskCenterAssetViewCFGRiskListRequest
                 * @return DescribeRiskCenterAssetViewCFGRiskListOutcome
                 */
                DescribeRiskCenterAssetViewCFGRiskListOutcome DescribeRiskCenterAssetViewCFGRiskList(const Model::DescribeRiskCenterAssetViewCFGRiskListRequest &request);
                void DescribeRiskCenterAssetViewCFGRiskListAsync(const Model::DescribeRiskCenterAssetViewCFGRiskListRequest& request, const DescribeRiskCenterAssetViewCFGRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterAssetViewCFGRiskListOutcomeCallable DescribeRiskCenterAssetViewCFGRiskListCallable(const Model::DescribeRiskCenterAssetViewCFGRiskListRequest& request);

                /**
                 *获取资产视角的端口风险列表
                 * @param req DescribeRiskCenterAssetViewPortRiskListRequest
                 * @return DescribeRiskCenterAssetViewPortRiskListOutcome
                 */
                DescribeRiskCenterAssetViewPortRiskListOutcome DescribeRiskCenterAssetViewPortRiskList(const Model::DescribeRiskCenterAssetViewPortRiskListRequest &request);
                void DescribeRiskCenterAssetViewPortRiskListAsync(const Model::DescribeRiskCenterAssetViewPortRiskListRequest& request, const DescribeRiskCenterAssetViewPortRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterAssetViewPortRiskListOutcomeCallable DescribeRiskCenterAssetViewPortRiskListCallable(const Model::DescribeRiskCenterAssetViewPortRiskListRequest& request);

                /**
                 *获取资产视角的漏洞风险列表
                 * @param req DescribeRiskCenterAssetViewVULRiskListRequest
                 * @return DescribeRiskCenterAssetViewVULRiskListOutcome
                 */
                DescribeRiskCenterAssetViewVULRiskListOutcome DescribeRiskCenterAssetViewVULRiskList(const Model::DescribeRiskCenterAssetViewVULRiskListRequest &request);
                void DescribeRiskCenterAssetViewVULRiskListAsync(const Model::DescribeRiskCenterAssetViewVULRiskListRequest& request, const DescribeRiskCenterAssetViewVULRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterAssetViewVULRiskListOutcomeCallable DescribeRiskCenterAssetViewVULRiskListCallable(const Model::DescribeRiskCenterAssetViewVULRiskListRequest& request);

                /**
                 *获取资产视角的弱口令风险列表
                 * @param req DescribeRiskCenterAssetViewWeakPasswordRiskListRequest
                 * @return DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome
                 */
                DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome DescribeRiskCenterAssetViewWeakPasswordRiskList(const Model::DescribeRiskCenterAssetViewWeakPasswordRiskListRequest &request);
                void DescribeRiskCenterAssetViewWeakPasswordRiskListAsync(const Model::DescribeRiskCenterAssetViewWeakPasswordRiskListRequest& request, const DescribeRiskCenterAssetViewWeakPasswordRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterAssetViewWeakPasswordRiskListOutcomeCallable DescribeRiskCenterAssetViewWeakPasswordRiskListCallable(const Model::DescribeRiskCenterAssetViewWeakPasswordRiskListRequest& request);

                /**
                 *获取配置视角的配置风险列表
                 * @param req DescribeRiskCenterCFGViewCFGRiskListRequest
                 * @return DescribeRiskCenterCFGViewCFGRiskListOutcome
                 */
                DescribeRiskCenterCFGViewCFGRiskListOutcome DescribeRiskCenterCFGViewCFGRiskList(const Model::DescribeRiskCenterCFGViewCFGRiskListRequest &request);
                void DescribeRiskCenterCFGViewCFGRiskListAsync(const Model::DescribeRiskCenterCFGViewCFGRiskListRequest& request, const DescribeRiskCenterCFGViewCFGRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterCFGViewCFGRiskListOutcomeCallable DescribeRiskCenterCFGViewCFGRiskListCallable(const Model::DescribeRiskCenterCFGViewCFGRiskListRequest& request);

                /**
                 *获取端口视角的端口风险列表
                 * @param req DescribeRiskCenterPortViewPortRiskListRequest
                 * @return DescribeRiskCenterPortViewPortRiskListOutcome
                 */
                DescribeRiskCenterPortViewPortRiskListOutcome DescribeRiskCenterPortViewPortRiskList(const Model::DescribeRiskCenterPortViewPortRiskListRequest &request);
                void DescribeRiskCenterPortViewPortRiskListAsync(const Model::DescribeRiskCenterPortViewPortRiskListRequest& request, const DescribeRiskCenterPortViewPortRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterPortViewPortRiskListOutcomeCallable DescribeRiskCenterPortViewPortRiskListCallable(const Model::DescribeRiskCenterPortViewPortRiskListRequest& request);

                /**
                 *获取风险服务列表
                 * @param req DescribeRiskCenterServerRiskListRequest
                 * @return DescribeRiskCenterServerRiskListOutcome
                 */
                DescribeRiskCenterServerRiskListOutcome DescribeRiskCenterServerRiskList(const Model::DescribeRiskCenterServerRiskListRequest &request);
                void DescribeRiskCenterServerRiskListAsync(const Model::DescribeRiskCenterServerRiskListRequest& request, const DescribeRiskCenterServerRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterServerRiskListOutcomeCallable DescribeRiskCenterServerRiskListCallable(const Model::DescribeRiskCenterServerRiskListRequest& request);

                /**
                 *获取漏洞视角的漏洞风险列表
                 * @param req DescribeRiskCenterVULViewVULRiskListRequest
                 * @return DescribeRiskCenterVULViewVULRiskListOutcome
                 */
                DescribeRiskCenterVULViewVULRiskListOutcome DescribeRiskCenterVULViewVULRiskList(const Model::DescribeRiskCenterVULViewVULRiskListRequest &request);
                void DescribeRiskCenterVULViewVULRiskListAsync(const Model::DescribeRiskCenterVULViewVULRiskListRequest& request, const DescribeRiskCenterVULViewVULRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterVULViewVULRiskListOutcomeCallable DescribeRiskCenterVULViewVULRiskListCallable(const Model::DescribeRiskCenterVULViewVULRiskListRequest& request);

                /**
                 *获取内容风险列表
                 * @param req DescribeRiskCenterWebsiteRiskListRequest
                 * @return DescribeRiskCenterWebsiteRiskListOutcome
                 */
                DescribeRiskCenterWebsiteRiskListOutcome DescribeRiskCenterWebsiteRiskList(const Model::DescribeRiskCenterWebsiteRiskListRequest &request);
                void DescribeRiskCenterWebsiteRiskListAsync(const Model::DescribeRiskCenterWebsiteRiskListRequest& request, const DescribeRiskCenterWebsiteRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskCenterWebsiteRiskListOutcomeCallable DescribeRiskCenterWebsiteRiskListCallable(const Model::DescribeRiskCenterWebsiteRiskListRequest& request);

                /**
                 *风险详情列表示例
                 * @param req DescribeRiskDetailListRequest
                 * @return DescribeRiskDetailListOutcome
                 */
                DescribeRiskDetailListOutcome DescribeRiskDetailList(const Model::DescribeRiskDetailListRequest &request);
                void DescribeRiskDetailListAsync(const Model::DescribeRiskDetailListRequest& request, const DescribeRiskDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskDetailListOutcomeCallable DescribeRiskDetailListCallable(const Model::DescribeRiskDetailListRequest& request);

                /**
                 *查询风险规则详情示例
                 * @param req DescribeRiskRuleDetailRequest
                 * @return DescribeRiskRuleDetailOutcome
                 */
                DescribeRiskRuleDetailOutcome DescribeRiskRuleDetail(const Model::DescribeRiskRuleDetailRequest &request);
                void DescribeRiskRuleDetailAsync(const Model::DescribeRiskRuleDetailRequest& request, const DescribeRiskRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskRuleDetailOutcomeCallable DescribeRiskRuleDetailCallable(const Model::DescribeRiskRuleDetailRequest& request);

                /**
                 *高级配置风险规则列表示例
                 * @param req DescribeRiskRulesRequest
                 * @return DescribeRiskRulesOutcome
                 */
                DescribeRiskRulesOutcome DescribeRiskRules(const Model::DescribeRiskRulesRequest &request);
                void DescribeRiskRulesAsync(const Model::DescribeRiskRulesRequest& request, const DescribeRiskRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskRulesOutcomeCallable DescribeRiskRulesCallable(const Model::DescribeRiskRulesRequest& request);

                /**
                 *获取扫描报告列表
                 * @param req DescribeScanReportListRequest
                 * @return DescribeScanReportListOutcome
                 */
                DescribeScanReportListOutcome DescribeScanReportList(const Model::DescribeScanReportListRequest &request);
                void DescribeScanReportListAsync(const Model::DescribeScanReportListRequest& request, const DescribeScanReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanReportListOutcomeCallable DescribeScanReportListCallable(const Model::DescribeScanReportListRequest& request);

                /**
                 *查询互联网暴露扫描结果统计信息
                 * @param req DescribeScanStatisticRequest
                 * @return DescribeScanStatisticOutcome
                 */
                DescribeScanStatisticOutcome DescribeScanStatistic(const Model::DescribeScanStatisticRequest &request);
                void DescribeScanStatisticAsync(const Model::DescribeScanStatisticRequest& request, const DescribeScanStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanStatisticOutcomeCallable DescribeScanStatisticCallable(const Model::DescribeScanStatisticRequest& request);

                /**
                 *获取扫描任务列表
                 * @param req DescribeScanTaskListRequest
                 * @return DescribeScanTaskListOutcome
                 */
                DescribeScanTaskListOutcome DescribeScanTaskList(const Model::DescribeScanTaskListRequest &request);
                void DescribeScanTaskListAsync(const Model::DescribeScanTaskListRequest& request, const DescribeScanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeScanTaskListOutcomeCallable DescribeScanTaskListCallable(const Model::DescribeScanTaskListRequest& request);

                /**
                 *立体防护中心查询漏洞信息
                 * @param req DescribeSearchBugInfoRequest
                 * @return DescribeSearchBugInfoOutcome
                 */
                DescribeSearchBugInfoOutcome DescribeSearchBugInfo(const Model::DescribeSearchBugInfoRequest &request);
                void DescribeSearchBugInfoAsync(const Model::DescribeSearchBugInfoRequest& request, const DescribeSearchBugInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSearchBugInfoOutcomeCallable DescribeSearchBugInfoCallable(const Model::DescribeSearchBugInfoRequest& request);

                /**
                 *查询集团的子账号列表
                 * @param req DescribeSubUserInfoRequest
                 * @return DescribeSubUserInfoOutcome
                 */
                DescribeSubUserInfoOutcome DescribeSubUserInfo(const Model::DescribeSubUserInfoRequest &request);
                void DescribeSubUserInfoAsync(const Model::DescribeSubUserInfoRequest& request, const DescribeSubUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubUserInfoOutcomeCallable DescribeSubUserInfoCallable(const Model::DescribeSubUserInfoRequest& request);

                /**
                 *获取子网列表
                 * @param req DescribeSubnetAssetsRequest
                 * @return DescribeSubnetAssetsOutcome
                 */
                DescribeSubnetAssetsOutcome DescribeSubnetAssets(const Model::DescribeSubnetAssetsRequest &request);
                void DescribeSubnetAssetsAsync(const Model::DescribeSubnetAssetsRequest& request, const DescribeSubnetAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubnetAssetsOutcomeCallable DescribeSubnetAssetsCallable(const Model::DescribeSubnetAssetsRequest& request);

                /**
                 *获取任务扫描报告列表
                 * @param req DescribeTaskLogListRequest
                 * @return DescribeTaskLogListOutcome
                 */
                DescribeTaskLogListOutcome DescribeTaskLogList(const Model::DescribeTaskLogListRequest &request);
                void DescribeTaskLogListAsync(const Model::DescribeTaskLogListRequest& request, const DescribeTaskLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskLogListOutcomeCallable DescribeTaskLogListCallable(const Model::DescribeTaskLogListRequest& request);

                /**
                 *获取报告下载的临时链接
                 * @param req DescribeTaskLogURLRequest
                 * @return DescribeTaskLogURLOutcome
                 */
                DescribeTaskLogURLOutcome DescribeTaskLogURL(const Model::DescribeTaskLogURLRequest &request);
                void DescribeTaskLogURLAsync(const Model::DescribeTaskLogURLRequest& request, const DescribeTaskLogURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskLogURLOutcomeCallable DescribeTaskLogURLCallable(const Model::DescribeTaskLogURLRequest& request);

                /**
                 *查询TOP攻击信息
                 * @param req DescribeTopAttackInfoRequest
                 * @return DescribeTopAttackInfoOutcome
                 */
                DescribeTopAttackInfoOutcome DescribeTopAttackInfo(const Model::DescribeTopAttackInfoRequest &request);
                void DescribeTopAttackInfoAsync(const Model::DescribeTopAttackInfoRequest& request, const DescribeTopAttackInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopAttackInfoOutcomeCallable DescribeTopAttackInfoCallable(const Model::DescribeTopAttackInfoRequest& request);

                /**
                 *查询用户行为分析策略列表
                 * @param req DescribeUebaRuleRequest
                 * @return DescribeUebaRuleOutcome
                 */
                DescribeUebaRuleOutcome DescribeUebaRule(const Model::DescribeUebaRuleRequest &request);
                void DescribeUebaRuleAsync(const Model::DescribeUebaRuleRequest& request, const DescribeUebaRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUebaRuleOutcomeCallable DescribeUebaRuleCallable(const Model::DescribeUebaRuleRequest& request);

                /**
                 *新安全中心风险中心-漏洞列表
                 * @param req DescribeVULListRequest
                 * @return DescribeVULListOutcome
                 */
                DescribeVULListOutcome DescribeVULList(const Model::DescribeVULListRequest &request);
                void DescribeVULListAsync(const Model::DescribeVULListRequest& request, const DescribeVULListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVULListOutcomeCallable DescribeVULListCallable(const Model::DescribeVULListRequest& request);

                /**
                 *查询漏洞风险高级配置
                 * @param req DescribeVULRiskAdvanceCFGListRequest
                 * @return DescribeVULRiskAdvanceCFGListOutcome
                 */
                DescribeVULRiskAdvanceCFGListOutcome DescribeVULRiskAdvanceCFGList(const Model::DescribeVULRiskAdvanceCFGListRequest &request);
                void DescribeVULRiskAdvanceCFGListAsync(const Model::DescribeVULRiskAdvanceCFGListRequest& request, const DescribeVULRiskAdvanceCFGListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVULRiskAdvanceCFGListOutcomeCallable DescribeVULRiskAdvanceCFGListCallable(const Model::DescribeVULRiskAdvanceCFGListRequest& request);

                /**
                 *获取漏洞展开详情
                 * @param req DescribeVULRiskDetailRequest
                 * @return DescribeVULRiskDetailOutcome
                 */
                DescribeVULRiskDetailOutcome DescribeVULRiskDetail(const Model::DescribeVULRiskDetailRequest &request);
                void DescribeVULRiskDetailAsync(const Model::DescribeVULRiskDetailRequest& request, const DescribeVULRiskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVULRiskDetailOutcomeCallable DescribeVULRiskDetailCallable(const Model::DescribeVULRiskDetailRequest& request);

                /**
                 *获取vpc列表
                 * @param req DescribeVpcAssetsRequest
                 * @return DescribeVpcAssetsOutcome
                 */
                DescribeVpcAssetsOutcome DescribeVpcAssets(const Model::DescribeVpcAssetsRequest &request);
                void DescribeVpcAssetsAsync(const Model::DescribeVpcAssetsRequest& request, const DescribeVpcAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcAssetsOutcomeCallable DescribeVpcAssetsCallable(const Model::DescribeVpcAssetsRequest& request);

                /**
                 *获取漏洞视角的漏洞风险列表
                 * @param req DescribeVulViewVulRiskListRequest
                 * @return DescribeVulViewVulRiskListOutcome
                 */
                DescribeVulViewVulRiskListOutcome DescribeVulViewVulRiskList(const Model::DescribeVulViewVulRiskListRequest &request);
                void DescribeVulViewVulRiskListAsync(const Model::DescribeVulViewVulRiskListRequest& request, const DescribeVulViewVulRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulViewVulRiskListOutcomeCallable DescribeVulViewVulRiskListCallable(const Model::DescribeVulViewVulRiskListRequest& request);

                /**
                 *修改集团账号状态
                 * @param req ModifyOrganizationAccountStatusRequest
                 * @return ModifyOrganizationAccountStatusOutcome
                 */
                ModifyOrganizationAccountStatusOutcome ModifyOrganizationAccountStatus(const Model::ModifyOrganizationAccountStatusRequest &request);
                void ModifyOrganizationAccountStatusAsync(const Model::ModifyOrganizationAccountStatusRequest& request, const ModifyOrganizationAccountStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyOrganizationAccountStatusOutcomeCallable ModifyOrganizationAccountStatusCallable(const Model::ModifyOrganizationAccountStatusRequest& request);

                /**
                 *修改风险中心风险状态
                 * @param req ModifyRiskCenterRiskStatusRequest
                 * @return ModifyRiskCenterRiskStatusOutcome
                 */
                ModifyRiskCenterRiskStatusOutcome ModifyRiskCenterRiskStatus(const Model::ModifyRiskCenterRiskStatusRequest &request);
                void ModifyRiskCenterRiskStatusAsync(const Model::ModifyRiskCenterRiskStatusRequest& request, const ModifyRiskCenterRiskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRiskCenterRiskStatusOutcomeCallable ModifyRiskCenterRiskStatusCallable(const Model::ModifyRiskCenterRiskStatusRequest& request);

                /**
                 *修改风险中心扫描任务
                 * @param req ModifyRiskCenterScanTaskRequest
                 * @return ModifyRiskCenterScanTaskOutcome
                 */
                ModifyRiskCenterScanTaskOutcome ModifyRiskCenterScanTask(const Model::ModifyRiskCenterScanTaskRequest &request);
                void ModifyRiskCenterScanTaskAsync(const Model::ModifyRiskCenterScanTaskRequest& request, const ModifyRiskCenterScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRiskCenterScanTaskOutcomeCallable ModifyRiskCenterScanTaskCallable(const Model::ModifyRiskCenterScanTaskRequest& request);

                /**
                 *更新自定义策略的开关
                 * @param req ModifyUebaRuleSwitchRequest
                 * @return ModifyUebaRuleSwitchOutcome
                 */
                ModifyUebaRuleSwitchOutcome ModifyUebaRuleSwitch(const Model::ModifyUebaRuleSwitchRequest &request);
                void ModifyUebaRuleSwitchAsync(const Model::ModifyUebaRuleSwitchRequest& request, const ModifyUebaRuleSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUebaRuleSwitchOutcomeCallable ModifyUebaRuleSwitchCallable(const Model::ModifyUebaRuleSwitchRequest& request);

                /**
                 *停止扫风险中心扫描任务
                 * @param req StopRiskCenterTaskRequest
                 * @return StopRiskCenterTaskOutcome
                 */
                StopRiskCenterTaskOutcome StopRiskCenterTask(const Model::StopRiskCenterTaskRequest &request);
                void StopRiskCenterTaskAsync(const Model::StopRiskCenterTaskRequest& request, const StopRiskCenterTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopRiskCenterTaskOutcomeCallable StopRiskCenterTaskCallable(const Model::StopRiskCenterTaskRequest& request);

                /**
                 *批量告警状态处理接口
                 * @param req UpdateAlertStatusListRequest
                 * @return UpdateAlertStatusListOutcome
                 */
                UpdateAlertStatusListOutcome UpdateAlertStatusList(const Model::UpdateAlertStatusListRequest &request);
                void UpdateAlertStatusListAsync(const Model::UpdateAlertStatusListRequest& request, const UpdateAlertStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAlertStatusListOutcomeCallable UpdateAlertStatusListCallable(const Model::UpdateAlertStatusListRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_CSIPCLIENT_H_
