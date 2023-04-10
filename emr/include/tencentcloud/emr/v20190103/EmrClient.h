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

#ifndef TENCENTCLOUD_EMR_V20190103_EMRCLIENT_H_
#define TENCENTCLOUD_EMR_V20190103_EMRCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/emr/v20190103/model/AddUsersForUserManagerRequest.h>
#include <tencentcloud/emr/v20190103/model/AddUsersForUserManagerResponse.h>
#include <tencentcloud/emr/v20190103/model/CreateClusterRequest.h>
#include <tencentcloud/emr/v20190103/model/CreateClusterResponse.h>
#include <tencentcloud/emr/v20190103/model/CreateInstanceRequest.h>
#include <tencentcloud/emr/v20190103/model/CreateInstanceResponse.h>
#include <tencentcloud/emr/v20190103/model/DeleteUserManagerUserListRequest.h>
#include <tencentcloud/emr/v20190103/model/DeleteUserManagerUserListResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeClusterNodesRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeClusterNodesResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeCvmQuotaRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeCvmQuotaResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeEmrApplicationStaticsRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeEmrApplicationStaticsResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeInstanceRenewNodesRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeInstanceRenewNodesResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeInstancesRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeInstancesResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeInstancesListRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeInstancesListResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeJobFlowRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeJobFlowResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeResourceScheduleRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeResourceScheduleResponse.h>
#include <tencentcloud/emr/v20190103/model/DescribeUsersForUserManagerRequest.h>
#include <tencentcloud/emr/v20190103/model/DescribeUsersForUserManagerResponse.h>
#include <tencentcloud/emr/v20190103/model/InquirePriceRenewEmrRequest.h>
#include <tencentcloud/emr/v20190103/model/InquirePriceRenewEmrResponse.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceCreateInstanceRequest.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceCreateInstanceResponse.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceRenewInstanceRequest.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceRenewInstanceResponse.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceScaleOutInstanceRequest.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceScaleOutInstanceResponse.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceUpdateInstanceRequest.h>
#include <tencentcloud/emr/v20190103/model/InquiryPriceUpdateInstanceResponse.h>
#include <tencentcloud/emr/v20190103/model/ModifyResourcePoolsRequest.h>
#include <tencentcloud/emr/v20190103/model/ModifyResourcePoolsResponse.h>
#include <tencentcloud/emr/v20190103/model/ModifyResourceScheduleConfigRequest.h>
#include <tencentcloud/emr/v20190103/model/ModifyResourceScheduleConfigResponse.h>
#include <tencentcloud/emr/v20190103/model/ModifyResourceSchedulerRequest.h>
#include <tencentcloud/emr/v20190103/model/ModifyResourceSchedulerResponse.h>
#include <tencentcloud/emr/v20190103/model/RunJobFlowRequest.h>
#include <tencentcloud/emr/v20190103/model/RunJobFlowResponse.h>
#include <tencentcloud/emr/v20190103/model/ScaleOutClusterRequest.h>
#include <tencentcloud/emr/v20190103/model/ScaleOutClusterResponse.h>
#include <tencentcloud/emr/v20190103/model/ScaleOutInstanceRequest.h>
#include <tencentcloud/emr/v20190103/model/ScaleOutInstanceResponse.h>
#include <tencentcloud/emr/v20190103/model/StartStopServiceOrMonitorRequest.h>
#include <tencentcloud/emr/v20190103/model/StartStopServiceOrMonitorResponse.h>
#include <tencentcloud/emr/v20190103/model/SyncPodStateRequest.h>
#include <tencentcloud/emr/v20190103/model/SyncPodStateResponse.h>
#include <tencentcloud/emr/v20190103/model/TerminateClusterNodesRequest.h>
#include <tencentcloud/emr/v20190103/model/TerminateClusterNodesResponse.h>
#include <tencentcloud/emr/v20190103/model/TerminateInstanceRequest.h>
#include <tencentcloud/emr/v20190103/model/TerminateInstanceResponse.h>
#include <tencentcloud/emr/v20190103/model/TerminateTasksRequest.h>
#include <tencentcloud/emr/v20190103/model/TerminateTasksResponse.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            class EmrClient : public AbstractClient
            {
            public:
                EmrClient(const Credential &credential, const std::string &region);
                EmrClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddUsersForUserManagerResponse> AddUsersForUserManagerOutcome;
                typedef std::future<AddUsersForUserManagerOutcome> AddUsersForUserManagerOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::AddUsersForUserManagerRequest&, AddUsersForUserManagerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddUsersForUserManagerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterResponse> CreateClusterOutcome;
                typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::CreateClusterRequest&, CreateClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInstanceResponse> CreateInstanceOutcome;
                typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::CreateInstanceRequest&, CreateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteUserManagerUserListResponse> DeleteUserManagerUserListOutcome;
                typedef std::future<DeleteUserManagerUserListOutcome> DeleteUserManagerUserListOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DeleteUserManagerUserListRequest&, DeleteUserManagerUserListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserManagerUserListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterNodesResponse> DescribeClusterNodesOutcome;
                typedef std::future<DescribeClusterNodesOutcome> DescribeClusterNodesOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeClusterNodesRequest&, DescribeClusterNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCvmQuotaResponse> DescribeCvmQuotaOutcome;
                typedef std::future<DescribeCvmQuotaOutcome> DescribeCvmQuotaOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeCvmQuotaRequest&, DescribeCvmQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCvmQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEmrApplicationStaticsResponse> DescribeEmrApplicationStaticsOutcome;
                typedef std::future<DescribeEmrApplicationStaticsOutcome> DescribeEmrApplicationStaticsOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeEmrApplicationStaticsRequest&, DescribeEmrApplicationStaticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEmrApplicationStaticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceRenewNodesResponse> DescribeInstanceRenewNodesOutcome;
                typedef std::future<DescribeInstanceRenewNodesOutcome> DescribeInstanceRenewNodesOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeInstanceRenewNodesRequest&, DescribeInstanceRenewNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceRenewNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesListResponse> DescribeInstancesListOutcome;
                typedef std::future<DescribeInstancesListOutcome> DescribeInstancesListOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeInstancesListRequest&, DescribeInstancesListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeJobFlowResponse> DescribeJobFlowOutcome;
                typedef std::future<DescribeJobFlowOutcome> DescribeJobFlowOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeJobFlowRequest&, DescribeJobFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceScheduleResponse> DescribeResourceScheduleOutcome;
                typedef std::future<DescribeResourceScheduleOutcome> DescribeResourceScheduleOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeResourceScheduleRequest&, DescribeResourceScheduleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceScheduleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsersForUserManagerResponse> DescribeUsersForUserManagerOutcome;
                typedef std::future<DescribeUsersForUserManagerOutcome> DescribeUsersForUserManagerOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::DescribeUsersForUserManagerRequest&, DescribeUsersForUserManagerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsersForUserManagerAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceRenewEmrResponse> InquirePriceRenewEmrOutcome;
                typedef std::future<InquirePriceRenewEmrOutcome> InquirePriceRenewEmrOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::InquirePriceRenewEmrRequest&, InquirePriceRenewEmrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceRenewEmrAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceCreateInstanceResponse> InquiryPriceCreateInstanceOutcome;
                typedef std::future<InquiryPriceCreateInstanceOutcome> InquiryPriceCreateInstanceOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::InquiryPriceCreateInstanceRequest&, InquiryPriceCreateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceCreateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceRenewInstanceResponse> InquiryPriceRenewInstanceOutcome;
                typedef std::future<InquiryPriceRenewInstanceOutcome> InquiryPriceRenewInstanceOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::InquiryPriceRenewInstanceRequest&, InquiryPriceRenewInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceRenewInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceScaleOutInstanceResponse> InquiryPriceScaleOutInstanceOutcome;
                typedef std::future<InquiryPriceScaleOutInstanceOutcome> InquiryPriceScaleOutInstanceOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::InquiryPriceScaleOutInstanceRequest&, InquiryPriceScaleOutInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceScaleOutInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceUpdateInstanceResponse> InquiryPriceUpdateInstanceOutcome;
                typedef std::future<InquiryPriceUpdateInstanceOutcome> InquiryPriceUpdateInstanceOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::InquiryPriceUpdateInstanceRequest&, InquiryPriceUpdateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceUpdateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyResourcePoolsResponse> ModifyResourcePoolsOutcome;
                typedef std::future<ModifyResourcePoolsOutcome> ModifyResourcePoolsOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::ModifyResourcePoolsRequest&, ModifyResourcePoolsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourcePoolsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyResourceScheduleConfigResponse> ModifyResourceScheduleConfigOutcome;
                typedef std::future<ModifyResourceScheduleConfigOutcome> ModifyResourceScheduleConfigOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::ModifyResourceScheduleConfigRequest&, ModifyResourceScheduleConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourceScheduleConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyResourceSchedulerResponse> ModifyResourceSchedulerOutcome;
                typedef std::future<ModifyResourceSchedulerOutcome> ModifyResourceSchedulerOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::ModifyResourceSchedulerRequest&, ModifyResourceSchedulerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourceSchedulerAsyncHandler;
                typedef Outcome<Core::Error, Model::RunJobFlowResponse> RunJobFlowOutcome;
                typedef std::future<RunJobFlowOutcome> RunJobFlowOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::RunJobFlowRequest&, RunJobFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunJobFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleOutClusterResponse> ScaleOutClusterOutcome;
                typedef std::future<ScaleOutClusterOutcome> ScaleOutClusterOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::ScaleOutClusterRequest&, ScaleOutClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleOutClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::ScaleOutInstanceResponse> ScaleOutInstanceOutcome;
                typedef std::future<ScaleOutInstanceOutcome> ScaleOutInstanceOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::ScaleOutInstanceRequest&, ScaleOutInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScaleOutInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::StartStopServiceOrMonitorResponse> StartStopServiceOrMonitorOutcome;
                typedef std::future<StartStopServiceOrMonitorOutcome> StartStopServiceOrMonitorOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::StartStopServiceOrMonitorRequest&, StartStopServiceOrMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartStopServiceOrMonitorAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncPodStateResponse> SyncPodStateOutcome;
                typedef std::future<SyncPodStateOutcome> SyncPodStateOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::SyncPodStateRequest&, SyncPodStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncPodStateAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateClusterNodesResponse> TerminateClusterNodesOutcome;
                typedef std::future<TerminateClusterNodesOutcome> TerminateClusterNodesOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::TerminateClusterNodesRequest&, TerminateClusterNodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateClusterNodesAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateInstanceResponse> TerminateInstanceOutcome;
                typedef std::future<TerminateInstanceOutcome> TerminateInstanceOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::TerminateInstanceRequest&, TerminateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateTasksResponse> TerminateTasksOutcome;
                typedef std::future<TerminateTasksOutcome> TerminateTasksOutcomeCallable;
                typedef std::function<void(const EmrClient*, const Model::TerminateTasksRequest&, TerminateTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateTasksAsyncHandler;



                /**
                 *该接口支持安装了OpenLdap组件的集群。
新增用户列表（用户管理）。
                 * @param req AddUsersForUserManagerRequest
                 * @return AddUsersForUserManagerOutcome
                 */
                AddUsersForUserManagerOutcome AddUsersForUserManager(const Model::AddUsersForUserManagerRequest &request);
                void AddUsersForUserManagerAsync(const Model::AddUsersForUserManagerRequest& request, const AddUsersForUserManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddUsersForUserManagerOutcomeCallable AddUsersForUserManagerCallable(const Model::AddUsersForUserManagerRequest& request);

                /**
                 *创建EMR集群实例
                 * @param req CreateClusterRequest
                 * @return CreateClusterOutcome
                 */
                CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest &request);
                void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request);

                /**
                 *创建EMR集群实例
                 * @param req CreateInstanceRequest
                 * @return CreateInstanceOutcome
                 */
                CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest &request);
                void CreateInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInstanceOutcomeCallable CreateInstanceCallable(const Model::CreateInstanceRequest& request);

                /**
                 *删除用户列表（用户管理）

                 * @param req DeleteUserManagerUserListRequest
                 * @return DeleteUserManagerUserListOutcome
                 */
                DeleteUserManagerUserListOutcome DeleteUserManagerUserList(const Model::DeleteUserManagerUserListRequest &request);
                void DeleteUserManagerUserListAsync(const Model::DeleteUserManagerUserListRequest& request, const DeleteUserManagerUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUserManagerUserListOutcomeCallable DeleteUserManagerUserListCallable(const Model::DeleteUserManagerUserListRequest& request);

                /**
                 *查询集群节点信息
                 * @param req DescribeClusterNodesRequest
                 * @return DescribeClusterNodesOutcome
                 */
                DescribeClusterNodesOutcome DescribeClusterNodes(const Model::DescribeClusterNodesRequest &request);
                void DescribeClusterNodesAsync(const Model::DescribeClusterNodesRequest& request, const DescribeClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterNodesOutcomeCallable DescribeClusterNodesCallable(const Model::DescribeClusterNodesRequest& request);

                /**
                 *获取账户的CVM配额
                 * @param req DescribeCvmQuotaRequest
                 * @return DescribeCvmQuotaOutcome
                 */
                DescribeCvmQuotaOutcome DescribeCvmQuota(const Model::DescribeCvmQuotaRequest &request);
                void DescribeCvmQuotaAsync(const Model::DescribeCvmQuotaRequest& request, const DescribeCvmQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCvmQuotaOutcomeCallable DescribeCvmQuotaCallable(const Model::DescribeCvmQuotaRequest& request);

                /**
                 * yarn application 统计接口查询
                 * @param req DescribeEmrApplicationStaticsRequest
                 * @return DescribeEmrApplicationStaticsOutcome
                 */
                DescribeEmrApplicationStaticsOutcome DescribeEmrApplicationStatics(const Model::DescribeEmrApplicationStaticsRequest &request);
                void DescribeEmrApplicationStaticsAsync(const Model::DescribeEmrApplicationStaticsRequest& request, const DescribeEmrApplicationStaticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEmrApplicationStaticsOutcomeCallable DescribeEmrApplicationStaticsCallable(const Model::DescribeEmrApplicationStaticsRequest& request);

                /**
                 *查询待续费节点信息
                 * @param req DescribeInstanceRenewNodesRequest
                 * @return DescribeInstanceRenewNodesOutcome
                 */
                DescribeInstanceRenewNodesOutcome DescribeInstanceRenewNodes(const Model::DescribeInstanceRenewNodesRequest &request);
                void DescribeInstanceRenewNodesAsync(const Model::DescribeInstanceRenewNodesRequest& request, const DescribeInstanceRenewNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceRenewNodesOutcomeCallable DescribeInstanceRenewNodesCallable(const Model::DescribeInstanceRenewNodesRequest& request);

                /**
                 *查询集群实例信息
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *查询集群列表
                 * @param req DescribeInstancesListRequest
                 * @return DescribeInstancesListOutcome
                 */
                DescribeInstancesListOutcome DescribeInstancesList(const Model::DescribeInstancesListRequest &request);
                void DescribeInstancesListAsync(const Model::DescribeInstancesListRequest& request, const DescribeInstancesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesListOutcomeCallable DescribeInstancesListCallable(const Model::DescribeInstancesListRequest& request);

                /**
                 *查询流程任务
                 * @param req DescribeJobFlowRequest
                 * @return DescribeJobFlowOutcome
                 */
                DescribeJobFlowOutcome DescribeJobFlow(const Model::DescribeJobFlowRequest &request);
                void DescribeJobFlowAsync(const Model::DescribeJobFlowRequest& request, const DescribeJobFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeJobFlowOutcomeCallable DescribeJobFlowCallable(const Model::DescribeJobFlowRequest& request);

                /**
                 *查询YARN资源调度数据信息
                 * @param req DescribeResourceScheduleRequest
                 * @return DescribeResourceScheduleOutcome
                 */
                DescribeResourceScheduleOutcome DescribeResourceSchedule(const Model::DescribeResourceScheduleRequest &request);
                void DescribeResourceScheduleAsync(const Model::DescribeResourceScheduleRequest& request, const DescribeResourceScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceScheduleOutcomeCallable DescribeResourceScheduleCallable(const Model::DescribeResourceScheduleRequest& request);

                /**
                 *该接口支持安装了OpenLdap组件的集群。
批量导出用户。对于kerberos集群，如果需要kertab文件下载地址，可以将NeedKeytabInfo设置为true；注意SupportDownLoadKeyTab为true，但是DownLoadKeyTabUrl为空字符串，表示keytab文件在后台没有准备好（正在生成）。
                 * @param req DescribeUsersForUserManagerRequest
                 * @return DescribeUsersForUserManagerOutcome
                 */
                DescribeUsersForUserManagerOutcome DescribeUsersForUserManager(const Model::DescribeUsersForUserManagerRequest &request);
                void DescribeUsersForUserManagerAsync(const Model::DescribeUsersForUserManagerRequest& request, const DescribeUsersForUserManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsersForUserManagerOutcomeCallable DescribeUsersForUserManagerCallable(const Model::DescribeUsersForUserManagerRequest& request);

                /**
                 *集群续费询价。
                 * @param req InquirePriceRenewEmrRequest
                 * @return InquirePriceRenewEmrOutcome
                 */
                InquirePriceRenewEmrOutcome InquirePriceRenewEmr(const Model::InquirePriceRenewEmrRequest &request);
                void InquirePriceRenewEmrAsync(const Model::InquirePriceRenewEmrRequest& request, const InquirePriceRenewEmrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceRenewEmrOutcomeCallable InquirePriceRenewEmrCallable(const Model::InquirePriceRenewEmrRequest& request);

                /**
                 *创建实例询价
                 * @param req InquiryPriceCreateInstanceRequest
                 * @return InquiryPriceCreateInstanceOutcome
                 */
                InquiryPriceCreateInstanceOutcome InquiryPriceCreateInstance(const Model::InquiryPriceCreateInstanceRequest &request);
                void InquiryPriceCreateInstanceAsync(const Model::InquiryPriceCreateInstanceRequest& request, const InquiryPriceCreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceCreateInstanceOutcomeCallable InquiryPriceCreateInstanceCallable(const Model::InquiryPriceCreateInstanceRequest& request);

                /**
                 *续费询价。
                 * @param req InquiryPriceRenewInstanceRequest
                 * @return InquiryPriceRenewInstanceOutcome
                 */
                InquiryPriceRenewInstanceOutcome InquiryPriceRenewInstance(const Model::InquiryPriceRenewInstanceRequest &request);
                void InquiryPriceRenewInstanceAsync(const Model::InquiryPriceRenewInstanceRequest& request, const InquiryPriceRenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceRenewInstanceOutcomeCallable InquiryPriceRenewInstanceCallable(const Model::InquiryPriceRenewInstanceRequest& request);

                /**
                 *扩容询价. 当扩容时候，请通过该接口查询价格。
                 * @param req InquiryPriceScaleOutInstanceRequest
                 * @return InquiryPriceScaleOutInstanceOutcome
                 */
                InquiryPriceScaleOutInstanceOutcome InquiryPriceScaleOutInstance(const Model::InquiryPriceScaleOutInstanceRequest &request);
                void InquiryPriceScaleOutInstanceAsync(const Model::InquiryPriceScaleOutInstanceRequest& request, const InquiryPriceScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceScaleOutInstanceOutcomeCallable InquiryPriceScaleOutInstanceCallable(const Model::InquiryPriceScaleOutInstanceRequest& request);

                /**
                 *变配询价
                 * @param req InquiryPriceUpdateInstanceRequest
                 * @return InquiryPriceUpdateInstanceOutcome
                 */
                InquiryPriceUpdateInstanceOutcome InquiryPriceUpdateInstance(const Model::InquiryPriceUpdateInstanceRequest &request);
                void InquiryPriceUpdateInstanceAsync(const Model::InquiryPriceUpdateInstanceRequest& request, const InquiryPriceUpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceUpdateInstanceOutcomeCallable InquiryPriceUpdateInstanceCallable(const Model::InquiryPriceUpdateInstanceRequest& request);

                /**
                 *刷新YARN的动态资源池
                 * @param req ModifyResourcePoolsRequest
                 * @return ModifyResourcePoolsOutcome
                 */
                ModifyResourcePoolsOutcome ModifyResourcePools(const Model::ModifyResourcePoolsRequest &request);
                void ModifyResourcePoolsAsync(const Model::ModifyResourcePoolsRequest& request, const ModifyResourcePoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyResourcePoolsOutcomeCallable ModifyResourcePoolsCallable(const Model::ModifyResourcePoolsRequest& request);

                /**
                 *修改YARN资源调度的资源配置
                 * @param req ModifyResourceScheduleConfigRequest
                 * @return ModifyResourceScheduleConfigOutcome
                 */
                ModifyResourceScheduleConfigOutcome ModifyResourceScheduleConfig(const Model::ModifyResourceScheduleConfigRequest &request);
                void ModifyResourceScheduleConfigAsync(const Model::ModifyResourceScheduleConfigRequest& request, const ModifyResourceScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyResourceScheduleConfigOutcomeCallable ModifyResourceScheduleConfigCallable(const Model::ModifyResourceScheduleConfigRequest& request);

                /**
                 *修改了yarn的资源调度器，点击部署生效
                 * @param req ModifyResourceSchedulerRequest
                 * @return ModifyResourceSchedulerOutcome
                 */
                ModifyResourceSchedulerOutcome ModifyResourceScheduler(const Model::ModifyResourceSchedulerRequest &request);
                void ModifyResourceSchedulerAsync(const Model::ModifyResourceSchedulerRequest& request, const ModifyResourceSchedulerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyResourceSchedulerOutcomeCallable ModifyResourceSchedulerCallable(const Model::ModifyResourceSchedulerRequest& request);

                /**
                 *创建流程作业
                 * @param req RunJobFlowRequest
                 * @return RunJobFlowOutcome
                 */
                RunJobFlowOutcome RunJobFlow(const Model::RunJobFlowRequest &request);
                void RunJobFlowAsync(const Model::RunJobFlowRequest& request, const RunJobFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunJobFlowOutcomeCallable RunJobFlowCallable(const Model::RunJobFlowRequest& request);

                /**
                 *扩容集群节点
                 * @param req ScaleOutClusterRequest
                 * @return ScaleOutClusterOutcome
                 */
                ScaleOutClusterOutcome ScaleOutCluster(const Model::ScaleOutClusterRequest &request);
                void ScaleOutClusterAsync(const Model::ScaleOutClusterRequest& request, const ScaleOutClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleOutClusterOutcomeCallable ScaleOutClusterCallable(const Model::ScaleOutClusterRequest& request);

                /**
                 *扩容节点
                 * @param req ScaleOutInstanceRequest
                 * @return ScaleOutInstanceOutcome
                 */
                ScaleOutInstanceOutcome ScaleOutInstance(const Model::ScaleOutInstanceRequest &request);
                void ScaleOutInstanceAsync(const Model::ScaleOutInstanceRequest& request, const ScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScaleOutInstanceOutcomeCallable ScaleOutInstanceCallable(const Model::ScaleOutInstanceRequest& request);

                /**
                 *用于启动或停止监控或服务
                 * @param req StartStopServiceOrMonitorRequest
                 * @return StartStopServiceOrMonitorOutcome
                 */
                StartStopServiceOrMonitorOutcome StartStopServiceOrMonitor(const Model::StartStopServiceOrMonitorRequest &request);
                void StartStopServiceOrMonitorAsync(const Model::StartStopServiceOrMonitorRequest& request, const StartStopServiceOrMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartStopServiceOrMonitorOutcomeCallable StartStopServiceOrMonitorCallable(const Model::StartStopServiceOrMonitorRequest& request);

                /**
                 *EMR同步TKE中POD状态
                 * @param req SyncPodStateRequest
                 * @return SyncPodStateOutcome
                 */
                SyncPodStateOutcome SyncPodState(const Model::SyncPodStateRequest &request);
                void SyncPodStateAsync(const Model::SyncPodStateRequest& request, const SyncPodStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncPodStateOutcomeCallable SyncPodStateCallable(const Model::SyncPodStateRequest& request);

                /**
                 *销毁集群节点
                 * @param req TerminateClusterNodesRequest
                 * @return TerminateClusterNodesOutcome
                 */
                TerminateClusterNodesOutcome TerminateClusterNodes(const Model::TerminateClusterNodesRequest &request);
                void TerminateClusterNodesAsync(const Model::TerminateClusterNodesRequest& request, const TerminateClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateClusterNodesOutcomeCallable TerminateClusterNodesCallable(const Model::TerminateClusterNodesRequest& request);

                /**
                 *销毁EMR实例。此接口仅支持弹性MapReduce正式计费版本。
                 * @param req TerminateInstanceRequest
                 * @return TerminateInstanceOutcome
                 */
                TerminateInstanceOutcome TerminateInstance(const Model::TerminateInstanceRequest &request);
                void TerminateInstanceAsync(const Model::TerminateInstanceRequest& request, const TerminateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateInstanceOutcomeCallable TerminateInstanceCallable(const Model::TerminateInstanceRequest& request);

                /**
                 *缩容Task节点
                 * @param req TerminateTasksRequest
                 * @return TerminateTasksOutcome
                 */
                TerminateTasksOutcome TerminateTasks(const Model::TerminateTasksRequest &request);
                void TerminateTasksAsync(const Model::TerminateTasksRequest& request, const TerminateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateTasksOutcomeCallable TerminateTasksCallable(const Model::TerminateTasksRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_EMRCLIENT_H_
