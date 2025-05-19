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

#ifndef TENCENTCLOUD_CFW_V20190904_CFWCLIENT_H_
#define TENCENTCLOUD_CFW_V20190904_CFWCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cfw/v20190904/model/AddAclRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/AddAclRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/AddEnterpriseSecurityGroupRulesRequest.h>
#include <tencentcloud/cfw/v20190904/model/AddEnterpriseSecurityGroupRulesResponse.h>
#include <tencentcloud/cfw/v20190904/model/AddNatAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/AddNatAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/AddVpcAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/AddVpcAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/CreateAcRulesRequest.h>
#include <tencentcloud/cfw/v20190904/model/CreateAcRulesResponse.h>
#include <tencentcloud/cfw/v20190904/model/CreateAddressTemplateRequest.h>
#include <tencentcloud/cfw/v20190904/model/CreateAddressTemplateResponse.h>
#include <tencentcloud/cfw/v20190904/model/CreateAlertCenterIsolateRequest.h>
#include <tencentcloud/cfw/v20190904/model/CreateAlertCenterIsolateResponse.h>
#include <tencentcloud/cfw/v20190904/model/CreateAlertCenterOmitRequest.h>
#include <tencentcloud/cfw/v20190904/model/CreateAlertCenterOmitResponse.h>
#include <tencentcloud/cfw/v20190904/model/CreateAlertCenterRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/CreateAlertCenterRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/CreateBlockIgnoreRuleListRequest.h>
#include <tencentcloud/cfw/v20190904/model/CreateBlockIgnoreRuleListResponse.h>
#include <tencentcloud/cfw/v20190904/model/CreateBlockIgnoreRuleNewRequest.h>
#include <tencentcloud/cfw/v20190904/model/CreateBlockIgnoreRuleNewResponse.h>
#include <tencentcloud/cfw/v20190904/model/CreateChooseVpcsRequest.h>
#include <tencentcloud/cfw/v20190904/model/CreateChooseVpcsResponse.h>
#include <tencentcloud/cfw/v20190904/model/CreateDatabaseWhiteListRulesRequest.h>
#include <tencentcloud/cfw/v20190904/model/CreateDatabaseWhiteListRulesResponse.h>
#include <tencentcloud/cfw/v20190904/model/CreateIdsWhiteRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/CreateIdsWhiteRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/CreateNatFwInstanceRequest.h>
#include <tencentcloud/cfw/v20190904/model/CreateNatFwInstanceResponse.h>
#include <tencentcloud/cfw/v20190904/model/CreateNatFwInstanceWithDomainRequest.h>
#include <tencentcloud/cfw/v20190904/model/CreateNatFwInstanceWithDomainResponse.h>
#include <tencentcloud/cfw/v20190904/model/CreateSecurityGroupRulesRequest.h>
#include <tencentcloud/cfw/v20190904/model/CreateSecurityGroupRulesResponse.h>
#include <tencentcloud/cfw/v20190904/model/CreateVpcFwGroupRequest.h>
#include <tencentcloud/cfw/v20190904/model/CreateVpcFwGroupResponse.h>
#include <tencentcloud/cfw/v20190904/model/DeleteAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/DeleteAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/DeleteAddressTemplateRequest.h>
#include <tencentcloud/cfw/v20190904/model/DeleteAddressTemplateResponse.h>
#include <tencentcloud/cfw/v20190904/model/DeleteAllAccessControlRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/DeleteAllAccessControlRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/DeleteBlockIgnoreRuleListRequest.h>
#include <tencentcloud/cfw/v20190904/model/DeleteBlockIgnoreRuleListResponse.h>
#include <tencentcloud/cfw/v20190904/model/DeleteBlockIgnoreRuleNewRequest.h>
#include <tencentcloud/cfw/v20190904/model/DeleteBlockIgnoreRuleNewResponse.h>
#include <tencentcloud/cfw/v20190904/model/DeleteIdsWhiteRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/DeleteIdsWhiteRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/DeleteNatFwInstanceRequest.h>
#include <tencentcloud/cfw/v20190904/model/DeleteNatFwInstanceResponse.h>
#include <tencentcloud/cfw/v20190904/model/DeleteRemoteAccessDomainRequest.h>
#include <tencentcloud/cfw/v20190904/model/DeleteRemoteAccessDomainResponse.h>
#include <tencentcloud/cfw/v20190904/model/DeleteResourceGroupRequest.h>
#include <tencentcloud/cfw/v20190904/model/DeleteResourceGroupResponse.h>
#include <tencentcloud/cfw/v20190904/model/DeleteSecurityGroupRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/DeleteSecurityGroupRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/DeleteVpcFwGroupRequest.h>
#include <tencentcloud/cfw/v20190904/model/DeleteVpcFwGroupResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeAcListsRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeAcListsResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeAclRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeAclRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeAddressTemplateListRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeAddressTemplateListResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeAssetSyncRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeAssetSyncResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeAssociatedInstanceListRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeAssociatedInstanceListResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeBlockByIpTimesListRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeBlockByIpTimesListResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeBlockIgnoreListRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeBlockIgnoreListResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeBlockStaticListRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeBlockStaticListResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeCfwEipsRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeCfwEipsResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeCfwInsStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeCfwInsStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeDefenseSwitchRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeDefenseSwitchResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeEnterpriseSGRuleProgressRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeEnterpriseSGRuleProgressResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeEnterpriseSecurityGroupRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeEnterpriseSecurityGroupRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeEnterpriseSecurityGroupRuleListRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeEnterpriseSecurityGroupRuleListResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeFwEdgeIpsRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeFwEdgeIpsResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeFwGroupInstanceInfoRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeFwGroupInstanceInfoResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeFwSyncStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeFwSyncStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeGuideScanInfoRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeGuideScanInfoResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeIPStatusListRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeIPStatusListResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeIdsWhiteRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeIdsWhiteRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeLogsRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeLogsResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatFwDnatRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatFwDnatRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatFwInfoCountRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatFwInfoCountResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatFwInstanceRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatFwInstanceResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatFwInstanceWithRegionRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatFwInstanceWithRegionResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatFwInstancesInfoRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatFwInstancesInfoResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatFwVpcDnsLstRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatFwVpcDnsLstResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeResourceGroupRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeResourceGroupResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeResourceGroupNewRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeResourceGroupNewResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeRuleOverviewRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeRuleOverviewResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeSecurityGroupListRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeSecurityGroupListResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeSourceAssetRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeSourceAssetResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeSwitchListsRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeSwitchListsResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeTLogInfoRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeTLogInfoResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeTLogIpListRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeTLogIpListResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeTableStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeTableStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeUnHandleEventTabListRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeUnHandleEventTabListResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeVpcAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeVpcAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeVpcFwGroupSwitchRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeVpcFwGroupSwitchResponse.h>
#include <tencentcloud/cfw/v20190904/model/ExpandCfwVerticalRequest.h>
#include <tencentcloud/cfw/v20190904/model/ExpandCfwVerticalResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAclRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAclRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAddressTemplateRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAddressTemplateResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAllPublicIPSwitchStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAllPublicIPSwitchStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAllRuleStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAllRuleStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAssetScanRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAssetScanResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAssetSyncRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAssetSyncResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyBlockIgnoreListRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyBlockIgnoreListResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyBlockIgnoreRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyBlockIgnoreRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyBlockIgnoreRuleNewRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyBlockIgnoreRuleNewResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyBlockTopRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyBlockTopResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyEWRuleStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyEWRuleStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyEdgeIpSwitchRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyEdgeIpSwitchResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyEnterpriseSecurityDispatchStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyEnterpriseSecurityDispatchStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyEnterpriseSecurityGroupRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyEnterpriseSecurityGroupRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyFwGroupSwitchRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyFwGroupSwitchResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyNatAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyNatAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyNatFwReSelectRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyNatFwReSelectResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyNatFwSwitchRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyNatFwSwitchResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyNatFwVpcDnsSwitchRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyNatFwVpcDnsSwitchResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyNatInstanceRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyNatInstanceResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyNatSequenceRulesRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyNatSequenceRulesResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyResourceGroupRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyResourceGroupResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyRunSyncAssetRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyRunSyncAssetResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifySecurityGroupItemRuleStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifySecurityGroupItemRuleStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifySecurityGroupRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifySecurityGroupRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifySecurityGroupSequenceRulesRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifySecurityGroupSequenceRulesResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifySequenceAclRulesRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifySequenceAclRulesResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifySequenceRulesRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifySequenceRulesResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyStorageSettingRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyStorageSettingResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyTableStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyTableStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyVpcAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyVpcAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyVpcFwGroupRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyVpcFwGroupResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyVpcFwSequenceRulesRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyVpcFwSequenceRulesResponse.h>
#include <tencentcloud/cfw/v20190904/model/RemoveAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/RemoveAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/RemoveAclRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/RemoveAclRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/RemoveEnterpriseSecurityGroupRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/RemoveEnterpriseSecurityGroupRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/RemoveNatAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/RemoveNatAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/RemoveVpcAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/RemoveVpcAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/SearchLogRequest.h>
#include <tencentcloud/cfw/v20190904/model/SearchLogResponse.h>
#include <tencentcloud/cfw/v20190904/model/SetNatFwDnatRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/SetNatFwDnatRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/SetNatFwEipRequest.h>
#include <tencentcloud/cfw/v20190904/model/SetNatFwEipResponse.h>
#include <tencentcloud/cfw/v20190904/model/StopSecurityGroupRuleDispatchRequest.h>
#include <tencentcloud/cfw/v20190904/model/StopSecurityGroupRuleDispatchResponse.h>
#include <tencentcloud/cfw/v20190904/model/SyncFwOperateRequest.h>
#include <tencentcloud/cfw/v20190904/model/SyncFwOperateResponse.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            class CfwClient : public AbstractClient
            {
            public:
                CfwClient(const Credential &credential, const std::string &region);
                CfwClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddAclRuleResponse> AddAclRuleOutcome;
                typedef std::future<AddAclRuleOutcome> AddAclRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::AddAclRuleRequest&, AddAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::AddEnterpriseSecurityGroupRulesResponse> AddEnterpriseSecurityGroupRulesOutcome;
                typedef std::future<AddEnterpriseSecurityGroupRulesOutcome> AddEnterpriseSecurityGroupRulesOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::AddEnterpriseSecurityGroupRulesRequest&, AddEnterpriseSecurityGroupRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddEnterpriseSecurityGroupRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::AddNatAcRuleResponse> AddNatAcRuleOutcome;
                typedef std::future<AddNatAcRuleOutcome> AddNatAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::AddNatAcRuleRequest&, AddNatAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddNatAcRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::AddVpcAcRuleResponse> AddVpcAcRuleOutcome;
                typedef std::future<AddVpcAcRuleOutcome> AddVpcAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::AddVpcAcRuleRequest&, AddVpcAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddVpcAcRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAcRulesResponse> CreateAcRulesOutcome;
                typedef std::future<CreateAcRulesOutcome> CreateAcRulesOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::CreateAcRulesRequest&, CreateAcRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAcRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAddressTemplateResponse> CreateAddressTemplateOutcome;
                typedef std::future<CreateAddressTemplateOutcome> CreateAddressTemplateOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::CreateAddressTemplateRequest&, CreateAddressTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAddressTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAlertCenterIsolateResponse> CreateAlertCenterIsolateOutcome;
                typedef std::future<CreateAlertCenterIsolateOutcome> CreateAlertCenterIsolateOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::CreateAlertCenterIsolateRequest&, CreateAlertCenterIsolateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlertCenterIsolateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAlertCenterOmitResponse> CreateAlertCenterOmitOutcome;
                typedef std::future<CreateAlertCenterOmitOutcome> CreateAlertCenterOmitOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::CreateAlertCenterOmitRequest&, CreateAlertCenterOmitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlertCenterOmitAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAlertCenterRuleResponse> CreateAlertCenterRuleOutcome;
                typedef std::future<CreateAlertCenterRuleOutcome> CreateAlertCenterRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::CreateAlertCenterRuleRequest&, CreateAlertCenterRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlertCenterRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBlockIgnoreRuleListResponse> CreateBlockIgnoreRuleListOutcome;
                typedef std::future<CreateBlockIgnoreRuleListOutcome> CreateBlockIgnoreRuleListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::CreateBlockIgnoreRuleListRequest&, CreateBlockIgnoreRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBlockIgnoreRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBlockIgnoreRuleNewResponse> CreateBlockIgnoreRuleNewOutcome;
                typedef std::future<CreateBlockIgnoreRuleNewOutcome> CreateBlockIgnoreRuleNewOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::CreateBlockIgnoreRuleNewRequest&, CreateBlockIgnoreRuleNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBlockIgnoreRuleNewAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateChooseVpcsResponse> CreateChooseVpcsOutcome;
                typedef std::future<CreateChooseVpcsOutcome> CreateChooseVpcsOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::CreateChooseVpcsRequest&, CreateChooseVpcsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateChooseVpcsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDatabaseWhiteListRulesResponse> CreateDatabaseWhiteListRulesOutcome;
                typedef std::future<CreateDatabaseWhiteListRulesOutcome> CreateDatabaseWhiteListRulesOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::CreateDatabaseWhiteListRulesRequest&, CreateDatabaseWhiteListRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatabaseWhiteListRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIdsWhiteRuleResponse> CreateIdsWhiteRuleOutcome;
                typedef std::future<CreateIdsWhiteRuleOutcome> CreateIdsWhiteRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::CreateIdsWhiteRuleRequest&, CreateIdsWhiteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIdsWhiteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNatFwInstanceResponse> CreateNatFwInstanceOutcome;
                typedef std::future<CreateNatFwInstanceOutcome> CreateNatFwInstanceOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::CreateNatFwInstanceRequest&, CreateNatFwInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatFwInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNatFwInstanceWithDomainResponse> CreateNatFwInstanceWithDomainOutcome;
                typedef std::future<CreateNatFwInstanceWithDomainOutcome> CreateNatFwInstanceWithDomainOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::CreateNatFwInstanceWithDomainRequest&, CreateNatFwInstanceWithDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatFwInstanceWithDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityGroupRulesResponse> CreateSecurityGroupRulesOutcome;
                typedef std::future<CreateSecurityGroupRulesOutcome> CreateSecurityGroupRulesOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::CreateSecurityGroupRulesRequest&, CreateSecurityGroupRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVpcFwGroupResponse> CreateVpcFwGroupOutcome;
                typedef std::future<CreateVpcFwGroupOutcome> CreateVpcFwGroupOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::CreateVpcFwGroupRequest&, CreateVpcFwGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcFwGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAcRuleResponse> DeleteAcRuleOutcome;
                typedef std::future<DeleteAcRuleOutcome> DeleteAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DeleteAcRuleRequest&, DeleteAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAcRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAddressTemplateResponse> DeleteAddressTemplateOutcome;
                typedef std::future<DeleteAddressTemplateOutcome> DeleteAddressTemplateOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DeleteAddressTemplateRequest&, DeleteAddressTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAddressTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAllAccessControlRuleResponse> DeleteAllAccessControlRuleOutcome;
                typedef std::future<DeleteAllAccessControlRuleOutcome> DeleteAllAccessControlRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DeleteAllAccessControlRuleRequest&, DeleteAllAccessControlRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAllAccessControlRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBlockIgnoreRuleListResponse> DeleteBlockIgnoreRuleListOutcome;
                typedef std::future<DeleteBlockIgnoreRuleListOutcome> DeleteBlockIgnoreRuleListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DeleteBlockIgnoreRuleListRequest&, DeleteBlockIgnoreRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBlockIgnoreRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBlockIgnoreRuleNewResponse> DeleteBlockIgnoreRuleNewOutcome;
                typedef std::future<DeleteBlockIgnoreRuleNewOutcome> DeleteBlockIgnoreRuleNewOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DeleteBlockIgnoreRuleNewRequest&, DeleteBlockIgnoreRuleNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBlockIgnoreRuleNewAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIdsWhiteRuleResponse> DeleteIdsWhiteRuleOutcome;
                typedef std::future<DeleteIdsWhiteRuleOutcome> DeleteIdsWhiteRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DeleteIdsWhiteRuleRequest&, DeleteIdsWhiteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIdsWhiteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNatFwInstanceResponse> DeleteNatFwInstanceOutcome;
                typedef std::future<DeleteNatFwInstanceOutcome> DeleteNatFwInstanceOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DeleteNatFwInstanceRequest&, DeleteNatFwInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNatFwInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRemoteAccessDomainResponse> DeleteRemoteAccessDomainOutcome;
                typedef std::future<DeleteRemoteAccessDomainOutcome> DeleteRemoteAccessDomainOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DeleteRemoteAccessDomainRequest&, DeleteRemoteAccessDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRemoteAccessDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteResourceGroupResponse> DeleteResourceGroupOutcome;
                typedef std::future<DeleteResourceGroupOutcome> DeleteResourceGroupOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DeleteResourceGroupRequest&, DeleteResourceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecurityGroupRuleResponse> DeleteSecurityGroupRuleOutcome;
                typedef std::future<DeleteSecurityGroupRuleOutcome> DeleteSecurityGroupRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DeleteSecurityGroupRuleRequest&, DeleteSecurityGroupRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityGroupRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpcFwGroupResponse> DeleteVpcFwGroupOutcome;
                typedef std::future<DeleteVpcFwGroupOutcome> DeleteVpcFwGroupOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DeleteVpcFwGroupRequest&, DeleteVpcFwGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcFwGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAcListsResponse> DescribeAcListsOutcome;
                typedef std::future<DescribeAcListsOutcome> DescribeAcListsOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeAcListsRequest&, DescribeAcListsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAcListsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAclRuleResponse> DescribeAclRuleOutcome;
                typedef std::future<DescribeAclRuleOutcome> DescribeAclRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeAclRuleRequest&, DescribeAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAddressTemplateListResponse> DescribeAddressTemplateListOutcome;
                typedef std::future<DescribeAddressTemplateListOutcome> DescribeAddressTemplateListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeAddressTemplateListRequest&, DescribeAddressTemplateListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressTemplateListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssetSyncResponse> DescribeAssetSyncOutcome;
                typedef std::future<DescribeAssetSyncOutcome> DescribeAssetSyncOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeAssetSyncRequest&, DescribeAssetSyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssetSyncAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssociatedInstanceListResponse> DescribeAssociatedInstanceListOutcome;
                typedef std::future<DescribeAssociatedInstanceListOutcome> DescribeAssociatedInstanceListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeAssociatedInstanceListRequest&, DescribeAssociatedInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssociatedInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBlockByIpTimesListResponse> DescribeBlockByIpTimesListOutcome;
                typedef std::future<DescribeBlockByIpTimesListOutcome> DescribeBlockByIpTimesListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeBlockByIpTimesListRequest&, DescribeBlockByIpTimesListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlockByIpTimesListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBlockIgnoreListResponse> DescribeBlockIgnoreListOutcome;
                typedef std::future<DescribeBlockIgnoreListOutcome> DescribeBlockIgnoreListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeBlockIgnoreListRequest&, DescribeBlockIgnoreListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlockIgnoreListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBlockStaticListResponse> DescribeBlockStaticListOutcome;
                typedef std::future<DescribeBlockStaticListOutcome> DescribeBlockStaticListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeBlockStaticListRequest&, DescribeBlockStaticListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlockStaticListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCfwEipsResponse> DescribeCfwEipsOutcome;
                typedef std::future<DescribeCfwEipsOutcome> DescribeCfwEipsOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeCfwEipsRequest&, DescribeCfwEipsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCfwEipsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCfwInsStatusResponse> DescribeCfwInsStatusOutcome;
                typedef std::future<DescribeCfwInsStatusOutcome> DescribeCfwInsStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeCfwInsStatusRequest&, DescribeCfwInsStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCfwInsStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDefenseSwitchResponse> DescribeDefenseSwitchOutcome;
                typedef std::future<DescribeDefenseSwitchOutcome> DescribeDefenseSwitchOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeDefenseSwitchRequest&, DescribeDefenseSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefenseSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnterpriseSGRuleProgressResponse> DescribeEnterpriseSGRuleProgressOutcome;
                typedef std::future<DescribeEnterpriseSGRuleProgressOutcome> DescribeEnterpriseSGRuleProgressOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeEnterpriseSGRuleProgressRequest&, DescribeEnterpriseSGRuleProgressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnterpriseSGRuleProgressAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnterpriseSecurityGroupRuleResponse> DescribeEnterpriseSecurityGroupRuleOutcome;
                typedef std::future<DescribeEnterpriseSecurityGroupRuleOutcome> DescribeEnterpriseSecurityGroupRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeEnterpriseSecurityGroupRuleRequest&, DescribeEnterpriseSecurityGroupRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnterpriseSecurityGroupRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnterpriseSecurityGroupRuleListResponse> DescribeEnterpriseSecurityGroupRuleListOutcome;
                typedef std::future<DescribeEnterpriseSecurityGroupRuleListOutcome> DescribeEnterpriseSecurityGroupRuleListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeEnterpriseSecurityGroupRuleListRequest&, DescribeEnterpriseSecurityGroupRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnterpriseSecurityGroupRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFwEdgeIpsResponse> DescribeFwEdgeIpsOutcome;
                typedef std::future<DescribeFwEdgeIpsOutcome> DescribeFwEdgeIpsOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeFwEdgeIpsRequest&, DescribeFwEdgeIpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFwEdgeIpsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFwGroupInstanceInfoResponse> DescribeFwGroupInstanceInfoOutcome;
                typedef std::future<DescribeFwGroupInstanceInfoOutcome> DescribeFwGroupInstanceInfoOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeFwGroupInstanceInfoRequest&, DescribeFwGroupInstanceInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFwGroupInstanceInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFwSyncStatusResponse> DescribeFwSyncStatusOutcome;
                typedef std::future<DescribeFwSyncStatusOutcome> DescribeFwSyncStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeFwSyncStatusRequest&, DescribeFwSyncStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFwSyncStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGuideScanInfoResponse> DescribeGuideScanInfoOutcome;
                typedef std::future<DescribeGuideScanInfoOutcome> DescribeGuideScanInfoOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeGuideScanInfoRequest&, DescribeGuideScanInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGuideScanInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIPStatusListResponse> DescribeIPStatusListOutcome;
                typedef std::future<DescribeIPStatusListOutcome> DescribeIPStatusListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeIPStatusListRequest&, DescribeIPStatusListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIPStatusListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIdsWhiteRuleResponse> DescribeIdsWhiteRuleOutcome;
                typedef std::future<DescribeIdsWhiteRuleOutcome> DescribeIdsWhiteRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeIdsWhiteRuleRequest&, DescribeIdsWhiteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIdsWhiteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogsResponse> DescribeLogsOutcome;
                typedef std::future<DescribeLogsOutcome> DescribeLogsOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeLogsRequest&, DescribeLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatAcRuleResponse> DescribeNatAcRuleOutcome;
                typedef std::future<DescribeNatAcRuleOutcome> DescribeNatAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeNatAcRuleRequest&, DescribeNatAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatAcRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatFwDnatRuleResponse> DescribeNatFwDnatRuleOutcome;
                typedef std::future<DescribeNatFwDnatRuleOutcome> DescribeNatFwDnatRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeNatFwDnatRuleRequest&, DescribeNatFwDnatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatFwDnatRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatFwInfoCountResponse> DescribeNatFwInfoCountOutcome;
                typedef std::future<DescribeNatFwInfoCountOutcome> DescribeNatFwInfoCountOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeNatFwInfoCountRequest&, DescribeNatFwInfoCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatFwInfoCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatFwInstanceResponse> DescribeNatFwInstanceOutcome;
                typedef std::future<DescribeNatFwInstanceOutcome> DescribeNatFwInstanceOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeNatFwInstanceRequest&, DescribeNatFwInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatFwInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatFwInstanceWithRegionResponse> DescribeNatFwInstanceWithRegionOutcome;
                typedef std::future<DescribeNatFwInstanceWithRegionOutcome> DescribeNatFwInstanceWithRegionOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeNatFwInstanceWithRegionRequest&, DescribeNatFwInstanceWithRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatFwInstanceWithRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatFwInstancesInfoResponse> DescribeNatFwInstancesInfoOutcome;
                typedef std::future<DescribeNatFwInstancesInfoOutcome> DescribeNatFwInstancesInfoOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeNatFwInstancesInfoRequest&, DescribeNatFwInstancesInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatFwInstancesInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatFwVpcDnsLstResponse> DescribeNatFwVpcDnsLstOutcome;
                typedef std::future<DescribeNatFwVpcDnsLstOutcome> DescribeNatFwVpcDnsLstOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeNatFwVpcDnsLstRequest&, DescribeNatFwVpcDnsLstOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatFwVpcDnsLstAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceGroupResponse> DescribeResourceGroupOutcome;
                typedef std::future<DescribeResourceGroupOutcome> DescribeResourceGroupOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeResourceGroupRequest&, DescribeResourceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceGroupNewResponse> DescribeResourceGroupNewOutcome;
                typedef std::future<DescribeResourceGroupNewOutcome> DescribeResourceGroupNewOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeResourceGroupNewRequest&, DescribeResourceGroupNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceGroupNewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleOverviewResponse> DescribeRuleOverviewOutcome;
                typedef std::future<DescribeRuleOverviewOutcome> DescribeRuleOverviewOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeRuleOverviewRequest&, DescribeRuleOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupListResponse> DescribeSecurityGroupListOutcome;
                typedef std::future<DescribeSecurityGroupListOutcome> DescribeSecurityGroupListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeSecurityGroupListRequest&, DescribeSecurityGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSourceAssetResponse> DescribeSourceAssetOutcome;
                typedef std::future<DescribeSourceAssetOutcome> DescribeSourceAssetOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeSourceAssetRequest&, DescribeSourceAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSourceAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSwitchListsResponse> DescribeSwitchListsOutcome;
                typedef std::future<DescribeSwitchListsOutcome> DescribeSwitchListsOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeSwitchListsRequest&, DescribeSwitchListsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSwitchListsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTLogInfoResponse> DescribeTLogInfoOutcome;
                typedef std::future<DescribeTLogInfoOutcome> DescribeTLogInfoOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeTLogInfoRequest&, DescribeTLogInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTLogInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTLogIpListResponse> DescribeTLogIpListOutcome;
                typedef std::future<DescribeTLogIpListOutcome> DescribeTLogIpListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeTLogIpListRequest&, DescribeTLogIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTLogIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTableStatusResponse> DescribeTableStatusOutcome;
                typedef std::future<DescribeTableStatusOutcome> DescribeTableStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeTableStatusRequest&, DescribeTableStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUnHandleEventTabListResponse> DescribeUnHandleEventTabListOutcome;
                typedef std::future<DescribeUnHandleEventTabListOutcome> DescribeUnHandleEventTabListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeUnHandleEventTabListRequest&, DescribeUnHandleEventTabListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnHandleEventTabListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcAcRuleResponse> DescribeVpcAcRuleOutcome;
                typedef std::future<DescribeVpcAcRuleOutcome> DescribeVpcAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeVpcAcRuleRequest&, DescribeVpcAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcAcRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcFwGroupSwitchResponse> DescribeVpcFwGroupSwitchOutcome;
                typedef std::future<DescribeVpcFwGroupSwitchOutcome> DescribeVpcFwGroupSwitchOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeVpcFwGroupSwitchRequest&, DescribeVpcFwGroupSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcFwGroupSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ExpandCfwVerticalResponse> ExpandCfwVerticalOutcome;
                typedef std::future<ExpandCfwVerticalOutcome> ExpandCfwVerticalOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ExpandCfwVerticalRequest&, ExpandCfwVerticalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExpandCfwVerticalAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAcRuleResponse> ModifyAcRuleOutcome;
                typedef std::future<ModifyAcRuleOutcome> ModifyAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyAcRuleRequest&, ModifyAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAcRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAclRuleResponse> ModifyAclRuleOutcome;
                typedef std::future<ModifyAclRuleOutcome> ModifyAclRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyAclRuleRequest&, ModifyAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAddressTemplateResponse> ModifyAddressTemplateOutcome;
                typedef std::future<ModifyAddressTemplateOutcome> ModifyAddressTemplateOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyAddressTemplateRequest&, ModifyAddressTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAllPublicIPSwitchStatusResponse> ModifyAllPublicIPSwitchStatusOutcome;
                typedef std::future<ModifyAllPublicIPSwitchStatusOutcome> ModifyAllPublicIPSwitchStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyAllPublicIPSwitchStatusRequest&, ModifyAllPublicIPSwitchStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAllPublicIPSwitchStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAllRuleStatusResponse> ModifyAllRuleStatusOutcome;
                typedef std::future<ModifyAllRuleStatusOutcome> ModifyAllRuleStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyAllRuleStatusRequest&, ModifyAllRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAllRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAssetScanResponse> ModifyAssetScanOutcome;
                typedef std::future<ModifyAssetScanOutcome> ModifyAssetScanOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyAssetScanRequest&, ModifyAssetScanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssetScanAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAssetSyncResponse> ModifyAssetSyncOutcome;
                typedef std::future<ModifyAssetSyncOutcome> ModifyAssetSyncOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyAssetSyncRequest&, ModifyAssetSyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssetSyncAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBlockIgnoreListResponse> ModifyBlockIgnoreListOutcome;
                typedef std::future<ModifyBlockIgnoreListOutcome> ModifyBlockIgnoreListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyBlockIgnoreListRequest&, ModifyBlockIgnoreListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBlockIgnoreListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBlockIgnoreRuleResponse> ModifyBlockIgnoreRuleOutcome;
                typedef std::future<ModifyBlockIgnoreRuleOutcome> ModifyBlockIgnoreRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyBlockIgnoreRuleRequest&, ModifyBlockIgnoreRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBlockIgnoreRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBlockIgnoreRuleNewResponse> ModifyBlockIgnoreRuleNewOutcome;
                typedef std::future<ModifyBlockIgnoreRuleNewOutcome> ModifyBlockIgnoreRuleNewOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyBlockIgnoreRuleNewRequest&, ModifyBlockIgnoreRuleNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBlockIgnoreRuleNewAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBlockTopResponse> ModifyBlockTopOutcome;
                typedef std::future<ModifyBlockTopOutcome> ModifyBlockTopOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyBlockTopRequest&, ModifyBlockTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBlockTopAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEWRuleStatusResponse> ModifyEWRuleStatusOutcome;
                typedef std::future<ModifyEWRuleStatusOutcome> ModifyEWRuleStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyEWRuleStatusRequest&, ModifyEWRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEWRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEdgeIpSwitchResponse> ModifyEdgeIpSwitchOutcome;
                typedef std::future<ModifyEdgeIpSwitchOutcome> ModifyEdgeIpSwitchOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyEdgeIpSwitchRequest&, ModifyEdgeIpSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEdgeIpSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEnterpriseSecurityDispatchStatusResponse> ModifyEnterpriseSecurityDispatchStatusOutcome;
                typedef std::future<ModifyEnterpriseSecurityDispatchStatusOutcome> ModifyEnterpriseSecurityDispatchStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyEnterpriseSecurityDispatchStatusRequest&, ModifyEnterpriseSecurityDispatchStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEnterpriseSecurityDispatchStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEnterpriseSecurityGroupRuleResponse> ModifyEnterpriseSecurityGroupRuleOutcome;
                typedef std::future<ModifyEnterpriseSecurityGroupRuleOutcome> ModifyEnterpriseSecurityGroupRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyEnterpriseSecurityGroupRuleRequest&, ModifyEnterpriseSecurityGroupRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEnterpriseSecurityGroupRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFwGroupSwitchResponse> ModifyFwGroupSwitchOutcome;
                typedef std::future<ModifyFwGroupSwitchOutcome> ModifyFwGroupSwitchOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyFwGroupSwitchRequest&, ModifyFwGroupSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFwGroupSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNatAcRuleResponse> ModifyNatAcRuleOutcome;
                typedef std::future<ModifyNatAcRuleOutcome> ModifyNatAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyNatAcRuleRequest&, ModifyNatAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatAcRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNatFwReSelectResponse> ModifyNatFwReSelectOutcome;
                typedef std::future<ModifyNatFwReSelectOutcome> ModifyNatFwReSelectOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyNatFwReSelectRequest&, ModifyNatFwReSelectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatFwReSelectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNatFwSwitchResponse> ModifyNatFwSwitchOutcome;
                typedef std::future<ModifyNatFwSwitchOutcome> ModifyNatFwSwitchOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyNatFwSwitchRequest&, ModifyNatFwSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatFwSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNatFwVpcDnsSwitchResponse> ModifyNatFwVpcDnsSwitchOutcome;
                typedef std::future<ModifyNatFwVpcDnsSwitchOutcome> ModifyNatFwVpcDnsSwitchOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyNatFwVpcDnsSwitchRequest&, ModifyNatFwVpcDnsSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatFwVpcDnsSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNatInstanceResponse> ModifyNatInstanceOutcome;
                typedef std::future<ModifyNatInstanceOutcome> ModifyNatInstanceOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyNatInstanceRequest&, ModifyNatInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNatSequenceRulesResponse> ModifyNatSequenceRulesOutcome;
                typedef std::future<ModifyNatSequenceRulesOutcome> ModifyNatSequenceRulesOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyNatSequenceRulesRequest&, ModifyNatSequenceRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatSequenceRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyResourceGroupResponse> ModifyResourceGroupOutcome;
                typedef std::future<ModifyResourceGroupOutcome> ModifyResourceGroupOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyResourceGroupRequest&, ModifyResourceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRunSyncAssetResponse> ModifyRunSyncAssetOutcome;
                typedef std::future<ModifyRunSyncAssetOutcome> ModifyRunSyncAssetOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyRunSyncAssetRequest&, ModifyRunSyncAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRunSyncAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityGroupItemRuleStatusResponse> ModifySecurityGroupItemRuleStatusOutcome;
                typedef std::future<ModifySecurityGroupItemRuleStatusOutcome> ModifySecurityGroupItemRuleStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifySecurityGroupItemRuleStatusRequest&, ModifySecurityGroupItemRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupItemRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityGroupRuleResponse> ModifySecurityGroupRuleOutcome;
                typedef std::future<ModifySecurityGroupRuleOutcome> ModifySecurityGroupRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifySecurityGroupRuleRequest&, ModifySecurityGroupRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityGroupSequenceRulesResponse> ModifySecurityGroupSequenceRulesOutcome;
                typedef std::future<ModifySecurityGroupSequenceRulesOutcome> ModifySecurityGroupSequenceRulesOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifySecurityGroupSequenceRulesRequest&, ModifySecurityGroupSequenceRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupSequenceRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySequenceAclRulesResponse> ModifySequenceAclRulesOutcome;
                typedef std::future<ModifySequenceAclRulesOutcome> ModifySequenceAclRulesOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifySequenceAclRulesRequest&, ModifySequenceAclRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySequenceAclRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySequenceRulesResponse> ModifySequenceRulesOutcome;
                typedef std::future<ModifySequenceRulesOutcome> ModifySequenceRulesOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifySequenceRulesRequest&, ModifySequenceRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySequenceRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStorageSettingResponse> ModifyStorageSettingOutcome;
                typedef std::future<ModifyStorageSettingOutcome> ModifyStorageSettingOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyStorageSettingRequest&, ModifyStorageSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStorageSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTableStatusResponse> ModifyTableStatusOutcome;
                typedef std::future<ModifyTableStatusOutcome> ModifyTableStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyTableStatusRequest&, ModifyTableStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTableStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpcAcRuleResponse> ModifyVpcAcRuleOutcome;
                typedef std::future<ModifyVpcAcRuleOutcome> ModifyVpcAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyVpcAcRuleRequest&, ModifyVpcAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcAcRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpcFwGroupResponse> ModifyVpcFwGroupOutcome;
                typedef std::future<ModifyVpcFwGroupOutcome> ModifyVpcFwGroupOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyVpcFwGroupRequest&, ModifyVpcFwGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcFwGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpcFwSequenceRulesResponse> ModifyVpcFwSequenceRulesOutcome;
                typedef std::future<ModifyVpcFwSequenceRulesOutcome> ModifyVpcFwSequenceRulesOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyVpcFwSequenceRulesRequest&, ModifyVpcFwSequenceRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcFwSequenceRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveAcRuleResponse> RemoveAcRuleOutcome;
                typedef std::future<RemoveAcRuleOutcome> RemoveAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::RemoveAcRuleRequest&, RemoveAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveAcRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveAclRuleResponse> RemoveAclRuleOutcome;
                typedef std::future<RemoveAclRuleOutcome> RemoveAclRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::RemoveAclRuleRequest&, RemoveAclRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveAclRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveEnterpriseSecurityGroupRuleResponse> RemoveEnterpriseSecurityGroupRuleOutcome;
                typedef std::future<RemoveEnterpriseSecurityGroupRuleOutcome> RemoveEnterpriseSecurityGroupRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::RemoveEnterpriseSecurityGroupRuleRequest&, RemoveEnterpriseSecurityGroupRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveEnterpriseSecurityGroupRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveNatAcRuleResponse> RemoveNatAcRuleOutcome;
                typedef std::future<RemoveNatAcRuleOutcome> RemoveNatAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::RemoveNatAcRuleRequest&, RemoveNatAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveNatAcRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveVpcAcRuleResponse> RemoveVpcAcRuleOutcome;
                typedef std::future<RemoveVpcAcRuleOutcome> RemoveVpcAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::RemoveVpcAcRuleRequest&, RemoveVpcAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveVpcAcRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchLogResponse> SearchLogOutcome;
                typedef std::future<SearchLogOutcome> SearchLogOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::SearchLogRequest&, SearchLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchLogAsyncHandler;
                typedef Outcome<Core::Error, Model::SetNatFwDnatRuleResponse> SetNatFwDnatRuleOutcome;
                typedef std::future<SetNatFwDnatRuleOutcome> SetNatFwDnatRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::SetNatFwDnatRuleRequest&, SetNatFwDnatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetNatFwDnatRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::SetNatFwEipResponse> SetNatFwEipOutcome;
                typedef std::future<SetNatFwEipOutcome> SetNatFwEipOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::SetNatFwEipRequest&, SetNatFwEipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetNatFwEipAsyncHandler;
                typedef Outcome<Core::Error, Model::StopSecurityGroupRuleDispatchResponse> StopSecurityGroupRuleDispatchOutcome;
                typedef std::future<StopSecurityGroupRuleDispatchOutcome> StopSecurityGroupRuleDispatchOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::StopSecurityGroupRuleDispatchRequest&, StopSecurityGroupRuleDispatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopSecurityGroupRuleDispatchAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncFwOperateResponse> SyncFwOperateOutcome;
                typedef std::future<SyncFwOperateOutcome> SyncFwOperateOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::SyncFwOperateRequest&, SyncFwOperateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncFwOperateAsyncHandler;



                /**
                 *添加互联网边界访问控制规则
                 * @param req AddAclRuleRequest
                 * @return AddAclRuleOutcome
                 */
                AddAclRuleOutcome AddAclRule(const Model::AddAclRuleRequest &request);
                void AddAclRuleAsync(const Model::AddAclRuleRequest& request, const AddAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddAclRuleOutcomeCallable AddAclRuleCallable(const Model::AddAclRuleRequest& request);

                /**
                 *创建新企业安全组规则
                 * @param req AddEnterpriseSecurityGroupRulesRequest
                 * @return AddEnterpriseSecurityGroupRulesOutcome
                 */
                AddEnterpriseSecurityGroupRulesOutcome AddEnterpriseSecurityGroupRules(const Model::AddEnterpriseSecurityGroupRulesRequest &request);
                void AddEnterpriseSecurityGroupRulesAsync(const Model::AddEnterpriseSecurityGroupRulesRequest& request, const AddEnterpriseSecurityGroupRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddEnterpriseSecurityGroupRulesOutcomeCallable AddEnterpriseSecurityGroupRulesCallable(const Model::AddEnterpriseSecurityGroupRulesRequest& request);

                /**
                 *添加nat访问控制规则
                 * @param req AddNatAcRuleRequest
                 * @return AddNatAcRuleOutcome
                 */
                AddNatAcRuleOutcome AddNatAcRule(const Model::AddNatAcRuleRequest &request);
                void AddNatAcRuleAsync(const Model::AddNatAcRuleRequest& request, const AddNatAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddNatAcRuleOutcomeCallable AddNatAcRuleCallable(const Model::AddNatAcRuleRequest& request);

                /**
                 *添加VPC内网间规则
                 * @param req AddVpcAcRuleRequest
                 * @return AddVpcAcRuleOutcome
                 */
                AddVpcAcRuleOutcome AddVpcAcRule(const Model::AddVpcAcRuleRequest &request);
                void AddVpcAcRuleAsync(const Model::AddVpcAcRuleRequest& request, const AddVpcAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddVpcAcRuleOutcomeCallable AddVpcAcRuleCallable(const Model::AddVpcAcRuleRequest& request);

                /**
                 *创建访问控制规则
                 * @param req CreateAcRulesRequest
                 * @return CreateAcRulesOutcome
                 */
                CreateAcRulesOutcome CreateAcRules(const Model::CreateAcRulesRequest &request);
                void CreateAcRulesAsync(const Model::CreateAcRulesRequest& request, const CreateAcRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAcRulesOutcomeCallable CreateAcRulesCallable(const Model::CreateAcRulesRequest& request);

                /**
                 *创建地址模板规则
                 * @param req CreateAddressTemplateRequest
                 * @return CreateAddressTemplateOutcome
                 */
                CreateAddressTemplateOutcome CreateAddressTemplate(const Model::CreateAddressTemplateRequest &request);
                void CreateAddressTemplateAsync(const Model::CreateAddressTemplateRequest& request, const CreateAddressTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAddressTemplateOutcomeCallable CreateAddressTemplateCallable(const Model::CreateAddressTemplateRequest& request);

                /**
                 *用户告警中心-封隔离处置按钮
                 * @param req CreateAlertCenterIsolateRequest
                 * @return CreateAlertCenterIsolateOutcome
                 */
                CreateAlertCenterIsolateOutcome CreateAlertCenterIsolate(const Model::CreateAlertCenterIsolateRequest &request);
                void CreateAlertCenterIsolateAsync(const Model::CreateAlertCenterIsolateRequest& request, const CreateAlertCenterIsolateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlertCenterIsolateOutcomeCallable CreateAlertCenterIsolateCallable(const Model::CreateAlertCenterIsolateRequest& request);

                /**
                 *用户告警中心-忽略处置按钮
                 * @param req CreateAlertCenterOmitRequest
                 * @return CreateAlertCenterOmitOutcome
                 */
                CreateAlertCenterOmitOutcome CreateAlertCenterOmit(const Model::CreateAlertCenterOmitRequest &request);
                void CreateAlertCenterOmitAsync(const Model::CreateAlertCenterOmitRequest& request, const CreateAlertCenterOmitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlertCenterOmitOutcomeCallable CreateAlertCenterOmitCallable(const Model::CreateAlertCenterOmitRequest& request);

                /**
                 *用户告警中心-封禁、放通处置按钮
                 * @param req CreateAlertCenterRuleRequest
                 * @return CreateAlertCenterRuleOutcome
                 */
                CreateAlertCenterRuleOutcome CreateAlertCenterRule(const Model::CreateAlertCenterRuleRequest &request);
                void CreateAlertCenterRuleAsync(const Model::CreateAlertCenterRuleRequest& request, const CreateAlertCenterRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlertCenterRuleOutcomeCallable CreateAlertCenterRuleCallable(const Model::CreateAlertCenterRuleRequest& request);

                /**
                 *批量添加入侵防御封禁列表、放通列表规则
                 * @param req CreateBlockIgnoreRuleListRequest
                 * @return CreateBlockIgnoreRuleListOutcome
                 */
                CreateBlockIgnoreRuleListOutcome CreateBlockIgnoreRuleList(const Model::CreateBlockIgnoreRuleListRequest &request);
                void CreateBlockIgnoreRuleListAsync(const Model::CreateBlockIgnoreRuleListRequest& request, const CreateBlockIgnoreRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBlockIgnoreRuleListOutcomeCallable CreateBlockIgnoreRuleListCallable(const Model::CreateBlockIgnoreRuleListRequest& request);

                /**
                 *批量添加入侵防御封禁列表、放通列表规则
                 * @param req CreateBlockIgnoreRuleNewRequest
                 * @return CreateBlockIgnoreRuleNewOutcome
                 */
                CreateBlockIgnoreRuleNewOutcome CreateBlockIgnoreRuleNew(const Model::CreateBlockIgnoreRuleNewRequest &request);
                void CreateBlockIgnoreRuleNewAsync(const Model::CreateBlockIgnoreRuleNewRequest& request, const CreateBlockIgnoreRuleNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBlockIgnoreRuleNewOutcomeCallable CreateBlockIgnoreRuleNewCallable(const Model::CreateBlockIgnoreRuleNewRequest& request);

                /**
                 *创建、选择vpc
                 * @param req CreateChooseVpcsRequest
                 * @return CreateChooseVpcsOutcome
                 */
                CreateChooseVpcsOutcome CreateChooseVpcs(const Model::CreateChooseVpcsRequest &request);
                void CreateChooseVpcsAsync(const Model::CreateChooseVpcsRequest& request, const CreateChooseVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateChooseVpcsOutcomeCallable CreateChooseVpcsCallable(const Model::CreateChooseVpcsRequest& request);

                /**
                 *创建暴露数据库白名单规则
                 * @param req CreateDatabaseWhiteListRulesRequest
                 * @return CreateDatabaseWhiteListRulesOutcome
                 */
                CreateDatabaseWhiteListRulesOutcome CreateDatabaseWhiteListRules(const Model::CreateDatabaseWhiteListRulesRequest &request);
                void CreateDatabaseWhiteListRulesAsync(const Model::CreateDatabaseWhiteListRulesRequest& request, const CreateDatabaseWhiteListRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDatabaseWhiteListRulesOutcomeCallable CreateDatabaseWhiteListRulesCallable(const Model::CreateDatabaseWhiteListRulesRequest& request);

                /**
                 *CreateIdsWhiteRule

创建入侵防御规则白名单接口
                 * @param req CreateIdsWhiteRuleRequest
                 * @return CreateIdsWhiteRuleOutcome
                 */
                CreateIdsWhiteRuleOutcome CreateIdsWhiteRule(const Model::CreateIdsWhiteRuleRequest &request);
                void CreateIdsWhiteRuleAsync(const Model::CreateIdsWhiteRuleRequest& request, const CreateIdsWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIdsWhiteRuleOutcomeCallable CreateIdsWhiteRuleCallable(const Model::CreateIdsWhiteRuleRequest& request);

                /**
                 *创建NAT防火墙实例（Region参数必填）
                 * @param req CreateNatFwInstanceRequest
                 * @return CreateNatFwInstanceOutcome
                 */
                CreateNatFwInstanceOutcome CreateNatFwInstance(const Model::CreateNatFwInstanceRequest &request);
                void CreateNatFwInstanceAsync(const Model::CreateNatFwInstanceRequest& request, const CreateNatFwInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNatFwInstanceOutcomeCallable CreateNatFwInstanceCallable(const Model::CreateNatFwInstanceRequest& request);

                /**
                 *创建防火墙实例和接入域名（Region参数必填）
                 * @param req CreateNatFwInstanceWithDomainRequest
                 * @return CreateNatFwInstanceWithDomainOutcome
                 */
                CreateNatFwInstanceWithDomainOutcome CreateNatFwInstanceWithDomain(const Model::CreateNatFwInstanceWithDomainRequest &request);
                void CreateNatFwInstanceWithDomainAsync(const Model::CreateNatFwInstanceWithDomainRequest& request, const CreateNatFwInstanceWithDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNatFwInstanceWithDomainOutcomeCallable CreateNatFwInstanceWithDomainCallable(const Model::CreateNatFwInstanceWithDomainRequest& request);

                /**
                 *创建企业安全组规则
                 * @param req CreateSecurityGroupRulesRequest
                 * @return CreateSecurityGroupRulesOutcome
                 */
                CreateSecurityGroupRulesOutcome CreateSecurityGroupRules(const Model::CreateSecurityGroupRulesRequest &request);
                void CreateSecurityGroupRulesAsync(const Model::CreateSecurityGroupRulesRequest& request, const CreateSecurityGroupRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityGroupRulesOutcomeCallable CreateSecurityGroupRulesCallable(const Model::CreateSecurityGroupRulesRequest& request);

                /**
                 *创建VPC间防火墙(防火墙组)
                 * @param req CreateVpcFwGroupRequest
                 * @return CreateVpcFwGroupOutcome
                 */
                CreateVpcFwGroupOutcome CreateVpcFwGroup(const Model::CreateVpcFwGroupRequest &request);
                void CreateVpcFwGroupAsync(const Model::CreateVpcFwGroupRequest& request, const CreateVpcFwGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpcFwGroupOutcomeCallable CreateVpcFwGroupCallable(const Model::CreateVpcFwGroupRequest& request);

                /**
                 *删除规则
                 * @param req DeleteAcRuleRequest
                 * @return DeleteAcRuleOutcome
                 */
                DeleteAcRuleOutcome DeleteAcRule(const Model::DeleteAcRuleRequest &request);
                void DeleteAcRuleAsync(const Model::DeleteAcRuleRequest& request, const DeleteAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAcRuleOutcomeCallable DeleteAcRuleCallable(const Model::DeleteAcRuleRequest& request);

                /**
                 *删除地址模板规则
                 * @param req DeleteAddressTemplateRequest
                 * @return DeleteAddressTemplateOutcome
                 */
                DeleteAddressTemplateOutcome DeleteAddressTemplate(const Model::DeleteAddressTemplateRequest &request);
                void DeleteAddressTemplateAsync(const Model::DeleteAddressTemplateRequest& request, const DeleteAddressTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAddressTemplateOutcomeCallable DeleteAddressTemplateCallable(const Model::DeleteAddressTemplateRequest& request);

                /**
                 *全部删除规则
                 * @param req DeleteAllAccessControlRuleRequest
                 * @return DeleteAllAccessControlRuleOutcome
                 */
                DeleteAllAccessControlRuleOutcome DeleteAllAccessControlRule(const Model::DeleteAllAccessControlRuleRequest &request);
                void DeleteAllAccessControlRuleAsync(const Model::DeleteAllAccessControlRuleRequest& request, const DeleteAllAccessControlRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAllAccessControlRuleOutcomeCallable DeleteAllAccessControlRuleCallable(const Model::DeleteAllAccessControlRuleRequest& request);

                /**
                 *批量删除入侵防御封禁列表、放通列表规则
                 * @param req DeleteBlockIgnoreRuleListRequest
                 * @return DeleteBlockIgnoreRuleListOutcome
                 */
                DeleteBlockIgnoreRuleListOutcome DeleteBlockIgnoreRuleList(const Model::DeleteBlockIgnoreRuleListRequest &request);
                void DeleteBlockIgnoreRuleListAsync(const Model::DeleteBlockIgnoreRuleListRequest& request, const DeleteBlockIgnoreRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBlockIgnoreRuleListOutcomeCallable DeleteBlockIgnoreRuleListCallable(const Model::DeleteBlockIgnoreRuleListRequest& request);

                /**
                 *批量删除入侵防御封禁列表、放通列表规则（新）
                 * @param req DeleteBlockIgnoreRuleNewRequest
                 * @return DeleteBlockIgnoreRuleNewOutcome
                 */
                DeleteBlockIgnoreRuleNewOutcome DeleteBlockIgnoreRuleNew(const Model::DeleteBlockIgnoreRuleNewRequest &request);
                void DeleteBlockIgnoreRuleNewAsync(const Model::DeleteBlockIgnoreRuleNewRequest& request, const DeleteBlockIgnoreRuleNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBlockIgnoreRuleNewOutcomeCallable DeleteBlockIgnoreRuleNewCallable(const Model::DeleteBlockIgnoreRuleNewRequest& request);

                /**
                 *历史方案，业务已迁移，接口不再适用

删除入侵防御规则白名单接口
                 * @param req DeleteIdsWhiteRuleRequest
                 * @return DeleteIdsWhiteRuleOutcome
                 */
                DeleteIdsWhiteRuleOutcome DeleteIdsWhiteRule(const Model::DeleteIdsWhiteRuleRequest &request);
                void DeleteIdsWhiteRuleAsync(const Model::DeleteIdsWhiteRuleRequest& request, const DeleteIdsWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIdsWhiteRuleOutcomeCallable DeleteIdsWhiteRuleCallable(const Model::DeleteIdsWhiteRuleRequest& request);

                /**
                 *销毁防火墙实例
                 * @param req DeleteNatFwInstanceRequest
                 * @return DeleteNatFwInstanceOutcome
                 */
                DeleteNatFwInstanceOutcome DeleteNatFwInstance(const Model::DeleteNatFwInstanceRequest &request);
                void DeleteNatFwInstanceAsync(const Model::DeleteNatFwInstanceRequest& request, const DeleteNatFwInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNatFwInstanceOutcomeCallable DeleteNatFwInstanceCallable(const Model::DeleteNatFwInstanceRequest& request);

                /**
                 *删除远程运维域名
                 * @param req DeleteRemoteAccessDomainRequest
                 * @return DeleteRemoteAccessDomainOutcome
                 */
                DeleteRemoteAccessDomainOutcome DeleteRemoteAccessDomain(const Model::DeleteRemoteAccessDomainRequest &request);
                void DeleteRemoteAccessDomainAsync(const Model::DeleteRemoteAccessDomainRequest& request, const DeleteRemoteAccessDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRemoteAccessDomainOutcomeCallable DeleteRemoteAccessDomainCallable(const Model::DeleteRemoteAccessDomainRequest& request);

                /**
                 *DeleteResourceGroup-资产中心资产组删除
                 * @param req DeleteResourceGroupRequest
                 * @return DeleteResourceGroupOutcome
                 */
                DeleteResourceGroupOutcome DeleteResourceGroup(const Model::DeleteResourceGroupRequest &request);
                void DeleteResourceGroupAsync(const Model::DeleteResourceGroupRequest& request, const DeleteResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteResourceGroupOutcomeCallable DeleteResourceGroupCallable(const Model::DeleteResourceGroupRequest& request);

                /**
                 *删除规则
                 * @param req DeleteSecurityGroupRuleRequest
                 * @return DeleteSecurityGroupRuleOutcome
                 */
                DeleteSecurityGroupRuleOutcome DeleteSecurityGroupRule(const Model::DeleteSecurityGroupRuleRequest &request);
                void DeleteSecurityGroupRuleAsync(const Model::DeleteSecurityGroupRuleRequest& request, const DeleteSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityGroupRuleOutcomeCallable DeleteSecurityGroupRuleCallable(const Model::DeleteSecurityGroupRuleRequest& request);

                /**
                 *删除防火墙(组)，或者删除其中实例
                 * @param req DeleteVpcFwGroupRequest
                 * @return DeleteVpcFwGroupOutcome
                 */
                DeleteVpcFwGroupOutcome DeleteVpcFwGroup(const Model::DeleteVpcFwGroupRequest &request);
                void DeleteVpcFwGroupAsync(const Model::DeleteVpcFwGroupRequest& request, const DeleteVpcFwGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpcFwGroupOutcomeCallable DeleteVpcFwGroupCallable(const Model::DeleteVpcFwGroupRequest& request);

                /**
                 *访问控制列表
                 * @param req DescribeAcListsRequest
                 * @return DescribeAcListsOutcome
                 */
                DescribeAcListsOutcome DescribeAcLists(const Model::DescribeAcListsRequest &request);
                void DescribeAcListsAsync(const Model::DescribeAcListsRequest& request, const DescribeAcListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAcListsOutcomeCallable DescribeAcListsCallable(const Model::DescribeAcListsRequest& request);

                /**
                 *查询互联网边界访问控制列表
                 * @param req DescribeAclRuleRequest
                 * @return DescribeAclRuleOutcome
                 */
                DescribeAclRuleOutcome DescribeAclRule(const Model::DescribeAclRuleRequest &request);
                void DescribeAclRuleAsync(const Model::DescribeAclRuleRequest& request, const DescribeAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAclRuleOutcomeCallable DescribeAclRuleCallable(const Model::DescribeAclRuleRequest& request);

                /**
                 *查询地址模板列表
                 * @param req DescribeAddressTemplateListRequest
                 * @return DescribeAddressTemplateListOutcome
                 */
                DescribeAddressTemplateListOutcome DescribeAddressTemplateList(const Model::DescribeAddressTemplateListRequest &request);
                void DescribeAddressTemplateListAsync(const Model::DescribeAddressTemplateListRequest& request, const DescribeAddressTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddressTemplateListOutcomeCallable DescribeAddressTemplateListCallable(const Model::DescribeAddressTemplateListRequest& request);

                /**
                 *资产同步状态查询
                 * @param req DescribeAssetSyncRequest
                 * @return DescribeAssetSyncOutcome
                 */
                DescribeAssetSyncOutcome DescribeAssetSync(const Model::DescribeAssetSyncRequest &request);
                void DescribeAssetSyncAsync(const Model::DescribeAssetSyncRequest& request, const DescribeAssetSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssetSyncOutcomeCallable DescribeAssetSyncCallable(const Model::DescribeAssetSyncRequest& request);

                /**
                 *获取安全组关联实例列表
                 * @param req DescribeAssociatedInstanceListRequest
                 * @return DescribeAssociatedInstanceListOutcome
                 */
                DescribeAssociatedInstanceListOutcome DescribeAssociatedInstanceList(const Model::DescribeAssociatedInstanceListRequest &request);
                void DescribeAssociatedInstanceListAsync(const Model::DescribeAssociatedInstanceListRequest& request, const DescribeAssociatedInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssociatedInstanceListOutcomeCallable DescribeAssociatedInstanceListCallable(const Model::DescribeAssociatedInstanceListRequest& request);

                /**
                 *DescribeBlockByIpTimesList 告警中心阻断IP折线图
                 * @param req DescribeBlockByIpTimesListRequest
                 * @return DescribeBlockByIpTimesListOutcome
                 */
                DescribeBlockByIpTimesListOutcome DescribeBlockByIpTimesList(const Model::DescribeBlockByIpTimesListRequest &request);
                void DescribeBlockByIpTimesListAsync(const Model::DescribeBlockByIpTimesListRequest& request, const DescribeBlockByIpTimesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBlockByIpTimesListOutcomeCallable DescribeBlockByIpTimesListCallable(const Model::DescribeBlockByIpTimesListRequest& request);

                /**
                 *查询入侵防御放通封禁列表
                 * @param req DescribeBlockIgnoreListRequest
                 * @return DescribeBlockIgnoreListOutcome
                 */
                DescribeBlockIgnoreListOutcome DescribeBlockIgnoreList(const Model::DescribeBlockIgnoreListRequest &request);
                void DescribeBlockIgnoreListAsync(const Model::DescribeBlockIgnoreListRequest& request, const DescribeBlockIgnoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBlockIgnoreListOutcomeCallable DescribeBlockIgnoreListCallable(const Model::DescribeBlockIgnoreListRequest& request);

                /**
                 *DescribeBlockStaticList 告警中心柱形图
                 * @param req DescribeBlockStaticListRequest
                 * @return DescribeBlockStaticListOutcome
                 */
                DescribeBlockStaticListOutcome DescribeBlockStaticList(const Model::DescribeBlockStaticListRequest &request);
                void DescribeBlockStaticListAsync(const Model::DescribeBlockStaticListRequest& request, const DescribeBlockStaticListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBlockStaticListOutcomeCallable DescribeBlockStaticListCallable(const Model::DescribeBlockStaticListRequest& request);

                /**
                 *查询防火墙弹性公网IP
                 * @param req DescribeCfwEipsRequest
                 * @return DescribeCfwEipsOutcome
                 */
                DescribeCfwEipsOutcome DescribeCfwEips(const Model::DescribeCfwEipsRequest &request);
                void DescribeCfwEipsAsync(const Model::DescribeCfwEipsRequest& request, const DescribeCfwEipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCfwEipsOutcomeCallable DescribeCfwEipsCallable(const Model::DescribeCfwEipsRequest& request);

                /**
                 *cfw实例运行状态查询
                 * @param req DescribeCfwInsStatusRequest
                 * @return DescribeCfwInsStatusOutcome
                 */
                DescribeCfwInsStatusOutcome DescribeCfwInsStatus(const Model::DescribeCfwInsStatusRequest &request);
                void DescribeCfwInsStatusAsync(const Model::DescribeCfwInsStatusRequest& request, const DescribeCfwInsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCfwInsStatusOutcomeCallable DescribeCfwInsStatusCallable(const Model::DescribeCfwInsStatusRequest& request);

                /**
                 *获取入侵防御按钮列表
                 * @param req DescribeDefenseSwitchRequest
                 * @return DescribeDefenseSwitchOutcome
                 */
                DescribeDefenseSwitchOutcome DescribeDefenseSwitch(const Model::DescribeDefenseSwitchRequest &request);
                void DescribeDefenseSwitchAsync(const Model::DescribeDefenseSwitchRequest& request, const DescribeDefenseSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDefenseSwitchOutcomeCallable DescribeDefenseSwitchCallable(const Model::DescribeDefenseSwitchRequest& request);

                /**
                 *查询新版安全组下发进度
                 * @param req DescribeEnterpriseSGRuleProgressRequest
                 * @return DescribeEnterpriseSGRuleProgressOutcome
                 */
                DescribeEnterpriseSGRuleProgressOutcome DescribeEnterpriseSGRuleProgress(const Model::DescribeEnterpriseSGRuleProgressRequest &request);
                void DescribeEnterpriseSGRuleProgressAsync(const Model::DescribeEnterpriseSGRuleProgressRequest& request, const DescribeEnterpriseSGRuleProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnterpriseSGRuleProgressOutcomeCallable DescribeEnterpriseSGRuleProgressCallable(const Model::DescribeEnterpriseSGRuleProgressRequest& request);

                /**
                 *查询新企业安全组规则
                 * @param req DescribeEnterpriseSecurityGroupRuleRequest
                 * @return DescribeEnterpriseSecurityGroupRuleOutcome
                 */
                DescribeEnterpriseSecurityGroupRuleOutcome DescribeEnterpriseSecurityGroupRule(const Model::DescribeEnterpriseSecurityGroupRuleRequest &request);
                void DescribeEnterpriseSecurityGroupRuleAsync(const Model::DescribeEnterpriseSecurityGroupRuleRequest& request, const DescribeEnterpriseSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnterpriseSecurityGroupRuleOutcomeCallable DescribeEnterpriseSecurityGroupRuleCallable(const Model::DescribeEnterpriseSecurityGroupRuleRequest& request);

                /**
                 *查询新企业安全组规则  从node接口迁移   原接口DescribeSecurityGroupNewList
                 * @param req DescribeEnterpriseSecurityGroupRuleListRequest
                 * @return DescribeEnterpriseSecurityGroupRuleListOutcome
                 */
                DescribeEnterpriseSecurityGroupRuleListOutcome DescribeEnterpriseSecurityGroupRuleList(const Model::DescribeEnterpriseSecurityGroupRuleListRequest &request);
                void DescribeEnterpriseSecurityGroupRuleListAsync(const Model::DescribeEnterpriseSecurityGroupRuleListRequest& request, const DescribeEnterpriseSecurityGroupRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnterpriseSecurityGroupRuleListOutcomeCallable DescribeEnterpriseSecurityGroupRuleListCallable(const Model::DescribeEnterpriseSecurityGroupRuleListRequest& request);

                /**
                 *串行防火墙IP开关列表
                 * @param req DescribeFwEdgeIpsRequest
                 * @return DescribeFwEdgeIpsOutcome
                 */
                DescribeFwEdgeIpsOutcome DescribeFwEdgeIps(const Model::DescribeFwEdgeIpsRequest &request);
                void DescribeFwEdgeIpsAsync(const Model::DescribeFwEdgeIpsRequest& request, const DescribeFwEdgeIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFwEdgeIpsOutcomeCallable DescribeFwEdgeIpsCallable(const Model::DescribeFwEdgeIpsRequest& request);

                /**
                 *获取租户所有VPC防火墙(组)及VPC防火墙实例卡片信息
                 * @param req DescribeFwGroupInstanceInfoRequest
                 * @return DescribeFwGroupInstanceInfoOutcome
                 */
                DescribeFwGroupInstanceInfoOutcome DescribeFwGroupInstanceInfo(const Model::DescribeFwGroupInstanceInfoRequest &request);
                void DescribeFwGroupInstanceInfoAsync(const Model::DescribeFwGroupInstanceInfoRequest& request, const DescribeFwGroupInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFwGroupInstanceInfoOutcomeCallable DescribeFwGroupInstanceInfoCallable(const Model::DescribeFwGroupInstanceInfoRequest& request);

                /**
                 *获取防火墙同步状态，一般在执行同步操作后查询
                 * @param req DescribeFwSyncStatusRequest
                 * @return DescribeFwSyncStatusOutcome
                 */
                DescribeFwSyncStatusOutcome DescribeFwSyncStatus(const Model::DescribeFwSyncStatusRequest &request);
                void DescribeFwSyncStatusAsync(const Model::DescribeFwSyncStatusRequest& request, const DescribeFwSyncStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFwSyncStatusOutcomeCallable DescribeFwSyncStatusCallable(const Model::DescribeFwSyncStatusRequest& request);

                /**
                 *DescribeGuideScanInfo新手引导扫描接口信息
                 * @param req DescribeGuideScanInfoRequest
                 * @return DescribeGuideScanInfoOutcome
                 */
                DescribeGuideScanInfoOutcome DescribeGuideScanInfo(const Model::DescribeGuideScanInfoRequest &request);
                void DescribeGuideScanInfoAsync(const Model::DescribeGuideScanInfoRequest& request, const DescribeGuideScanInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGuideScanInfoOutcomeCallable DescribeGuideScanInfoCallable(const Model::DescribeGuideScanInfoRequest& request);

                /**
                 *IP防护状态查询
                 * @param req DescribeIPStatusListRequest
                 * @return DescribeIPStatusListOutcome
                 */
                DescribeIPStatusListOutcome DescribeIPStatusList(const Model::DescribeIPStatusListRequest &request);
                void DescribeIPStatusListAsync(const Model::DescribeIPStatusListRequest& request, const DescribeIPStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIPStatusListOutcomeCallable DescribeIPStatusListCallable(const Model::DescribeIPStatusListRequest& request);

                /**
                 *历史方案，业务已迁移，接口不再适用

查询入侵防御规则白名单接口
                 * @param req DescribeIdsWhiteRuleRequest
                 * @return DescribeIdsWhiteRuleOutcome
                 */
                DescribeIdsWhiteRuleOutcome DescribeIdsWhiteRule(const Model::DescribeIdsWhiteRuleRequest &request);
                void DescribeIdsWhiteRuleAsync(const Model::DescribeIdsWhiteRuleRequest& request, const DescribeIdsWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIdsWhiteRuleOutcomeCallable DescribeIdsWhiteRuleCallable(const Model::DescribeIdsWhiteRuleRequest& request);

                /**
                 *日志审计日志查询
                 * @param req DescribeLogsRequest
                 * @return DescribeLogsOutcome
                 */
                DescribeLogsOutcome DescribeLogs(const Model::DescribeLogsRequest &request);
                void DescribeLogsAsync(const Model::DescribeLogsRequest& request, const DescribeLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogsOutcomeCallable DescribeLogsCallable(const Model::DescribeLogsRequest& request);

                /**
                 *查询NAT访问控制列表
                 * @param req DescribeNatAcRuleRequest
                 * @return DescribeNatAcRuleOutcome
                 */
                DescribeNatAcRuleOutcome DescribeNatAcRule(const Model::DescribeNatAcRuleRequest &request);
                void DescribeNatAcRuleAsync(const Model::DescribeNatAcRuleRequest& request, const DescribeNatAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatAcRuleOutcomeCallable DescribeNatAcRuleCallable(const Model::DescribeNatAcRuleRequest& request);

                /**
                 *查询Nat防火墙Dnat规则
                 * @param req DescribeNatFwDnatRuleRequest
                 * @return DescribeNatFwDnatRuleOutcome
                 */
                DescribeNatFwDnatRuleOutcome DescribeNatFwDnatRule(const Model::DescribeNatFwDnatRuleRequest &request);
                void DescribeNatFwDnatRuleAsync(const Model::DescribeNatFwDnatRuleRequest& request, const DescribeNatFwDnatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatFwDnatRuleOutcomeCallable DescribeNatFwDnatRuleCallable(const Model::DescribeNatFwDnatRuleRequest& request);

                /**
                 *获取当前用户接入nat防火墙的所有子网数及natfw实例个数
                 * @param req DescribeNatFwInfoCountRequest
                 * @return DescribeNatFwInfoCountOutcome
                 */
                DescribeNatFwInfoCountOutcome DescribeNatFwInfoCount(const Model::DescribeNatFwInfoCountRequest &request);
                void DescribeNatFwInfoCountAsync(const Model::DescribeNatFwInfoCountRequest& request, const DescribeNatFwInfoCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatFwInfoCountOutcomeCallable DescribeNatFwInfoCountCallable(const Model::DescribeNatFwInfoCountRequest& request);

                /**
                 *DescribeNatFwInstance 获取租户所有NAT实例
                 * @param req DescribeNatFwInstanceRequest
                 * @return DescribeNatFwInstanceOutcome
                 */
                DescribeNatFwInstanceOutcome DescribeNatFwInstance(const Model::DescribeNatFwInstanceRequest &request);
                void DescribeNatFwInstanceAsync(const Model::DescribeNatFwInstanceRequest& request, const DescribeNatFwInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatFwInstanceOutcomeCallable DescribeNatFwInstanceCallable(const Model::DescribeNatFwInstanceRequest& request);

                /**
                 *GetNatFwInstanceWithRegion 获取租户新增运维的NAT实例，带上地域
                 * @param req DescribeNatFwInstanceWithRegionRequest
                 * @return DescribeNatFwInstanceWithRegionOutcome
                 */
                DescribeNatFwInstanceWithRegionOutcome DescribeNatFwInstanceWithRegion(const Model::DescribeNatFwInstanceWithRegionRequest &request);
                void DescribeNatFwInstanceWithRegionAsync(const Model::DescribeNatFwInstanceWithRegionRequest& request, const DescribeNatFwInstanceWithRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatFwInstanceWithRegionOutcomeCallable DescribeNatFwInstanceWithRegionCallable(const Model::DescribeNatFwInstanceWithRegionRequest& request);

                /**
                 *GetNatInstance 获取租户所有NAT实例及实例卡片信息
                 * @param req DescribeNatFwInstancesInfoRequest
                 * @return DescribeNatFwInstancesInfoOutcome
                 */
                DescribeNatFwInstancesInfoOutcome DescribeNatFwInstancesInfo(const Model::DescribeNatFwInstancesInfoRequest &request);
                void DescribeNatFwInstancesInfoAsync(const Model::DescribeNatFwInstancesInfoRequest& request, const DescribeNatFwInstancesInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatFwInstancesInfoOutcomeCallable DescribeNatFwInstancesInfoCallable(const Model::DescribeNatFwInstancesInfoRequest& request);

                /**
                 *展示当前natfw 实例对应的vpc dns开关
                 * @param req DescribeNatFwVpcDnsLstRequest
                 * @return DescribeNatFwVpcDnsLstOutcome
                 */
                DescribeNatFwVpcDnsLstOutcome DescribeNatFwVpcDnsLst(const Model::DescribeNatFwVpcDnsLstRequest &request);
                void DescribeNatFwVpcDnsLstAsync(const Model::DescribeNatFwVpcDnsLstRequest& request, const DescribeNatFwVpcDnsLstAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatFwVpcDnsLstOutcomeCallable DescribeNatFwVpcDnsLstCallable(const Model::DescribeNatFwVpcDnsLstRequest& request);

                /**
                 *DescribeResourceGroup资产中心资产树信息
                 * @param req DescribeResourceGroupRequest
                 * @return DescribeResourceGroupOutcome
                 */
                DescribeResourceGroupOutcome DescribeResourceGroup(const Model::DescribeResourceGroupRequest &request);
                void DescribeResourceGroupAsync(const Model::DescribeResourceGroupRequest& request, const DescribeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceGroupOutcomeCallable DescribeResourceGroupCallable(const Model::DescribeResourceGroupRequest& request);

                /**
                 *资产中心资产组数数据信息查询
                 * @param req DescribeResourceGroupNewRequest
                 * @return DescribeResourceGroupNewOutcome
                 */
                DescribeResourceGroupNewOutcome DescribeResourceGroupNew(const Model::DescribeResourceGroupNewRequest &request);
                void DescribeResourceGroupNewAsync(const Model::DescribeResourceGroupNewRequest& request, const DescribeResourceGroupNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceGroupNewOutcomeCallable DescribeResourceGroupNewCallable(const Model::DescribeResourceGroupNewRequest& request);

                /**
                 *查询规则列表概况
                 * @param req DescribeRuleOverviewRequest
                 * @return DescribeRuleOverviewOutcome
                 */
                DescribeRuleOverviewOutcome DescribeRuleOverview(const Model::DescribeRuleOverviewRequest &request);
                void DescribeRuleOverviewAsync(const Model::DescribeRuleOverviewRequest& request, const DescribeRuleOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleOverviewOutcomeCallable DescribeRuleOverviewCallable(const Model::DescribeRuleOverviewRequest& request);

                /**
                 *查询安全组规则列表
                 * @param req DescribeSecurityGroupListRequest
                 * @return DescribeSecurityGroupListOutcome
                 */
                DescribeSecurityGroupListOutcome DescribeSecurityGroupList(const Model::DescribeSecurityGroupListRequest &request);
                void DescribeSecurityGroupListAsync(const Model::DescribeSecurityGroupListRequest& request, const DescribeSecurityGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupListOutcomeCallable DescribeSecurityGroupListCallable(const Model::DescribeSecurityGroupListRequest& request);

                /**
                 *DescribeSourceAsset-查询全部资产信息
                 * @param req DescribeSourceAssetRequest
                 * @return DescribeSourceAssetOutcome
                 */
                DescribeSourceAssetOutcome DescribeSourceAsset(const Model::DescribeSourceAssetRequest &request);
                void DescribeSourceAssetAsync(const Model::DescribeSourceAssetRequest& request, const DescribeSourceAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSourceAssetOutcomeCallable DescribeSourceAssetCallable(const Model::DescribeSourceAssetRequest& request);

                /**
                 *防火墙开关列表，请换用DescribeFwEdgeIps
                 * @param req DescribeSwitchListsRequest
                 * @return DescribeSwitchListsOutcome
                 */
                DescribeSwitchListsOutcome DescribeSwitchLists(const Model::DescribeSwitchListsRequest &request);
                void DescribeSwitchListsAsync(const Model::DescribeSwitchListsRequest& request, const DescribeSwitchListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSwitchListsOutcomeCallable DescribeSwitchListsCallable(const Model::DescribeSwitchListsRequest& request);

                /**
                 *DescribeTLogInfo告警中心概况查询
                 * @param req DescribeTLogInfoRequest
                 * @return DescribeTLogInfoOutcome
                 */
                DescribeTLogInfoOutcome DescribeTLogInfo(const Model::DescribeTLogInfoRequest &request);
                void DescribeTLogInfoAsync(const Model::DescribeTLogInfoRequest& request, const DescribeTLogInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTLogInfoOutcomeCallable DescribeTLogInfoCallable(const Model::DescribeTLogInfoRequest& request);

                /**
                 *DescribeTLogIpList告警中心IP柱形图
                 * @param req DescribeTLogIpListRequest
                 * @return DescribeTLogIpListOutcome
                 */
                DescribeTLogIpListOutcome DescribeTLogIpList(const Model::DescribeTLogIpListRequest &request);
                void DescribeTLogIpListAsync(const Model::DescribeTLogIpListRequest& request, const DescribeTLogIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTLogIpListOutcomeCallable DescribeTLogIpListCallable(const Model::DescribeTLogIpListRequest& request);

                /**
                 *查询规则表状态
                 * @param req DescribeTableStatusRequest
                 * @return DescribeTableStatusOutcome
                 */
                DescribeTableStatusOutcome DescribeTableStatus(const Model::DescribeTableStatusRequest &request);
                void DescribeTableStatusAsync(const Model::DescribeTableStatusRequest& request, const DescribeTableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableStatusOutcomeCallable DescribeTableStatusCallable(const Model::DescribeTableStatusRequest& request);

                /**
                 *DescribeUnHandleEventTabList 告警中心伪攻击链事件未处置接口
                 * @param req DescribeUnHandleEventTabListRequest
                 * @return DescribeUnHandleEventTabListOutcome
                 */
                DescribeUnHandleEventTabListOutcome DescribeUnHandleEventTabList(const Model::DescribeUnHandleEventTabListRequest &request);
                void DescribeUnHandleEventTabListAsync(const Model::DescribeUnHandleEventTabListRequest& request, const DescribeUnHandleEventTabListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUnHandleEventTabListOutcomeCallable DescribeUnHandleEventTabListCallable(const Model::DescribeUnHandleEventTabListRequest& request);

                /**
                 *查询内网间访问控制列表
                 * @param req DescribeVpcAcRuleRequest
                 * @return DescribeVpcAcRuleOutcome
                 */
                DescribeVpcAcRuleOutcome DescribeVpcAcRule(const Model::DescribeVpcAcRuleRequest &request);
                void DescribeVpcAcRuleAsync(const Model::DescribeVpcAcRuleRequest& request, const DescribeVpcAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcAcRuleOutcomeCallable DescribeVpcAcRuleCallable(const Model::DescribeVpcAcRuleRequest& request);

                /**
                 *VPC防火墙(组)开关列表
                 * @param req DescribeVpcFwGroupSwitchRequest
                 * @return DescribeVpcFwGroupSwitchOutcome
                 */
                DescribeVpcFwGroupSwitchOutcome DescribeVpcFwGroupSwitch(const Model::DescribeVpcFwGroupSwitchRequest &request);
                void DescribeVpcFwGroupSwitchAsync(const Model::DescribeVpcFwGroupSwitchRequest& request, const DescribeVpcFwGroupSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcFwGroupSwitchOutcomeCallable DescribeVpcFwGroupSwitchCallable(const Model::DescribeVpcFwGroupSwitchRequest& request);

                /**
                 *防火墙垂直扩容
                 * @param req ExpandCfwVerticalRequest
                 * @return ExpandCfwVerticalOutcome
                 */
                ExpandCfwVerticalOutcome ExpandCfwVertical(const Model::ExpandCfwVerticalRequest &request);
                void ExpandCfwVerticalAsync(const Model::ExpandCfwVerticalRequest& request, const ExpandCfwVerticalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExpandCfwVerticalOutcomeCallable ExpandCfwVerticalCallable(const Model::ExpandCfwVerticalRequest& request);

                /**
                 *修改规则
                 * @param req ModifyAcRuleRequest
                 * @return ModifyAcRuleOutcome
                 */
                ModifyAcRuleOutcome ModifyAcRule(const Model::ModifyAcRuleRequest &request);
                void ModifyAcRuleAsync(const Model::ModifyAcRuleRequest& request, const ModifyAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAcRuleOutcomeCallable ModifyAcRuleCallable(const Model::ModifyAcRuleRequest& request);

                /**
                 *修改互联网边界访问控制规则
                 * @param req ModifyAclRuleRequest
                 * @return ModifyAclRuleOutcome
                 */
                ModifyAclRuleOutcome ModifyAclRule(const Model::ModifyAclRuleRequest &request);
                void ModifyAclRuleAsync(const Model::ModifyAclRuleRequest& request, const ModifyAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAclRuleOutcomeCallable ModifyAclRuleCallable(const Model::ModifyAclRuleRequest& request);

                /**
                 *修改地址模板
                 * @param req ModifyAddressTemplateRequest
                 * @return ModifyAddressTemplateOutcome
                 */
                ModifyAddressTemplateOutcome ModifyAddressTemplate(const Model::ModifyAddressTemplateRequest &request);
                void ModifyAddressTemplateAsync(const Model::ModifyAddressTemplateRequest& request, const ModifyAddressTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAddressTemplateOutcomeCallable ModifyAddressTemplateCallable(const Model::ModifyAddressTemplateRequest& request);

                /**
                 *互联网边界防火墙一键开关
                 * @param req ModifyAllPublicIPSwitchStatusRequest
                 * @return ModifyAllPublicIPSwitchStatusOutcome
                 */
                ModifyAllPublicIPSwitchStatusOutcome ModifyAllPublicIPSwitchStatus(const Model::ModifyAllPublicIPSwitchStatusRequest &request);
                void ModifyAllPublicIPSwitchStatusAsync(const Model::ModifyAllPublicIPSwitchStatusRequest& request, const ModifyAllPublicIPSwitchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAllPublicIPSwitchStatusOutcomeCallable ModifyAllPublicIPSwitchStatusCallable(const Model::ModifyAllPublicIPSwitchStatusRequest& request);

                /**
                 *启用停用全部规则
                 * @param req ModifyAllRuleStatusRequest
                 * @return ModifyAllRuleStatusOutcome
                 */
                ModifyAllRuleStatusOutcome ModifyAllRuleStatus(const Model::ModifyAllRuleStatusRequest &request);
                void ModifyAllRuleStatusAsync(const Model::ModifyAllRuleStatusRequest& request, const ModifyAllRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAllRuleStatusOutcomeCallable ModifyAllRuleStatusCallable(const Model::ModifyAllRuleStatusRequest& request);

                /**
                 *资产扫描
                 * @param req ModifyAssetScanRequest
                 * @return ModifyAssetScanOutcome
                 */
                ModifyAssetScanOutcome ModifyAssetScan(const Model::ModifyAssetScanRequest &request);
                void ModifyAssetScanAsync(const Model::ModifyAssetScanRequest& request, const ModifyAssetScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAssetScanOutcomeCallable ModifyAssetScanCallable(const Model::ModifyAssetScanRequest& request);

                /**
                 *资产同步
                 * @param req ModifyAssetSyncRequest
                 * @return ModifyAssetSyncOutcome
                 */
                ModifyAssetSyncOutcome ModifyAssetSync(const Model::ModifyAssetSyncRequest &request);
                void ModifyAssetSyncAsync(const Model::ModifyAssetSyncRequest& request, const ModifyAssetSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAssetSyncOutcomeCallable ModifyAssetSyncCallable(const Model::ModifyAssetSyncRequest& request);

                /**
                 *支持对封禁列表、放通列表如下操作：
批量增加封禁IP、放通IP/域名
批量删除封禁IP、放通IP/域名
批量修改封禁IP、放通IP/域名生效事件
                 * @param req ModifyBlockIgnoreListRequest
                 * @return ModifyBlockIgnoreListOutcome
                 */
                ModifyBlockIgnoreListOutcome ModifyBlockIgnoreList(const Model::ModifyBlockIgnoreListRequest &request);
                void ModifyBlockIgnoreListAsync(const Model::ModifyBlockIgnoreListRequest& request, const ModifyBlockIgnoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBlockIgnoreListOutcomeCallable ModifyBlockIgnoreListCallable(const Model::ModifyBlockIgnoreListRequest& request);

                /**
                 *编辑单条入侵防御封禁列表、放通列表规则
                 * @param req ModifyBlockIgnoreRuleRequest
                 * @return ModifyBlockIgnoreRuleOutcome
                 */
                ModifyBlockIgnoreRuleOutcome ModifyBlockIgnoreRule(const Model::ModifyBlockIgnoreRuleRequest &request);
                void ModifyBlockIgnoreRuleAsync(const Model::ModifyBlockIgnoreRuleRequest& request, const ModifyBlockIgnoreRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBlockIgnoreRuleOutcomeCallable ModifyBlockIgnoreRuleCallable(const Model::ModifyBlockIgnoreRuleRequest& request);

                /**
                 *编辑单条入侵防御封禁列表、放通列表规则（新）
                 * @param req ModifyBlockIgnoreRuleNewRequest
                 * @return ModifyBlockIgnoreRuleNewOutcome
                 */
                ModifyBlockIgnoreRuleNewOutcome ModifyBlockIgnoreRuleNew(const Model::ModifyBlockIgnoreRuleNewRequest &request);
                void ModifyBlockIgnoreRuleNewAsync(const Model::ModifyBlockIgnoreRuleNewRequest& request, const ModifyBlockIgnoreRuleNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBlockIgnoreRuleNewOutcomeCallable ModifyBlockIgnoreRuleNewCallable(const Model::ModifyBlockIgnoreRuleNewRequest& request);

                /**
                 *ModifyBlockTop取消置顶接口
                 * @param req ModifyBlockTopRequest
                 * @return ModifyBlockTopOutcome
                 */
                ModifyBlockTopOutcome ModifyBlockTop(const Model::ModifyBlockTopRequest &request);
                void ModifyBlockTopAsync(const Model::ModifyBlockTopRequest& request, const ModifyBlockTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBlockTopOutcomeCallable ModifyBlockTopCallable(const Model::ModifyBlockTopRequest& request);

                /**
                 *启用停用VPC间规则或Nat边界规则
VPC间规则需指定EdgeId。Nat边界规则需指定地域Region与Direction。
                 * @param req ModifyEWRuleStatusRequest
                 * @return ModifyEWRuleStatusOutcome
                 */
                ModifyEWRuleStatusOutcome ModifyEWRuleStatus(const Model::ModifyEWRuleStatusRequest &request);
                void ModifyEWRuleStatusAsync(const Model::ModifyEWRuleStatusRequest& request, const ModifyEWRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEWRuleStatusOutcomeCallable ModifyEWRuleStatusCallable(const Model::ModifyEWRuleStatusRequest& request);

                /**
                 *修改边界防火墙开关(旁路、串行)
                 * @param req ModifyEdgeIpSwitchRequest
                 * @return ModifyEdgeIpSwitchOutcome
                 */
                ModifyEdgeIpSwitchOutcome ModifyEdgeIpSwitch(const Model::ModifyEdgeIpSwitchRequest &request);
                void ModifyEdgeIpSwitchAsync(const Model::ModifyEdgeIpSwitchRequest& request, const ModifyEdgeIpSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEdgeIpSwitchOutcomeCallable ModifyEdgeIpSwitchCallable(const Model::ModifyEdgeIpSwitchRequest& request);

                /**
                 *修改企业安全组下发状态
                 * @param req ModifyEnterpriseSecurityDispatchStatusRequest
                 * @return ModifyEnterpriseSecurityDispatchStatusOutcome
                 */
                ModifyEnterpriseSecurityDispatchStatusOutcome ModifyEnterpriseSecurityDispatchStatus(const Model::ModifyEnterpriseSecurityDispatchStatusRequest &request);
                void ModifyEnterpriseSecurityDispatchStatusAsync(const Model::ModifyEnterpriseSecurityDispatchStatusRequest& request, const ModifyEnterpriseSecurityDispatchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEnterpriseSecurityDispatchStatusOutcomeCallable ModifyEnterpriseSecurityDispatchStatusCallable(const Model::ModifyEnterpriseSecurityDispatchStatusRequest& request);

                /**
                 *编辑新企业安全组规则
                 * @param req ModifyEnterpriseSecurityGroupRuleRequest
                 * @return ModifyEnterpriseSecurityGroupRuleOutcome
                 */
                ModifyEnterpriseSecurityGroupRuleOutcome ModifyEnterpriseSecurityGroupRule(const Model::ModifyEnterpriseSecurityGroupRuleRequest &request);
                void ModifyEnterpriseSecurityGroupRuleAsync(const Model::ModifyEnterpriseSecurityGroupRuleRequest& request, const ModifyEnterpriseSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEnterpriseSecurityGroupRuleOutcomeCallable ModifyEnterpriseSecurityGroupRuleCallable(const Model::ModifyEnterpriseSecurityGroupRuleRequest& request);

                /**
                 *修改防火墙(组)开关(支持单点模式、多点模式、全互通模式)
                 * @param req ModifyFwGroupSwitchRequest
                 * @return ModifyFwGroupSwitchOutcome
                 */
                ModifyFwGroupSwitchOutcome ModifyFwGroupSwitch(const Model::ModifyFwGroupSwitchRequest &request);
                void ModifyFwGroupSwitchAsync(const Model::ModifyFwGroupSwitchRequest& request, const ModifyFwGroupSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFwGroupSwitchOutcomeCallable ModifyFwGroupSwitchCallable(const Model::ModifyFwGroupSwitchRequest& request);

                /**
                 *修改NAT访问控制规则
                 * @param req ModifyNatAcRuleRequest
                 * @return ModifyNatAcRuleOutcome
                 */
                ModifyNatAcRuleOutcome ModifyNatAcRule(const Model::ModifyNatAcRuleRequest &request);
                void ModifyNatAcRuleAsync(const Model::ModifyNatAcRuleRequest& request, const ModifyNatAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNatAcRuleOutcomeCallable ModifyNatAcRuleCallable(const Model::ModifyNatAcRuleRequest& request);

                /**
                 *防火墙实例重新选择vpc或nat
                 * @param req ModifyNatFwReSelectRequest
                 * @return ModifyNatFwReSelectOutcome
                 */
                ModifyNatFwReSelectOutcome ModifyNatFwReSelect(const Model::ModifyNatFwReSelectRequest &request);
                void ModifyNatFwReSelectAsync(const Model::ModifyNatFwReSelectRequest& request, const ModifyNatFwReSelectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNatFwReSelectOutcomeCallable ModifyNatFwReSelectCallable(const Model::ModifyNatFwReSelectRequest& request);

                /**
                 *修改NAT防火墙开关
                 * @param req ModifyNatFwSwitchRequest
                 * @return ModifyNatFwSwitchOutcome
                 */
                ModifyNatFwSwitchOutcome ModifyNatFwSwitch(const Model::ModifyNatFwSwitchRequest &request);
                void ModifyNatFwSwitchAsync(const Model::ModifyNatFwSwitchRequest& request, const ModifyNatFwSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNatFwSwitchOutcomeCallable ModifyNatFwSwitchCallable(const Model::ModifyNatFwSwitchRequest& request);

                /**
                 *nat 防火墙VPC DNS 开关切换
                 * @param req ModifyNatFwVpcDnsSwitchRequest
                 * @return ModifyNatFwVpcDnsSwitchOutcome
                 */
                ModifyNatFwVpcDnsSwitchOutcome ModifyNatFwVpcDnsSwitch(const Model::ModifyNatFwVpcDnsSwitchRequest &request);
                void ModifyNatFwVpcDnsSwitchAsync(const Model::ModifyNatFwVpcDnsSwitchRequest& request, const ModifyNatFwVpcDnsSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNatFwVpcDnsSwitchOutcomeCallable ModifyNatFwVpcDnsSwitchCallable(const Model::ModifyNatFwVpcDnsSwitchRequest& request);

                /**
                 *编辑NAT防火墙
                 * @param req ModifyNatInstanceRequest
                 * @return ModifyNatInstanceOutcome
                 */
                ModifyNatInstanceOutcome ModifyNatInstance(const Model::ModifyNatInstanceRequest &request);
                void ModifyNatInstanceAsync(const Model::ModifyNatInstanceRequest& request, const ModifyNatInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNatInstanceOutcomeCallable ModifyNatInstanceCallable(const Model::ModifyNatInstanceRequest& request);

                /**
                 *NAT防火墙规则快速排序
                 * @param req ModifyNatSequenceRulesRequest
                 * @return ModifyNatSequenceRulesOutcome
                 */
                ModifyNatSequenceRulesOutcome ModifyNatSequenceRules(const Model::ModifyNatSequenceRulesRequest &request);
                void ModifyNatSequenceRulesAsync(const Model::ModifyNatSequenceRulesRequest& request, const ModifyNatSequenceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNatSequenceRulesOutcomeCallable ModifyNatSequenceRulesCallable(const Model::ModifyNatSequenceRulesRequest& request);

                /**
                 *ModifyResourceGroup-资产中心资产组信息修改
                 * @param req ModifyResourceGroupRequest
                 * @return ModifyResourceGroupOutcome
                 */
                ModifyResourceGroupOutcome ModifyResourceGroup(const Model::ModifyResourceGroupRequest &request);
                void ModifyResourceGroupAsync(const Model::ModifyResourceGroupRequest& request, const ModifyResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyResourceGroupOutcomeCallable ModifyResourceGroupCallable(const Model::ModifyResourceGroupRequest& request);

                /**
                 *同步资产-互联网&VPC（新）
                 * @param req ModifyRunSyncAssetRequest
                 * @return ModifyRunSyncAssetOutcome
                 */
                ModifyRunSyncAssetOutcome ModifyRunSyncAsset(const Model::ModifyRunSyncAssetRequest &request);
                void ModifyRunSyncAssetAsync(const Model::ModifyRunSyncAssetRequest& request, const ModifyRunSyncAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRunSyncAssetOutcomeCallable ModifyRunSyncAssetCallable(const Model::ModifyRunSyncAssetRequest& request);

                /**
                 *启用停用单条企业安全组规则
                 * @param req ModifySecurityGroupItemRuleStatusRequest
                 * @return ModifySecurityGroupItemRuleStatusOutcome
                 */
                ModifySecurityGroupItemRuleStatusOutcome ModifySecurityGroupItemRuleStatus(const Model::ModifySecurityGroupItemRuleStatusRequest &request);
                void ModifySecurityGroupItemRuleStatusAsync(const Model::ModifySecurityGroupItemRuleStatusRequest& request, const ModifySecurityGroupItemRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityGroupItemRuleStatusOutcomeCallable ModifySecurityGroupItemRuleStatusCallable(const Model::ModifySecurityGroupItemRuleStatusRequest& request);

                /**
                 *编辑单条安全组规则
                 * @param req ModifySecurityGroupRuleRequest
                 * @return ModifySecurityGroupRuleOutcome
                 */
                ModifySecurityGroupRuleOutcome ModifySecurityGroupRule(const Model::ModifySecurityGroupRuleRequest &request);
                void ModifySecurityGroupRuleAsync(const Model::ModifySecurityGroupRuleRequest& request, const ModifySecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityGroupRuleOutcomeCallable ModifySecurityGroupRuleCallable(const Model::ModifySecurityGroupRuleRequest& request);

                /**
                 *企业安全组规则快速排序
                 * @param req ModifySecurityGroupSequenceRulesRequest
                 * @return ModifySecurityGroupSequenceRulesOutcome
                 */
                ModifySecurityGroupSequenceRulesOutcome ModifySecurityGroupSequenceRules(const Model::ModifySecurityGroupSequenceRulesRequest &request);
                void ModifySecurityGroupSequenceRulesAsync(const Model::ModifySecurityGroupSequenceRulesRequest& request, const ModifySecurityGroupSequenceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityGroupSequenceRulesOutcomeCallable ModifySecurityGroupSequenceRulesCallable(const Model::ModifySecurityGroupSequenceRulesRequest& request);

                /**
                 *互联网边界规则快速排序
                 * @param req ModifySequenceAclRulesRequest
                 * @return ModifySequenceAclRulesOutcome
                 */
                ModifySequenceAclRulesOutcome ModifySequenceAclRules(const Model::ModifySequenceAclRulesRequest &request);
                void ModifySequenceAclRulesAsync(const Model::ModifySequenceAclRulesRequest& request, const ModifySequenceAclRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySequenceAclRulesOutcomeCallable ModifySequenceAclRulesCallable(const Model::ModifySequenceAclRulesRequest& request);

                /**
                 *修改规则执行顺序
                 * @param req ModifySequenceRulesRequest
                 * @return ModifySequenceRulesOutcome
                 */
                ModifySequenceRulesOutcome ModifySequenceRules(const Model::ModifySequenceRulesRequest &request);
                void ModifySequenceRulesAsync(const Model::ModifySequenceRulesRequest& request, const ModifySequenceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySequenceRulesOutcomeCallable ModifySequenceRulesCallable(const Model::ModifySequenceRulesRequest& request);

                /**
                 *日志存储设置，可以修改存储时间和清空日志
                 * @param req ModifyStorageSettingRequest
                 * @return ModifyStorageSettingOutcome
                 */
                ModifyStorageSettingOutcome ModifyStorageSetting(const Model::ModifyStorageSettingRequest &request);
                void ModifyStorageSettingAsync(const Model::ModifyStorageSettingRequest& request, const ModifyStorageSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStorageSettingOutcomeCallable ModifyStorageSettingCallable(const Model::ModifyStorageSettingRequest& request);

                /**
                 *修改规则表状态
                 * @param req ModifyTableStatusRequest
                 * @return ModifyTableStatusOutcome
                 */
                ModifyTableStatusOutcome ModifyTableStatus(const Model::ModifyTableStatusRequest &request);
                void ModifyTableStatusAsync(const Model::ModifyTableStatusRequest& request, const ModifyTableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTableStatusOutcomeCallable ModifyTableStatusCallable(const Model::ModifyTableStatusRequest& request);

                /**
                 *修改内网间访问控制规则
                 * @param req ModifyVpcAcRuleRequest
                 * @return ModifyVpcAcRuleOutcome
                 */
                ModifyVpcAcRuleOutcome ModifyVpcAcRule(const Model::ModifyVpcAcRuleRequest &request);
                void ModifyVpcAcRuleAsync(const Model::ModifyVpcAcRuleRequest& request, const ModifyVpcAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpcAcRuleOutcomeCallable ModifyVpcAcRuleCallable(const Model::ModifyVpcAcRuleRequest& request);

                /**
                 *编辑VPC间防火墙(防火墙组)
                 * @param req ModifyVpcFwGroupRequest
                 * @return ModifyVpcFwGroupOutcome
                 */
                ModifyVpcFwGroupOutcome ModifyVpcFwGroup(const Model::ModifyVpcFwGroupRequest &request);
                void ModifyVpcFwGroupAsync(const Model::ModifyVpcFwGroupRequest& request, const ModifyVpcFwGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpcFwGroupOutcomeCallable ModifyVpcFwGroupCallable(const Model::ModifyVpcFwGroupRequest& request);

                /**
                 *vpc间规则快速排序
                 * @param req ModifyVpcFwSequenceRulesRequest
                 * @return ModifyVpcFwSequenceRulesOutcome
                 */
                ModifyVpcFwSequenceRulesOutcome ModifyVpcFwSequenceRules(const Model::ModifyVpcFwSequenceRulesRequest &request);
                void ModifyVpcFwSequenceRulesAsync(const Model::ModifyVpcFwSequenceRulesRequest& request, const ModifyVpcFwSequenceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpcFwSequenceRulesOutcomeCallable ModifyVpcFwSequenceRulesCallable(const Model::ModifyVpcFwSequenceRulesRequest& request);

                /**
                 *删除互联网边界规则
                 * @param req RemoveAcRuleRequest
                 * @return RemoveAcRuleOutcome
                 */
                RemoveAcRuleOutcome RemoveAcRule(const Model::RemoveAcRuleRequest &request);
                void RemoveAcRuleAsync(const Model::RemoveAcRuleRequest& request, const RemoveAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveAcRuleOutcomeCallable RemoveAcRuleCallable(const Model::RemoveAcRuleRequest& request);

                /**
                 *删除互联网边界访问控制规则
                 * @param req RemoveAclRuleRequest
                 * @return RemoveAclRuleOutcome
                 */
                RemoveAclRuleOutcome RemoveAclRule(const Model::RemoveAclRuleRequest &request);
                void RemoveAclRuleAsync(const Model::RemoveAclRuleRequest& request, const RemoveAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveAclRuleOutcomeCallable RemoveAclRuleCallable(const Model::RemoveAclRuleRequest& request);

                /**
                 *删除新企业安全组规则
                 * @param req RemoveEnterpriseSecurityGroupRuleRequest
                 * @return RemoveEnterpriseSecurityGroupRuleOutcome
                 */
                RemoveEnterpriseSecurityGroupRuleOutcome RemoveEnterpriseSecurityGroupRule(const Model::RemoveEnterpriseSecurityGroupRuleRequest &request);
                void RemoveEnterpriseSecurityGroupRuleAsync(const Model::RemoveEnterpriseSecurityGroupRuleRequest& request, const RemoveEnterpriseSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveEnterpriseSecurityGroupRuleOutcomeCallable RemoveEnterpriseSecurityGroupRuleCallable(const Model::RemoveEnterpriseSecurityGroupRuleRequest& request);

                /**
                 *删除NAT访问控制规则
                 * @param req RemoveNatAcRuleRequest
                 * @return RemoveNatAcRuleOutcome
                 */
                RemoveNatAcRuleOutcome RemoveNatAcRule(const Model::RemoveNatAcRuleRequest &request);
                void RemoveNatAcRuleAsync(const Model::RemoveNatAcRuleRequest& request, const RemoveNatAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveNatAcRuleOutcomeCallable RemoveNatAcRuleCallable(const Model::RemoveNatAcRuleRequest& request);

                /**
                 *删除VPC间规则
                 * @param req RemoveVpcAcRuleRequest
                 * @return RemoveVpcAcRuleOutcome
                 */
                RemoveVpcAcRuleOutcome RemoveVpcAcRule(const Model::RemoveVpcAcRuleRequest &request);
                void RemoveVpcAcRuleAsync(const Model::RemoveVpcAcRuleRequest& request, const RemoveVpcAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveVpcAcRuleOutcomeCallable RemoveVpcAcRuleCallable(const Model::RemoveVpcAcRuleRequest& request);

                /**
                 *本接口用于检索分析日志，使用该接口时请注意如下事项：
1. 该接口除受默认接口请求频率限制外，针对单个日志主题，查询并发数不能超过15。
2. 检索语法建议使用日志服务专用检索语法CQL，请使用SyntaxRule参数，将值设置为1，控制台默认也使用该语法规则。
3. API返回数据包最大49MB，建议启用 gzip 压缩（HTTP Request Header Accept-Encoding:gzip）。
                 * @param req SearchLogRequest
                 * @return SearchLogOutcome
                 */
                SearchLogOutcome SearchLog(const Model::SearchLogRequest &request);
                void SearchLogAsync(const Model::SearchLogRequest& request, const SearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchLogOutcomeCallable SearchLogCallable(const Model::SearchLogRequest& request);

                /**
                 *配置防火墙Dnat规则
                 * @param req SetNatFwDnatRuleRequest
                 * @return SetNatFwDnatRuleOutcome
                 */
                SetNatFwDnatRuleOutcome SetNatFwDnatRule(const Model::SetNatFwDnatRuleRequest &request);
                void SetNatFwDnatRuleAsync(const Model::SetNatFwDnatRuleRequest& request, const SetNatFwDnatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetNatFwDnatRuleOutcomeCallable SetNatFwDnatRuleCallable(const Model::SetNatFwDnatRuleRequest& request);

                /**
                 *设置防火墙实例弹性公网ip，目前仅支持新增模式的防火墙实例
                 * @param req SetNatFwEipRequest
                 * @return SetNatFwEipOutcome
                 */
                SetNatFwEipOutcome SetNatFwEip(const Model::SetNatFwEipRequest &request);
                void SetNatFwEipAsync(const Model::SetNatFwEipRequest& request, const SetNatFwEipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetNatFwEipOutcomeCallable SetNatFwEipCallable(const Model::SetNatFwEipRequest& request);

                /**
                 *中止安全组规则下发
                 * @param req StopSecurityGroupRuleDispatchRequest
                 * @return StopSecurityGroupRuleDispatchOutcome
                 */
                StopSecurityGroupRuleDispatchOutcome StopSecurityGroupRuleDispatch(const Model::StopSecurityGroupRuleDispatchRequest &request);
                void StopSecurityGroupRuleDispatchAsync(const Model::StopSecurityGroupRuleDispatchRequest& request, const StopSecurityGroupRuleDispatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopSecurityGroupRuleDispatchOutcomeCallable StopSecurityGroupRuleDispatchCallable(const Model::StopSecurityGroupRuleDispatchRequest& request);

                /**
                 *同步防火墙操作，包括同步防火墙路由（若vpc，专线网关等增加了Cidr，需要手动同步一下路由使之在防火墙上生效）等。
                 * @param req SyncFwOperateRequest
                 * @return SyncFwOperateOutcome
                 */
                SyncFwOperateOutcome SyncFwOperate(const Model::SyncFwOperateRequest &request);
                void SyncFwOperateAsync(const Model::SyncFwOperateRequest& request, const SyncFwOperateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncFwOperateOutcomeCallable SyncFwOperateCallable(const Model::SyncFwOperateRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_CFWCLIENT_H_
