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

#ifndef TENCENTCLOUD_CDWPG_V20201230_CDWPGCLIENT_H_
#define TENCENTCLOUD_CDWPG_V20201230_CDWPGCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cdwpg/v20201230/model/CreateInstanceByApiRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/CreateInstanceByApiResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeAccountsRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeAccountsResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeDBConfigHistoryRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeDBConfigHistoryResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeDBParamsRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeDBParamsResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeErrorLogRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeErrorLogResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeInstanceRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeInstanceResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeInstanceInfoRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeInstanceInfoResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeInstanceNodesRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeInstanceNodesResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeInstanceOperationsRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeInstanceOperationsResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeInstanceStateRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeInstanceStateResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeInstancesRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeInstancesResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeSimpleInstancesRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeSimpleInstancesResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeSlowLogRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeSlowLogResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeUpgradeListRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeUpgradeListResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeUserHbaConfigRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/DescribeUserHbaConfigResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/DestroyInstanceByApiRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/DestroyInstanceByApiResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/ModifyDBParametersRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/ModifyDBParametersResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/ModifyInstanceRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/ModifyInstanceResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/ModifyUserHbaRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/ModifyUserHbaResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/ResetAccountPasswordRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/ResetAccountPasswordResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/RestartInstanceRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/RestartInstanceResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/ScaleOutInstanceRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/ScaleOutInstanceResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/ScaleUpInstanceRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/ScaleUpInstanceResponse.h>
#include <tencentcloud/cdwpg/v20201230/model/UpgradeInstanceRequest.h>
#include <tencentcloud/cdwpg/v20201230/model/UpgradeInstanceResponse.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            class CdwpgClient : public AbstractClient
            {
            public:
                CdwpgClient(const Credential &credential, const std::string &region);
                CdwpgClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateInstanceByApiResponse> CreateInstanceByApiOutcome;
                typedef std::future<CreateInstanceByApiOutcome> CreateInstanceByApiOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::CreateInstanceByApiRequest&, CreateInstanceByApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceByApiAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountsResponse> DescribeAccountsOutcome;
                typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::DescribeAccountsRequest&, DescribeAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBConfigHistoryResponse> DescribeDBConfigHistoryOutcome;
                typedef std::future<DescribeDBConfigHistoryOutcome> DescribeDBConfigHistoryOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::DescribeDBConfigHistoryRequest&, DescribeDBConfigHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBConfigHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBParamsResponse> DescribeDBParamsOutcome;
                typedef std::future<DescribeDBParamsOutcome> DescribeDBParamsOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::DescribeDBParamsRequest&, DescribeDBParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBParamsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeErrorLogResponse> DescribeErrorLogOutcome;
                typedef std::future<DescribeErrorLogOutcome> DescribeErrorLogOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::DescribeErrorLogRequest&, DescribeErrorLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeErrorLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceResponse> DescribeInstanceOutcome;
                typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::DescribeInstanceRequest&, DescribeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceInfoResponse> DescribeInstanceInfoOutcome;
                typedef std::future<DescribeInstanceInfoOutcome> DescribeInstanceInfoOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::DescribeInstanceInfoRequest&, DescribeInstanceInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceNodesResponse> DescribeInstanceNodesOutcome;
                typedef std::future<DescribeInstanceNodesOutcome> DescribeInstanceNodesOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::DescribeInstanceNodesRequest&, DescribeInstanceNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceOperationsResponse> DescribeInstanceOperationsOutcome;
                typedef std::future<DescribeInstanceOperationsOutcome> DescribeInstanceOperationsOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::DescribeInstanceOperationsRequest&, DescribeInstanceOperationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceOperationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceStateResponse> DescribeInstanceStateOutcome;
                typedef std::future<DescribeInstanceStateOutcome> DescribeInstanceStateOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::DescribeInstanceStateRequest&, DescribeInstanceStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceStateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSimpleInstancesResponse> DescribeSimpleInstancesOutcome;
                typedef std::future<DescribeSimpleInstancesOutcome> DescribeSimpleInstancesOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::DescribeSimpleInstancesRequest&, DescribeSimpleInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSimpleInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSlowLogResponse> DescribeSlowLogOutcome;
                typedef std::future<DescribeSlowLogOutcome> DescribeSlowLogOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::DescribeSlowLogRequest&, DescribeSlowLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlowLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUpgradeListResponse> DescribeUpgradeListOutcome;
                typedef std::future<DescribeUpgradeListOutcome> DescribeUpgradeListOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::DescribeUpgradeListRequest&, DescribeUpgradeListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpgradeListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserHbaConfigResponse> DescribeUserHbaConfigOutcome;
                typedef std::future<DescribeUserHbaConfigOutcome> DescribeUserHbaConfigOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::DescribeUserHbaConfigRequest&, DescribeUserHbaConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserHbaConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyInstanceByApiResponse> DestroyInstanceByApiOutcome;
                typedef std::future<DestroyInstanceByApiOutcome> DestroyInstanceByApiOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::DestroyInstanceByApiRequest&, DestroyInstanceByApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyInstanceByApiAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBParametersResponse> ModifyDBParametersOutcome;
                typedef std::future<ModifyDBParametersOutcome> ModifyDBParametersOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::ModifyDBParametersRequest&, ModifyDBParametersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBParametersAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceResponse> ModifyInstanceOutcome;
                typedef std::future<ModifyInstanceOutcome> ModifyInstanceOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::ModifyInstanceRequest&, ModifyInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserHbaResponse> ModifyUserHbaOutcome;
                typedef std::future<ModifyUserHbaOutcome> ModifyUserHbaOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::ModifyUserHbaRequest&, ModifyUserHbaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserHbaAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetAccountPasswordResponse> ResetAccountPasswordOutcome;
                typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::ResetAccountPasswordRequest&, ResetAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartInstanceResponse> RestartInstanceOutcome;
                typedef std::future<RestartInstanceOutcome> RestartInstanceOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::RestartInstanceRequest&, RestartInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleOutInstanceResponse> ScaleOutInstanceOutcome;
                typedef std::future<ScaleOutInstanceOutcome> ScaleOutInstanceOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::ScaleOutInstanceRequest&, ScaleOutInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleOutInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleUpInstanceResponse> ScaleUpInstanceOutcome;
                typedef std::future<ScaleUpInstanceOutcome> ScaleUpInstanceOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::ScaleUpInstanceRequest&, ScaleUpInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleUpInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeInstanceResponse> UpgradeInstanceOutcome;
                typedef std::future<UpgradeInstanceOutcome> UpgradeInstanceOutcomeCallable;
                typedef std::function<void(const CdwpgClient*, const Model::UpgradeInstanceRequest&, UpgradeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeInstanceAsyncHandler;



                /**
                 *创建集群
                 * @param req CreateInstanceByApiRequest
                 * @return CreateInstanceByApiOutcome
                 */
                CreateInstanceByApiOutcome CreateInstanceByApi(const Model::CreateInstanceByApiRequest &request);
                void CreateInstanceByApiAsync(const Model::CreateInstanceByApiRequest& request, const CreateInstanceByApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceByApiOutcomeCallable CreateInstanceByApiCallable(const Model::CreateInstanceByApiRequest& request);

                /**
                 *获取云原生实例对应的账号列表
                 * @param req DescribeAccountsRequest
                 * @return DescribeAccountsOutcome
                 */
                DescribeAccountsOutcome DescribeAccounts(const Model::DescribeAccountsRequest &request);
                void DescribeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountsOutcomeCallable DescribeAccountsCallable(const Model::DescribeAccountsRequest& request);

                /**
                 *DescribeDBConfigHistory1
                 * @param req DescribeDBConfigHistoryRequest
                 * @return DescribeDBConfigHistoryOutcome
                 */
                DescribeDBConfigHistoryOutcome DescribeDBConfigHistory(const Model::DescribeDBConfigHistoryRequest &request);
                void DescribeDBConfigHistoryAsync(const Model::DescribeDBConfigHistoryRequest& request, const DescribeDBConfigHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBConfigHistoryOutcomeCallable DescribeDBConfigHistoryCallable(const Model::DescribeDBConfigHistoryRequest& request);

                /**
                 *配置描述
                 * @param req DescribeDBParamsRequest
                 * @return DescribeDBParamsOutcome
                 */
                DescribeDBParamsOutcome DescribeDBParams(const Model::DescribeDBParamsRequest &request);
                void DescribeDBParamsAsync(const Model::DescribeDBParamsRequest& request, const DescribeDBParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBParamsOutcomeCallable DescribeDBParamsCallable(const Model::DescribeDBParamsRequest& request);

                /**
                 *查询错误日志
                 * @param req DescribeErrorLogRequest
                 * @return DescribeErrorLogOutcome
                 */
                DescribeErrorLogOutcome DescribeErrorLog(const Model::DescribeErrorLogRequest &request);
                void DescribeErrorLogAsync(const Model::DescribeErrorLogRequest& request, const DescribeErrorLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeErrorLogOutcomeCallable DescribeErrorLogCallable(const Model::DescribeErrorLogRequest& request);

                /**
                 *根据实例ID查询某个实例的具体信息
                 * @param req DescribeInstanceRequest
                 * @return DescribeInstanceOutcome
                 */
                DescribeInstanceOutcome DescribeInstance(const Model::DescribeInstanceRequest &request);
                void DescribeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceOutcomeCallable DescribeInstanceCallable(const Model::DescribeInstanceRequest& request);

                /**
                 *获取集群信息
                 * @param req DescribeInstanceInfoRequest
                 * @return DescribeInstanceInfoOutcome
                 */
                DescribeInstanceInfoOutcome DescribeInstanceInfo(const Model::DescribeInstanceInfoRequest &request);
                void DescribeInstanceInfoAsync(const Model::DescribeInstanceInfoRequest& request, const DescribeInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceInfoOutcomeCallable DescribeInstanceInfoCallable(const Model::DescribeInstanceInfoRequest& request);

                /**
                 *节点list
                 * @param req DescribeInstanceNodesRequest
                 * @return DescribeInstanceNodesOutcome
                 */
                DescribeInstanceNodesOutcome DescribeInstanceNodes(const Model::DescribeInstanceNodesRequest &request);
                void DescribeInstanceNodesAsync(const Model::DescribeInstanceNodesRequest& request, const DescribeInstanceNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceNodesOutcomeCallable DescribeInstanceNodesCallable(const Model::DescribeInstanceNodesRequest& request);

                /**
                 *在集群详情页面，拉取该集群的操作
                 * @param req DescribeInstanceOperationsRequest
                 * @return DescribeInstanceOperationsOutcome
                 */
                DescribeInstanceOperationsOutcome DescribeInstanceOperations(const Model::DescribeInstanceOperationsRequest &request);
                void DescribeInstanceOperationsAsync(const Model::DescribeInstanceOperationsRequest& request, const DescribeInstanceOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceOperationsOutcomeCallable DescribeInstanceOperationsCallable(const Model::DescribeInstanceOperationsRequest& request);

                /**
                 *集群详情页中显示集群状态、流程进度等
                 * @param req DescribeInstanceStateRequest
                 * @return DescribeInstanceStateOutcome
                 */
                DescribeInstanceStateOutcome DescribeInstanceState(const Model::DescribeInstanceStateRequest &request);
                void DescribeInstanceStateAsync(const Model::DescribeInstanceStateRequest& request, const DescribeInstanceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceStateOutcomeCallable DescribeInstanceStateCallable(const Model::DescribeInstanceStateRequest& request);

                /**
                 *获取云原生实例列表
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *获取集群实例列表
                 * @param req DescribeSimpleInstancesRequest
                 * @return DescribeSimpleInstancesOutcome
                 */
                DescribeSimpleInstancesOutcome DescribeSimpleInstances(const Model::DescribeSimpleInstancesRequest &request);
                void DescribeSimpleInstancesAsync(const Model::DescribeSimpleInstancesRequest& request, const DescribeSimpleInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSimpleInstancesOutcomeCallable DescribeSimpleInstancesCallable(const Model::DescribeSimpleInstancesRequest& request);

                /**
                 *查询慢SQL日志
                 * @param req DescribeSlowLogRequest
                 * @return DescribeSlowLogOutcome
                 */
                DescribeSlowLogOutcome DescribeSlowLog(const Model::DescribeSlowLogRequest &request);
                void DescribeSlowLogAsync(const Model::DescribeSlowLogRequest& request, const DescribeSlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSlowLogOutcomeCallable DescribeSlowLogCallable(const Model::DescribeSlowLogRequest& request);

                /**
                 *升级记录
                 * @param req DescribeUpgradeListRequest
                 * @return DescribeUpgradeListOutcome
                 */
                DescribeUpgradeListOutcome DescribeUpgradeList(const Model::DescribeUpgradeListRequest &request);
                void DescribeUpgradeListAsync(const Model::DescribeUpgradeListRequest& request, const DescribeUpgradeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUpgradeListOutcomeCallable DescribeUpgradeListCallable(const Model::DescribeUpgradeListRequest& request);

                /**
                 *user_hba
                 * @param req DescribeUserHbaConfigRequest
                 * @return DescribeUserHbaConfigOutcome
                 */
                DescribeUserHbaConfigOutcome DescribeUserHbaConfig(const Model::DescribeUserHbaConfigRequest &request);
                void DescribeUserHbaConfigAsync(const Model::DescribeUserHbaConfigRequest& request, const DescribeUserHbaConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserHbaConfigOutcomeCallable DescribeUserHbaConfigCallable(const Model::DescribeUserHbaConfigRequest& request);

                /**
                 *销毁集群
                 * @param req DestroyInstanceByApiRequest
                 * @return DestroyInstanceByApiOutcome
                 */
                DestroyInstanceByApiOutcome DestroyInstanceByApi(const Model::DestroyInstanceByApiRequest &request);
                void DestroyInstanceByApiAsync(const Model::DestroyInstanceByApiRequest& request, const DestroyInstanceByApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyInstanceByApiOutcomeCallable DestroyInstanceByApiCallable(const Model::DestroyInstanceByApiRequest& request);

                /**
                 *集群配置下发
                 * @param req ModifyDBParametersRequest
                 * @return ModifyDBParametersOutcome
                 */
                ModifyDBParametersOutcome ModifyDBParameters(const Model::ModifyDBParametersRequest &request);
                void ModifyDBParametersAsync(const Model::ModifyDBParametersRequest& request, const ModifyDBParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBParametersOutcomeCallable ModifyDBParametersCallable(const Model::ModifyDBParametersRequest& request);

                /**
                 *修改实例信息，目前为实例名称
                 * @param req ModifyInstanceRequest
                 * @return ModifyInstanceOutcome
                 */
                ModifyInstanceOutcome ModifyInstance(const Model::ModifyInstanceRequest &request);
                void ModifyInstanceAsync(const Model::ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceOutcomeCallable ModifyInstanceCallable(const Model::ModifyInstanceRequest& request);

                /**
                 *修改用户Hba配置
                 * @param req ModifyUserHbaRequest
                 * @return ModifyUserHbaOutcome
                 */
                ModifyUserHbaOutcome ModifyUserHba(const Model::ModifyUserHbaRequest &request);
                void ModifyUserHbaAsync(const Model::ModifyUserHbaRequest& request, const ModifyUserHbaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserHbaOutcomeCallable ModifyUserHbaCallable(const Model::ModifyUserHbaRequest& request);

                /**
                 *修改账号密码
                 * @param req ResetAccountPasswordRequest
                 * @return ResetAccountPasswordOutcome
                 */
                ResetAccountPasswordOutcome ResetAccountPassword(const Model::ResetAccountPasswordRequest &request);
                void ResetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetAccountPasswordOutcomeCallable ResetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request);

                /**
                 *用户在控制台主动发起重启实例
                 * @param req RestartInstanceRequest
                 * @return RestartInstanceOutcome
                 */
                RestartInstanceOutcome RestartInstance(const Model::RestartInstanceRequest &request);
                void RestartInstanceAsync(const Model::RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartInstanceOutcomeCallable RestartInstanceCallable(const Model::RestartInstanceRequest& request);

                /**
                 *水平扩容
                 * @param req ScaleOutInstanceRequest
                 * @return ScaleOutInstanceOutcome
                 */
                ScaleOutInstanceOutcome ScaleOutInstance(const Model::ScaleOutInstanceRequest &request);
                void ScaleOutInstanceAsync(const Model::ScaleOutInstanceRequest& request, const ScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleOutInstanceOutcomeCallable ScaleOutInstanceCallable(const Model::ScaleOutInstanceRequest& request);

                /**
                 *控制台垂直变配集群
                 * @param req ScaleUpInstanceRequest
                 * @return ScaleUpInstanceOutcome
                 */
                ScaleUpInstanceOutcome ScaleUpInstance(const Model::ScaleUpInstanceRequest &request);
                void ScaleUpInstanceAsync(const Model::ScaleUpInstanceRequest& request, const ScaleUpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleUpInstanceOutcomeCallable ScaleUpInstanceCallable(const Model::ScaleUpInstanceRequest& request);

                /**
                 *在线升级
                 * @param req UpgradeInstanceRequest
                 * @return UpgradeInstanceOutcome
                 */
                UpgradeInstanceOutcome UpgradeInstance(const Model::UpgradeInstanceRequest &request);
                void UpgradeInstanceAsync(const Model::UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeInstanceOutcomeCallable UpgradeInstanceCallable(const Model::UpgradeInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_CDWPGCLIENT_H_
