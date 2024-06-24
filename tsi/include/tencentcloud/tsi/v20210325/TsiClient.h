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

#ifndef TENCENTCLOUD_TSI_V20210325_TSICLIENT_H_
#define TENCENTCLOUD_TSI_V20210325_TSICLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tsi/v20210325/model/TongChuanDisplayRequest.h>
#include <tencentcloud/tsi/v20210325/model/TongChuanDisplayResponse.h>
#include <tencentcloud/tsi/v20210325/model/TongChuanRecognizeRequest.h>
#include <tencentcloud/tsi/v20210325/model/TongChuanRecognizeResponse.h>
#include <tencentcloud/tsi/v20210325/model/TongChuanSyncRequest.h>
#include <tencentcloud/tsi/v20210325/model/TongChuanSyncResponse.h>


namespace TencentCloud
{
    namespace Tsi
    {
        namespace V20210325
        {
            class TsiClient : public AbstractClient
            {
            public:
                TsiClient(const Credential &credential, const std::string &region);
                TsiClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::TongChuanDisplayResponse> TongChuanDisplayOutcome;
                typedef std::future<TongChuanDisplayOutcome> TongChuanDisplayOutcomeCallable;
                typedef std::function<void(const TsiClient*, const Model::TongChuanDisplayRequest&, TongChuanDisplayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TongChuanDisplayAsyncHandler;
                typedef Outcome<Core::Error, Model::TongChuanRecognizeResponse> TongChuanRecognizeOutcome;
                typedef std::future<TongChuanRecognizeOutcome> TongChuanRecognizeOutcomeCallable;
                typedef std::function<void(const TsiClient*, const Model::TongChuanRecognizeRequest&, TongChuanRecognizeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TongChuanRecognizeAsyncHandler;
                typedef Outcome<Core::Error, Model::TongChuanSyncResponse> TongChuanSyncOutcome;
                typedef std::future<TongChuanSyncOutcome> TongChuanSyncOutcomeCallable;
                typedef std::function<void(const TsiClient*, const Model::TongChuanSyncRequest&, TongChuanSyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TongChuanSyncAsyncHandler;



                /**
                 *获取同传结果。
                 * @param req TongChuanDisplayRequest
                 * @return TongChuanDisplayOutcome
                 */
                TongChuanDisplayOutcome TongChuanDisplay(const Model::TongChuanDisplayRequest &request);
                void TongChuanDisplayAsync(const Model::TongChuanDisplayRequest& request, const TongChuanDisplayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TongChuanDisplayOutcomeCallable TongChuanDisplayCallable(const Model::TongChuanDisplayRequest& request);

                /**
                 *本接口提供上传音频，将音频进行语音识别并翻译成文本的服务，目前开放中英互译的同传服务。 待识别和翻译的音频文件格式是 pcm，pcm采样率要求16kHz、位深16bit、单声道、每个分片时长200ms~500ms，音频内语音清晰。
                 * @param req TongChuanRecognizeRequest
                 * @return TongChuanRecognizeOutcome
                 */
                TongChuanRecognizeOutcome TongChuanRecognize(const Model::TongChuanRecognizeRequest &request);
                void TongChuanRecognizeAsync(const Model::TongChuanRecognizeRequest& request, const TongChuanRecognizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TongChuanRecognizeOutcomeCallable TongChuanRecognizeCallable(const Model::TongChuanRecognizeRequest& request);

                /**
                 *本接口提供上传音频，将音频进行语音识别并翻译成文本的服务，目前开放中英互译的同传服务。 待识别和翻译的音频文件格式是 pcm，pcm采样率要求16kHz、位深16bit、单声道、每个分片时长200ms~500ms，音频内语音清晰。
                 * @param req TongChuanSyncRequest
                 * @return TongChuanSyncOutcome
                 */
                TongChuanSyncOutcome TongChuanSync(const Model::TongChuanSyncRequest &request);
                void TongChuanSyncAsync(const Model::TongChuanSyncRequest& request, const TongChuanSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TongChuanSyncOutcomeCallable TongChuanSyncCallable(const Model::TongChuanSyncRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TSI_V20210325_TSICLIENT_H_
