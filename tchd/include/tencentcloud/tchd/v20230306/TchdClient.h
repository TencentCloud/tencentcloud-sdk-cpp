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

#ifndef TENCENTCLOUD_TCHD_V20230306_TCHDCLIENT_H_
#define TENCENTCLOUD_TCHD_V20230306_TCHDCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tchd/v20230306/model/DescribeEventStatisticsRequest.h>
#include <tencentcloud/tchd/v20230306/model/DescribeEventStatisticsResponse.h>
#include <tencentcloud/tchd/v20230306/model/DescribeEventsRequest.h>
#include <tencentcloud/tchd/v20230306/model/DescribeEventsResponse.h>


namespace TencentCloud
{
    namespace Tchd
    {
        namespace V20230306
        {
            class TchdClient : public AbstractClient
            {
            public:
                TchdClient(const Credential &credential, const std::string &region);
                TchdClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeEventStatisticsResponse> DescribeEventStatisticsOutcome;
                typedef std::future<DescribeEventStatisticsOutcome> DescribeEventStatisticsOutcomeCallable;
                typedef std::function<void(const TchdClient*, const Model::DescribeEventStatisticsRequest&, DescribeEventStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEventsResponse> DescribeEventsOutcome;
                typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
                typedef std::function<void(const TchdClient*, const Model::DescribeEventsRequest&, DescribeEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventsAsyncHandler;



                /**
                 *本接口用于查询腾讯云健康看板的实时可用性事件信息，可以通过产品列表、地域进行过滤查询。
可以参考健康看板历史事件页面来获取查询案例（链接：https://status.cloud.tencent.com/history）。
                 * @param req DescribeEventStatisticsRequest
                 * @return DescribeEventStatisticsOutcome
                 */
                DescribeEventStatisticsOutcome DescribeEventStatistics(const Model::DescribeEventStatisticsRequest &request);
                void DescribeEventStatisticsAsync(const Model::DescribeEventStatisticsRequest& request, const DescribeEventStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventStatisticsOutcomeCallable DescribeEventStatisticsCallable(const Model::DescribeEventStatisticsRequest& request);

                /**
                 *本接口用于查询腾讯云健康看板的可用性事件信息，可以通过产品列表、地域列表和事件发生日期进行过滤查询。
当查询的产品对应时间内无事件时将返回空结果。
可以参考健康看板历史事件页面来获取查询案例（链接：https://status.cloud.tencent.com/history）。
                 * @param req DescribeEventsRequest
                 * @return DescribeEventsOutcome
                 */
                DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest &request);
                void DescribeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TCHD_V20230306_TCHDCLIENT_H_
