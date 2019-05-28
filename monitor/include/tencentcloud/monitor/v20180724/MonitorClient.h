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
#include <tencentcloud/monitor/v20180724/model/DescribeBaseMetricsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBaseMetricsResponse.h>
#include <tencentcloud/monitor/v20180724/model/GetMonitorDataRequest.h>
#include <tencentcloud/monitor/v20180724/model/GetMonitorDataResponse.h>


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

                typedef Outcome<Error, Model::DescribeBaseMetricsResponse> DescribeBaseMetricsOutcome;
                typedef std::future<DescribeBaseMetricsOutcome> DescribeBaseMetricsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeBaseMetricsRequest&, DescribeBaseMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaseMetricsAsyncHandler;
                typedef Outcome<Error, Model::GetMonitorDataResponse> GetMonitorDataOutcome;
                typedef std::future<GetMonitorDataOutcome> GetMonitorDataOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::GetMonitorDataRequest&, GetMonitorDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetMonitorDataAsyncHandler;



                /**
                 *获取基础指标详情
                 * @param req DescribeBaseMetricsRequest
                 * @return DescribeBaseMetricsOutcome
                 */
                DescribeBaseMetricsOutcome DescribeBaseMetrics(const Model::DescribeBaseMetricsRequest &request);
                void DescribeBaseMetricsAsync(const Model::DescribeBaseMetricsRequest& request, const DescribeBaseMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaseMetricsOutcomeCallable DescribeBaseMetricsCallable(const Model::DescribeBaseMetricsRequest& request);

                /**
                 *获取云产品的监控数据。传入产品的命名空间、对象维度描述和监控指标即可获得相应的监控数据。
接口调用频率限制为：20次/秒，1200次/分钟。
若您需要调用的指标、对象较多，可能存在因限频出现拉取失败的情况，建议尽量将请求按时间维度均摊。
                 * @param req GetMonitorDataRequest
                 * @return GetMonitorDataOutcome
                 */
                GetMonitorDataOutcome GetMonitorData(const Model::GetMonitorDataRequest &request);
                void GetMonitorDataAsync(const Model::GetMonitorDataRequest& request, const GetMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetMonitorDataOutcomeCallable GetMonitorDataCallable(const Model::GetMonitorDataRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MONITORCLIENT_H_
