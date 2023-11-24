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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_HUNYUANCLIENT_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_HUNYUANCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/hunyuan/v20230901/model/ChatProRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/ChatProResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/ChatStdRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/ChatStdResponse.h>
#include <tencentcloud/hunyuan/v20230901/model/GetTokenCountRequest.h>
#include <tencentcloud/hunyuan/v20230901/model/GetTokenCountResponse.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            class HunyuanClient : public AbstractClient
            {
            public:
                HunyuanClient(const Credential &credential, const std::string &region);
                HunyuanClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ChatProResponse> ChatProOutcome;
                typedef std::future<ChatProOutcome> ChatProOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::ChatProRequest&, ChatProOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChatProAsyncHandler;
                typedef Outcome<Core::Error, Model::ChatStdResponse> ChatStdOutcome;
                typedef std::future<ChatStdOutcome> ChatStdOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::ChatStdRequest&, ChatStdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChatStdAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTokenCountResponse> GetTokenCountOutcome;
                typedef std::future<GetTokenCountOutcome> GetTokenCountOutcomeCallable;
                typedef std::function<void(const HunyuanClient*, const Model::GetTokenCountRequest&, GetTokenCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTokenCountAsyncHandler;



                /**
                 *腾讯混元大模型高级版是由腾讯研发的大语言模型，具备强大的中文创作能力，复杂语境下的逻辑推理能力，以及可靠的任务执行能力。本接口为SSE协议。

 1.本接口暂不支持返回图片内容。
 2.默认单账号限制并发数为5路，如您有提高并发限制的需求请 [联系我们](https://cloud.tencent.com/act/event/Online_service) 。
                 * @param req ChatProRequest
                 * @return ChatProOutcome
                 */
                ChatProOutcome ChatPro(const Model::ChatProRequest &request);
                void ChatProAsync(const Model::ChatProRequest& request, const ChatProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChatProOutcomeCallable ChatProCallable(const Model::ChatProRequest& request);

                /**
                 *腾讯混元大模型标准版是由腾讯研发的大语言模型，具备强大的中文创作能力，复杂语境下的逻辑推理能力，以及可靠的任务执行能力。本接口为SSE协议。

 1.本接口暂不支持返回图片内容。
 2.默认单账号限制并发数为5路，如您有提高并发限制的需求请 [联系我们](https://cloud.tencent.com/act/event/Online_service) 。
                 * @param req ChatStdRequest
                 * @return ChatStdOutcome
                 */
                ChatStdOutcome ChatStd(const Model::ChatStdRequest &request);
                void ChatStdAsync(const Model::ChatStdRequest& request, const ChatStdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChatStdOutcomeCallable ChatStdCallable(const Model::ChatStdRequest& request);

                /**
                 *该接口用于计算文本对应Token数、字符数。
                 * @param req GetTokenCountRequest
                 * @return GetTokenCountOutcome
                 */
                GetTokenCountOutcome GetTokenCount(const Model::GetTokenCountRequest &request);
                void GetTokenCountAsync(const Model::GetTokenCountRequest& request, const GetTokenCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTokenCountOutcomeCallable GetTokenCountCallable(const Model::GetTokenCountRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_HUNYUANCLIENT_H_
