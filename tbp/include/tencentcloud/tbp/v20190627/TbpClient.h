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

#ifndef TENCENTCLOUD_TBP_V20190627_TBPCLIENT_H_
#define TENCENTCLOUD_TBP_V20190627_TBPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tbp/v20190627/model/TextProcessRequest.h>
#include <tencentcloud/tbp/v20190627/model/TextProcessResponse.h>
#include <tencentcloud/tbp/v20190627/model/TextResetRequest.h>
#include <tencentcloud/tbp/v20190627/model/TextResetResponse.h>


namespace TencentCloud
{
    namespace Tbp
    {
        namespace V20190627
        {
            class TbpClient : public AbstractClient
            {
            public:
                TbpClient(const Credential &credential, const std::string &region);
                TbpClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::TextProcessResponse> TextProcessOutcome;
                typedef std::future<TextProcessOutcome> TextProcessOutcomeCallable;
                typedef std::function<void(const TbpClient*, const Model::TextProcessRequest&, TextProcessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextProcessAsyncHandler;
                typedef Outcome<Core::Error, Model::TextResetResponse> TextResetOutcome;
                typedef std::future<TextResetOutcome> TextResetOutcomeCallable;
                typedef std::function<void(const TbpClient*, const Model::TextResetRequest&, TextResetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextResetAsyncHandler;



                /**
                 *接收调用侧的文本输入，返回应答文本。
                 * @param req TextProcessRequest
                 * @return TextProcessOutcome
                 */
                TextProcessOutcome TextProcess(const Model::TextProcessRequest &request);
                void TextProcessAsync(const Model::TextProcessRequest& request, const TextProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextProcessOutcomeCallable TextProcessCallable(const Model::TextProcessRequest& request);

                /**
                 *会话重置接口。
                 * @param req TextResetRequest
                 * @return TextResetOutcome
                 */
                TextResetOutcome TextReset(const Model::TextResetRequest &request);
                void TextResetAsync(const Model::TextResetRequest& request, const TextResetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextResetOutcomeCallable TextResetCallable(const Model::TextResetRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TBP_V20190627_TBPCLIENT_H_
