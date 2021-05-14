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
#include <tencentcloud/cfw/v20190904/model/CreateAcRulesRequest.h>
#include <tencentcloud/cfw/v20190904/model/CreateAcRulesResponse.h>
#include <tencentcloud/cfw/v20190904/model/CreateSecurityGroupApiRulesRequest.h>
#include <tencentcloud/cfw/v20190904/model/CreateSecurityGroupApiRulesResponse.h>
#include <tencentcloud/cfw/v20190904/model/DeleteAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/DeleteAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/DeleteAllAccessControlRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/DeleteAllAccessControlRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/DeleteSecurityGroupAllRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/DeleteSecurityGroupAllRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/DeleteSecurityGroupRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/DeleteSecurityGroupRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeAcListsRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeAcListsResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeAssociatedInstanceListRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeAssociatedInstanceListResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeCfwEipsRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeCfwEipsResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeGuideScanInfoRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeGuideScanInfoResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatRuleOverviewRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatRuleOverviewResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeRuleOverviewRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeRuleOverviewResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeSecurityGroupListRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeSecurityGroupListResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeSwitchListsRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeSwitchListsResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeSyncAssetStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeSyncAssetStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeTableStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeTableStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeVpcRuleOverviewRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeVpcRuleOverviewResponse.h>
#include <tencentcloud/cfw/v20190904/model/ExpandCfwVerticalRequest.h>
#include <tencentcloud/cfw/v20190904/model/ExpandCfwVerticalResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAllRuleStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAllRuleStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAllSwitchStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAllSwitchStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyBlockIgnoreListRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyBlockIgnoreListResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyItemSwitchStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyItemSwitchStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifySecurityGroupAllRuleStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifySecurityGroupAllRuleStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifySequenceRulesRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifySequenceRulesResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyTableStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyTableStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/RunSyncAssetRequest.h>
#include <tencentcloud/cfw/v20190904/model/RunSyncAssetResponse.h>
#include <tencentcloud/cfw/v20190904/model/SetNatFwDnatRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/SetNatFwDnatRuleResponse.h>


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

                typedef Outcome<Error, Model::CreateAcRulesResponse> CreateAcRulesOutcome;
                typedef std::future<CreateAcRulesOutcome> CreateAcRulesOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::CreateAcRulesRequest&, CreateAcRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAcRulesAsyncHandler;
                typedef Outcome<Error, Model::CreateSecurityGroupApiRulesResponse> CreateSecurityGroupApiRulesOutcome;
                typedef std::future<CreateSecurityGroupApiRulesOutcome> CreateSecurityGroupApiRulesOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::CreateSecurityGroupApiRulesRequest&, CreateSecurityGroupApiRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupApiRulesAsyncHandler;
                typedef Outcome<Error, Model::DeleteAcRuleResponse> DeleteAcRuleOutcome;
                typedef std::future<DeleteAcRuleOutcome> DeleteAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DeleteAcRuleRequest&, DeleteAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAcRuleAsyncHandler;
                typedef Outcome<Error, Model::DeleteAllAccessControlRuleResponse> DeleteAllAccessControlRuleOutcome;
                typedef std::future<DeleteAllAccessControlRuleOutcome> DeleteAllAccessControlRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DeleteAllAccessControlRuleRequest&, DeleteAllAccessControlRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAllAccessControlRuleAsyncHandler;
                typedef Outcome<Error, Model::DeleteSecurityGroupAllRuleResponse> DeleteSecurityGroupAllRuleOutcome;
                typedef std::future<DeleteSecurityGroupAllRuleOutcome> DeleteSecurityGroupAllRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DeleteSecurityGroupAllRuleRequest&, DeleteSecurityGroupAllRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityGroupAllRuleAsyncHandler;
                typedef Outcome<Error, Model::DeleteSecurityGroupRuleResponse> DeleteSecurityGroupRuleOutcome;
                typedef std::future<DeleteSecurityGroupRuleOutcome> DeleteSecurityGroupRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DeleteSecurityGroupRuleRequest&, DeleteSecurityGroupRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityGroupRuleAsyncHandler;
                typedef Outcome<Error, Model::DescribeAcListsResponse> DescribeAcListsOutcome;
                typedef std::future<DescribeAcListsOutcome> DescribeAcListsOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeAcListsRequest&, DescribeAcListsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAcListsAsyncHandler;
                typedef Outcome<Error, Model::DescribeAssociatedInstanceListResponse> DescribeAssociatedInstanceListOutcome;
                typedef std::future<DescribeAssociatedInstanceListOutcome> DescribeAssociatedInstanceListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeAssociatedInstanceListRequest&, DescribeAssociatedInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssociatedInstanceListAsyncHandler;
                typedef Outcome<Error, Model::DescribeCfwEipsResponse> DescribeCfwEipsOutcome;
                typedef std::future<DescribeCfwEipsOutcome> DescribeCfwEipsOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeCfwEipsRequest&, DescribeCfwEipsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCfwEipsAsyncHandler;
                typedef Outcome<Error, Model::DescribeGuideScanInfoResponse> DescribeGuideScanInfoOutcome;
                typedef std::future<DescribeGuideScanInfoOutcome> DescribeGuideScanInfoOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeGuideScanInfoRequest&, DescribeGuideScanInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGuideScanInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeNatRuleOverviewResponse> DescribeNatRuleOverviewOutcome;
                typedef std::future<DescribeNatRuleOverviewOutcome> DescribeNatRuleOverviewOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeNatRuleOverviewRequest&, DescribeNatRuleOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatRuleOverviewAsyncHandler;
                typedef Outcome<Error, Model::DescribeRuleOverviewResponse> DescribeRuleOverviewOutcome;
                typedef std::future<DescribeRuleOverviewOutcome> DescribeRuleOverviewOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeRuleOverviewRequest&, DescribeRuleOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleOverviewAsyncHandler;
                typedef Outcome<Error, Model::DescribeSecurityGroupListResponse> DescribeSecurityGroupListOutcome;
                typedef std::future<DescribeSecurityGroupListOutcome> DescribeSecurityGroupListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeSecurityGroupListRequest&, DescribeSecurityGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupListAsyncHandler;
                typedef Outcome<Error, Model::DescribeSwitchListsResponse> DescribeSwitchListsOutcome;
                typedef std::future<DescribeSwitchListsOutcome> DescribeSwitchListsOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeSwitchListsRequest&, DescribeSwitchListsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSwitchListsAsyncHandler;
                typedef Outcome<Error, Model::DescribeSyncAssetStatusResponse> DescribeSyncAssetStatusOutcome;
                typedef std::future<DescribeSyncAssetStatusOutcome> DescribeSyncAssetStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeSyncAssetStatusRequest&, DescribeSyncAssetStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSyncAssetStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeTableStatusResponse> DescribeTableStatusOutcome;
                typedef std::future<DescribeTableStatusOutcome> DescribeTableStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeTableStatusRequest&, DescribeTableStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpcRuleOverviewResponse> DescribeVpcRuleOverviewOutcome;
                typedef std::future<DescribeVpcRuleOverviewOutcome> DescribeVpcRuleOverviewOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeVpcRuleOverviewRequest&, DescribeVpcRuleOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcRuleOverviewAsyncHandler;
                typedef Outcome<Error, Model::ExpandCfwVerticalResponse> ExpandCfwVerticalOutcome;
                typedef std::future<ExpandCfwVerticalOutcome> ExpandCfwVerticalOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ExpandCfwVerticalRequest&, ExpandCfwVerticalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExpandCfwVerticalAsyncHandler;
                typedef Outcome<Error, Model::ModifyAcRuleResponse> ModifyAcRuleOutcome;
                typedef std::future<ModifyAcRuleOutcome> ModifyAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyAcRuleRequest&, ModifyAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAcRuleAsyncHandler;
                typedef Outcome<Error, Model::ModifyAllRuleStatusResponse> ModifyAllRuleStatusOutcome;
                typedef std::future<ModifyAllRuleStatusOutcome> ModifyAllRuleStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyAllRuleStatusRequest&, ModifyAllRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAllRuleStatusAsyncHandler;
                typedef Outcome<Error, Model::ModifyAllSwitchStatusResponse> ModifyAllSwitchStatusOutcome;
                typedef std::future<ModifyAllSwitchStatusOutcome> ModifyAllSwitchStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyAllSwitchStatusRequest&, ModifyAllSwitchStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAllSwitchStatusAsyncHandler;
                typedef Outcome<Error, Model::ModifyBlockIgnoreListResponse> ModifyBlockIgnoreListOutcome;
                typedef std::future<ModifyBlockIgnoreListOutcome> ModifyBlockIgnoreListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyBlockIgnoreListRequest&, ModifyBlockIgnoreListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBlockIgnoreListAsyncHandler;
                typedef Outcome<Error, Model::ModifyItemSwitchStatusResponse> ModifyItemSwitchStatusOutcome;
                typedef std::future<ModifyItemSwitchStatusOutcome> ModifyItemSwitchStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyItemSwitchStatusRequest&, ModifyItemSwitchStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyItemSwitchStatusAsyncHandler;
                typedef Outcome<Error, Model::ModifySecurityGroupAllRuleStatusResponse> ModifySecurityGroupAllRuleStatusOutcome;
                typedef std::future<ModifySecurityGroupAllRuleStatusOutcome> ModifySecurityGroupAllRuleStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifySecurityGroupAllRuleStatusRequest&, ModifySecurityGroupAllRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupAllRuleStatusAsyncHandler;
                typedef Outcome<Error, Model::ModifySequenceRulesResponse> ModifySequenceRulesOutcome;
                typedef std::future<ModifySequenceRulesOutcome> ModifySequenceRulesOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifySequenceRulesRequest&, ModifySequenceRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySequenceRulesAsyncHandler;
                typedef Outcome<Error, Model::ModifyTableStatusResponse> ModifyTableStatusOutcome;
                typedef std::future<ModifyTableStatusOutcome> ModifyTableStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyTableStatusRequest&, ModifyTableStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTableStatusAsyncHandler;
                typedef Outcome<Error, Model::RunSyncAssetResponse> RunSyncAssetOutcome;
                typedef std::future<RunSyncAssetOutcome> RunSyncAssetOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::RunSyncAssetRequest&, RunSyncAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunSyncAssetAsyncHandler;
                typedef Outcome<Error, Model::SetNatFwDnatRuleResponse> SetNatFwDnatRuleOutcome;
                typedef std::future<SetNatFwDnatRuleOutcome> SetNatFwDnatRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::SetNatFwDnatRuleRequest&, SetNatFwDnatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetNatFwDnatRuleAsyncHandler;



                /**
                 *创建规则
                 * @param req CreateAcRulesRequest
                 * @return CreateAcRulesOutcome
                 */
                CreateAcRulesOutcome CreateAcRules(const Model::CreateAcRulesRequest &request);
                void CreateAcRulesAsync(const Model::CreateAcRulesRequest& request, const CreateAcRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAcRulesOutcomeCallable CreateAcRulesCallable(const Model::CreateAcRulesRequest& request);

                /**
                 *创建安全组API规则
                 * @param req CreateSecurityGroupApiRulesRequest
                 * @return CreateSecurityGroupApiRulesOutcome
                 */
                CreateSecurityGroupApiRulesOutcome CreateSecurityGroupApiRules(const Model::CreateSecurityGroupApiRulesRequest &request);
                void CreateSecurityGroupApiRulesAsync(const Model::CreateSecurityGroupApiRulesRequest& request, const CreateSecurityGroupApiRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityGroupApiRulesOutcomeCallable CreateSecurityGroupApiRulesCallable(const Model::CreateSecurityGroupApiRulesRequest& request);

                /**
                 *删除规则
                 * @param req DeleteAcRuleRequest
                 * @return DeleteAcRuleOutcome
                 */
                DeleteAcRuleOutcome DeleteAcRule(const Model::DeleteAcRuleRequest &request);
                void DeleteAcRuleAsync(const Model::DeleteAcRuleRequest& request, const DeleteAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAcRuleOutcomeCallable DeleteAcRuleCallable(const Model::DeleteAcRuleRequest& request);

                /**
                 *全部删除规则
                 * @param req DeleteAllAccessControlRuleRequest
                 * @return DeleteAllAccessControlRuleOutcome
                 */
                DeleteAllAccessControlRuleOutcome DeleteAllAccessControlRule(const Model::DeleteAllAccessControlRuleRequest &request);
                void DeleteAllAccessControlRuleAsync(const Model::DeleteAllAccessControlRuleRequest& request, const DeleteAllAccessControlRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAllAccessControlRuleOutcomeCallable DeleteAllAccessControlRuleCallable(const Model::DeleteAllAccessControlRuleRequest& request);

                /**
                 *删除全部规则
                 * @param req DeleteSecurityGroupAllRuleRequest
                 * @return DeleteSecurityGroupAllRuleOutcome
                 */
                DeleteSecurityGroupAllRuleOutcome DeleteSecurityGroupAllRule(const Model::DeleteSecurityGroupAllRuleRequest &request);
                void DeleteSecurityGroupAllRuleAsync(const Model::DeleteSecurityGroupAllRuleRequest& request, const DeleteSecurityGroupAllRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityGroupAllRuleOutcomeCallable DeleteSecurityGroupAllRuleCallable(const Model::DeleteSecurityGroupAllRuleRequest& request);

                /**
                 *删除规则
                 * @param req DeleteSecurityGroupRuleRequest
                 * @return DeleteSecurityGroupRuleOutcome
                 */
                DeleteSecurityGroupRuleOutcome DeleteSecurityGroupRule(const Model::DeleteSecurityGroupRuleRequest &request);
                void DeleteSecurityGroupRuleAsync(const Model::DeleteSecurityGroupRuleRequest& request, const DeleteSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityGroupRuleOutcomeCallable DeleteSecurityGroupRuleCallable(const Model::DeleteSecurityGroupRuleRequest& request);

                /**
                 *访问控制列表
                 * @param req DescribeAcListsRequest
                 * @return DescribeAcListsOutcome
                 */
                DescribeAcListsOutcome DescribeAcLists(const Model::DescribeAcListsRequest &request);
                void DescribeAcListsAsync(const Model::DescribeAcListsRequest& request, const DescribeAcListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAcListsOutcomeCallable DescribeAcListsCallable(const Model::DescribeAcListsRequest& request);

                /**
                 *获取安全组关联实例列表
                 * @param req DescribeAssociatedInstanceListRequest
                 * @return DescribeAssociatedInstanceListOutcome
                 */
                DescribeAssociatedInstanceListOutcome DescribeAssociatedInstanceList(const Model::DescribeAssociatedInstanceListRequest &request);
                void DescribeAssociatedInstanceListAsync(const Model::DescribeAssociatedInstanceListRequest& request, const DescribeAssociatedInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssociatedInstanceListOutcomeCallable DescribeAssociatedInstanceListCallable(const Model::DescribeAssociatedInstanceListRequest& request);

                /**
                 *查询防火墙弹性公网ip
                 * @param req DescribeCfwEipsRequest
                 * @return DescribeCfwEipsOutcome
                 */
                DescribeCfwEipsOutcome DescribeCfwEips(const Model::DescribeCfwEipsRequest &request);
                void DescribeCfwEipsAsync(const Model::DescribeCfwEipsRequest& request, const DescribeCfwEipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCfwEipsOutcomeCallable DescribeCfwEipsCallable(const Model::DescribeCfwEipsRequest& request);

                /**
                 *DescribeGuideScanInfo新手引导扫描接口信息
                 * @param req DescribeGuideScanInfoRequest
                 * @return DescribeGuideScanInfoOutcome
                 */
                DescribeGuideScanInfoOutcome DescribeGuideScanInfo(const Model::DescribeGuideScanInfoRequest &request);
                void DescribeGuideScanInfoAsync(const Model::DescribeGuideScanInfoRequest& request, const DescribeGuideScanInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGuideScanInfoOutcomeCallable DescribeGuideScanInfoCallable(const Model::DescribeGuideScanInfoRequest& request);

                /**
                 *nat规则列表概况
                 * @param req DescribeNatRuleOverviewRequest
                 * @return DescribeNatRuleOverviewOutcome
                 */
                DescribeNatRuleOverviewOutcome DescribeNatRuleOverview(const Model::DescribeNatRuleOverviewRequest &request);
                void DescribeNatRuleOverviewAsync(const Model::DescribeNatRuleOverviewRequest& request, const DescribeNatRuleOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatRuleOverviewOutcomeCallable DescribeNatRuleOverviewCallable(const Model::DescribeNatRuleOverviewRequest& request);

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
                 *防火墙开关列表
                 * @param req DescribeSwitchListsRequest
                 * @return DescribeSwitchListsOutcome
                 */
                DescribeSwitchListsOutcome DescribeSwitchLists(const Model::DescribeSwitchListsRequest &request);
                void DescribeSwitchListsAsync(const Model::DescribeSwitchListsRequest& request, const DescribeSwitchListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSwitchListsOutcomeCallable DescribeSwitchListsCallable(const Model::DescribeSwitchListsRequest& request);

                /**
                 *同步资产状态查询-互联网&VPC
                 * @param req DescribeSyncAssetStatusRequest
                 * @return DescribeSyncAssetStatusOutcome
                 */
                DescribeSyncAssetStatusOutcome DescribeSyncAssetStatus(const Model::DescribeSyncAssetStatusRequest &request);
                void DescribeSyncAssetStatusAsync(const Model::DescribeSyncAssetStatusRequest& request, const DescribeSyncAssetStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSyncAssetStatusOutcomeCallable DescribeSyncAssetStatusCallable(const Model::DescribeSyncAssetStatusRequest& request);

                /**
                 *查询规则表状态
                 * @param req DescribeTableStatusRequest
                 * @return DescribeTableStatusOutcome
                 */
                DescribeTableStatusOutcome DescribeTableStatus(const Model::DescribeTableStatusRequest &request);
                void DescribeTableStatusAsync(const Model::DescribeTableStatusRequest& request, const DescribeTableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableStatusOutcomeCallable DescribeTableStatusCallable(const Model::DescribeTableStatusRequest& request);

                /**
                 *vpc规则列表概况
                 * @param req DescribeVpcRuleOverviewRequest
                 * @return DescribeVpcRuleOverviewOutcome
                 */
                DescribeVpcRuleOverviewOutcome DescribeVpcRuleOverview(const Model::DescribeVpcRuleOverviewRequest &request);
                void DescribeVpcRuleOverviewAsync(const Model::DescribeVpcRuleOverviewRequest& request, const DescribeVpcRuleOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcRuleOverviewOutcomeCallable DescribeVpcRuleOverviewCallable(const Model::DescribeVpcRuleOverviewRequest& request);

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
                 *启用停用全部规则
                 * @param req ModifyAllRuleStatusRequest
                 * @return ModifyAllRuleStatusOutcome
                 */
                ModifyAllRuleStatusOutcome ModifyAllRuleStatus(const Model::ModifyAllRuleStatusRequest &request);
                void ModifyAllRuleStatusAsync(const Model::ModifyAllRuleStatusRequest& request, const ModifyAllRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAllRuleStatusOutcomeCallable ModifyAllRuleStatusCallable(const Model::ModifyAllRuleStatusRequest& request);

                /**
                 *一键开启和关闭
                 * @param req ModifyAllSwitchStatusRequest
                 * @return ModifyAllSwitchStatusOutcome
                 */
                ModifyAllSwitchStatusOutcome ModifyAllSwitchStatus(const Model::ModifyAllSwitchStatusRequest &request);
                void ModifyAllSwitchStatusAsync(const Model::ModifyAllSwitchStatusRequest& request, const ModifyAllSwitchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAllSwitchStatusOutcomeCallable ModifyAllSwitchStatusCallable(const Model::ModifyAllSwitchStatusRequest& request);

                /**
                 *支持对拦截列表、忽略列表如下操作：
批量增加拦截IP、忽略IP/域名
批量删除拦截IP、忽略IP/域名
批量修改拦截IP、忽略IP/域名生效事件
                 * @param req ModifyBlockIgnoreListRequest
                 * @return ModifyBlockIgnoreListOutcome
                 */
                ModifyBlockIgnoreListOutcome ModifyBlockIgnoreList(const Model::ModifyBlockIgnoreListRequest &request);
                void ModifyBlockIgnoreListAsync(const Model::ModifyBlockIgnoreListRequest& request, const ModifyBlockIgnoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBlockIgnoreListOutcomeCallable ModifyBlockIgnoreListCallable(const Model::ModifyBlockIgnoreListRequest& request);

                /**
                 *修改单个防火墙开关
                 * @param req ModifyItemSwitchStatusRequest
                 * @return ModifyItemSwitchStatusOutcome
                 */
                ModifyItemSwitchStatusOutcome ModifyItemSwitchStatus(const Model::ModifyItemSwitchStatusRequest &request);
                void ModifyItemSwitchStatusAsync(const Model::ModifyItemSwitchStatusRequest& request, const ModifyItemSwitchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyItemSwitchStatusOutcomeCallable ModifyItemSwitchStatusCallable(const Model::ModifyItemSwitchStatusRequest& request);

                /**
                 *启用停用全部规则
                 * @param req ModifySecurityGroupAllRuleStatusRequest
                 * @return ModifySecurityGroupAllRuleStatusOutcome
                 */
                ModifySecurityGroupAllRuleStatusOutcome ModifySecurityGroupAllRuleStatus(const Model::ModifySecurityGroupAllRuleStatusRequest &request);
                void ModifySecurityGroupAllRuleStatusAsync(const Model::ModifySecurityGroupAllRuleStatusRequest& request, const ModifySecurityGroupAllRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityGroupAllRuleStatusOutcomeCallable ModifySecurityGroupAllRuleStatusCallable(const Model::ModifySecurityGroupAllRuleStatusRequest& request);

                /**
                 *修改规则执行顺序
                 * @param req ModifySequenceRulesRequest
                 * @return ModifySequenceRulesOutcome
                 */
                ModifySequenceRulesOutcome ModifySequenceRules(const Model::ModifySequenceRulesRequest &request);
                void ModifySequenceRulesAsync(const Model::ModifySequenceRulesRequest& request, const ModifySequenceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySequenceRulesOutcomeCallable ModifySequenceRulesCallable(const Model::ModifySequenceRulesRequest& request);

                /**
                 *修改规则表状态
                 * @param req ModifyTableStatusRequest
                 * @return ModifyTableStatusOutcome
                 */
                ModifyTableStatusOutcome ModifyTableStatus(const Model::ModifyTableStatusRequest &request);
                void ModifyTableStatusAsync(const Model::ModifyTableStatusRequest& request, const ModifyTableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTableStatusOutcomeCallable ModifyTableStatusCallable(const Model::ModifyTableStatusRequest& request);

                /**
                 *同步资产-互联网&VPC
                 * @param req RunSyncAssetRequest
                 * @return RunSyncAssetOutcome
                 */
                RunSyncAssetOutcome RunSyncAsset(const Model::RunSyncAssetRequest &request);
                void RunSyncAssetAsync(const Model::RunSyncAssetRequest& request, const RunSyncAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunSyncAssetOutcomeCallable RunSyncAssetCallable(const Model::RunSyncAssetRequest& request);

                /**
                 *配置防火墙Dnat规则
                 * @param req SetNatFwDnatRuleRequest
                 * @return SetNatFwDnatRuleOutcome
                 */
                SetNatFwDnatRuleOutcome SetNatFwDnatRule(const Model::SetNatFwDnatRuleRequest &request);
                void SetNatFwDnatRuleAsync(const Model::SetNatFwDnatRuleRequest& request, const SetNatFwDnatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetNatFwDnatRuleOutcomeCallable SetNatFwDnatRuleCallable(const Model::SetNatFwDnatRuleRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_CFWCLIENT_H_
