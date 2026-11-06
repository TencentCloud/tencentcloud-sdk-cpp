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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MODIFYVOICECONVERSATIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MODIFYVOICECONVERSATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationLLMConfig.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationS2SConfig.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationDialogConfig.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * ModifyVoiceConversation请求参数结构体
                */
                class ModifyVoiceConversationRequest : public AbstractModel
                {
                public:
                    ModifyVoiceConversationRequest();
                    ~ModifyVoiceConversationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和对话的房间所对应的SdkAppId相同。</p>
                     * @return SdkAppId <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和对话的房间所对应的SdkAppId相同。</p>
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置<p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和对话的房间所对应的SdkAppId相同。</p>
                     * @param _sdkAppId <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和对话的房间所对应的SdkAppId相同。</p>
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
                     * 获取<p>对话任务的唯一Id，在启动对话成功后会返回。</p>
                     * @return TaskId <p>对话任务的唯一Id，在启动对话成功后会返回。</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>对话任务的唯一Id，在启动对话成功后会返回。</p>
                     * @param _taskId <p>对话任务的唯一Id，在启动对话成功后会返回。</p>
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
                     * 获取<p>需要保证同一个任务，每次更新请求中的SequenceNumber递增，防止请求乱序。</p>
                     * @return SequenceNumber <p>需要保证同一个任务，每次更新请求中的SequenceNumber递增，防止请求乱序。</p>
                     * 
                     */
                    uint64_t GetSequenceNumber() const;

                    /**
                     * 设置<p>需要保证同一个任务，每次更新请求中的SequenceNumber递增，防止请求乱序。</p>
                     * @param _sequenceNumber <p>需要保证同一个任务，每次更新请求中的SequenceNumber递增，防止请求乱序。</p>
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
                     * 获取<p>大模型配置。<strong>仅 <code>Cascade</code> 模式生效</strong>；<code>S2S</code> 模式报错。</p>
                     * @return LLMConfig <p>大模型配置。<strong>仅 <code>Cascade</code> 模式生效</strong>；<code>S2S</code> 模式报错。</p>
                     * 
                     */
                    VoiceConversationLLMConfig GetLLMConfig() const;

                    /**
                     * 设置<p>大模型配置。<strong>仅 <code>Cascade</code> 模式生效</strong>；<code>S2S</code> 模式报错。</p>
                     * @param _lLMConfig <p>大模型配置。<strong>仅 <code>Cascade</code> 模式生效</strong>；<code>S2S</code> 模式报错。</p>
                     * 
                     */
                    void SetLLMConfig(const VoiceConversationLLMConfig& _lLMConfig);

                    /**
                     * 判断参数 LLMConfig 是否已赋值
                     * @return LLMConfig 是否已赋值
                     * 
                     */
                    bool LLMConfigHasBeenSet() const;

                    /**
                     * 获取<p>端到端语音大模型配置。仅 <strong><code>S2S</code> 模式</strong>生效；<code>Cascade</code> 报错。</p>
                     * @return S2SConfig <p>端到端语音大模型配置。仅 <strong><code>S2S</code> 模式</strong>生效；<code>Cascade</code> 报错。</p>
                     * 
                     */
                    VoiceConversationS2SConfig GetS2SConfig() const;

                    /**
                     * 设置<p>端到端语音大模型配置。仅 <strong><code>S2S</code> 模式</strong>生效；<code>Cascade</code> 报错。</p>
                     * @param _s2SConfig <p>端到端语音大模型配置。仅 <strong><code>S2S</code> 模式</strong>生效；<code>Cascade</code> 报错。</p>
                     * 
                     */
                    void SetS2SConfig(const VoiceConversationS2SConfig& _s2SConfig);

                    /**
                     * 判断参数 S2SConfig 是否已赋值
                     * @return S2SConfig 是否已赋值
                     * 
                     */
                    bool S2SConfigHasBeenSet() const;

                    /**
                     * 获取<p>对话控制配置。<strong>仅 <code>Cascade</code> 模式生效</strong>。</p>
                     * @return DialogConfig <p>对话控制配置。<strong>仅 <code>Cascade</code> 模式生效</strong>。</p>
                     * 
                     */
                    VoiceConversationDialogConfig GetDialogConfig() const;

                    /**
                     * 设置<p>对话控制配置。<strong>仅 <code>Cascade</code> 模式生效</strong>。</p>
                     * @param _dialogConfig <p>对话控制配置。<strong>仅 <code>Cascade</code> 模式生效</strong>。</p>
                     * 
                     */
                    void SetDialogConfig(const VoiceConversationDialogConfig& _dialogConfig);

                    /**
                     * 判断参数 DialogConfig 是否已赋值
                     * @return DialogConfig 是否已赋值
                     * 
                     */
                    bool DialogConfigHasBeenSet() const;

                private:

                    /**
                     * <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和对话的房间所对应的SdkAppId相同。</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>对话任务的唯一Id，在启动对话成功后会返回。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>需要保证同一个任务，每次更新请求中的SequenceNumber递增，防止请求乱序。</p>
                     */
                    uint64_t m_sequenceNumber;
                    bool m_sequenceNumberHasBeenSet;

                    /**
                     * <p>大模型配置。<strong>仅 <code>Cascade</code> 模式生效</strong>；<code>S2S</code> 模式报错。</p>
                     */
                    VoiceConversationLLMConfig m_lLMConfig;
                    bool m_lLMConfigHasBeenSet;

                    /**
                     * <p>端到端语音大模型配置。仅 <strong><code>S2S</code> 模式</strong>生效；<code>Cascade</code> 报错。</p>
                     */
                    VoiceConversationS2SConfig m_s2SConfig;
                    bool m_s2SConfigHasBeenSet;

                    /**
                     * <p>对话控制配置。<strong>仅 <code>Cascade</code> 模式生效</strong>。</p>
                     */
                    VoiceConversationDialogConfig m_dialogConfig;
                    bool m_dialogConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MODIFYVOICECONVERSATIONREQUEST_H_
