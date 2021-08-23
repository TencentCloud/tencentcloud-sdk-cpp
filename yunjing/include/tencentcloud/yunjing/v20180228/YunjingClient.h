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

#ifndef TENCENTCLOUD_YUNJING_V20180228_YUNJINGCLIENT_H_
#define TENCENTCLOUD_YUNJING_V20180228_YUNJINGCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/yunjing/v20180228/model/AddLoginWhiteListRequest.h>
#include <tencentcloud/yunjing/v20180228/model/AddLoginWhiteListResponse.h>
#include <tencentcloud/yunjing/v20180228/model/AddMachineTagRequest.h>
#include <tencentcloud/yunjing/v20180228/model/AddMachineTagResponse.h>
#include <tencentcloud/yunjing/v20180228/model/CloseProVersionRequest.h>
#include <tencentcloud/yunjing/v20180228/model/CloseProVersionResponse.h>
#include <tencentcloud/yunjing/v20180228/model/CreateBaselineStrategyRequest.h>
#include <tencentcloud/yunjing/v20180228/model/CreateBaselineStrategyResponse.h>
#include <tencentcloud/yunjing/v20180228/model/CreateOpenPortTaskRequest.h>
#include <tencentcloud/yunjing/v20180228/model/CreateOpenPortTaskResponse.h>
#include <tencentcloud/yunjing/v20180228/model/CreateProcessTaskRequest.h>
#include <tencentcloud/yunjing/v20180228/model/CreateProcessTaskResponse.h>
#include <tencentcloud/yunjing/v20180228/model/CreateUsualLoginPlacesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/CreateUsualLoginPlacesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteAttackLogsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteAttackLogsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteBashEventsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteBashEventsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteBashRulesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteBashRulesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteBruteAttacksRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteBruteAttacksResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteLoginWhiteListRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteLoginWhiteListResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteMachineRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteMachineResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteMachineTagRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteMachineTagResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteMaliciousRequestsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteMaliciousRequestsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteMalwaresRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteMalwaresResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteNonlocalLoginPlacesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteNonlocalLoginPlacesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeletePrivilegeEventsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeletePrivilegeEventsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeletePrivilegeRulesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeletePrivilegeRulesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteReverseShellEventsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteReverseShellEventsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteReverseShellRulesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteReverseShellRulesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteTagsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteTagsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteUsualLoginPlacesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DeleteUsualLoginPlacesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeAccountStatisticsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeAccountStatisticsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeAccountsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeAccountsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeAgentVulsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeAgentVulsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeAlarmAttributeRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeAlarmAttributeResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeAttackLogInfoRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeAttackLogInfoResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeAttackLogsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeAttackLogsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeBashEventsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeBashEventsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeBashRulesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeBashRulesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeBruteAttacksRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeBruteAttacksResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeComponentInfoRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeComponentInfoResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeComponentStatisticsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeComponentStatisticsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeComponentsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeComponentsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeHistoryAccountsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeHistoryAccountsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeImpactedHostsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeImpactedHostsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeLoginWhiteListRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeLoginWhiteListResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeMachineInfoRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeMachineInfoResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeMachinesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeMachinesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeMaliciousRequestsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeMaliciousRequestsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeMalwaresRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeMalwaresResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeNonlocalLoginPlacesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeNonlocalLoginPlacesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeOpenPortStatisticsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeOpenPortStatisticsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeOpenPortTaskStatusRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeOpenPortTaskStatusResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeOpenPortsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeOpenPortsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeOverviewStatisticsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeOverviewStatisticsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribePrivilegeEventsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribePrivilegeEventsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribePrivilegeRulesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribePrivilegeRulesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeProVersionInfoRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeProVersionInfoResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeProcessStatisticsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeProcessStatisticsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeProcessTaskStatusRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeProcessTaskStatusResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeProcessesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeProcessesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeReverseShellEventsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeReverseShellEventsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeReverseShellRulesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeReverseShellRulesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeSecurityDynamicsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeSecurityDynamicsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeSecurityTrendsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeSecurityTrendsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeTagMachinesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeTagMachinesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeTagsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeTagsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeUsualLoginPlacesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeUsualLoginPlacesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeVulInfoRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeVulInfoResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeVulScanResultRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeVulScanResultResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeVulsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeVulsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportBruteAttacksRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportBruteAttacksResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportInfoRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportInfoResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportMalwaresRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportMalwaresResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportNonlocalLoginPlacesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportNonlocalLoginPlacesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportVulsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportVulsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/DescribeWeeklyReportsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/EditBashRuleRequest.h>
#include <tencentcloud/yunjing/v20180228/model/EditBashRuleResponse.h>
#include <tencentcloud/yunjing/v20180228/model/EditPrivilegeRuleRequest.h>
#include <tencentcloud/yunjing/v20180228/model/EditPrivilegeRuleResponse.h>
#include <tencentcloud/yunjing/v20180228/model/EditReverseShellRuleRequest.h>
#include <tencentcloud/yunjing/v20180228/model/EditReverseShellRuleResponse.h>
#include <tencentcloud/yunjing/v20180228/model/EditTagsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/EditTagsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/ExportAttackLogsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/ExportAttackLogsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/ExportBashEventsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/ExportBashEventsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/ExportBruteAttacksRequest.h>
#include <tencentcloud/yunjing/v20180228/model/ExportBruteAttacksResponse.h>
#include <tencentcloud/yunjing/v20180228/model/ExportMaliciousRequestsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/ExportMaliciousRequestsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/ExportMalwaresRequest.h>
#include <tencentcloud/yunjing/v20180228/model/ExportMalwaresResponse.h>
#include <tencentcloud/yunjing/v20180228/model/ExportNonlocalLoginPlacesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/ExportNonlocalLoginPlacesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/ExportPrivilegeEventsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/ExportPrivilegeEventsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/ExportReverseShellEventsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/ExportReverseShellEventsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/IgnoreImpactedHostsRequest.h>
#include <tencentcloud/yunjing/v20180228/model/IgnoreImpactedHostsResponse.h>
#include <tencentcloud/yunjing/v20180228/model/InquiryPriceOpenProVersionPrepaidRequest.h>
#include <tencentcloud/yunjing/v20180228/model/InquiryPriceOpenProVersionPrepaidResponse.h>
#include <tencentcloud/yunjing/v20180228/model/MisAlarmNonlocalLoginPlacesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/MisAlarmNonlocalLoginPlacesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/ModifyAlarmAttributeRequest.h>
#include <tencentcloud/yunjing/v20180228/model/ModifyAlarmAttributeResponse.h>
#include <tencentcloud/yunjing/v20180228/model/ModifyAutoOpenProVersionConfigRequest.h>
#include <tencentcloud/yunjing/v20180228/model/ModifyAutoOpenProVersionConfigResponse.h>
#include <tencentcloud/yunjing/v20180228/model/ModifyLoginWhiteListRequest.h>
#include <tencentcloud/yunjing/v20180228/model/ModifyLoginWhiteListResponse.h>
#include <tencentcloud/yunjing/v20180228/model/ModifyProVersionRenewFlagRequest.h>
#include <tencentcloud/yunjing/v20180228/model/ModifyProVersionRenewFlagResponse.h>
#include <tencentcloud/yunjing/v20180228/model/OpenProVersionRequest.h>
#include <tencentcloud/yunjing/v20180228/model/OpenProVersionResponse.h>
#include <tencentcloud/yunjing/v20180228/model/OpenProVersionPrepaidRequest.h>
#include <tencentcloud/yunjing/v20180228/model/OpenProVersionPrepaidResponse.h>
#include <tencentcloud/yunjing/v20180228/model/RecoverMalwaresRequest.h>
#include <tencentcloud/yunjing/v20180228/model/RecoverMalwaresResponse.h>
#include <tencentcloud/yunjing/v20180228/model/RenewProVersionRequest.h>
#include <tencentcloud/yunjing/v20180228/model/RenewProVersionResponse.h>
#include <tencentcloud/yunjing/v20180228/model/RescanImpactedHostRequest.h>
#include <tencentcloud/yunjing/v20180228/model/RescanImpactedHostResponse.h>
#include <tencentcloud/yunjing/v20180228/model/SeparateMalwaresRequest.h>
#include <tencentcloud/yunjing/v20180228/model/SeparateMalwaresResponse.h>
#include <tencentcloud/yunjing/v20180228/model/SetBashEventsStatusRequest.h>
#include <tencentcloud/yunjing/v20180228/model/SetBashEventsStatusResponse.h>
#include <tencentcloud/yunjing/v20180228/model/SwitchBashRulesRequest.h>
#include <tencentcloud/yunjing/v20180228/model/SwitchBashRulesResponse.h>
#include <tencentcloud/yunjing/v20180228/model/TrustMaliciousRequestRequest.h>
#include <tencentcloud/yunjing/v20180228/model/TrustMaliciousRequestResponse.h>
#include <tencentcloud/yunjing/v20180228/model/TrustMalwaresRequest.h>
#include <tencentcloud/yunjing/v20180228/model/TrustMalwaresResponse.h>
#include <tencentcloud/yunjing/v20180228/model/UntrustMaliciousRequestRequest.h>
#include <tencentcloud/yunjing/v20180228/model/UntrustMaliciousRequestResponse.h>
#include <tencentcloud/yunjing/v20180228/model/UntrustMalwaresRequest.h>
#include <tencentcloud/yunjing/v20180228/model/UntrustMalwaresResponse.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            class YunjingClient : public AbstractClient
            {
            public:
                YunjingClient(const Credential &credential, const std::string &region);
                YunjingClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddLoginWhiteListResponse> AddLoginWhiteListOutcome;
                typedef std::future<AddLoginWhiteListOutcome> AddLoginWhiteListOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::AddLoginWhiteListRequest&, AddLoginWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddLoginWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::AddMachineTagResponse> AddMachineTagOutcome;
                typedef std::future<AddMachineTagOutcome> AddMachineTagOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::AddMachineTagRequest&, AddMachineTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddMachineTagAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseProVersionResponse> CloseProVersionOutcome;
                typedef std::future<CloseProVersionOutcome> CloseProVersionOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::CloseProVersionRequest&, CloseProVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseProVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBaselineStrategyResponse> CreateBaselineStrategyOutcome;
                typedef std::future<CreateBaselineStrategyOutcome> CreateBaselineStrategyOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::CreateBaselineStrategyRequest&, CreateBaselineStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBaselineStrategyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOpenPortTaskResponse> CreateOpenPortTaskOutcome;
                typedef std::future<CreateOpenPortTaskOutcome> CreateOpenPortTaskOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::CreateOpenPortTaskRequest&, CreateOpenPortTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOpenPortTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProcessTaskResponse> CreateProcessTaskOutcome;
                typedef std::future<CreateProcessTaskOutcome> CreateProcessTaskOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::CreateProcessTaskRequest&, CreateProcessTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProcessTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUsualLoginPlacesResponse> CreateUsualLoginPlacesOutcome;
                typedef std::future<CreateUsualLoginPlacesOutcome> CreateUsualLoginPlacesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::CreateUsualLoginPlacesRequest&, CreateUsualLoginPlacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUsualLoginPlacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAttackLogsResponse> DeleteAttackLogsOutcome;
                typedef std::future<DeleteAttackLogsOutcome> DeleteAttackLogsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeleteAttackLogsRequest&, DeleteAttackLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAttackLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBashEventsResponse> DeleteBashEventsOutcome;
                typedef std::future<DeleteBashEventsOutcome> DeleteBashEventsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeleteBashEventsRequest&, DeleteBashEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBashEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBashRulesResponse> DeleteBashRulesOutcome;
                typedef std::future<DeleteBashRulesOutcome> DeleteBashRulesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeleteBashRulesRequest&, DeleteBashRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBashRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBruteAttacksResponse> DeleteBruteAttacksOutcome;
                typedef std::future<DeleteBruteAttacksOutcome> DeleteBruteAttacksOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeleteBruteAttacksRequest&, DeleteBruteAttacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBruteAttacksAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoginWhiteListResponse> DeleteLoginWhiteListOutcome;
                typedef std::future<DeleteLoginWhiteListOutcome> DeleteLoginWhiteListOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeleteLoginWhiteListRequest&, DeleteLoginWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoginWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMachineResponse> DeleteMachineOutcome;
                typedef std::future<DeleteMachineOutcome> DeleteMachineOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeleteMachineRequest&, DeleteMachineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMachineAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMachineTagResponse> DeleteMachineTagOutcome;
                typedef std::future<DeleteMachineTagOutcome> DeleteMachineTagOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeleteMachineTagRequest&, DeleteMachineTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMachineTagAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMaliciousRequestsResponse> DeleteMaliciousRequestsOutcome;
                typedef std::future<DeleteMaliciousRequestsOutcome> DeleteMaliciousRequestsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeleteMaliciousRequestsRequest&, DeleteMaliciousRequestsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMaliciousRequestsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMalwaresResponse> DeleteMalwaresOutcome;
                typedef std::future<DeleteMalwaresOutcome> DeleteMalwaresOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeleteMalwaresRequest&, DeleteMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMalwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNonlocalLoginPlacesResponse> DeleteNonlocalLoginPlacesOutcome;
                typedef std::future<DeleteNonlocalLoginPlacesOutcome> DeleteNonlocalLoginPlacesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeleteNonlocalLoginPlacesRequest&, DeleteNonlocalLoginPlacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNonlocalLoginPlacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrivilegeEventsResponse> DeletePrivilegeEventsOutcome;
                typedef std::future<DeletePrivilegeEventsOutcome> DeletePrivilegeEventsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeletePrivilegeEventsRequest&, DeletePrivilegeEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivilegeEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrivilegeRulesResponse> DeletePrivilegeRulesOutcome;
                typedef std::future<DeletePrivilegeRulesOutcome> DeletePrivilegeRulesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeletePrivilegeRulesRequest&, DeletePrivilegeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivilegeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReverseShellEventsResponse> DeleteReverseShellEventsOutcome;
                typedef std::future<DeleteReverseShellEventsOutcome> DeleteReverseShellEventsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeleteReverseShellEventsRequest&, DeleteReverseShellEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReverseShellEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteReverseShellRulesResponse> DeleteReverseShellRulesOutcome;
                typedef std::future<DeleteReverseShellRulesOutcome> DeleteReverseShellRulesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeleteReverseShellRulesRequest&, DeleteReverseShellRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteReverseShellRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTagsResponse> DeleteTagsOutcome;
                typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeleteTagsRequest&, DeleteTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUsualLoginPlacesResponse> DeleteUsualLoginPlacesOutcome;
                typedef std::future<DeleteUsualLoginPlacesOutcome> DeleteUsualLoginPlacesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DeleteUsualLoginPlacesRequest&, DeleteUsualLoginPlacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUsualLoginPlacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountStatisticsResponse> DescribeAccountStatisticsOutcome;
                typedef std::future<DescribeAccountStatisticsOutcome> DescribeAccountStatisticsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeAccountStatisticsRequest&, DescribeAccountStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountsResponse> DescribeAccountsOutcome;
                typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeAccountsRequest&, DescribeAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAgentVulsResponse> DescribeAgentVulsOutcome;
                typedef std::future<DescribeAgentVulsOutcome> DescribeAgentVulsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeAgentVulsRequest&, DescribeAgentVulsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAgentVulsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmAttributeResponse> DescribeAlarmAttributeOutcome;
                typedef std::future<DescribeAlarmAttributeOutcome> DescribeAlarmAttributeOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeAlarmAttributeRequest&, DescribeAlarmAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackLogInfoResponse> DescribeAttackLogInfoOutcome;
                typedef std::future<DescribeAttackLogInfoOutcome> DescribeAttackLogInfoOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeAttackLogInfoRequest&, DescribeAttackLogInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackLogInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackLogsResponse> DescribeAttackLogsOutcome;
                typedef std::future<DescribeAttackLogsOutcome> DescribeAttackLogsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeAttackLogsRequest&, DescribeAttackLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBashEventsResponse> DescribeBashEventsOutcome;
                typedef std::future<DescribeBashEventsOutcome> DescribeBashEventsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeBashEventsRequest&, DescribeBashEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBashEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBashRulesResponse> DescribeBashRulesOutcome;
                typedef std::future<DescribeBashRulesOutcome> DescribeBashRulesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeBashRulesRequest&, DescribeBashRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBashRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBruteAttacksResponse> DescribeBruteAttacksOutcome;
                typedef std::future<DescribeBruteAttacksOutcome> DescribeBruteAttacksOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeBruteAttacksRequest&, DescribeBruteAttacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBruteAttacksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComponentInfoResponse> DescribeComponentInfoOutcome;
                typedef std::future<DescribeComponentInfoOutcome> DescribeComponentInfoOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeComponentInfoRequest&, DescribeComponentInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComponentInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComponentStatisticsResponse> DescribeComponentStatisticsOutcome;
                typedef std::future<DescribeComponentStatisticsOutcome> DescribeComponentStatisticsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeComponentStatisticsRequest&, DescribeComponentStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComponentStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeComponentsResponse> DescribeComponentsOutcome;
                typedef std::future<DescribeComponentsOutcome> DescribeComponentsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeComponentsRequest&, DescribeComponentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComponentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHistoryAccountsResponse> DescribeHistoryAccountsOutcome;
                typedef std::future<DescribeHistoryAccountsOutcome> DescribeHistoryAccountsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeHistoryAccountsRequest&, DescribeHistoryAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistoryAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImpactedHostsResponse> DescribeImpactedHostsOutcome;
                typedef std::future<DescribeImpactedHostsOutcome> DescribeImpactedHostsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeImpactedHostsRequest&, DescribeImpactedHostsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImpactedHostsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoginWhiteListResponse> DescribeLoginWhiteListOutcome;
                typedef std::future<DescribeLoginWhiteListOutcome> DescribeLoginWhiteListOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeLoginWhiteListRequest&, DescribeLoginWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoginWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachineInfoResponse> DescribeMachineInfoOutcome;
                typedef std::future<DescribeMachineInfoOutcome> DescribeMachineInfoOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeMachineInfoRequest&, DescribeMachineInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachineInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMachinesResponse> DescribeMachinesOutcome;
                typedef std::future<DescribeMachinesOutcome> DescribeMachinesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeMachinesRequest&, DescribeMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMaliciousRequestsResponse> DescribeMaliciousRequestsOutcome;
                typedef std::future<DescribeMaliciousRequestsOutcome> DescribeMaliciousRequestsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeMaliciousRequestsRequest&, DescribeMaliciousRequestsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMaliciousRequestsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMalwaresResponse> DescribeMalwaresOutcome;
                typedef std::future<DescribeMalwaresOutcome> DescribeMalwaresOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeMalwaresRequest&, DescribeMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMalwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNonlocalLoginPlacesResponse> DescribeNonlocalLoginPlacesOutcome;
                typedef std::future<DescribeNonlocalLoginPlacesOutcome> DescribeNonlocalLoginPlacesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeNonlocalLoginPlacesRequest&, DescribeNonlocalLoginPlacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNonlocalLoginPlacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOpenPortStatisticsResponse> DescribeOpenPortStatisticsOutcome;
                typedef std::future<DescribeOpenPortStatisticsOutcome> DescribeOpenPortStatisticsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeOpenPortStatisticsRequest&, DescribeOpenPortStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOpenPortStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOpenPortTaskStatusResponse> DescribeOpenPortTaskStatusOutcome;
                typedef std::future<DescribeOpenPortTaskStatusOutcome> DescribeOpenPortTaskStatusOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeOpenPortTaskStatusRequest&, DescribeOpenPortTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOpenPortTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOpenPortsResponse> DescribeOpenPortsOutcome;
                typedef std::future<DescribeOpenPortsOutcome> DescribeOpenPortsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeOpenPortsRequest&, DescribeOpenPortsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOpenPortsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOverviewStatisticsResponse> DescribeOverviewStatisticsOutcome;
                typedef std::future<DescribeOverviewStatisticsOutcome> DescribeOverviewStatisticsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeOverviewStatisticsRequest&, DescribeOverviewStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOverviewStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivilegeEventsResponse> DescribePrivilegeEventsOutcome;
                typedef std::future<DescribePrivilegeEventsOutcome> DescribePrivilegeEventsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribePrivilegeEventsRequest&, DescribePrivilegeEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivilegeEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivilegeRulesResponse> DescribePrivilegeRulesOutcome;
                typedef std::future<DescribePrivilegeRulesOutcome> DescribePrivilegeRulesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribePrivilegeRulesRequest&, DescribePrivilegeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivilegeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProVersionInfoResponse> DescribeProVersionInfoOutcome;
                typedef std::future<DescribeProVersionInfoOutcome> DescribeProVersionInfoOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeProVersionInfoRequest&, DescribeProVersionInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProVersionInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProcessStatisticsResponse> DescribeProcessStatisticsOutcome;
                typedef std::future<DescribeProcessStatisticsOutcome> DescribeProcessStatisticsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeProcessStatisticsRequest&, DescribeProcessStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProcessStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProcessTaskStatusResponse> DescribeProcessTaskStatusOutcome;
                typedef std::future<DescribeProcessTaskStatusOutcome> DescribeProcessTaskStatusOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeProcessTaskStatusRequest&, DescribeProcessTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProcessTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProcessesResponse> DescribeProcessesOutcome;
                typedef std::future<DescribeProcessesOutcome> DescribeProcessesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeProcessesRequest&, DescribeProcessesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProcessesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReverseShellEventsResponse> DescribeReverseShellEventsOutcome;
                typedef std::future<DescribeReverseShellEventsOutcome> DescribeReverseShellEventsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeReverseShellEventsRequest&, DescribeReverseShellEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReverseShellEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReverseShellRulesResponse> DescribeReverseShellRulesOutcome;
                typedef std::future<DescribeReverseShellRulesOutcome> DescribeReverseShellRulesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeReverseShellRulesRequest&, DescribeReverseShellRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReverseShellRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityDynamicsResponse> DescribeSecurityDynamicsOutcome;
                typedef std::future<DescribeSecurityDynamicsOutcome> DescribeSecurityDynamicsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeSecurityDynamicsRequest&, DescribeSecurityDynamicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityDynamicsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityTrendsResponse> DescribeSecurityTrendsOutcome;
                typedef std::future<DescribeSecurityTrendsOutcome> DescribeSecurityTrendsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeSecurityTrendsRequest&, DescribeSecurityTrendsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityTrendsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagMachinesResponse> DescribeTagMachinesOutcome;
                typedef std::future<DescribeTagMachinesOutcome> DescribeTagMachinesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeTagMachinesRequest&, DescribeTagMachinesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagMachinesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagsResponse> DescribeTagsOutcome;
                typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeTagsRequest&, DescribeTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsualLoginPlacesResponse> DescribeUsualLoginPlacesOutcome;
                typedef std::future<DescribeUsualLoginPlacesOutcome> DescribeUsualLoginPlacesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeUsualLoginPlacesRequest&, DescribeUsualLoginPlacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsualLoginPlacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulInfoResponse> DescribeVulInfoOutcome;
                typedef std::future<DescribeVulInfoOutcome> DescribeVulInfoOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeVulInfoRequest&, DescribeVulInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulScanResultResponse> DescribeVulScanResultOutcome;
                typedef std::future<DescribeVulScanResultOutcome> DescribeVulScanResultOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeVulScanResultRequest&, DescribeVulScanResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulScanResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVulsResponse> DescribeVulsOutcome;
                typedef std::future<DescribeVulsOutcome> DescribeVulsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeVulsRequest&, DescribeVulsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVulsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWeeklyReportBruteAttacksResponse> DescribeWeeklyReportBruteAttacksOutcome;
                typedef std::future<DescribeWeeklyReportBruteAttacksOutcome> DescribeWeeklyReportBruteAttacksOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeWeeklyReportBruteAttacksRequest&, DescribeWeeklyReportBruteAttacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWeeklyReportBruteAttacksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWeeklyReportInfoResponse> DescribeWeeklyReportInfoOutcome;
                typedef std::future<DescribeWeeklyReportInfoOutcome> DescribeWeeklyReportInfoOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeWeeklyReportInfoRequest&, DescribeWeeklyReportInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWeeklyReportInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWeeklyReportMalwaresResponse> DescribeWeeklyReportMalwaresOutcome;
                typedef std::future<DescribeWeeklyReportMalwaresOutcome> DescribeWeeklyReportMalwaresOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeWeeklyReportMalwaresRequest&, DescribeWeeklyReportMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWeeklyReportMalwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWeeklyReportNonlocalLoginPlacesResponse> DescribeWeeklyReportNonlocalLoginPlacesOutcome;
                typedef std::future<DescribeWeeklyReportNonlocalLoginPlacesOutcome> DescribeWeeklyReportNonlocalLoginPlacesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeWeeklyReportNonlocalLoginPlacesRequest&, DescribeWeeklyReportNonlocalLoginPlacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWeeklyReportNonlocalLoginPlacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWeeklyReportVulsResponse> DescribeWeeklyReportVulsOutcome;
                typedef std::future<DescribeWeeklyReportVulsOutcome> DescribeWeeklyReportVulsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeWeeklyReportVulsRequest&, DescribeWeeklyReportVulsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWeeklyReportVulsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWeeklyReportsResponse> DescribeWeeklyReportsOutcome;
                typedef std::future<DescribeWeeklyReportsOutcome> DescribeWeeklyReportsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::DescribeWeeklyReportsRequest&, DescribeWeeklyReportsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWeeklyReportsAsyncHandler;
                typedef Outcome<Core::Error, Model::EditBashRuleResponse> EditBashRuleOutcome;
                typedef std::future<EditBashRuleOutcome> EditBashRuleOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::EditBashRuleRequest&, EditBashRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditBashRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::EditPrivilegeRuleResponse> EditPrivilegeRuleOutcome;
                typedef std::future<EditPrivilegeRuleOutcome> EditPrivilegeRuleOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::EditPrivilegeRuleRequest&, EditPrivilegeRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditPrivilegeRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::EditReverseShellRuleResponse> EditReverseShellRuleOutcome;
                typedef std::future<EditReverseShellRuleOutcome> EditReverseShellRuleOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::EditReverseShellRuleRequest&, EditReverseShellRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditReverseShellRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::EditTagsResponse> EditTagsOutcome;
                typedef std::future<EditTagsOutcome> EditTagsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::EditTagsRequest&, EditTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportAttackLogsResponse> ExportAttackLogsOutcome;
                typedef std::future<ExportAttackLogsOutcome> ExportAttackLogsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::ExportAttackLogsRequest&, ExportAttackLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportAttackLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportBashEventsResponse> ExportBashEventsOutcome;
                typedef std::future<ExportBashEventsOutcome> ExportBashEventsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::ExportBashEventsRequest&, ExportBashEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBashEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportBruteAttacksResponse> ExportBruteAttacksOutcome;
                typedef std::future<ExportBruteAttacksOutcome> ExportBruteAttacksOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::ExportBruteAttacksRequest&, ExportBruteAttacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportBruteAttacksAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportMaliciousRequestsResponse> ExportMaliciousRequestsOutcome;
                typedef std::future<ExportMaliciousRequestsOutcome> ExportMaliciousRequestsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::ExportMaliciousRequestsRequest&, ExportMaliciousRequestsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportMaliciousRequestsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportMalwaresResponse> ExportMalwaresOutcome;
                typedef std::future<ExportMalwaresOutcome> ExportMalwaresOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::ExportMalwaresRequest&, ExportMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportMalwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportNonlocalLoginPlacesResponse> ExportNonlocalLoginPlacesOutcome;
                typedef std::future<ExportNonlocalLoginPlacesOutcome> ExportNonlocalLoginPlacesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::ExportNonlocalLoginPlacesRequest&, ExportNonlocalLoginPlacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportNonlocalLoginPlacesAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportPrivilegeEventsResponse> ExportPrivilegeEventsOutcome;
                typedef std::future<ExportPrivilegeEventsOutcome> ExportPrivilegeEventsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::ExportPrivilegeEventsRequest&, ExportPrivilegeEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportPrivilegeEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportReverseShellEventsResponse> ExportReverseShellEventsOutcome;
                typedef std::future<ExportReverseShellEventsOutcome> ExportReverseShellEventsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::ExportReverseShellEventsRequest&, ExportReverseShellEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportReverseShellEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::IgnoreImpactedHostsResponse> IgnoreImpactedHostsOutcome;
                typedef std::future<IgnoreImpactedHostsOutcome> IgnoreImpactedHostsOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::IgnoreImpactedHostsRequest&, IgnoreImpactedHostsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IgnoreImpactedHostsAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceOpenProVersionPrepaidResponse> InquiryPriceOpenProVersionPrepaidOutcome;
                typedef std::future<InquiryPriceOpenProVersionPrepaidOutcome> InquiryPriceOpenProVersionPrepaidOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::InquiryPriceOpenProVersionPrepaidRequest&, InquiryPriceOpenProVersionPrepaidOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceOpenProVersionPrepaidAsyncHandler;
                typedef Outcome<Core::Error, Model::MisAlarmNonlocalLoginPlacesResponse> MisAlarmNonlocalLoginPlacesOutcome;
                typedef std::future<MisAlarmNonlocalLoginPlacesOutcome> MisAlarmNonlocalLoginPlacesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::MisAlarmNonlocalLoginPlacesRequest&, MisAlarmNonlocalLoginPlacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MisAlarmNonlocalLoginPlacesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmAttributeResponse> ModifyAlarmAttributeOutcome;
                typedef std::future<ModifyAlarmAttributeOutcome> ModifyAlarmAttributeOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::ModifyAlarmAttributeRequest&, ModifyAlarmAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAutoOpenProVersionConfigResponse> ModifyAutoOpenProVersionConfigOutcome;
                typedef std::future<ModifyAutoOpenProVersionConfigOutcome> ModifyAutoOpenProVersionConfigOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::ModifyAutoOpenProVersionConfigRequest&, ModifyAutoOpenProVersionConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAutoOpenProVersionConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoginWhiteListResponse> ModifyLoginWhiteListOutcome;
                typedef std::future<ModifyLoginWhiteListOutcome> ModifyLoginWhiteListOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::ModifyLoginWhiteListRequest&, ModifyLoginWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoginWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProVersionRenewFlagResponse> ModifyProVersionRenewFlagOutcome;
                typedef std::future<ModifyProVersionRenewFlagOutcome> ModifyProVersionRenewFlagOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::ModifyProVersionRenewFlagRequest&, ModifyProVersionRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProVersionRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenProVersionResponse> OpenProVersionOutcome;
                typedef std::future<OpenProVersionOutcome> OpenProVersionOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::OpenProVersionRequest&, OpenProVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenProVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenProVersionPrepaidResponse> OpenProVersionPrepaidOutcome;
                typedef std::future<OpenProVersionPrepaidOutcome> OpenProVersionPrepaidOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::OpenProVersionPrepaidRequest&, OpenProVersionPrepaidOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenProVersionPrepaidAsyncHandler;
                typedef Outcome<Core::Error, Model::RecoverMalwaresResponse> RecoverMalwaresOutcome;
                typedef std::future<RecoverMalwaresOutcome> RecoverMalwaresOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::RecoverMalwaresRequest&, RecoverMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecoverMalwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewProVersionResponse> RenewProVersionOutcome;
                typedef std::future<RenewProVersionOutcome> RenewProVersionOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::RenewProVersionRequest&, RenewProVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewProVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::RescanImpactedHostResponse> RescanImpactedHostOutcome;
                typedef std::future<RescanImpactedHostOutcome> RescanImpactedHostOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::RescanImpactedHostRequest&, RescanImpactedHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RescanImpactedHostAsyncHandler;
                typedef Outcome<Core::Error, Model::SeparateMalwaresResponse> SeparateMalwaresOutcome;
                typedef std::future<SeparateMalwaresOutcome> SeparateMalwaresOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::SeparateMalwaresRequest&, SeparateMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SeparateMalwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::SetBashEventsStatusResponse> SetBashEventsStatusOutcome;
                typedef std::future<SetBashEventsStatusOutcome> SetBashEventsStatusOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::SetBashEventsStatusRequest&, SetBashEventsStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetBashEventsStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchBashRulesResponse> SwitchBashRulesOutcome;
                typedef std::future<SwitchBashRulesOutcome> SwitchBashRulesOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::SwitchBashRulesRequest&, SwitchBashRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchBashRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::TrustMaliciousRequestResponse> TrustMaliciousRequestOutcome;
                typedef std::future<TrustMaliciousRequestOutcome> TrustMaliciousRequestOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::TrustMaliciousRequestRequest&, TrustMaliciousRequestOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TrustMaliciousRequestAsyncHandler;
                typedef Outcome<Core::Error, Model::TrustMalwaresResponse> TrustMalwaresOutcome;
                typedef std::future<TrustMalwaresOutcome> TrustMalwaresOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::TrustMalwaresRequest&, TrustMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TrustMalwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::UntrustMaliciousRequestResponse> UntrustMaliciousRequestOutcome;
                typedef std::future<UntrustMaliciousRequestOutcome> UntrustMaliciousRequestOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::UntrustMaliciousRequestRequest&, UntrustMaliciousRequestOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UntrustMaliciousRequestAsyncHandler;
                typedef Outcome<Core::Error, Model::UntrustMalwaresResponse> UntrustMalwaresOutcome;
                typedef std::future<UntrustMalwaresOutcome> UntrustMalwaresOutcomeCallable;
                typedef std::function<void(const YunjingClient*, const Model::UntrustMalwaresRequest&, UntrustMalwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UntrustMalwaresAsyncHandler;



                /**
                 *本接口（AddLoginWhiteList）用于添加白名单规则
                 * @param req AddLoginWhiteListRequest
                 * @return AddLoginWhiteListOutcome
                 */
                AddLoginWhiteListOutcome AddLoginWhiteList(const Model::AddLoginWhiteListRequest &request);
                void AddLoginWhiteListAsync(const Model::AddLoginWhiteListRequest& request, const AddLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddLoginWhiteListOutcomeCallable AddLoginWhiteListCallable(const Model::AddLoginWhiteListRequest& request);

                /**
                 *增加机器关联标签
                 * @param req AddMachineTagRequest
                 * @return AddMachineTagOutcome
                 */
                AddMachineTagOutcome AddMachineTag(const Model::AddMachineTagRequest &request);
                void AddMachineTagAsync(const Model::AddMachineTagRequest& request, const AddMachineTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddMachineTagOutcomeCallable AddMachineTagCallable(const Model::AddMachineTagRequest& request);

                /**
                 *本接口 (CloseProVersion) 用于关闭专业版。
                 * @param req CloseProVersionRequest
                 * @return CloseProVersionOutcome
                 */
                CloseProVersionOutcome CloseProVersion(const Model::CloseProVersionRequest &request);
                void CloseProVersionAsync(const Model::CloseProVersionRequest& request, const CloseProVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseProVersionOutcomeCallable CloseProVersionCallable(const Model::CloseProVersionRequest& request);

                /**
                 *根据策略信息创建基线策略
                 * @param req CreateBaselineStrategyRequest
                 * @return CreateBaselineStrategyOutcome
                 */
                CreateBaselineStrategyOutcome CreateBaselineStrategy(const Model::CreateBaselineStrategyRequest &request);
                void CreateBaselineStrategyAsync(const Model::CreateBaselineStrategyRequest& request, const CreateBaselineStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBaselineStrategyOutcomeCallable CreateBaselineStrategyCallable(const Model::CreateBaselineStrategyRequest& request);

                /**
                 *本接口 (CreateOpenPortTask) 用于创建实时获取端口任务。
                 * @param req CreateOpenPortTaskRequest
                 * @return CreateOpenPortTaskOutcome
                 */
                CreateOpenPortTaskOutcome CreateOpenPortTask(const Model::CreateOpenPortTaskRequest &request);
                void CreateOpenPortTaskAsync(const Model::CreateOpenPortTaskRequest& request, const CreateOpenPortTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOpenPortTaskOutcomeCallable CreateOpenPortTaskCallable(const Model::CreateOpenPortTaskRequest& request);

                /**
                 *本接口 (CreateProcessTask) 用于创建实时拉取进程任务。
                 * @param req CreateProcessTaskRequest
                 * @return CreateProcessTaskOutcome
                 */
                CreateProcessTaskOutcome CreateProcessTask(const Model::CreateProcessTaskRequest &request);
                void CreateProcessTaskAsync(const Model::CreateProcessTaskRequest& request, const CreateProcessTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProcessTaskOutcomeCallable CreateProcessTaskCallable(const Model::CreateProcessTaskRequest& request);

                /**
                 *此接口（CreateUsualLoginPlaces）用于添加常用登录地。
                 * @param req CreateUsualLoginPlacesRequest
                 * @return CreateUsualLoginPlacesOutcome
                 */
                CreateUsualLoginPlacesOutcome CreateUsualLoginPlaces(const Model::CreateUsualLoginPlacesRequest &request);
                void CreateUsualLoginPlacesAsync(const Model::CreateUsualLoginPlacesRequest& request, const CreateUsualLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUsualLoginPlacesOutcomeCallable CreateUsualLoginPlacesCallable(const Model::CreateUsualLoginPlacesRequest& request);

                /**
                 *删除网络攻击日志
                 * @param req DeleteAttackLogsRequest
                 * @return DeleteAttackLogsOutcome
                 */
                DeleteAttackLogsOutcome DeleteAttackLogs(const Model::DeleteAttackLogsRequest &request);
                void DeleteAttackLogsAsync(const Model::DeleteAttackLogsRequest& request, const DeleteAttackLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAttackLogsOutcomeCallable DeleteAttackLogsCallable(const Model::DeleteAttackLogsRequest& request);

                /**
                 *根据Ids删除高危命令事件
                 * @param req DeleteBashEventsRequest
                 * @return DeleteBashEventsOutcome
                 */
                DeleteBashEventsOutcome DeleteBashEvents(const Model::DeleteBashEventsRequest &request);
                void DeleteBashEventsAsync(const Model::DeleteBashEventsRequest& request, const DeleteBashEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBashEventsOutcomeCallable DeleteBashEventsCallable(const Model::DeleteBashEventsRequest& request);

                /**
                 *删除高危命令规则
                 * @param req DeleteBashRulesRequest
                 * @return DeleteBashRulesOutcome
                 */
                DeleteBashRulesOutcome DeleteBashRules(const Model::DeleteBashRulesRequest &request);
                void DeleteBashRulesAsync(const Model::DeleteBashRulesRequest& request, const DeleteBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBashRulesOutcomeCallable DeleteBashRulesCallable(const Model::DeleteBashRulesRequest& request);

                /**
                 *本接口 (DeleteBruteAttacks) 用于删除暴力破解记录。
                 * @param req DeleteBruteAttacksRequest
                 * @return DeleteBruteAttacksOutcome
                 */
                DeleteBruteAttacksOutcome DeleteBruteAttacks(const Model::DeleteBruteAttacksRequest &request);
                void DeleteBruteAttacksAsync(const Model::DeleteBruteAttacksRequest& request, const DeleteBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBruteAttacksOutcomeCallable DeleteBruteAttacksCallable(const Model::DeleteBruteAttacksRequest& request);

                /**
                 *删除白名单规则
                 * @param req DeleteLoginWhiteListRequest
                 * @return DeleteLoginWhiteListOutcome
                 */
                DeleteLoginWhiteListOutcome DeleteLoginWhiteList(const Model::DeleteLoginWhiteListRequest &request);
                void DeleteLoginWhiteListAsync(const Model::DeleteLoginWhiteListRequest& request, const DeleteLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoginWhiteListOutcomeCallable DeleteLoginWhiteListCallable(const Model::DeleteLoginWhiteListRequest& request);

                /**
                 *本接口（DeleteMachine）用于卸载云镜客户端。
                 * @param req DeleteMachineRequest
                 * @return DeleteMachineOutcome
                 */
                DeleteMachineOutcome DeleteMachine(const Model::DeleteMachineRequest &request);
                void DeleteMachineAsync(const Model::DeleteMachineRequest& request, const DeleteMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMachineOutcomeCallable DeleteMachineCallable(const Model::DeleteMachineRequest& request);

                /**
                 *删除服务器关联的标签
                 * @param req DeleteMachineTagRequest
                 * @return DeleteMachineTagOutcome
                 */
                DeleteMachineTagOutcome DeleteMachineTag(const Model::DeleteMachineTagRequest &request);
                void DeleteMachineTagAsync(const Model::DeleteMachineTagRequest& request, const DeleteMachineTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMachineTagOutcomeCallable DeleteMachineTagCallable(const Model::DeleteMachineTagRequest& request);

                /**
                 *本接口 (DeleteMaliciousRequests) 用于删除恶意请求记录。
                 * @param req DeleteMaliciousRequestsRequest
                 * @return DeleteMaliciousRequestsOutcome
                 */
                DeleteMaliciousRequestsOutcome DeleteMaliciousRequests(const Model::DeleteMaliciousRequestsRequest &request);
                void DeleteMaliciousRequestsAsync(const Model::DeleteMaliciousRequestsRequest& request, const DeleteMaliciousRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMaliciousRequestsOutcomeCallable DeleteMaliciousRequestsCallable(const Model::DeleteMaliciousRequestsRequest& request);

                /**
                 *本接口 (DeleteMalwares) 用于删除木马记录。
                 * @param req DeleteMalwaresRequest
                 * @return DeleteMalwaresOutcome
                 */
                DeleteMalwaresOutcome DeleteMalwares(const Model::DeleteMalwaresRequest &request);
                void DeleteMalwaresAsync(const Model::DeleteMalwaresRequest& request, const DeleteMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMalwaresOutcomeCallable DeleteMalwaresCallable(const Model::DeleteMalwaresRequest& request);

                /**
                 *本接口 (DeleteNonlocalLoginPlaces) 用于删除异地登录记录。
                 * @param req DeleteNonlocalLoginPlacesRequest
                 * @return DeleteNonlocalLoginPlacesOutcome
                 */
                DeleteNonlocalLoginPlacesOutcome DeleteNonlocalLoginPlaces(const Model::DeleteNonlocalLoginPlacesRequest &request);
                void DeleteNonlocalLoginPlacesAsync(const Model::DeleteNonlocalLoginPlacesRequest& request, const DeleteNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNonlocalLoginPlacesOutcomeCallable DeleteNonlocalLoginPlacesCallable(const Model::DeleteNonlocalLoginPlacesRequest& request);

                /**
                 *根据Ids删除本地提权
                 * @param req DeletePrivilegeEventsRequest
                 * @return DeletePrivilegeEventsOutcome
                 */
                DeletePrivilegeEventsOutcome DeletePrivilegeEvents(const Model::DeletePrivilegeEventsRequest &request);
                void DeletePrivilegeEventsAsync(const Model::DeletePrivilegeEventsRequest& request, const DeletePrivilegeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrivilegeEventsOutcomeCallable DeletePrivilegeEventsCallable(const Model::DeletePrivilegeEventsRequest& request);

                /**
                 *删除本地提权规则
                 * @param req DeletePrivilegeRulesRequest
                 * @return DeletePrivilegeRulesOutcome
                 */
                DeletePrivilegeRulesOutcome DeletePrivilegeRules(const Model::DeletePrivilegeRulesRequest &request);
                void DeletePrivilegeRulesAsync(const Model::DeletePrivilegeRulesRequest& request, const DeletePrivilegeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrivilegeRulesOutcomeCallable DeletePrivilegeRulesCallable(const Model::DeletePrivilegeRulesRequest& request);

                /**
                 *根据Ids删除反弹Shell事件
                 * @param req DeleteReverseShellEventsRequest
                 * @return DeleteReverseShellEventsOutcome
                 */
                DeleteReverseShellEventsOutcome DeleteReverseShellEvents(const Model::DeleteReverseShellEventsRequest &request);
                void DeleteReverseShellEventsAsync(const Model::DeleteReverseShellEventsRequest& request, const DeleteReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReverseShellEventsOutcomeCallable DeleteReverseShellEventsCallable(const Model::DeleteReverseShellEventsRequest& request);

                /**
                 *删除反弹Shell规则
                 * @param req DeleteReverseShellRulesRequest
                 * @return DeleteReverseShellRulesOutcome
                 */
                DeleteReverseShellRulesOutcome DeleteReverseShellRules(const Model::DeleteReverseShellRulesRequest &request);
                void DeleteReverseShellRulesAsync(const Model::DeleteReverseShellRulesRequest& request, const DeleteReverseShellRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteReverseShellRulesOutcomeCallable DeleteReverseShellRulesCallable(const Model::DeleteReverseShellRulesRequest& request);

                /**
                 *删除标签
                 * @param req DeleteTagsRequest
                 * @return DeleteTagsOutcome
                 */
                DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest &request);
                void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request);

                /**
                 *本接口（DeleteUsualLoginPlaces）用于删除常用登录地。
                 * @param req DeleteUsualLoginPlacesRequest
                 * @return DeleteUsualLoginPlacesOutcome
                 */
                DeleteUsualLoginPlacesOutcome DeleteUsualLoginPlaces(const Model::DeleteUsualLoginPlacesRequest &request);
                void DeleteUsualLoginPlacesAsync(const Model::DeleteUsualLoginPlacesRequest& request, const DeleteUsualLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUsualLoginPlacesOutcomeCallable DeleteUsualLoginPlacesCallable(const Model::DeleteUsualLoginPlacesRequest& request);

                /**
                 *本接口 (DescribeAccountStatistics) 用于获取帐号统计列表数据。
                 * @param req DescribeAccountStatisticsRequest
                 * @return DescribeAccountStatisticsOutcome
                 */
                DescribeAccountStatisticsOutcome DescribeAccountStatistics(const Model::DescribeAccountStatisticsRequest &request);
                void DescribeAccountStatisticsAsync(const Model::DescribeAccountStatisticsRequest& request, const DescribeAccountStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountStatisticsOutcomeCallable DescribeAccountStatisticsCallable(const Model::DescribeAccountStatisticsRequest& request);

                /**
                 *本接口 (DescribeAccounts) 用于获取帐号列表数据。
                 * @param req DescribeAccountsRequest
                 * @return DescribeAccountsOutcome
                 */
                DescribeAccountsOutcome DescribeAccounts(const Model::DescribeAccountsRequest &request);
                void DescribeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountsOutcomeCallable DescribeAccountsCallable(const Model::DescribeAccountsRequest& request);

                /**
                 *本接口 (DescribeAgentVuls) 用于获取单台主机的漏洞列表。
                 * @param req DescribeAgentVulsRequest
                 * @return DescribeAgentVulsOutcome
                 */
                DescribeAgentVulsOutcome DescribeAgentVuls(const Model::DescribeAgentVulsRequest &request);
                void DescribeAgentVulsAsync(const Model::DescribeAgentVulsRequest& request, const DescribeAgentVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAgentVulsOutcomeCallable DescribeAgentVulsCallable(const Model::DescribeAgentVulsRequest& request);

                /**
                 *本接口 (DescribeAlarmAttribute) 用于获取告警设置。
                 * @param req DescribeAlarmAttributeRequest
                 * @return DescribeAlarmAttributeOutcome
                 */
                DescribeAlarmAttributeOutcome DescribeAlarmAttribute(const Model::DescribeAlarmAttributeRequest &request);
                void DescribeAlarmAttributeAsync(const Model::DescribeAlarmAttributeRequest& request, const DescribeAlarmAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmAttributeOutcomeCallable DescribeAlarmAttributeCallable(const Model::DescribeAlarmAttributeRequest& request);

                /**
                 *网络攻击日志详情
                 * @param req DescribeAttackLogInfoRequest
                 * @return DescribeAttackLogInfoOutcome
                 */
                DescribeAttackLogInfoOutcome DescribeAttackLogInfo(const Model::DescribeAttackLogInfoRequest &request);
                void DescribeAttackLogInfoAsync(const Model::DescribeAttackLogInfoRequest& request, const DescribeAttackLogInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackLogInfoOutcomeCallable DescribeAttackLogInfoCallable(const Model::DescribeAttackLogInfoRequest& request);

                /**
                 *按分页形式展示网络攻击日志列表
                 * @param req DescribeAttackLogsRequest
                 * @return DescribeAttackLogsOutcome
                 */
                DescribeAttackLogsOutcome DescribeAttackLogs(const Model::DescribeAttackLogsRequest &request);
                void DescribeAttackLogsAsync(const Model::DescribeAttackLogsRequest& request, const DescribeAttackLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackLogsOutcomeCallable DescribeAttackLogsCallable(const Model::DescribeAttackLogsRequest& request);

                /**
                 *获取高危命令列表
                 * @param req DescribeBashEventsRequest
                 * @return DescribeBashEventsOutcome
                 */
                DescribeBashEventsOutcome DescribeBashEvents(const Model::DescribeBashEventsRequest &request);
                void DescribeBashEventsAsync(const Model::DescribeBashEventsRequest& request, const DescribeBashEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBashEventsOutcomeCallable DescribeBashEventsCallable(const Model::DescribeBashEventsRequest& request);

                /**
                 *获取高危命令规则列表
                 * @param req DescribeBashRulesRequest
                 * @return DescribeBashRulesOutcome
                 */
                DescribeBashRulesOutcome DescribeBashRules(const Model::DescribeBashRulesRequest &request);
                void DescribeBashRulesAsync(const Model::DescribeBashRulesRequest& request, const DescribeBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBashRulesOutcomeCallable DescribeBashRulesCallable(const Model::DescribeBashRulesRequest& request);

                /**
                 *本接口{DescribeBruteAttacks}用于获取暴力破解事件列表。
                 * @param req DescribeBruteAttacksRequest
                 * @return DescribeBruteAttacksOutcome
                 */
                DescribeBruteAttacksOutcome DescribeBruteAttacks(const Model::DescribeBruteAttacksRequest &request);
                void DescribeBruteAttacksAsync(const Model::DescribeBruteAttacksRequest& request, const DescribeBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBruteAttacksOutcomeCallable DescribeBruteAttacksCallable(const Model::DescribeBruteAttacksRequest& request);

                /**
                 *本接口 (DescribeComponentInfo) 用于获取组件信息数据。
                 * @param req DescribeComponentInfoRequest
                 * @return DescribeComponentInfoOutcome
                 */
                DescribeComponentInfoOutcome DescribeComponentInfo(const Model::DescribeComponentInfoRequest &request);
                void DescribeComponentInfoAsync(const Model::DescribeComponentInfoRequest& request, const DescribeComponentInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComponentInfoOutcomeCallable DescribeComponentInfoCallable(const Model::DescribeComponentInfoRequest& request);

                /**
                 *本接口 (DescribeComponentStatistics) 用于获取组件统计列表数据。
                 * @param req DescribeComponentStatisticsRequest
                 * @return DescribeComponentStatisticsOutcome
                 */
                DescribeComponentStatisticsOutcome DescribeComponentStatistics(const Model::DescribeComponentStatisticsRequest &request);
                void DescribeComponentStatisticsAsync(const Model::DescribeComponentStatisticsRequest& request, const DescribeComponentStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComponentStatisticsOutcomeCallable DescribeComponentStatisticsCallable(const Model::DescribeComponentStatisticsRequest& request);

                /**
                 *本接口 (DescribeComponents) 用于获取组件列表数据。
                 * @param req DescribeComponentsRequest
                 * @return DescribeComponentsOutcome
                 */
                DescribeComponentsOutcome DescribeComponents(const Model::DescribeComponentsRequest &request);
                void DescribeComponentsAsync(const Model::DescribeComponentsRequest& request, const DescribeComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeComponentsOutcomeCallable DescribeComponentsCallable(const Model::DescribeComponentsRequest& request);

                /**
                 *本接口 (DescribeHistoryAccounts) 用于获取帐号变更历史列表数据。
                 * @param req DescribeHistoryAccountsRequest
                 * @return DescribeHistoryAccountsOutcome
                 */
                DescribeHistoryAccountsOutcome DescribeHistoryAccounts(const Model::DescribeHistoryAccountsRequest &request);
                void DescribeHistoryAccountsAsync(const Model::DescribeHistoryAccountsRequest& request, const DescribeHistoryAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHistoryAccountsOutcomeCallable DescribeHistoryAccountsCallable(const Model::DescribeHistoryAccountsRequest& request);

                /**
                 *本接口 (DescribeImpactedHosts) 用于获取漏洞受影响机器列表。
                 * @param req DescribeImpactedHostsRequest
                 * @return DescribeImpactedHostsOutcome
                 */
                DescribeImpactedHostsOutcome DescribeImpactedHosts(const Model::DescribeImpactedHostsRequest &request);
                void DescribeImpactedHostsAsync(const Model::DescribeImpactedHostsRequest& request, const DescribeImpactedHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImpactedHostsOutcomeCallable DescribeImpactedHostsCallable(const Model::DescribeImpactedHostsRequest& request);

                /**
                 *获取异地登录白名单列表
                 * @param req DescribeLoginWhiteListRequest
                 * @return DescribeLoginWhiteListOutcome
                 */
                DescribeLoginWhiteListOutcome DescribeLoginWhiteList(const Model::DescribeLoginWhiteListRequest &request);
                void DescribeLoginWhiteListAsync(const Model::DescribeLoginWhiteListRequest& request, const DescribeLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoginWhiteListOutcomeCallable DescribeLoginWhiteListCallable(const Model::DescribeLoginWhiteListRequest& request);

                /**
                 *本接口（DescribeMachineInfo）用于获取机器详细信息。
                 * @param req DescribeMachineInfoRequest
                 * @return DescribeMachineInfoOutcome
                 */
                DescribeMachineInfoOutcome DescribeMachineInfo(const Model::DescribeMachineInfoRequest &request);
                void DescribeMachineInfoAsync(const Model::DescribeMachineInfoRequest& request, const DescribeMachineInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachineInfoOutcomeCallable DescribeMachineInfoCallable(const Model::DescribeMachineInfoRequest& request);

                /**
                 *本接口 (DescribeMachines) 用于获取区域主机列表。
                 * @param req DescribeMachinesRequest
                 * @return DescribeMachinesOutcome
                 */
                DescribeMachinesOutcome DescribeMachines(const Model::DescribeMachinesRequest &request);
                void DescribeMachinesAsync(const Model::DescribeMachinesRequest& request, const DescribeMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMachinesOutcomeCallable DescribeMachinesCallable(const Model::DescribeMachinesRequest& request);

                /**
                 *本接口 (DescribeMaliciousRequests) 用于获取恶意请求数据。
                 * @param req DescribeMaliciousRequestsRequest
                 * @return DescribeMaliciousRequestsOutcome
                 */
                DescribeMaliciousRequestsOutcome DescribeMaliciousRequests(const Model::DescribeMaliciousRequestsRequest &request);
                void DescribeMaliciousRequestsAsync(const Model::DescribeMaliciousRequestsRequest& request, const DescribeMaliciousRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMaliciousRequestsOutcomeCallable DescribeMaliciousRequestsCallable(const Model::DescribeMaliciousRequestsRequest& request);

                /**
                 *本接口（DescribeMalwares）用于获取木马事件列表。
                 * @param req DescribeMalwaresRequest
                 * @return DescribeMalwaresOutcome
                 */
                DescribeMalwaresOutcome DescribeMalwares(const Model::DescribeMalwaresRequest &request);
                void DescribeMalwaresAsync(const Model::DescribeMalwaresRequest& request, const DescribeMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMalwaresOutcomeCallable DescribeMalwaresCallable(const Model::DescribeMalwaresRequest& request);

                /**
                 *本接口(DescribeNonlocalLoginPlaces)用于获取异地登录事件。
                 * @param req DescribeNonlocalLoginPlacesRequest
                 * @return DescribeNonlocalLoginPlacesOutcome
                 */
                DescribeNonlocalLoginPlacesOutcome DescribeNonlocalLoginPlaces(const Model::DescribeNonlocalLoginPlacesRequest &request);
                void DescribeNonlocalLoginPlacesAsync(const Model::DescribeNonlocalLoginPlacesRequest& request, const DescribeNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNonlocalLoginPlacesOutcomeCallable DescribeNonlocalLoginPlacesCallable(const Model::DescribeNonlocalLoginPlacesRequest& request);

                /**
                 *本接口 (DescribeOpenPortStatistics) 用于获取端口统计列表。
                 * @param req DescribeOpenPortStatisticsRequest
                 * @return DescribeOpenPortStatisticsOutcome
                 */
                DescribeOpenPortStatisticsOutcome DescribeOpenPortStatistics(const Model::DescribeOpenPortStatisticsRequest &request);
                void DescribeOpenPortStatisticsAsync(const Model::DescribeOpenPortStatisticsRequest& request, const DescribeOpenPortStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOpenPortStatisticsOutcomeCallable DescribeOpenPortStatisticsCallable(const Model::DescribeOpenPortStatisticsRequest& request);

                /**
                 *本接口 (DescribeOpenPortTaskStatus) 用于获取实时拉取端口任务状态。
                 * @param req DescribeOpenPortTaskStatusRequest
                 * @return DescribeOpenPortTaskStatusOutcome
                 */
                DescribeOpenPortTaskStatusOutcome DescribeOpenPortTaskStatus(const Model::DescribeOpenPortTaskStatusRequest &request);
                void DescribeOpenPortTaskStatusAsync(const Model::DescribeOpenPortTaskStatusRequest& request, const DescribeOpenPortTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOpenPortTaskStatusOutcomeCallable DescribeOpenPortTaskStatusCallable(const Model::DescribeOpenPortTaskStatusRequest& request);

                /**
                 *本接口 (DescribeOpenPorts) 用于获取端口列表数据。

                 * @param req DescribeOpenPortsRequest
                 * @return DescribeOpenPortsOutcome
                 */
                DescribeOpenPortsOutcome DescribeOpenPorts(const Model::DescribeOpenPortsRequest &request);
                void DescribeOpenPortsAsync(const Model::DescribeOpenPortsRequest& request, const DescribeOpenPortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOpenPortsOutcomeCallable DescribeOpenPortsCallable(const Model::DescribeOpenPortsRequest& request);

                /**
                 *本接口用于（DescribeOverviewStatistics）获取概览统计数据。
                 * @param req DescribeOverviewStatisticsRequest
                 * @return DescribeOverviewStatisticsOutcome
                 */
                DescribeOverviewStatisticsOutcome DescribeOverviewStatistics(const Model::DescribeOverviewStatisticsRequest &request);
                void DescribeOverviewStatisticsAsync(const Model::DescribeOverviewStatisticsRequest& request, const DescribeOverviewStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOverviewStatisticsOutcomeCallable DescribeOverviewStatisticsCallable(const Model::DescribeOverviewStatisticsRequest& request);

                /**
                 *获取本地提权事件列表
                 * @param req DescribePrivilegeEventsRequest
                 * @return DescribePrivilegeEventsOutcome
                 */
                DescribePrivilegeEventsOutcome DescribePrivilegeEvents(const Model::DescribePrivilegeEventsRequest &request);
                void DescribePrivilegeEventsAsync(const Model::DescribePrivilegeEventsRequest& request, const DescribePrivilegeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivilegeEventsOutcomeCallable DescribePrivilegeEventsCallable(const Model::DescribePrivilegeEventsRequest& request);

                /**
                 *获取本地提权规则列表
                 * @param req DescribePrivilegeRulesRequest
                 * @return DescribePrivilegeRulesOutcome
                 */
                DescribePrivilegeRulesOutcome DescribePrivilegeRules(const Model::DescribePrivilegeRulesRequest &request);
                void DescribePrivilegeRulesAsync(const Model::DescribePrivilegeRulesRequest& request, const DescribePrivilegeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivilegeRulesOutcomeCallable DescribePrivilegeRulesCallable(const Model::DescribePrivilegeRulesRequest& request);

                /**
                 *本接口 (DescribeProVersionInfo) 用于获取专业版信息。
                 * @param req DescribeProVersionInfoRequest
                 * @return DescribeProVersionInfoOutcome
                 */
                DescribeProVersionInfoOutcome DescribeProVersionInfo(const Model::DescribeProVersionInfoRequest &request);
                void DescribeProVersionInfoAsync(const Model::DescribeProVersionInfoRequest& request, const DescribeProVersionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProVersionInfoOutcomeCallable DescribeProVersionInfoCallable(const Model::DescribeProVersionInfoRequest& request);

                /**
                 *本接口 (DescribeProcessStatistics) 用于获取进程统计列表数据。
                 * @param req DescribeProcessStatisticsRequest
                 * @return DescribeProcessStatisticsOutcome
                 */
                DescribeProcessStatisticsOutcome DescribeProcessStatistics(const Model::DescribeProcessStatisticsRequest &request);
                void DescribeProcessStatisticsAsync(const Model::DescribeProcessStatisticsRequest& request, const DescribeProcessStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProcessStatisticsOutcomeCallable DescribeProcessStatisticsCallable(const Model::DescribeProcessStatisticsRequest& request);

                /**
                 *本接口 (DescribeProcessTaskStatus) 用于获取实时拉取进程任务状态。
                 * @param req DescribeProcessTaskStatusRequest
                 * @return DescribeProcessTaskStatusOutcome
                 */
                DescribeProcessTaskStatusOutcome DescribeProcessTaskStatus(const Model::DescribeProcessTaskStatusRequest &request);
                void DescribeProcessTaskStatusAsync(const Model::DescribeProcessTaskStatusRequest& request, const DescribeProcessTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProcessTaskStatusOutcomeCallable DescribeProcessTaskStatusCallable(const Model::DescribeProcessTaskStatusRequest& request);

                /**
                 *本接口 (DescribeProcesses) 用于获取进程列表数据。
                 * @param req DescribeProcessesRequest
                 * @return DescribeProcessesOutcome
                 */
                DescribeProcessesOutcome DescribeProcesses(const Model::DescribeProcessesRequest &request);
                void DescribeProcessesAsync(const Model::DescribeProcessesRequest& request, const DescribeProcessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProcessesOutcomeCallable DescribeProcessesCallable(const Model::DescribeProcessesRequest& request);

                /**
                 *获取反弹Shell列表
                 * @param req DescribeReverseShellEventsRequest
                 * @return DescribeReverseShellEventsOutcome
                 */
                DescribeReverseShellEventsOutcome DescribeReverseShellEvents(const Model::DescribeReverseShellEventsRequest &request);
                void DescribeReverseShellEventsAsync(const Model::DescribeReverseShellEventsRequest& request, const DescribeReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReverseShellEventsOutcomeCallable DescribeReverseShellEventsCallable(const Model::DescribeReverseShellEventsRequest& request);

                /**
                 *获取反弹Shell规则列表
                 * @param req DescribeReverseShellRulesRequest
                 * @return DescribeReverseShellRulesOutcome
                 */
                DescribeReverseShellRulesOutcome DescribeReverseShellRules(const Model::DescribeReverseShellRulesRequest &request);
                void DescribeReverseShellRulesAsync(const Model::DescribeReverseShellRulesRequest& request, const DescribeReverseShellRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReverseShellRulesOutcomeCallable DescribeReverseShellRulesCallable(const Model::DescribeReverseShellRulesRequest& request);

                /**
                 *本接口 (DescribeSecurityDynamics) 用于获取安全事件消息数据。
                 * @param req DescribeSecurityDynamicsRequest
                 * @return DescribeSecurityDynamicsOutcome
                 */
                DescribeSecurityDynamicsOutcome DescribeSecurityDynamics(const Model::DescribeSecurityDynamicsRequest &request);
                void DescribeSecurityDynamicsAsync(const Model::DescribeSecurityDynamicsRequest& request, const DescribeSecurityDynamicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityDynamicsOutcomeCallable DescribeSecurityDynamicsCallable(const Model::DescribeSecurityDynamicsRequest& request);

                /**
                 *本接口 (DescribeSecurityTrends) 用于获取安全事件统计数据。
                 * @param req DescribeSecurityTrendsRequest
                 * @return DescribeSecurityTrendsOutcome
                 */
                DescribeSecurityTrendsOutcome DescribeSecurityTrends(const Model::DescribeSecurityTrendsRequest &request);
                void DescribeSecurityTrendsAsync(const Model::DescribeSecurityTrendsRequest& request, const DescribeSecurityTrendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityTrendsOutcomeCallable DescribeSecurityTrendsCallable(const Model::DescribeSecurityTrendsRequest& request);

                /**
                 *获取指定标签关联的服务器信息
                 * @param req DescribeTagMachinesRequest
                 * @return DescribeTagMachinesOutcome
                 */
                DescribeTagMachinesOutcome DescribeTagMachines(const Model::DescribeTagMachinesRequest &request);
                void DescribeTagMachinesAsync(const Model::DescribeTagMachinesRequest& request, const DescribeTagMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagMachinesOutcomeCallable DescribeTagMachinesCallable(const Model::DescribeTagMachinesRequest& request);

                /**
                 *获取所有主机标签
                 * @param req DescribeTagsRequest
                 * @return DescribeTagsOutcome
                 */
                DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest &request);
                void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request);

                /**
                 *此接口（DescribeUsualLoginPlaces）用于查询常用登录地。
                 * @param req DescribeUsualLoginPlacesRequest
                 * @return DescribeUsualLoginPlacesOutcome
                 */
                DescribeUsualLoginPlacesOutcome DescribeUsualLoginPlaces(const Model::DescribeUsualLoginPlacesRequest &request);
                void DescribeUsualLoginPlacesAsync(const Model::DescribeUsualLoginPlacesRequest& request, const DescribeUsualLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsualLoginPlacesOutcomeCallable DescribeUsualLoginPlacesCallable(const Model::DescribeUsualLoginPlacesRequest& request);

                /**
                 *本接口 (DescribeVulInfo) 用于获取漏洞详情。
                 * @param req DescribeVulInfoRequest
                 * @return DescribeVulInfoOutcome
                 */
                DescribeVulInfoOutcome DescribeVulInfo(const Model::DescribeVulInfoRequest &request);
                void DescribeVulInfoAsync(const Model::DescribeVulInfoRequest& request, const DescribeVulInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulInfoOutcomeCallable DescribeVulInfoCallable(const Model::DescribeVulInfoRequest& request);

                /**
                 *本接口 (DescribeVulScanResult) 用于获取漏洞检测结果。

                 * @param req DescribeVulScanResultRequest
                 * @return DescribeVulScanResultOutcome
                 */
                DescribeVulScanResultOutcome DescribeVulScanResult(const Model::DescribeVulScanResultRequest &request);
                void DescribeVulScanResultAsync(const Model::DescribeVulScanResultRequest& request, const DescribeVulScanResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulScanResultOutcomeCallable DescribeVulScanResultCallable(const Model::DescribeVulScanResultRequest& request);

                /**
                 *本接口 (DescribeVuls) 用于获取漏洞列表数据。
                 * @param req DescribeVulsRequest
                 * @return DescribeVulsOutcome
                 */
                DescribeVulsOutcome DescribeVuls(const Model::DescribeVulsRequest &request);
                void DescribeVulsAsync(const Model::DescribeVulsRequest& request, const DescribeVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVulsOutcomeCallable DescribeVulsCallable(const Model::DescribeVulsRequest& request);

                /**
                 *本接口 (DescribeWeeklyReportBruteAttacks) 用于获取专业周报密码破解数据。
                 * @param req DescribeWeeklyReportBruteAttacksRequest
                 * @return DescribeWeeklyReportBruteAttacksOutcome
                 */
                DescribeWeeklyReportBruteAttacksOutcome DescribeWeeklyReportBruteAttacks(const Model::DescribeWeeklyReportBruteAttacksRequest &request);
                void DescribeWeeklyReportBruteAttacksAsync(const Model::DescribeWeeklyReportBruteAttacksRequest& request, const DescribeWeeklyReportBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWeeklyReportBruteAttacksOutcomeCallable DescribeWeeklyReportBruteAttacksCallable(const Model::DescribeWeeklyReportBruteAttacksRequest& request);

                /**
                 *本接口 (DescribeWeeklyReportInfo) 用于获取专业周报详情数据。
                 * @param req DescribeWeeklyReportInfoRequest
                 * @return DescribeWeeklyReportInfoOutcome
                 */
                DescribeWeeklyReportInfoOutcome DescribeWeeklyReportInfo(const Model::DescribeWeeklyReportInfoRequest &request);
                void DescribeWeeklyReportInfoAsync(const Model::DescribeWeeklyReportInfoRequest& request, const DescribeWeeklyReportInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWeeklyReportInfoOutcomeCallable DescribeWeeklyReportInfoCallable(const Model::DescribeWeeklyReportInfoRequest& request);

                /**
                 *本接口 (DescribeWeeklyReportMalwares) 用于获取专业周报木马数据。
                 * @param req DescribeWeeklyReportMalwaresRequest
                 * @return DescribeWeeklyReportMalwaresOutcome
                 */
                DescribeWeeklyReportMalwaresOutcome DescribeWeeklyReportMalwares(const Model::DescribeWeeklyReportMalwaresRequest &request);
                void DescribeWeeklyReportMalwaresAsync(const Model::DescribeWeeklyReportMalwaresRequest& request, const DescribeWeeklyReportMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWeeklyReportMalwaresOutcomeCallable DescribeWeeklyReportMalwaresCallable(const Model::DescribeWeeklyReportMalwaresRequest& request);

                /**
                 *本接口 (DescribeWeeklyReportNonlocalLoginPlaces) 用于获取专业周报异地登录数据。
                 * @param req DescribeWeeklyReportNonlocalLoginPlacesRequest
                 * @return DescribeWeeklyReportNonlocalLoginPlacesOutcome
                 */
                DescribeWeeklyReportNonlocalLoginPlacesOutcome DescribeWeeklyReportNonlocalLoginPlaces(const Model::DescribeWeeklyReportNonlocalLoginPlacesRequest &request);
                void DescribeWeeklyReportNonlocalLoginPlacesAsync(const Model::DescribeWeeklyReportNonlocalLoginPlacesRequest& request, const DescribeWeeklyReportNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWeeklyReportNonlocalLoginPlacesOutcomeCallable DescribeWeeklyReportNonlocalLoginPlacesCallable(const Model::DescribeWeeklyReportNonlocalLoginPlacesRequest& request);

                /**
                 *本接口 (DescribeWeeklyReportVuls) 用于专业版周报漏洞数据。

                 * @param req DescribeWeeklyReportVulsRequest
                 * @return DescribeWeeklyReportVulsOutcome
                 */
                DescribeWeeklyReportVulsOutcome DescribeWeeklyReportVuls(const Model::DescribeWeeklyReportVulsRequest &request);
                void DescribeWeeklyReportVulsAsync(const Model::DescribeWeeklyReportVulsRequest& request, const DescribeWeeklyReportVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWeeklyReportVulsOutcomeCallable DescribeWeeklyReportVulsCallable(const Model::DescribeWeeklyReportVulsRequest& request);

                /**
                 *本接口 (DescribeWeeklyReports) 用于获取周报列表数据。
                 * @param req DescribeWeeklyReportsRequest
                 * @return DescribeWeeklyReportsOutcome
                 */
                DescribeWeeklyReportsOutcome DescribeWeeklyReports(const Model::DescribeWeeklyReportsRequest &request);
                void DescribeWeeklyReportsAsync(const Model::DescribeWeeklyReportsRequest& request, const DescribeWeeklyReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWeeklyReportsOutcomeCallable DescribeWeeklyReportsCallable(const Model::DescribeWeeklyReportsRequest& request);

                /**
                 *新增或修改高危命令规则
                 * @param req EditBashRuleRequest
                 * @return EditBashRuleOutcome
                 */
                EditBashRuleOutcome EditBashRule(const Model::EditBashRuleRequest &request);
                void EditBashRuleAsync(const Model::EditBashRuleRequest& request, const EditBashRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditBashRuleOutcomeCallable EditBashRuleCallable(const Model::EditBashRuleRequest& request);

                /**
                 *新增或修改本地提权规则
                 * @param req EditPrivilegeRuleRequest
                 * @return EditPrivilegeRuleOutcome
                 */
                EditPrivilegeRuleOutcome EditPrivilegeRule(const Model::EditPrivilegeRuleRequest &request);
                void EditPrivilegeRuleAsync(const Model::EditPrivilegeRuleRequest& request, const EditPrivilegeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditPrivilegeRuleOutcomeCallable EditPrivilegeRuleCallable(const Model::EditPrivilegeRuleRequest& request);

                /**
                 *编辑反弹Shell规则
                 * @param req EditReverseShellRuleRequest
                 * @return EditReverseShellRuleOutcome
                 */
                EditReverseShellRuleOutcome EditReverseShellRule(const Model::EditReverseShellRuleRequest &request);
                void EditReverseShellRuleAsync(const Model::EditReverseShellRuleRequest& request, const EditReverseShellRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditReverseShellRuleOutcomeCallable EditReverseShellRuleCallable(const Model::EditReverseShellRuleRequest& request);

                /**
                 *新增或编辑标签
                 * @param req EditTagsRequest
                 * @return EditTagsOutcome
                 */
                EditTagsOutcome EditTags(const Model::EditTagsRequest &request);
                void EditTagsAsync(const Model::EditTagsRequest& request, const EditTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditTagsOutcomeCallable EditTagsCallable(const Model::EditTagsRequest& request);

                /**
                 *导出网络攻击日志
                 * @param req ExportAttackLogsRequest
                 * @return ExportAttackLogsOutcome
                 */
                ExportAttackLogsOutcome ExportAttackLogs(const Model::ExportAttackLogsRequest &request);
                void ExportAttackLogsAsync(const Model::ExportAttackLogsRequest& request, const ExportAttackLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportAttackLogsOutcomeCallable ExportAttackLogsCallable(const Model::ExportAttackLogsRequest& request);

                /**
                 *导出高危命令事件
                 * @param req ExportBashEventsRequest
                 * @return ExportBashEventsOutcome
                 */
                ExportBashEventsOutcome ExportBashEvents(const Model::ExportBashEventsRequest &request);
                void ExportBashEventsAsync(const Model::ExportBashEventsRequest& request, const ExportBashEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBashEventsOutcomeCallable ExportBashEventsCallable(const Model::ExportBashEventsRequest& request);

                /**
                 *本接口 (ExportBruteAttacks) 用于导出密码破解记录成CSV文件。
                 * @param req ExportBruteAttacksRequest
                 * @return ExportBruteAttacksOutcome
                 */
                ExportBruteAttacksOutcome ExportBruteAttacks(const Model::ExportBruteAttacksRequest &request);
                void ExportBruteAttacksAsync(const Model::ExportBruteAttacksRequest& request, const ExportBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportBruteAttacksOutcomeCallable ExportBruteAttacksCallable(const Model::ExportBruteAttacksRequest& request);

                /**
                 *本接口 (ExportMaliciousRequests) 用于导出下载恶意请求文件。
                 * @param req ExportMaliciousRequestsRequest
                 * @return ExportMaliciousRequestsOutcome
                 */
                ExportMaliciousRequestsOutcome ExportMaliciousRequests(const Model::ExportMaliciousRequestsRequest &request);
                void ExportMaliciousRequestsAsync(const Model::ExportMaliciousRequestsRequest& request, const ExportMaliciousRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportMaliciousRequestsOutcomeCallable ExportMaliciousRequestsCallable(const Model::ExportMaliciousRequestsRequest& request);

                /**
                 *本接口 (ExportMalwares) 用于导出木马记录CSV文件。
                 * @param req ExportMalwaresRequest
                 * @return ExportMalwaresOutcome
                 */
                ExportMalwaresOutcome ExportMalwares(const Model::ExportMalwaresRequest &request);
                void ExportMalwaresAsync(const Model::ExportMalwaresRequest& request, const ExportMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportMalwaresOutcomeCallable ExportMalwaresCallable(const Model::ExportMalwaresRequest& request);

                /**
                 *本接口 (ExportNonlocalLoginPlaces) 用于导出异地登录事件记录CSV文件。
                 * @param req ExportNonlocalLoginPlacesRequest
                 * @return ExportNonlocalLoginPlacesOutcome
                 */
                ExportNonlocalLoginPlacesOutcome ExportNonlocalLoginPlaces(const Model::ExportNonlocalLoginPlacesRequest &request);
                void ExportNonlocalLoginPlacesAsync(const Model::ExportNonlocalLoginPlacesRequest& request, const ExportNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportNonlocalLoginPlacesOutcomeCallable ExportNonlocalLoginPlacesCallable(const Model::ExportNonlocalLoginPlacesRequest& request);

                /**
                 *导出本地提权事件
                 * @param req ExportPrivilegeEventsRequest
                 * @return ExportPrivilegeEventsOutcome
                 */
                ExportPrivilegeEventsOutcome ExportPrivilegeEvents(const Model::ExportPrivilegeEventsRequest &request);
                void ExportPrivilegeEventsAsync(const Model::ExportPrivilegeEventsRequest& request, const ExportPrivilegeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportPrivilegeEventsOutcomeCallable ExportPrivilegeEventsCallable(const Model::ExportPrivilegeEventsRequest& request);

                /**
                 *导出反弹Shell事件
                 * @param req ExportReverseShellEventsRequest
                 * @return ExportReverseShellEventsOutcome
                 */
                ExportReverseShellEventsOutcome ExportReverseShellEvents(const Model::ExportReverseShellEventsRequest &request);
                void ExportReverseShellEventsAsync(const Model::ExportReverseShellEventsRequest& request, const ExportReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportReverseShellEventsOutcomeCallable ExportReverseShellEventsCallable(const Model::ExportReverseShellEventsRequest& request);

                /**
                 *本接口 (IgnoreImpactedHosts) 用于忽略漏洞。
                 * @param req IgnoreImpactedHostsRequest
                 * @return IgnoreImpactedHostsOutcome
                 */
                IgnoreImpactedHostsOutcome IgnoreImpactedHosts(const Model::IgnoreImpactedHostsRequest &request);
                void IgnoreImpactedHostsAsync(const Model::IgnoreImpactedHostsRequest& request, const IgnoreImpactedHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IgnoreImpactedHostsOutcomeCallable IgnoreImpactedHostsCallable(const Model::IgnoreImpactedHostsRequest& request);

                /**
                 *本接口 (InquiryPriceOpenProVersionPrepaid) 用于开通专业版询价(预付费)。
                 * @param req InquiryPriceOpenProVersionPrepaidRequest
                 * @return InquiryPriceOpenProVersionPrepaidOutcome
                 */
                InquiryPriceOpenProVersionPrepaidOutcome InquiryPriceOpenProVersionPrepaid(const Model::InquiryPriceOpenProVersionPrepaidRequest &request);
                void InquiryPriceOpenProVersionPrepaidAsync(const Model::InquiryPriceOpenProVersionPrepaidRequest& request, const InquiryPriceOpenProVersionPrepaidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceOpenProVersionPrepaidOutcomeCallable InquiryPriceOpenProVersionPrepaidCallable(const Model::InquiryPriceOpenProVersionPrepaidRequest& request);

                /**
                 *本接口{MisAlarmNonlocalLoginPlaces}将设置当前地点为常用登录地。
                 * @param req MisAlarmNonlocalLoginPlacesRequest
                 * @return MisAlarmNonlocalLoginPlacesOutcome
                 */
                MisAlarmNonlocalLoginPlacesOutcome MisAlarmNonlocalLoginPlaces(const Model::MisAlarmNonlocalLoginPlacesRequest &request);
                void MisAlarmNonlocalLoginPlacesAsync(const Model::MisAlarmNonlocalLoginPlacesRequest& request, const MisAlarmNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MisAlarmNonlocalLoginPlacesOutcomeCallable MisAlarmNonlocalLoginPlacesCallable(const Model::MisAlarmNonlocalLoginPlacesRequest& request);

                /**
                 *本接口（ModifyAlarmAttribute）用于修改告警设置。
                 * @param req ModifyAlarmAttributeRequest
                 * @return ModifyAlarmAttributeOutcome
                 */
                ModifyAlarmAttributeOutcome ModifyAlarmAttribute(const Model::ModifyAlarmAttributeRequest &request);
                void ModifyAlarmAttributeAsync(const Model::ModifyAlarmAttributeRequest& request, const ModifyAlarmAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmAttributeOutcomeCallable ModifyAlarmAttributeCallable(const Model::ModifyAlarmAttributeRequest& request);

                /**
                 *本接口 (ModifyAutoOpenProVersionConfig) 用于设置新增主机自动开通专业版配置。
                 * @param req ModifyAutoOpenProVersionConfigRequest
                 * @return ModifyAutoOpenProVersionConfigOutcome
                 */
                ModifyAutoOpenProVersionConfigOutcome ModifyAutoOpenProVersionConfig(const Model::ModifyAutoOpenProVersionConfigRequest &request);
                void ModifyAutoOpenProVersionConfigAsync(const Model::ModifyAutoOpenProVersionConfigRequest& request, const ModifyAutoOpenProVersionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAutoOpenProVersionConfigOutcomeCallable ModifyAutoOpenProVersionConfigCallable(const Model::ModifyAutoOpenProVersionConfigRequest& request);

                /**
                 *编辑白名单规则
                 * @param req ModifyLoginWhiteListRequest
                 * @return ModifyLoginWhiteListOutcome
                 */
                ModifyLoginWhiteListOutcome ModifyLoginWhiteList(const Model::ModifyLoginWhiteListRequest &request);
                void ModifyLoginWhiteListAsync(const Model::ModifyLoginWhiteListRequest& request, const ModifyLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoginWhiteListOutcomeCallable ModifyLoginWhiteListCallable(const Model::ModifyLoginWhiteListRequest& request);

                /**
                 *本接口 (ModifyProVersionRenewFlag) 用于修改专业版包年包月续费标识。
                 * @param req ModifyProVersionRenewFlagRequest
                 * @return ModifyProVersionRenewFlagOutcome
                 */
                ModifyProVersionRenewFlagOutcome ModifyProVersionRenewFlag(const Model::ModifyProVersionRenewFlagRequest &request);
                void ModifyProVersionRenewFlagAsync(const Model::ModifyProVersionRenewFlagRequest& request, const ModifyProVersionRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProVersionRenewFlagOutcomeCallable ModifyProVersionRenewFlagCallable(const Model::ModifyProVersionRenewFlagRequest& request);

                /**
                 *本接口 (OpenProVersion) 用于开通专业版。
                 * @param req OpenProVersionRequest
                 * @return OpenProVersionOutcome
                 */
                OpenProVersionOutcome OpenProVersion(const Model::OpenProVersionRequest &request);
                void OpenProVersionAsync(const Model::OpenProVersionRequest& request, const OpenProVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenProVersionOutcomeCallable OpenProVersionCallable(const Model::OpenProVersionRequest& request);

                /**
                 *本接口 (OpenProVersionPrepaid) 用于开通专业版(包年包月)。
                 * @param req OpenProVersionPrepaidRequest
                 * @return OpenProVersionPrepaidOutcome
                 */
                OpenProVersionPrepaidOutcome OpenProVersionPrepaid(const Model::OpenProVersionPrepaidRequest &request);
                void OpenProVersionPrepaidAsync(const Model::OpenProVersionPrepaidRequest& request, const OpenProVersionPrepaidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenProVersionPrepaidOutcomeCallable OpenProVersionPrepaidCallable(const Model::OpenProVersionPrepaidRequest& request);

                /**
                 *本接口（RecoverMalwares）用于批量恢复已经被隔离的木马文件。
                 * @param req RecoverMalwaresRequest
                 * @return RecoverMalwaresOutcome
                 */
                RecoverMalwaresOutcome RecoverMalwares(const Model::RecoverMalwaresRequest &request);
                void RecoverMalwaresAsync(const Model::RecoverMalwaresRequest& request, const RecoverMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecoverMalwaresOutcomeCallable RecoverMalwaresCallable(const Model::RecoverMalwaresRequest& request);

                /**
                 *本接口 (RenewProVersion) 用于续费专业版(包年包月)。
                 * @param req RenewProVersionRequest
                 * @return RenewProVersionOutcome
                 */
                RenewProVersionOutcome RenewProVersion(const Model::RenewProVersionRequest &request);
                void RenewProVersionAsync(const Model::RenewProVersionRequest& request, const RenewProVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewProVersionOutcomeCallable RenewProVersionCallable(const Model::RenewProVersionRequest& request);

                /**
                 *本接口 (RescanImpactedHost) 用于漏洞重新检测。
                 * @param req RescanImpactedHostRequest
                 * @return RescanImpactedHostOutcome
                 */
                RescanImpactedHostOutcome RescanImpactedHost(const Model::RescanImpactedHostRequest &request);
                void RescanImpactedHostAsync(const Model::RescanImpactedHostRequest& request, const RescanImpactedHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RescanImpactedHostOutcomeCallable RescanImpactedHostCallable(const Model::RescanImpactedHostRequest& request);

                /**
                 *本接口（SeparateMalwares）用于隔离木马。
                 * @param req SeparateMalwaresRequest
                 * @return SeparateMalwaresOutcome
                 */
                SeparateMalwaresOutcome SeparateMalwares(const Model::SeparateMalwaresRequest &request);
                void SeparateMalwaresAsync(const Model::SeparateMalwaresRequest& request, const SeparateMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SeparateMalwaresOutcomeCallable SeparateMalwaresCallable(const Model::SeparateMalwaresRequest& request);

                /**
                 *设置高危命令事件状态
                 * @param req SetBashEventsStatusRequest
                 * @return SetBashEventsStatusOutcome
                 */
                SetBashEventsStatusOutcome SetBashEventsStatus(const Model::SetBashEventsStatusRequest &request);
                void SetBashEventsStatusAsync(const Model::SetBashEventsStatusRequest& request, const SetBashEventsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetBashEventsStatusOutcomeCallable SetBashEventsStatusCallable(const Model::SetBashEventsStatusRequest& request);

                /**
                 *切换高危命令规则状态
                 * @param req SwitchBashRulesRequest
                 * @return SwitchBashRulesOutcome
                 */
                SwitchBashRulesOutcome SwitchBashRules(const Model::SwitchBashRulesRequest &request);
                void SwitchBashRulesAsync(const Model::SwitchBashRulesRequest& request, const SwitchBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchBashRulesOutcomeCallable SwitchBashRulesCallable(const Model::SwitchBashRulesRequest& request);

                /**
                 *本接口 (TrustMaliciousRequest) 用于恶意请求添加信任。
                 * @param req TrustMaliciousRequestRequest
                 * @return TrustMaliciousRequestOutcome
                 */
                TrustMaliciousRequestOutcome TrustMaliciousRequest(const Model::TrustMaliciousRequestRequest &request);
                void TrustMaliciousRequestAsync(const Model::TrustMaliciousRequestRequest& request, const TrustMaliciousRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TrustMaliciousRequestOutcomeCallable TrustMaliciousRequestCallable(const Model::TrustMaliciousRequestRequest& request);

                /**
                 *本接口(TrustMalwares)将被识别木马文件设为信任。
                 * @param req TrustMalwaresRequest
                 * @return TrustMalwaresOutcome
                 */
                TrustMalwaresOutcome TrustMalwares(const Model::TrustMalwaresRequest &request);
                void TrustMalwaresAsync(const Model::TrustMalwaresRequest& request, const TrustMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TrustMalwaresOutcomeCallable TrustMalwaresCallable(const Model::TrustMalwaresRequest& request);

                /**
                 *本接口 (UntrustMaliciousRequest) 用于取消信任恶意请求。
                 * @param req UntrustMaliciousRequestRequest
                 * @return UntrustMaliciousRequestOutcome
                 */
                UntrustMaliciousRequestOutcome UntrustMaliciousRequest(const Model::UntrustMaliciousRequestRequest &request);
                void UntrustMaliciousRequestAsync(const Model::UntrustMaliciousRequestRequest& request, const UntrustMaliciousRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UntrustMaliciousRequestOutcomeCallable UntrustMaliciousRequestCallable(const Model::UntrustMaliciousRequestRequest& request);

                /**
                 *本接口（UntrustMalwares）用于取消信任木马文件。
                 * @param req UntrustMalwaresRequest
                 * @return UntrustMalwaresOutcome
                 */
                UntrustMalwaresOutcome UntrustMalwares(const Model::UntrustMalwaresRequest &request);
                void UntrustMalwaresAsync(const Model::UntrustMalwaresRequest& request, const UntrustMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UntrustMalwaresOutcomeCallable UntrustMalwaresCallable(const Model::UntrustMalwaresRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_YUNJINGCLIENT_H_
