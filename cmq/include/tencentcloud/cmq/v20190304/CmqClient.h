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

#ifndef TENCENTCLOUD_CMQ_V20190304_CMQCLIENT_H_
#define TENCENTCLOUD_CMQ_V20190304_CMQCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cmq/v20190304/model/DescribeQueueDetailRequest.h>
#include <tencentcloud/cmq/v20190304/model/DescribeQueueDetailResponse.h>
#include <tencentcloud/cmq/v20190304/model/DescribeTopicDetailRequest.h>
#include <tencentcloud/cmq/v20190304/model/DescribeTopicDetailResponse.h>


namespace TencentCloud
{
    namespace Cmq
    {
        namespace V20190304
        {
            class CmqClient : public AbstractClient
            {
            public:
                CmqClient(const Credential &credential, const std::string &region);
                CmqClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeQueueDetailResponse> DescribeQueueDetailOutcome;
                typedef std::future<DescribeQueueDetailOutcome> DescribeQueueDetailOutcomeCallable;
                typedef std::function<void(const CmqClient*, const Model::DescribeQueueDetailRequest&, DescribeQueueDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQueueDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicDetailResponse> DescribeTopicDetailOutcome;
                typedef std::future<DescribeTopicDetailOutcome> DescribeTopicDetailOutcomeCallable;
                typedef std::function<void(const CmqClient*, const Model::DescribeTopicDetailRequest&, DescribeTopicDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicDetailAsyncHandler;



                /**
                 *枚举队列列表
                 * @param req DescribeQueueDetailRequest
                 * @return DescribeQueueDetailOutcome
                 */
                DescribeQueueDetailOutcome DescribeQueueDetail(const Model::DescribeQueueDetailRequest &request);
                void DescribeQueueDetailAsync(const Model::DescribeQueueDetailRequest& request, const DescribeQueueDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQueueDetailOutcomeCallable DescribeQueueDetailCallable(const Model::DescribeQueueDetailRequest& request);

                /**
                 *查询主题详情
                 * @param req DescribeTopicDetailRequest
                 * @return DescribeTopicDetailOutcome
                 */
                DescribeTopicDetailOutcome DescribeTopicDetail(const Model::DescribeTopicDetailRequest &request);
                void DescribeTopicDetailAsync(const Model::DescribeTopicDetailRequest& request, const DescribeTopicDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicDetailOutcomeCallable DescribeTopicDetailCallable(const Model::DescribeTopicDetailRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_CMQCLIENT_H_
