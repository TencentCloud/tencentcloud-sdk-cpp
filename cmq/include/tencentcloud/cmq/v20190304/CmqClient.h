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
#include <tencentcloud/cmq/v20190304/model/ClearQueueRequest.h>
#include <tencentcloud/cmq/v20190304/model/ClearQueueResponse.h>
#include <tencentcloud/cmq/v20190304/model/ClearSubscriptionFilterTagsRequest.h>
#include <tencentcloud/cmq/v20190304/model/ClearSubscriptionFilterTagsResponse.h>
#include <tencentcloud/cmq/v20190304/model/CreateQueueRequest.h>
#include <tencentcloud/cmq/v20190304/model/CreateQueueResponse.h>
#include <tencentcloud/cmq/v20190304/model/CreateSubscribeRequest.h>
#include <tencentcloud/cmq/v20190304/model/CreateSubscribeResponse.h>
#include <tencentcloud/cmq/v20190304/model/CreateTopicRequest.h>
#include <tencentcloud/cmq/v20190304/model/CreateTopicResponse.h>
#include <tencentcloud/cmq/v20190304/model/DeleteQueueRequest.h>
#include <tencentcloud/cmq/v20190304/model/DeleteQueueResponse.h>
#include <tencentcloud/cmq/v20190304/model/DeleteSubscribeRequest.h>
#include <tencentcloud/cmq/v20190304/model/DeleteSubscribeResponse.h>
#include <tencentcloud/cmq/v20190304/model/DeleteTopicRequest.h>
#include <tencentcloud/cmq/v20190304/model/DeleteTopicResponse.h>
#include <tencentcloud/cmq/v20190304/model/DescribeDeadLetterSourceQueuesRequest.h>
#include <tencentcloud/cmq/v20190304/model/DescribeDeadLetterSourceQueuesResponse.h>
#include <tencentcloud/cmq/v20190304/model/DescribeQueueDetailRequest.h>
#include <tencentcloud/cmq/v20190304/model/DescribeQueueDetailResponse.h>
#include <tencentcloud/cmq/v20190304/model/DescribeSubscriptionDetailRequest.h>
#include <tencentcloud/cmq/v20190304/model/DescribeSubscriptionDetailResponse.h>
#include <tencentcloud/cmq/v20190304/model/DescribeTopicDetailRequest.h>
#include <tencentcloud/cmq/v20190304/model/DescribeTopicDetailResponse.h>
#include <tencentcloud/cmq/v20190304/model/ModifyQueueAttributeRequest.h>
#include <tencentcloud/cmq/v20190304/model/ModifyQueueAttributeResponse.h>
#include <tencentcloud/cmq/v20190304/model/ModifySubscriptionAttributeRequest.h>
#include <tencentcloud/cmq/v20190304/model/ModifySubscriptionAttributeResponse.h>
#include <tencentcloud/cmq/v20190304/model/ModifyTopicAttributeRequest.h>
#include <tencentcloud/cmq/v20190304/model/ModifyTopicAttributeResponse.h>
#include <tencentcloud/cmq/v20190304/model/RewindQueueRequest.h>
#include <tencentcloud/cmq/v20190304/model/RewindQueueResponse.h>
#include <tencentcloud/cmq/v20190304/model/UnbindDeadLetterRequest.h>
#include <tencentcloud/cmq/v20190304/model/UnbindDeadLetterResponse.h>


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

                typedef Outcome<Core::Error, Model::ClearQueueResponse> ClearQueueOutcome;
                typedef std::future<ClearQueueOutcome> ClearQueueOutcomeCallable;
                typedef std::function<void(const CmqClient*, const Model::ClearQueueRequest&, ClearQueueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ClearQueueAsyncHandler;
                typedef Outcome<Core::Error, Model::ClearSubscriptionFilterTagsResponse> ClearSubscriptionFilterTagsOutcome;
                typedef std::future<ClearSubscriptionFilterTagsOutcome> ClearSubscriptionFilterTagsOutcomeCallable;
                typedef std::function<void(const CmqClient*, const Model::ClearSubscriptionFilterTagsRequest&, ClearSubscriptionFilterTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ClearSubscriptionFilterTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateQueueResponse> CreateQueueOutcome;
                typedef std::future<CreateQueueOutcome> CreateQueueOutcomeCallable;
                typedef std::function<void(const CmqClient*, const Model::CreateQueueRequest&, CreateQueueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateQueueAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSubscribeResponse> CreateSubscribeOutcome;
                typedef std::future<CreateSubscribeOutcome> CreateSubscribeOutcomeCallable;
                typedef std::function<void(const CmqClient*, const Model::CreateSubscribeRequest&, CreateSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTopicResponse> CreateTopicOutcome;
                typedef std::future<CreateTopicOutcome> CreateTopicOutcomeCallable;
                typedef std::function<void(const CmqClient*, const Model::CreateTopicRequest&, CreateTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteQueueResponse> DeleteQueueOutcome;
                typedef std::future<DeleteQueueOutcome> DeleteQueueOutcomeCallable;
                typedef std::function<void(const CmqClient*, const Model::DeleteQueueRequest&, DeleteQueueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQueueAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSubscribeResponse> DeleteSubscribeOutcome;
                typedef std::future<DeleteSubscribeOutcome> DeleteSubscribeOutcomeCallable;
                typedef std::function<void(const CmqClient*, const Model::DeleteSubscribeRequest&, DeleteSubscribeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSubscribeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTopicResponse> DeleteTopicOutcome;
                typedef std::future<DeleteTopicOutcome> DeleteTopicOutcomeCallable;
                typedef std::function<void(const CmqClient*, const Model::DeleteTopicRequest&, DeleteTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeadLetterSourceQueuesResponse> DescribeDeadLetterSourceQueuesOutcome;
                typedef std::future<DescribeDeadLetterSourceQueuesOutcome> DescribeDeadLetterSourceQueuesOutcomeCallable;
                typedef std::function<void(const CmqClient*, const Model::DescribeDeadLetterSourceQueuesRequest&, DescribeDeadLetterSourceQueuesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeadLetterSourceQueuesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQueueDetailResponse> DescribeQueueDetailOutcome;
                typedef std::future<DescribeQueueDetailOutcome> DescribeQueueDetailOutcomeCallable;
                typedef std::function<void(const CmqClient*, const Model::DescribeQueueDetailRequest&, DescribeQueueDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQueueDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubscriptionDetailResponse> DescribeSubscriptionDetailOutcome;
                typedef std::future<DescribeSubscriptionDetailOutcome> DescribeSubscriptionDetailOutcomeCallable;
                typedef std::function<void(const CmqClient*, const Model::DescribeSubscriptionDetailRequest&, DescribeSubscriptionDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscriptionDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicDetailResponse> DescribeTopicDetailOutcome;
                typedef std::future<DescribeTopicDetailOutcome> DescribeTopicDetailOutcomeCallable;
                typedef std::function<void(const CmqClient*, const Model::DescribeTopicDetailRequest&, DescribeTopicDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyQueueAttributeResponse> ModifyQueueAttributeOutcome;
                typedef std::future<ModifyQueueAttributeOutcome> ModifyQueueAttributeOutcomeCallable;
                typedef std::function<void(const CmqClient*, const Model::ModifyQueueAttributeRequest&, ModifyQueueAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyQueueAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySubscriptionAttributeResponse> ModifySubscriptionAttributeOutcome;
                typedef std::future<ModifySubscriptionAttributeOutcome> ModifySubscriptionAttributeOutcomeCallable;
                typedef std::function<void(const CmqClient*, const Model::ModifySubscriptionAttributeRequest&, ModifySubscriptionAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubscriptionAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTopicAttributeResponse> ModifyTopicAttributeOutcome;
                typedef std::future<ModifyTopicAttributeOutcome> ModifyTopicAttributeOutcomeCallable;
                typedef std::function<void(const CmqClient*, const Model::ModifyTopicAttributeRequest&, ModifyTopicAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTopicAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::RewindQueueResponse> RewindQueueOutcome;
                typedef std::future<RewindQueueOutcome> RewindQueueOutcomeCallable;
                typedef std::function<void(const CmqClient*, const Model::RewindQueueRequest&, RewindQueueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RewindQueueAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindDeadLetterResponse> UnbindDeadLetterOutcome;
                typedef std::future<UnbindDeadLetterOutcome> UnbindDeadLetterOutcomeCallable;
                typedef std::function<void(const CmqClient*, const Model::UnbindDeadLetterRequest&, UnbindDeadLetterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindDeadLetterAsyncHandler;



                /**
                 *下线老cmq云API 3.0 无调用量接口

清除queue中的所有消息
                 * @param req ClearQueueRequest
                 * @return ClearQueueOutcome
                 */
                ClearQueueOutcome ClearQueue(const Model::ClearQueueRequest &request);
                void ClearQueueAsync(const Model::ClearQueueRequest& request, const ClearQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ClearQueueOutcomeCallable ClearQueueCallable(const Model::ClearQueueRequest& request);

                /**
                 *下线老cmq云API 3.0 无调用量接口

清空订阅者消息标签
                 * @param req ClearSubscriptionFilterTagsRequest
                 * @return ClearSubscriptionFilterTagsOutcome
                 */
                ClearSubscriptionFilterTagsOutcome ClearSubscriptionFilterTags(const Model::ClearSubscriptionFilterTagsRequest &request);
                void ClearSubscriptionFilterTagsAsync(const Model::ClearSubscriptionFilterTagsRequest& request, const ClearSubscriptionFilterTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ClearSubscriptionFilterTagsOutcomeCallable ClearSubscriptionFilterTagsCallable(const Model::ClearSubscriptionFilterTagsRequest& request);

                /**
                 *创建队列接口

                 * @param req CreateQueueRequest
                 * @return CreateQueueOutcome
                 */
                CreateQueueOutcome CreateQueue(const Model::CreateQueueRequest &request);
                void CreateQueueAsync(const Model::CreateQueueRequest& request, const CreateQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateQueueOutcomeCallable CreateQueueCallable(const Model::CreateQueueRequest& request);

                /**
                 *下线老cmq云API 3.0 无调用量接口

创建订阅接口
                 * @param req CreateSubscribeRequest
                 * @return CreateSubscribeOutcome
                 */
                CreateSubscribeOutcome CreateSubscribe(const Model::CreateSubscribeRequest &request);
                void CreateSubscribeAsync(const Model::CreateSubscribeRequest& request, const CreateSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSubscribeOutcomeCallable CreateSubscribeCallable(const Model::CreateSubscribeRequest& request);

                /**
                 *创建主题
                 * @param req CreateTopicRequest
                 * @return CreateTopicOutcome
                 */
                CreateTopicOutcome CreateTopic(const Model::CreateTopicRequest &request);
                void CreateTopicAsync(const Model::CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTopicOutcomeCallable CreateTopicCallable(const Model::CreateTopicRequest& request);

                /**
                 *DeleteQueue
                 * @param req DeleteQueueRequest
                 * @return DeleteQueueOutcome
                 */
                DeleteQueueOutcome DeleteQueue(const Model::DeleteQueueRequest &request);
                void DeleteQueueAsync(const Model::DeleteQueueRequest& request, const DeleteQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteQueueOutcomeCallable DeleteQueueCallable(const Model::DeleteQueueRequest& request);

                /**
                 *下线老cmq云API 3.0 无调用量接口

删除订阅
                 * @param req DeleteSubscribeRequest
                 * @return DeleteSubscribeOutcome
                 */
                DeleteSubscribeOutcome DeleteSubscribe(const Model::DeleteSubscribeRequest &request);
                void DeleteSubscribeAsync(const Model::DeleteSubscribeRequest& request, const DeleteSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSubscribeOutcomeCallable DeleteSubscribeCallable(const Model::DeleteSubscribeRequest& request);

                /**
                 *下线老cmq云API 3.0 无调用量接口

删除主题
                 * @param req DeleteTopicRequest
                 * @return DeleteTopicOutcome
                 */
                DeleteTopicOutcome DeleteTopic(const Model::DeleteTopicRequest &request);
                void DeleteTopicAsync(const Model::DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTopicOutcomeCallable DeleteTopicCallable(const Model::DeleteTopicRequest& request);

                /**
                 *下线老cmq云API 3.0 无调用量接口

枚举死信队列源队列
                 * @param req DescribeDeadLetterSourceQueuesRequest
                 * @return DescribeDeadLetterSourceQueuesOutcome
                 */
                DescribeDeadLetterSourceQueuesOutcome DescribeDeadLetterSourceQueues(const Model::DescribeDeadLetterSourceQueuesRequest &request);
                void DescribeDeadLetterSourceQueuesAsync(const Model::DescribeDeadLetterSourceQueuesRequest& request, const DescribeDeadLetterSourceQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeadLetterSourceQueuesOutcomeCallable DescribeDeadLetterSourceQueuesCallable(const Model::DescribeDeadLetterSourceQueuesRequest& request);

                /**
                 *枚举队列列表
                 * @param req DescribeQueueDetailRequest
                 * @return DescribeQueueDetailOutcome
                 */
                DescribeQueueDetailOutcome DescribeQueueDetail(const Model::DescribeQueueDetailRequest &request);
                void DescribeQueueDetailAsync(const Model::DescribeQueueDetailRequest& request, const DescribeQueueDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQueueDetailOutcomeCallable DescribeQueueDetailCallable(const Model::DescribeQueueDetailRequest& request);

                /**
                 *查询订阅详情
                 * @param req DescribeSubscriptionDetailRequest
                 * @return DescribeSubscriptionDetailOutcome
                 */
                DescribeSubscriptionDetailOutcome DescribeSubscriptionDetail(const Model::DescribeSubscriptionDetailRequest &request);
                void DescribeSubscriptionDetailAsync(const Model::DescribeSubscriptionDetailRequest& request, const DescribeSubscriptionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubscriptionDetailOutcomeCallable DescribeSubscriptionDetailCallable(const Model::DescribeSubscriptionDetailRequest& request);

                /**
                 *查询主题详情
                 * @param req DescribeTopicDetailRequest
                 * @return DescribeTopicDetailOutcome
                 */
                DescribeTopicDetailOutcome DescribeTopicDetail(const Model::DescribeTopicDetailRequest &request);
                void DescribeTopicDetailAsync(const Model::DescribeTopicDetailRequest& request, const DescribeTopicDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicDetailOutcomeCallable DescribeTopicDetailCallable(const Model::DescribeTopicDetailRequest& request);

                /**
                 *修改队列属性
                 * @param req ModifyQueueAttributeRequest
                 * @return ModifyQueueAttributeOutcome
                 */
                ModifyQueueAttributeOutcome ModifyQueueAttribute(const Model::ModifyQueueAttributeRequest &request);
                void ModifyQueueAttributeAsync(const Model::ModifyQueueAttributeRequest& request, const ModifyQueueAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyQueueAttributeOutcomeCallable ModifyQueueAttributeCallable(const Model::ModifyQueueAttributeRequest& request);

                /**
                 *下线老cmq云API 3.0 无调用量接口

修改订阅属性
                 * @param req ModifySubscriptionAttributeRequest
                 * @return ModifySubscriptionAttributeOutcome
                 */
                ModifySubscriptionAttributeOutcome ModifySubscriptionAttribute(const Model::ModifySubscriptionAttributeRequest &request);
                void ModifySubscriptionAttributeAsync(const Model::ModifySubscriptionAttributeRequest& request, const ModifySubscriptionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubscriptionAttributeOutcomeCallable ModifySubscriptionAttributeCallable(const Model::ModifySubscriptionAttributeRequest& request);

                /**
                 *下线老cmq云API 3.0 无调用量接口

修改主题属性
                 * @param req ModifyTopicAttributeRequest
                 * @return ModifyTopicAttributeOutcome
                 */
                ModifyTopicAttributeOutcome ModifyTopicAttribute(const Model::ModifyTopicAttributeRequest &request);
                void ModifyTopicAttributeAsync(const Model::ModifyTopicAttributeRequest& request, const ModifyTopicAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTopicAttributeOutcomeCallable ModifyTopicAttributeCallable(const Model::ModifyTopicAttributeRequest& request);

                /**
                 *下线老cmq云API 3.0 无调用量接口

回溯队列
                 * @param req RewindQueueRequest
                 * @return RewindQueueOutcome
                 */
                RewindQueueOutcome RewindQueue(const Model::RewindQueueRequest &request);
                void RewindQueueAsync(const Model::RewindQueueRequest& request, const RewindQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RewindQueueOutcomeCallable RewindQueueCallable(const Model::RewindQueueRequest& request);

                /**
                 *下线老cmq云API 3.0 无调用量接口

解绑死信队列
                 * @param req UnbindDeadLetterRequest
                 * @return UnbindDeadLetterOutcome
                 */
                UnbindDeadLetterOutcome UnbindDeadLetter(const Model::UnbindDeadLetterRequest &request);
                void UnbindDeadLetterAsync(const Model::UnbindDeadLetterRequest& request, const UnbindDeadLetterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindDeadLetterOutcomeCallable UnbindDeadLetterCallable(const Model::UnbindDeadLetterRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_CMQCLIENT_H_
