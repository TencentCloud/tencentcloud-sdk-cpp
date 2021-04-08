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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_LIGHTHOUSECLIENT_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_LIGHTHOUSECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/lighthouse/v20200324/model/ApplyInstanceSnapshotRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ApplyInstanceSnapshotResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateBlueprintRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateBlueprintResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateFirewallRulesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateFirewallRulesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateInstanceSnapshotRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/CreateInstanceSnapshotResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteBlueprintsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteBlueprintsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteFirewallRulesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteFirewallRulesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteSnapshotsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DeleteSnapshotsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeBlueprintsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeBlueprintsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeBundlesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeBundlesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeFirewallRulesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeFirewallRulesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesTrafficPackagesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeInstancesTrafficPackagesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeSnapshotsRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/DescribeSnapshotsResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyBlueprintAttributeRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifyBlueprintAttributeResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifySnapshotAttributeRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ModifySnapshotAttributeResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/RebootInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/RebootInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/ResetInstanceRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/ResetInstanceResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/StartInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/StartInstancesResponse.h>
#include <tencentcloud/lighthouse/v20200324/model/StopInstancesRequest.h>
#include <tencentcloud/lighthouse/v20200324/model/StopInstancesResponse.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            class LighthouseClient : public AbstractClient
            {
            public:
                LighthouseClient(const Credential &credential, const std::string &region);
                LighthouseClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::ApplyInstanceSnapshotResponse> ApplyInstanceSnapshotOutcome;
                typedef std::future<ApplyInstanceSnapshotOutcome> ApplyInstanceSnapshotOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ApplyInstanceSnapshotRequest&, ApplyInstanceSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyInstanceSnapshotAsyncHandler;
                typedef Outcome<Error, Model::CreateBlueprintResponse> CreateBlueprintOutcome;
                typedef std::future<CreateBlueprintOutcome> CreateBlueprintOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::CreateBlueprintRequest&, CreateBlueprintOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBlueprintAsyncHandler;
                typedef Outcome<Error, Model::CreateFirewallRulesResponse> CreateFirewallRulesOutcome;
                typedef std::future<CreateFirewallRulesOutcome> CreateFirewallRulesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::CreateFirewallRulesRequest&, CreateFirewallRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFirewallRulesAsyncHandler;
                typedef Outcome<Error, Model::CreateInstanceSnapshotResponse> CreateInstanceSnapshotOutcome;
                typedef std::future<CreateInstanceSnapshotOutcome> CreateInstanceSnapshotOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::CreateInstanceSnapshotRequest&, CreateInstanceSnapshotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceSnapshotAsyncHandler;
                typedef Outcome<Error, Model::DeleteBlueprintsResponse> DeleteBlueprintsOutcome;
                typedef std::future<DeleteBlueprintsOutcome> DeleteBlueprintsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DeleteBlueprintsRequest&, DeleteBlueprintsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBlueprintsAsyncHandler;
                typedef Outcome<Error, Model::DeleteFirewallRulesResponse> DeleteFirewallRulesOutcome;
                typedef std::future<DeleteFirewallRulesOutcome> DeleteFirewallRulesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DeleteFirewallRulesRequest&, DeleteFirewallRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFirewallRulesAsyncHandler;
                typedef Outcome<Error, Model::DeleteSnapshotsResponse> DeleteSnapshotsOutcome;
                typedef std::future<DeleteSnapshotsOutcome> DeleteSnapshotsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DeleteSnapshotsRequest&, DeleteSnapshotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotsAsyncHandler;
                typedef Outcome<Error, Model::DescribeBlueprintsResponse> DescribeBlueprintsOutcome;
                typedef std::future<DescribeBlueprintsOutcome> DescribeBlueprintsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeBlueprintsRequest&, DescribeBlueprintsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlueprintsAsyncHandler;
                typedef Outcome<Error, Model::DescribeBundlesResponse> DescribeBundlesOutcome;
                typedef std::future<DescribeBundlesOutcome> DescribeBundlesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeBundlesRequest&, DescribeBundlesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBundlesAsyncHandler;
                typedef Outcome<Error, Model::DescribeFirewallRulesResponse> DescribeFirewallRulesOutcome;
                typedef std::future<DescribeFirewallRulesOutcome> DescribeFirewallRulesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeFirewallRulesRequest&, DescribeFirewallRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirewallRulesAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeInstancesTrafficPackagesResponse> DescribeInstancesTrafficPackagesOutcome;
                typedef std::future<DescribeInstancesTrafficPackagesOutcome> DescribeInstancesTrafficPackagesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeInstancesTrafficPackagesRequest&, DescribeInstancesTrafficPackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesTrafficPackagesAsyncHandler;
                typedef Outcome<Error, Model::DescribeSnapshotsResponse> DescribeSnapshotsOutcome;
                typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::DescribeSnapshotsRequest&, DescribeSnapshotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotsAsyncHandler;
                typedef Outcome<Error, Model::ModifyBlueprintAttributeResponse> ModifyBlueprintAttributeOutcome;
                typedef std::future<ModifyBlueprintAttributeOutcome> ModifyBlueprintAttributeOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ModifyBlueprintAttributeRequest&, ModifyBlueprintAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBlueprintAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifySnapshotAttributeResponse> ModifySnapshotAttributeOutcome;
                typedef std::future<ModifySnapshotAttributeOutcome> ModifySnapshotAttributeOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ModifySnapshotAttributeRequest&, ModifySnapshotAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnapshotAttributeAsyncHandler;
                typedef Outcome<Error, Model::RebootInstancesResponse> RebootInstancesOutcome;
                typedef std::future<RebootInstancesOutcome> RebootInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::RebootInstancesRequest&, RebootInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RebootInstancesAsyncHandler;
                typedef Outcome<Error, Model::ResetInstanceResponse> ResetInstanceOutcome;
                typedef std::future<ResetInstanceOutcome> ResetInstanceOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::ResetInstanceRequest&, ResetInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstanceAsyncHandler;
                typedef Outcome<Error, Model::StartInstancesResponse> StartInstancesOutcome;
                typedef std::future<StartInstancesOutcome> StartInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::StartInstancesRequest&, StartInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartInstancesAsyncHandler;
                typedef Outcome<Error, Model::StopInstancesResponse> StopInstancesOutcome;
                typedef std::future<StopInstancesOutcome> StopInstancesOutcomeCallable;
                typedef std::function<void(const LighthouseClient*, const Model::StopInstancesRequest&, StopInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopInstancesAsyncHandler;



                /**
                 *本接口（ApplyInstanceSnapshot）用于回滚指定实例的系统盘快照。
<li>仅支持回滚到原系统盘。</li>
<li>用于回滚的快照必须处于 NORMAL 状态。快照状态可以通 DescribeSnapshots 接口查询，见输出参数中 SnapshotState 字段解释。</li>
<li>回滚快照时，实例的状态必须为 STOPPED 或 RUNNING，可通过 DescribeInstances 接口查询实例状态。处于 RUNNING 状态的实例会强制关机，然后回滚快照。</li>
                 * @param req ApplyInstanceSnapshotRequest
                 * @return ApplyInstanceSnapshotOutcome
                 */
                ApplyInstanceSnapshotOutcome ApplyInstanceSnapshot(const Model::ApplyInstanceSnapshotRequest &request);
                void ApplyInstanceSnapshotAsync(const Model::ApplyInstanceSnapshotRequest& request, const ApplyInstanceSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyInstanceSnapshotOutcomeCallable ApplyInstanceSnapshotCallable(const Model::ApplyInstanceSnapshotRequest& request);

                /**
                 *本接口 (CreateBlueprint) 用于创建镜像。
                 * @param req CreateBlueprintRequest
                 * @return CreateBlueprintOutcome
                 */
                CreateBlueprintOutcome CreateBlueprint(const Model::CreateBlueprintRequest &request);
                void CreateBlueprintAsync(const Model::CreateBlueprintRequest& request, const CreateBlueprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBlueprintOutcomeCallable CreateBlueprintCallable(const Model::CreateBlueprintRequest& request);

                /**
                 *本接口（CreateFirewallRules）用于在实例上添加防火墙规则。


* FirewallVersion 为防火墙版本号，用户每次更新防火墙规则版本会自动加1，防止您更新的规则已过期，不填不考虑冲突。

在 FirewallRules 参数中：
* Protocol 字段支持输入 TCP，UDP，ICMP，ALL。
* Port 字段允许输入 ALL，或者一个单独的端口号，或者用逗号分隔的离散端口号，或者用减号分隔的两个端口号代表的端口范围。当 Port 为范围时，减号分隔的第一个端口号小于第二个端口号。当 Protocol 字段不是 TCP 或 UDP 时，Port 字段只能为空或 ALL。Port 字段长度不得超过 64。
* CidrBlock 字段允许输入符合 cidr 格式标准的任意字符串。租户之间网络隔离规则优先于防火墙中的内网规则。
* Action 字段只允许输入 ACCEPT 或 DROP。
* FirewallRuleDescription 字段长度不得超过 64。
                 * @param req CreateFirewallRulesRequest
                 * @return CreateFirewallRulesOutcome
                 */
                CreateFirewallRulesOutcome CreateFirewallRules(const Model::CreateFirewallRulesRequest &request);
                void CreateFirewallRulesAsync(const Model::CreateFirewallRulesRequest& request, const CreateFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFirewallRulesOutcomeCallable CreateFirewallRulesCallable(const Model::CreateFirewallRulesRequest& request);

                /**
                 *本接口（CreateInstanceSnapshot）用于创建指定实例的系统盘快照。
                 * @param req CreateInstanceSnapshotRequest
                 * @return CreateInstanceSnapshotOutcome
                 */
                CreateInstanceSnapshotOutcome CreateInstanceSnapshot(const Model::CreateInstanceSnapshotRequest &request);
                void CreateInstanceSnapshotAsync(const Model::CreateInstanceSnapshotRequest& request, const CreateInstanceSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceSnapshotOutcomeCallable CreateInstanceSnapshotCallable(const Model::CreateInstanceSnapshotRequest& request);

                /**
                 *本接口 (DeleteBlueprints) 用于删除镜像。
                 * @param req DeleteBlueprintsRequest
                 * @return DeleteBlueprintsOutcome
                 */
                DeleteBlueprintsOutcome DeleteBlueprints(const Model::DeleteBlueprintsRequest &request);
                void DeleteBlueprintsAsync(const Model::DeleteBlueprintsRequest& request, const DeleteBlueprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBlueprintsOutcomeCallable DeleteBlueprintsCallable(const Model::DeleteBlueprintsRequest& request);

                /**
                 *本接口（DeleteFirewallRules）用于删除实例的防火墙规则。

* FirewallVersion 用于指定要操作的防火墙的版本。传入 FirewallVersion 版本号若不等于当前防火墙的最新版本，将返回失败；若不传 FirewallVersion 则直接删除指定的规则。

在 FirewallRules 参数中：
* Protocol 字段支持输入 TCP，UDP，ICMP，ALL。
* Port 字段允许输入 ALL，或者一个单独的端口号，或者用逗号分隔的离散端口号，或者用减号分隔的两个端口号代表的端口范围。当 Port 为范围时，减号分隔的第一个端口号小于第二个端口号。当 Protocol 字段不是 TCP 或 UDP 时，Port 字段只能为空或 ALL。Port 字段长度不得超过 64。
* CidrBlock 字段允许输入符合 cidr 格式标准的任意字符串。租户之间网络隔离规则优先于防火墙中的内网规则。
* Action 字段只允许输入 ACCEPT 或 DROP。
* FirewallRuleDescription 字段长度不得超过 64。
                 * @param req DeleteFirewallRulesRequest
                 * @return DeleteFirewallRulesOutcome
                 */
                DeleteFirewallRulesOutcome DeleteFirewallRules(const Model::DeleteFirewallRulesRequest &request);
                void DeleteFirewallRulesAsync(const Model::DeleteFirewallRulesRequest& request, const DeleteFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFirewallRulesOutcomeCallable DeleteFirewallRulesCallable(const Model::DeleteFirewallRulesRequest& request);

                /**
                 *本接口（DeleteSnapshots）用于删除快照。
快照必须处于 NORMAL 状态，快照状态可以通过 DescribeSnapshots 接口查询，见输出参数中 SnapshotState 字段解释。
                 * @param req DeleteSnapshotsRequest
                 * @return DeleteSnapshotsOutcome
                 */
                DeleteSnapshotsOutcome DeleteSnapshots(const Model::DeleteSnapshotsRequest &request);
                void DeleteSnapshotsAsync(const Model::DeleteSnapshotsRequest& request, const DeleteSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSnapshotsOutcomeCallable DeleteSnapshotsCallable(const Model::DeleteSnapshotsRequest& request);

                /**
                 *本接口（DescribeBlueprints）用于查询镜像信息。
                 * @param req DescribeBlueprintsRequest
                 * @return DescribeBlueprintsOutcome
                 */
                DescribeBlueprintsOutcome DescribeBlueprints(const Model::DescribeBlueprintsRequest &request);
                void DescribeBlueprintsAsync(const Model::DescribeBlueprintsRequest& request, const DescribeBlueprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBlueprintsOutcomeCallable DescribeBlueprintsCallable(const Model::DescribeBlueprintsRequest& request);

                /**
                 *本接口（DescribeBundles）用于查询套餐信息。
                 * @param req DescribeBundlesRequest
                 * @return DescribeBundlesOutcome
                 */
                DescribeBundlesOutcome DescribeBundles(const Model::DescribeBundlesRequest &request);
                void DescribeBundlesAsync(const Model::DescribeBundlesRequest& request, const DescribeBundlesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBundlesOutcomeCallable DescribeBundlesCallable(const Model::DescribeBundlesRequest& request);

                /**
                 *本接口（DescribeFirewallRules）用于查询实例的防火墙规则。
                 * @param req DescribeFirewallRulesRequest
                 * @return DescribeFirewallRulesOutcome
                 */
                DescribeFirewallRulesOutcome DescribeFirewallRules(const Model::DescribeFirewallRulesRequest &request);
                void DescribeFirewallRulesAsync(const Model::DescribeFirewallRulesRequest& request, const DescribeFirewallRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirewallRulesOutcomeCallable DescribeFirewallRulesCallable(const Model::DescribeFirewallRulesRequest& request);

                /**
                 *本接口（DescribeInstances）用于查询一个或多个实例的详细信息。

* 可以根据实例 ID、实例名称或者实例的内网 IP 查询实例的详细信息。
* 过滤信息详细请见过滤器 [Filters](https://cloud.tencent.com/document/product/1207/47576#Filter) 。
* 如果参数为空，返回当前用户一定数量（Limit 所指定的数量，默认为 20）的实例。
* 支持查询实例的最新操作（LatestOperation）以及最新操作状态（LatestOperationState）。
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *本接口（DescribeInstancesTrafficPackages）用于查询一个或多个实例的流量包详情。
                 * @param req DescribeInstancesTrafficPackagesRequest
                 * @return DescribeInstancesTrafficPackagesOutcome
                 */
                DescribeInstancesTrafficPackagesOutcome DescribeInstancesTrafficPackages(const Model::DescribeInstancesTrafficPackagesRequest &request);
                void DescribeInstancesTrafficPackagesAsync(const Model::DescribeInstancesTrafficPackagesRequest& request, const DescribeInstancesTrafficPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesTrafficPackagesOutcomeCallable DescribeInstancesTrafficPackagesCallable(const Model::DescribeInstancesTrafficPackagesRequest& request);

                /**
                 *本接口（DescribeSnapshots）用于查询快照的详细信息。
                 * @param req DescribeSnapshotsRequest
                 * @return DescribeSnapshotsOutcome
                 */
                DescribeSnapshotsOutcome DescribeSnapshots(const Model::DescribeSnapshotsRequest &request);
                void DescribeSnapshotsAsync(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotsOutcomeCallable DescribeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request);

                /**
                 *本接口 (ModifyBlueprintAttribute) 用于修改镜像属性。
                 * @param req ModifyBlueprintAttributeRequest
                 * @return ModifyBlueprintAttributeOutcome
                 */
                ModifyBlueprintAttributeOutcome ModifyBlueprintAttribute(const Model::ModifyBlueprintAttributeRequest &request);
                void ModifyBlueprintAttributeAsync(const Model::ModifyBlueprintAttributeRequest& request, const ModifyBlueprintAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBlueprintAttributeOutcomeCallable ModifyBlueprintAttributeCallable(const Model::ModifyBlueprintAttributeRequest& request);

                /**
                 *本接口（ModifySnapshotAttribute）用于修改指定快照的属性。
<li>“快照名称”仅为方便用户自己管理之用，腾讯云并不以此名称作为提交工单或是进行快照管理操作的依据。</li>
                 * @param req ModifySnapshotAttributeRequest
                 * @return ModifySnapshotAttributeOutcome
                 */
                ModifySnapshotAttributeOutcome ModifySnapshotAttribute(const Model::ModifySnapshotAttributeRequest &request);
                void ModifySnapshotAttributeAsync(const Model::ModifySnapshotAttributeRequest& request, const ModifySnapshotAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySnapshotAttributeOutcomeCallable ModifySnapshotAttributeCallable(const Model::ModifySnapshotAttributeRequest& request);

                /**
                 *本接口（RebootInstances）用于重启实例。

* 只有状态为 RUNNING 的实例才可以进行此操作。
* 接口调用成功时，实例会进入 REBOOTING 状态；重启实例成功时，实例会进入 RUNNING 状态。
* 支持批量操作，每次请求批量实例的上限为 100。
* 本接口为异步接口，请求发送成功后会返回一个 RequestId，此时操作并未立即完成。实例操作结果可以通过调用 DescribeInstances 接口查询，如果实例的最新操作状态（LatestOperationState）为“SUCCESS”，则代表操作成功。
                 * @param req RebootInstancesRequest
                 * @return RebootInstancesOutcome
                 */
                RebootInstancesOutcome RebootInstances(const Model::RebootInstancesRequest &request);
                void RebootInstancesAsync(const Model::RebootInstancesRequest& request, const RebootInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RebootInstancesOutcomeCallable RebootInstancesCallable(const Model::RebootInstancesRequest& request);

                /**
                 *本接口（ResetInstance）用于重装指定实例上的镜像。

* 如果指定了 BlueprintId 参数，则使用指定的镜像重装；否则按照当前实例使用的镜像进行重装。
* 系统盘将会被格式化，并重置；请确保系统盘中无重要文件。
* 目前不支持实例使用该接口实现 LINUX_UNIX 和 WINDOWS 操作系统切换。
* 本接口为异步接口，请求发送成功后会返回一个 RequestId，此时操作并未立即完成。实例操作结果可以通过调用 DescribeInstances 接口查询，如果实例的最新操作状态（LatestOperationState）为“SUCCESS”，则代表操作成功。
                 * @param req ResetInstanceRequest
                 * @return ResetInstanceOutcome
                 */
                ResetInstanceOutcome ResetInstance(const Model::ResetInstanceRequest &request);
                void ResetInstanceAsync(const Model::ResetInstanceRequest& request, const ResetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetInstanceOutcomeCallable ResetInstanceCallable(const Model::ResetInstanceRequest& request);

                /**
                 *本接口（StartInstances）用于启动一个或多个实例。

* 只有状态为 STOPPED 的实例才可以进行此操作。
* 接口调用成功时，实例会进入 STARTING 状态；启动实例成功时，实例会进入 RUNNING 状态。
* 支持批量操作。每次请求批量实例的上限为 100。
* 本接口为异步接口，请求发送成功后会返回一个 RequestId，此时操作并未立即完成。实例操作结果可以通过调用 DescribeInstances 接口查询，如果实例的最新操作状态（LatestOperationState）为“SUCCESS”，则代表操作成功。
                 * @param req StartInstancesRequest
                 * @return StartInstancesOutcome
                 */
                StartInstancesOutcome StartInstances(const Model::StartInstancesRequest &request);
                void StartInstancesAsync(const Model::StartInstancesRequest& request, const StartInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartInstancesOutcomeCallable StartInstancesCallable(const Model::StartInstancesRequest& request);

                /**
                 *本接口（StopInstances）用于关闭一个或多个实例。
* 只有状态为 RUNNING 的实例才可以进行此操作。
* 接口调用成功时，实例会进入 STOPPING 状态；关闭实例成功时，实例会进入 STOPPED 状态。
* 支持批量操作。每次请求批量实例的上限为 100。
* 本接口为异步接口，请求发送成功后会返回一个 RequestId，此时操作并未立即完成。实例操作结果可以通过调用 DescribeInstances 接口查询，如果实例的最新操作状态（LatestOperationState）为“SUCCESS”，则代表操作成功。
                 * @param req StopInstancesRequest
                 * @return StopInstancesOutcome
                 */
                StopInstancesOutcome StopInstances(const Model::StopInstancesRequest &request);
                void StopInstancesAsync(const Model::StopInstancesRequest& request, const StopInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopInstancesOutcomeCallable StopInstancesCallable(const Model::StopInstancesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_LIGHTHOUSECLIENT_H_
