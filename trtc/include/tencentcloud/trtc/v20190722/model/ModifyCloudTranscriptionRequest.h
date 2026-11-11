/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MODIFYCLOUDTRANSCRIPTIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MODIFYCLOUDTRANSCRIPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/TranscriptionSubscribeParam.h>
#include <tencentcloud/trtc/v20190722/model/TranslationParam.h>
#include <tencentcloud/trtc/v20190722/model/TTSParam.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * ModifyCloudTranscription请求参数结构体
                */
                class ModifyCloudTranscriptionRequest : public AbstractModel
                {
                public:
                    ModifyCloudTranscriptionRequest();
                    ~ModifyCloudTranscriptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>TRTC的SdkAppId，和转录的房间所对应的SdkAppId相同。</p>
                     * @return SdkAppId <p>TRTC的SdkAppId，和转录的房间所对应的SdkAppId相同。</p>
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置<p>TRTC的SdkAppId，和转录的房间所对应的SdkAppId相同。</p>
                     * @param _sdkAppId <p>TRTC的SdkAppId，和转录的房间所对应的SdkAppId相同。</p>
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取<p>转录任务的唯一Id，在启动转录成功后会返回。</p>
                     * @return TaskId <p>转录任务的唯一Id，在启动转录成功后会返回。</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>转录任务的唯一Id，在启动转录成功后会返回。</p>
                     * @param _taskId <p>转录任务的唯一Id，在启动转录成功后会返回。</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>客户保证同一个任务，每次更新请求中的SequenceNumber递增，防止请求乱序。</p>
                     * @return SequenceNumber <p>客户保证同一个任务，每次更新请求中的SequenceNumber递增，防止请求乱序。</p>
                     * 
                     */
                    uint64_t GetSequenceNumber() const;

                    /**
                     * 设置<p>客户保证同一个任务，每次更新请求中的SequenceNumber递增，防止请求乱序。</p>
                     * @param _sequenceNumber <p>客户保证同一个任务，每次更新请求中的SequenceNumber递增，防止请求乱序。</p>
                     * 
                     */
                    void SetSequenceNumber(const uint64_t& _sequenceNumber);

                    /**
                     * 判断参数 SequenceNumber 是否已赋值
                     * @return SequenceNumber 是否已赋值
                     * 
                     */
                    bool SequenceNumberHasBeenSet() const;

                    /**
                     * 获取<p>转录订阅用户信息，包括白名单和黑名单。</p>
                     * @return SubscribeUserInfo <p>转录订阅用户信息，包括白名单和黑名单。</p>
                     * 
                     */
                    TranscriptionSubscribeParam GetSubscribeUserInfo() const;

                    /**
                     * 设置<p>转录订阅用户信息，包括白名单和黑名单。</p>
                     * @param _subscribeUserInfo <p>转录订阅用户信息，包括白名单和黑名单。</p>
                     * 
                     */
                    void SetSubscribeUserInfo(const TranscriptionSubscribeParam& _subscribeUserInfo);

                    /**
                     * 判断参数 SubscribeUserInfo 是否已赋值
                     * @return SubscribeUserInfo 是否已赋值
                     * 
                     */
                    bool SubscribeUserInfoHasBeenSet() const;

                    /**
                     * 获取<p>转录服务翻译使用的参数。</p>
                     * @return TranslationParam <p>转录服务翻译使用的参数。</p>
                     * 
                     */
                    TranslationParam GetTranslationParam() const;

                    /**
                     * 设置<p>转录服务翻译使用的参数。</p>
                     * @param _translationParam <p>转录服务翻译使用的参数。</p>
                     * 
                     */
                    void SetTranslationParam(const TranslationParam& _translationParam);

                    /**
                     * 判断参数 TranslationParam 是否已赋值
                     * @return TranslationParam 是否已赋值
                     * 
                     */
                    bool TranslationParamHasBeenSet() const;

                    /**
                     * 获取<p>转录服务TTS使用的参数。</p>
                     * @return TTSParam <p>转录服务TTS使用的参数。</p>
                     * 
                     */
                    std::vector<TTSParam> GetTTSParam() const;

                    /**
                     * 设置<p>转录服务TTS使用的参数。</p>
                     * @param _tTSParam <p>转录服务TTS使用的参数。</p>
                     * 
                     */
                    void SetTTSParam(const std::vector<TTSParam>& _tTSParam);

                    /**
                     * 判断参数 TTSParam 是否已赋值
                     * @return TTSParam 是否已赋值
                     * 
                     */
                    bool TTSParamHasBeenSet() const;

                private:

                    /**
                     * <p>TRTC的SdkAppId，和转录的房间所对应的SdkAppId相同。</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>转录任务的唯一Id，在启动转录成功后会返回。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>客户保证同一个任务，每次更新请求中的SequenceNumber递增，防止请求乱序。</p>
                     */
                    uint64_t m_sequenceNumber;
                    bool m_sequenceNumberHasBeenSet;

                    /**
                     * <p>转录订阅用户信息，包括白名单和黑名单。</p>
                     */
                    TranscriptionSubscribeParam m_subscribeUserInfo;
                    bool m_subscribeUserInfoHasBeenSet;

                    /**
                     * <p>转录服务翻译使用的参数。</p>
                     */
                    TranslationParam m_translationParam;
                    bool m_translationParamHasBeenSet;

                    /**
                     * <p>转录服务TTS使用的参数。</p>
                     */
                    std::vector<TTSParam> m_tTSParam;
                    bool m_tTSParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MODIFYCLOUDTRANSCRIPTIONREQUEST_H_
