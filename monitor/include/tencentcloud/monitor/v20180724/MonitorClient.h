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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MONITORCLIENT_H_
#define TENCENTCLOUD_MONITOR_V20180724_MONITORCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/monitor/v20180724/model/BindingPolicyObjectRequest.h>
#include <tencentcloud/monitor/v20180724/model/BindingPolicyObjectResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePolicyGroupRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePolicyGroupResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeletePolicyGroupRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeletePolicyGroupResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAccidentEventListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAccidentEventListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmHistoriesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmHistoriesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAllNamespacesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAllNamespacesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBaseMetricsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBaseMetricsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBasicAlarmListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBasicAlarmListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductEventListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductEventListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductListResponse.h>
#include <tencentcloud/monitor/v20180724/model/GetMonitorDataRequest.h>
#include <tencentcloud/monitor/v20180724/model/GetMonitorDataResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmReceiversRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmReceiversResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPolicyGroupRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPolicyGroupResponse.h>
#include <tencentcloud/monitor/v20180724/model/PutMonitorDataRequest.h>
#include <tencentcloud/monitor/v20180724/model/PutMonitorDataResponse.h>
#include <tencentcloud/monitor/v20180724/model/SendCustomAlarmMsgRequest.h>
#include <tencentcloud/monitor/v20180724/model/SendCustomAlarmMsgResponse.h>
#include <tencentcloud/monitor/v20180724/model/UnBindingAllPolicyObjectRequest.h>
#include <tencentcloud/monitor/v20180724/model/UnBindingAllPolicyObjectResponse.h>
#include <tencentcloud/monitor/v20180724/model/UnBindingPolicyObjectRequest.h>
#include <tencentcloud/monitor/v20180724/model/UnBindingPolicyObjectResponse.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            class MonitorClient : public AbstractClient
            {
            public:
                MonitorClient(const Credential &credential, const std::string &region);
                MonitorClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::BindingPolicyObjectResponse> BindingPolicyObjectOutcome;
                typedef std::future<BindingPolicyObjectOutcome> BindingPolicyObjectOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::BindingPolicyObjectRequest&, BindingPolicyObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindingPolicyObjectAsyncHandler;
                typedef Outcome<Error, Model::CreatePolicyGroupResponse> CreatePolicyGroupOutcome;
                typedef std::future<CreatePolicyGroupOutcome> CreatePolicyGroupOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePolicyGroupRequest&, CreatePolicyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePolicyGroupAsyncHandler;
                typedef Outcome<Error, Model::DeletePolicyGroupResponse> DeletePolicyGroupOutcome;
                typedef std::future<DeletePolicyGroupOutcome> DeletePolicyGroupOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeletePolicyGroupRequest&, DeletePolicyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePolicyGroupAsyncHandler;
                typedef Outcome<Error, Model::DescribeAccidentEventListResponse> DescribeAccidentEventListOutcome;
                typedef std::future<DescribeAccidentEventListOutcome> DescribeAccidentEventListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAccidentEventListRequest&, DescribeAccidentEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccidentEventListAsyncHandler;
                typedef Outcome<Error, Model::DescribeAlarmHistoriesResponse> DescribeAlarmHistoriesOutcome;
                typedef std::future<DescribeAlarmHistoriesOutcome> DescribeAlarmHistoriesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmHistoriesRequest&, DescribeAlarmHistoriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmHistoriesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAllNamespacesResponse> DescribeAllNamespacesOutcome;
                typedef std::future<DescribeAllNamespacesOutcome> DescribeAllNamespacesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAllNamespacesRequest&, DescribeAllNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllNamespacesAsyncHandler;
                typedef Outcome<Error, Model::DescribeBaseMetricsResponse> DescribeBaseMetricsOutcome;
                typedef std::future<DescribeBaseMetricsOutcome> DescribeBaseMetricsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeBaseMetricsRequest&, DescribeBaseMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaseMetricsAsyncHandler;
                typedef Outcome<Error, Model::DescribeBasicAlarmListResponse> DescribeBasicAlarmListOutcome;
                typedef std::future<DescribeBasicAlarmListOutcome> DescribeBasicAlarmListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeBasicAlarmListRequest&, DescribeBasicAlarmListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBasicAlarmListAsyncHandler;
                typedef Outcome<Error, Model::DescribeBindingPolicyObjectListResponse> DescribeBindingPolicyObjectListOutcome;
                typedef std::future<DescribeBindingPolicyObjectListOutcome> DescribeBindingPolicyObjectListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeBindingPolicyObjectListRequest&, DescribeBindingPolicyObjectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBindingPolicyObjectListAsyncHandler;
                typedef Outcome<Error, Model::DescribePolicyConditionListResponse> DescribePolicyConditionListOutcome;
                typedef std::future<DescribePolicyConditionListOutcome> DescribePolicyConditionListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePolicyConditionListRequest&, DescribePolicyConditionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyConditionListAsyncHandler;
                typedef Outcome<Error, Model::DescribePolicyGroupInfoResponse> DescribePolicyGroupInfoOutcome;
                typedef std::future<DescribePolicyGroupInfoOutcome> DescribePolicyGroupInfoOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePolicyGroupInfoRequest&, DescribePolicyGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyGroupInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribePolicyGroupListResponse> DescribePolicyGroupListOutcome;
                typedef std::future<DescribePolicyGroupListOutcome> DescribePolicyGroupListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePolicyGroupListRequest&, DescribePolicyGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyGroupListAsyncHandler;
                typedef Outcome<Error, Model::DescribeProductEventListResponse> DescribeProductEventListOutcome;
                typedef std::future<DescribeProductEventListOutcome> DescribeProductEventListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeProductEventListRequest&, DescribeProductEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductEventListAsyncHandler;
                typedef Outcome<Error, Model::DescribeProductListResponse> DescribeProductListOutcome;
                typedef std::future<DescribeProductListOutcome> DescribeProductListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeProductListRequest&, DescribeProductListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductListAsyncHandler;
                typedef Outcome<Error, Model::GetMonitorDataResponse> GetMonitorDataOutcome;
                typedef std::future<GetMonitorDataOutcome> GetMonitorDataOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::GetMonitorDataRequest&, GetMonitorDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetMonitorDataAsyncHandler;
                typedef Outcome<Error, Model::ModifyAlarmReceiversResponse> ModifyAlarmReceiversOutcome;
                typedef std::future<ModifyAlarmReceiversOutcome> ModifyAlarmReceiversOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmReceiversRequest&, ModifyAlarmReceiversOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmReceiversAsyncHandler;
                typedef Outcome<Error, Model::ModifyPolicyGroupResponse> ModifyPolicyGroupOutcome;
                typedef std::future<ModifyPolicyGroupOutcome> ModifyPolicyGroupOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyPolicyGroupRequest&, ModifyPolicyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPolicyGroupAsyncHandler;
                typedef Outcome<Error, Model::PutMonitorDataResponse> PutMonitorDataOutcome;
                typedef std::future<PutMonitorDataOutcome> PutMonitorDataOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::PutMonitorDataRequest&, PutMonitorDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PutMonitorDataAsyncHandler;
                typedef Outcome<Error, Model::SendCustomAlarmMsgResponse> SendCustomAlarmMsgOutcome;
                typedef std::future<SendCustomAlarmMsgOutcome> SendCustomAlarmMsgOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::SendCustomAlarmMsgRequest&, SendCustomAlarmMsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendCustomAlarmMsgAsyncHandler;
                typedef Outcome<Error, Model::UnBindingAllPolicyObjectResponse> UnBindingAllPolicyObjectOutcome;
                typedef std::future<UnBindingAllPolicyObjectOutcome> UnBindingAllPolicyObjectOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UnBindingAllPolicyObjectRequest&, UnBindingAllPolicyObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnBindingAllPolicyObjectAsyncHandler;
                typedef Outcome<Error, Model::UnBindingPolicyObjectResponse> UnBindingPolicyObjectOutcome;
                typedef std::future<UnBindingPolicyObjectOutcome> UnBindingPolicyObjectOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UnBindingPolicyObjectRequest&, UnBindingPolicyObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnBindingPolicyObjectAsyncHandler;



                /**
                 *将告警策略绑定到特定对象
                 * @param req BindingPolicyObjectRequest
                 * @return BindingPolicyObjectOutcome
                 */
                BindingPolicyObjectOutcome BindingPolicyObject(const Model::BindingPolicyObjectRequest &request);
                void BindingPolicyObjectAsync(const Model::BindingPolicyObjectRequest& request, const BindingPolicyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindingPolicyObjectOutcomeCallable BindingPolicyObjectCallable(const Model::BindingPolicyObjectRequest& request);

                /**
                 *增加策略组
                 * @param req CreatePolicyGroupRequest
                 * @return CreatePolicyGroupOutcome
                 */
                CreatePolicyGroupOutcome CreatePolicyGroup(const Model::CreatePolicyGroupRequest &request);
                void CreatePolicyGroupAsync(const Model::CreatePolicyGroupRequest& request, const CreatePolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePolicyGroupOutcomeCallable CreatePolicyGroupCallable(const Model::CreatePolicyGroupRequest& request);

                /**
                 *删除告警策略组
                 * @param req DeletePolicyGroupRequest
                 * @return DeletePolicyGroupOutcome
                 */
                DeletePolicyGroupOutcome DeletePolicyGroup(const Model::DeletePolicyGroupRequest &request);
                void DeletePolicyGroupAsync(const Model::DeletePolicyGroupRequest& request, const DeletePolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePolicyGroupOutcomeCallable DeletePolicyGroupCallable(const Model::DeletePolicyGroupRequest& request);

                /**
                 *获取平台事件列表
                 * @param req DescribeAccidentEventListRequest
                 * @return DescribeAccidentEventListOutcome
                 */
                DescribeAccidentEventListOutcome DescribeAccidentEventList(const Model::DescribeAccidentEventListRequest &request);
                void DescribeAccidentEventListAsync(const Model::DescribeAccidentEventListRequest& request, const DescribeAccidentEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccidentEventListOutcomeCallable DescribeAccidentEventListCallable(const Model::DescribeAccidentEventListRequest& request);

                /**
                 *告警2.0-告警历史列表
                 * @param req DescribeAlarmHistoriesRequest
                 * @return DescribeAlarmHistoriesOutcome
                 */
                DescribeAlarmHistoriesOutcome DescribeAlarmHistories(const Model::DescribeAlarmHistoriesRequest &request);
                void DescribeAlarmHistoriesAsync(const Model::DescribeAlarmHistoriesRequest& request, const DescribeAlarmHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmHistoriesOutcomeCallable DescribeAlarmHistoriesCallable(const Model::DescribeAlarmHistoriesRequest& request);

                /**
                 *拉取所有名字空间
                 * @param req DescribeAllNamespacesRequest
                 * @return DescribeAllNamespacesOutcome
                 */
                DescribeAllNamespacesOutcome DescribeAllNamespaces(const Model::DescribeAllNamespacesRequest &request);
                void DescribeAllNamespacesAsync(const Model::DescribeAllNamespacesRequest& request, const DescribeAllNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllNamespacesOutcomeCallable DescribeAllNamespacesCallable(const Model::DescribeAllNamespacesRequest& request);

                /**
                 *获取基础指标详情
                 * @param req DescribeBaseMetricsRequest
                 * @return DescribeBaseMetricsOutcome
                 */
                DescribeBaseMetricsOutcome DescribeBaseMetrics(const Model::DescribeBaseMetricsRequest &request);
                void DescribeBaseMetricsAsync(const Model::DescribeBaseMetricsRequest& request, const DescribeBaseMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaseMetricsOutcomeCallable DescribeBaseMetricsCallable(const Model::DescribeBaseMetricsRequest& request);

                /**
                 *获取基础告警列表
                 * @param req DescribeBasicAlarmListRequest
                 * @return DescribeBasicAlarmListOutcome
                 */
                DescribeBasicAlarmListOutcome DescribeBasicAlarmList(const Model::DescribeBasicAlarmListRequest &request);
                void DescribeBasicAlarmListAsync(const Model::DescribeBasicAlarmListRequest& request, const DescribeBasicAlarmListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBasicAlarmListOutcomeCallable DescribeBasicAlarmListCallable(const Model::DescribeBasicAlarmListRequest& request);

                /**
                 *获取已绑定对象列表
                 * @param req DescribeBindingPolicyObjectListRequest
                 * @return DescribeBindingPolicyObjectListOutcome
                 */
                DescribeBindingPolicyObjectListOutcome DescribeBindingPolicyObjectList(const Model::DescribeBindingPolicyObjectListRequest &request);
                void DescribeBindingPolicyObjectListAsync(const Model::DescribeBindingPolicyObjectListRequest& request, const DescribeBindingPolicyObjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBindingPolicyObjectListOutcomeCallable DescribeBindingPolicyObjectListCallable(const Model::DescribeBindingPolicyObjectListRequest& request);

                /**
                 *获取基础告警策略条件
                 * @param req DescribePolicyConditionListRequest
                 * @return DescribePolicyConditionListOutcome
                 */
                DescribePolicyConditionListOutcome DescribePolicyConditionList(const Model::DescribePolicyConditionListRequest &request);
                void DescribePolicyConditionListAsync(const Model::DescribePolicyConditionListRequest& request, const DescribePolicyConditionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyConditionListOutcomeCallable DescribePolicyConditionListCallable(const Model::DescribePolicyConditionListRequest& request);

                /**
                 *获取基础策略组详情
                 * @param req DescribePolicyGroupInfoRequest
                 * @return DescribePolicyGroupInfoOutcome
                 */
                DescribePolicyGroupInfoOutcome DescribePolicyGroupInfo(const Model::DescribePolicyGroupInfoRequest &request);
                void DescribePolicyGroupInfoAsync(const Model::DescribePolicyGroupInfoRequest& request, const DescribePolicyGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyGroupInfoOutcomeCallable DescribePolicyGroupInfoCallable(const Model::DescribePolicyGroupInfoRequest& request);

                /**
                 *获取基础策略告警组列表
                 * @param req DescribePolicyGroupListRequest
                 * @return DescribePolicyGroupListOutcome
                 */
                DescribePolicyGroupListOutcome DescribePolicyGroupList(const Model::DescribePolicyGroupListRequest &request);
                void DescribePolicyGroupListAsync(const Model::DescribePolicyGroupListRequest& request, const DescribePolicyGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyGroupListOutcomeCallable DescribePolicyGroupListCallable(const Model::DescribePolicyGroupListRequest& request);

                /**
                 *分页获取产品事件的列表
                 * @param req DescribeProductEventListRequest
                 * @return DescribeProductEventListOutcome
                 */
                DescribeProductEventListOutcome DescribeProductEventList(const Model::DescribeProductEventListRequest &request);
                void DescribeProductEventListAsync(const Model::DescribeProductEventListRequest& request, const DescribeProductEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductEventListOutcomeCallable DescribeProductEventListCallable(const Model::DescribeProductEventListRequest& request);

                /**
                 *查询云监控产品列表
                 * @param req DescribeProductListRequest
                 * @return DescribeProductListOutcome
                 */
                DescribeProductListOutcome DescribeProductList(const Model::DescribeProductListRequest &request);
                void DescribeProductListAsync(const Model::DescribeProductListRequest& request, const DescribeProductListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductListOutcomeCallable DescribeProductListCallable(const Model::DescribeProductListRequest& request);

                /**
                 *获取云产品的监控数据。传入产品的命名空间、对象维度描述和监控指标即可获得相应的监控数据。
接口调用频率限制为：20次/秒，1200次/分钟。单请求最多可支持批量拉取10个实例的监控数据，单请求的数据点数限制为1440个。
若您需要调用的指标、对象较多，可能存在因限频出现拉取失败的情况，建议尽量将请求按时间维度均摊。
                 * @param req GetMonitorDataRequest
                 * @return GetMonitorDataOutcome
                 */
                GetMonitorDataOutcome GetMonitorData(const Model::GetMonitorDataRequest &request);
                void GetMonitorDataAsync(const Model::GetMonitorDataRequest& request, const GetMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetMonitorDataOutcomeCallable GetMonitorDataCallable(const Model::GetMonitorDataRequest& request);

                /**
                 *修改告警接收人
                 * @param req ModifyAlarmReceiversRequest
                 * @return ModifyAlarmReceiversOutcome
                 */
                ModifyAlarmReceiversOutcome ModifyAlarmReceivers(const Model::ModifyAlarmReceiversRequest &request);
                void ModifyAlarmReceiversAsync(const Model::ModifyAlarmReceiversRequest& request, const ModifyAlarmReceiversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmReceiversOutcomeCallable ModifyAlarmReceiversCallable(const Model::ModifyAlarmReceiversRequest& request);

                /**
                 *更新策略组
                 * @param req ModifyPolicyGroupRequest
                 * @return ModifyPolicyGroupOutcome
                 */
                ModifyPolicyGroupOutcome ModifyPolicyGroup(const Model::ModifyPolicyGroupRequest &request);
                void ModifyPolicyGroupAsync(const Model::ModifyPolicyGroupRequest& request, const ModifyPolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPolicyGroupOutcomeCallable ModifyPolicyGroupCallable(const Model::ModifyPolicyGroupRequest& request);

                /**
                 *默认接口请求频率限制：50次/秒。
默认单租户指标上限：100个。
单次上报最多 30 个指标/值对，请求返回错误时，请求中所有的指标/值均不会被保存。

上报的时间戳为期望保存的时间戳，建议构造整数分钟时刻的时间戳。
时间戳时间范围必须为当前时间到 300 秒前之间。
同一 IP 指标对的数据需按分钟先后顺序上报。
                 * @param req PutMonitorDataRequest
                 * @return PutMonitorDataOutcome
                 */
                PutMonitorDataOutcome PutMonitorData(const Model::PutMonitorDataRequest &request);
                void PutMonitorDataAsync(const Model::PutMonitorDataRequest& request, const PutMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PutMonitorDataOutcomeCallable PutMonitorDataCallable(const Model::PutMonitorDataRequest& request);

                /**
                 *发送自定义消息告警
                 * @param req SendCustomAlarmMsgRequest
                 * @return SendCustomAlarmMsgOutcome
                 */
                SendCustomAlarmMsgOutcome SendCustomAlarmMsg(const Model::SendCustomAlarmMsgRequest &request);
                void SendCustomAlarmMsgAsync(const Model::SendCustomAlarmMsgRequest& request, const SendCustomAlarmMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendCustomAlarmMsgOutcomeCallable SendCustomAlarmMsgCallable(const Model::SendCustomAlarmMsgRequest& request);

                /**
                 *删除全部的关联对象
                 * @param req UnBindingAllPolicyObjectRequest
                 * @return UnBindingAllPolicyObjectOutcome
                 */
                UnBindingAllPolicyObjectOutcome UnBindingAllPolicyObject(const Model::UnBindingAllPolicyObjectRequest &request);
                void UnBindingAllPolicyObjectAsync(const Model::UnBindingAllPolicyObjectRequest& request, const UnBindingAllPolicyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnBindingAllPolicyObjectOutcomeCallable UnBindingAllPolicyObjectCallable(const Model::UnBindingAllPolicyObjectRequest& request);

                /**
                 *删除策略的关联对象
                 * @param req UnBindingPolicyObjectRequest
                 * @return UnBindingPolicyObjectOutcome
                 */
                UnBindingPolicyObjectOutcome UnBindingPolicyObject(const Model::UnBindingPolicyObjectRequest &request);
                void UnBindingPolicyObjectAsync(const Model::UnBindingPolicyObjectRequest& request, const UnBindingPolicyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnBindingPolicyObjectOutcomeCallable UnBindingPolicyObjectCallable(const Model::UnBindingPolicyObjectRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MONITORCLIENT_H_
