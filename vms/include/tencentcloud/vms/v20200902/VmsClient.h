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

#ifndef TENCENTCLOUD_VMS_V20200902_VMSCLIENT_H_
#define TENCENTCLOUD_VMS_V20200902_VMSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/vms/v20200902/model/SendCodeVoiceRequest.h>
#include <tencentcloud/vms/v20200902/model/SendCodeVoiceResponse.h>
#include <tencentcloud/vms/v20200902/model/SendTtsVoiceRequest.h>
#include <tencentcloud/vms/v20200902/model/SendTtsVoiceResponse.h>


namespace TencentCloud
{
    namespace Vms
    {
        namespace V20200902
        {
            class VmsClient : public AbstractClient
            {
            public:
                VmsClient(const Credential &credential, const std::string &region);
                VmsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::SendCodeVoiceResponse> SendCodeVoiceOutcome;
                typedef std::future<SendCodeVoiceOutcome> SendCodeVoiceOutcomeCallable;
                typedef std::function<void(const VmsClient*, const Model::SendCodeVoiceRequest&, SendCodeVoiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendCodeVoiceAsyncHandler;
                typedef Outcome<Core::Error, Model::SendTtsVoiceResponse> SendTtsVoiceOutcome;
                typedef std::future<SendTtsVoiceOutcome> SendTtsVoiceOutcomeCallable;
                typedef std::function<void(const VmsClient*, const Model::SendTtsVoiceRequest&, SendTtsVoiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendTtsVoiceAsyncHandler;



                /**
                 *给用户发语音验证码（仅支持数字）。
                 * @param req SendCodeVoiceRequest
                 * @return SendCodeVoiceOutcome
                 */
                SendCodeVoiceOutcome SendCodeVoice(const Model::SendCodeVoiceRequest &request);
                void SendCodeVoiceAsync(const Model::SendCodeVoiceRequest& request, const SendCodeVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendCodeVoiceOutcomeCallable SendCodeVoiceCallable(const Model::SendCodeVoiceRequest& request);

                /**
                 *给用户发送指定模板的语音通知。
                 * @param req SendTtsVoiceRequest
                 * @return SendTtsVoiceOutcome
                 */
                SendTtsVoiceOutcome SendTtsVoice(const Model::SendTtsVoiceRequest &request);
                void SendTtsVoiceAsync(const Model::SendTtsVoiceRequest& request, const SendTtsVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendTtsVoiceOutcomeCallable SendTtsVoiceCallable(const Model::SendTtsVoiceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_VMS_V20200902_VMSCLIENT_H_
