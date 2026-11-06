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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CREATEVOICECONVERSATIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CREATEVOICECONVERSATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationConfig.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationS2SConfig.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationSTTConfig.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationLLMConfig.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationTTSConfig.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationDialogConfig.h>
#include <tencentcloud/trtc/v20190722/model/VoiceConversationVisionConfig.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * CreateVoiceConversation请求参数结构体
                */
                class CreateVoiceConversationRequest : public AbstractModel
                {
                public:
                    CreateVoiceConversationRequest();
                    ~CreateVoiceConversationRequest() = default;
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
                     * 获取<p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#roomid">RoomId</a>，对话的TRTC房间所对应的RoomId。注：房间号类型默认为整型，若房间号类型为字符串，请通过RoomIdType指定。</p>
                     * @return RoomId <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#roomid">RoomId</a>，对话的TRTC房间所对应的RoomId。注：房间号类型默认为整型，若房间号类型为字符串，请通过RoomIdType指定。</p>
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置<p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#roomid">RoomId</a>，对话的TRTC房间所对应的RoomId。注：房间号类型默认为整型，若房间号类型为字符串，请通过RoomIdType指定。</p>
                     * @param _roomId <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#roomid">RoomId</a>，对话的TRTC房间所对应的RoomId。注：房间号类型默认为整型，若房间号类型为字符串，请通过RoomIdType指定。</p>
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取<p>房间信息RoomType，必须和对话的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。</p><p>枚举值：</p><ul><li>0： 数字房间号</li><li>1： 字符串房间号</li></ul><p>默认值：0</p>
                     * @return RoomIdType <p>房间信息RoomType，必须和对话的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。</p><p>枚举值：</p><ul><li>0： 数字房间号</li><li>1： 字符串房间号</li></ul><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置<p>房间信息RoomType，必须和对话的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。</p><p>枚举值：</p><ul><li>0： 数字房间号</li><li>1： 字符串房间号</li></ul><p>默认值：0</p>
                     * @param _roomIdType <p>房间信息RoomType，必须和对话的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。</p><p>枚举值：</p><ul><li>0： 数字房间号</li><li>1： 字符串房间号</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetRoomIdType(const uint64_t& _roomIdType);

                    /**
                     * 判断参数 RoomIdType 是否已赋值
                     * @return RoomIdType 是否已赋值
                     * 
                     */
                    bool RoomIdTypeHasBeenSet() const;

                    /**
                     * 获取<p>对话机器人相关配置。</p>
                     * @return AgentConfig <p>对话机器人相关配置。</p>
                     * 
                     */
                    VoiceConversationConfig GetAgentConfig() const;

                    /**
                     * 设置<p>对话机器人相关配置。</p>
                     * @param _agentConfig <p>对话机器人相关配置。</p>
                     * 
                     */
                    void SetAgentConfig(const VoiceConversationConfig& _agentConfig);

                    /**
                     * 判断参数 AgentConfig 是否已赋值
                     * @return AgentConfig 是否已赋值
                     * 
                     */
                    bool AgentConfigHasBeenSet() const;

                    /**
                     * 获取<p>对话链路模式：<code>Cascade</code>（默认，三段式）/ <code>S2S</code>（端到端语音大模型）。</p><p>枚举值：</p><ul><li>Cascade： 默认，三段式</li><li>S2S： 端到端语音大模型</li></ul><p>默认值：Cascade</p>
                     * @return ConversationMode <p>对话链路模式：<code>Cascade</code>（默认，三段式）/ <code>S2S</code>（端到端语音大模型）。</p><p>枚举值：</p><ul><li>Cascade： 默认，三段式</li><li>S2S： 端到端语音大模型</li></ul><p>默认值：Cascade</p>
                     * 
                     */
                    std::string GetConversationMode() const;

                    /**
                     * 设置<p>对话链路模式：<code>Cascade</code>（默认，三段式）/ <code>S2S</code>（端到端语音大模型）。</p><p>枚举值：</p><ul><li>Cascade： 默认，三段式</li><li>S2S： 端到端语音大模型</li></ul><p>默认值：Cascade</p>
                     * @param _conversationMode <p>对话链路模式：<code>Cascade</code>（默认，三段式）/ <code>S2S</code>（端到端语音大模型）。</p><p>枚举值：</p><ul><li>Cascade： 默认，三段式</li><li>S2S： 端到端语音大模型</li></ul><p>默认值：Cascade</p>
                     * 
                     */
                    void SetConversationMode(const std::string& _conversationMode);

                    /**
                     * 判断参数 ConversationMode 是否已赋值
                     * @return ConversationMode 是否已赋值
                     * 
                     */
                    bool ConversationModeHasBeenSet() const;

                    /**
                     * 获取<p>端到端语音大模型配置。<strong>仅 <code>S2S</code> 模式必填</strong>；<code>Cascade</code> 模式忽略。</p>
                     * @return S2SConfig <p>端到端语音大模型配置。<strong>仅 <code>S2S</code> 模式必填</strong>；<code>Cascade</code> 模式忽略。</p>
                     * 
                     */
                    VoiceConversationS2SConfig GetS2SConfig() const;

                    /**
                     * 设置<p>端到端语音大模型配置。<strong>仅 <code>S2S</code> 模式必填</strong>；<code>Cascade</code> 模式忽略。</p>
                     * @param _s2SConfig <p>端到端语音大模型配置。<strong>仅 <code>S2S</code> 模式必填</strong>；<code>Cascade</code> 模式忽略。</p>
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
                     * 获取<p>语音识别配置。<strong>仅 <code>Cascade</code> 模式必填</strong>；<code>S2S</code> 模式忽略。</p>
                     * @return STTConfig <p>语音识别配置。<strong>仅 <code>Cascade</code> 模式必填</strong>；<code>S2S</code> 模式忽略。</p>
                     * 
                     */
                    VoiceConversationSTTConfig GetSTTConfig() const;

                    /**
                     * 设置<p>语音识别配置。<strong>仅 <code>Cascade</code> 模式必填</strong>；<code>S2S</code> 模式忽略。</p>
                     * @param _sTTConfig <p>语音识别配置。<strong>仅 <code>Cascade</code> 模式必填</strong>；<code>S2S</code> 模式忽略。</p>
                     * 
                     */
                    void SetSTTConfig(const VoiceConversationSTTConfig& _sTTConfig);

                    /**
                     * 判断参数 STTConfig 是否已赋值
                     * @return STTConfig 是否已赋值
                     * 
                     */
                    bool STTConfigHasBeenSet() const;

                    /**
                     * 获取<p>大模型配置。<strong>仅 <code>Cascade</code> 模式必填</strong>；<code>S2S</code> 模式忽略。</p>
                     * @return LLMConfig <p>大模型配置。<strong>仅 <code>Cascade</code> 模式必填</strong>；<code>S2S</code> 模式忽略。</p>
                     * 
                     */
                    VoiceConversationLLMConfig GetLLMConfig() const;

                    /**
                     * 设置<p>大模型配置。<strong>仅 <code>Cascade</code> 模式必填</strong>；<code>S2S</code> 模式忽略。</p>
                     * @param _lLMConfig <p>大模型配置。<strong>仅 <code>Cascade</code> 模式必填</strong>；<code>S2S</code> 模式忽略。</p>
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
                     * 获取<p>语音合成配置。<strong>仅 <code>Cascade</code> 模式必填</strong>；<code>S2S</code> 模式忽略。</p>
                     * @return TTSConfig <p>语音合成配置。<strong>仅 <code>Cascade</code> 模式必填</strong>；<code>S2S</code> 模式忽略。</p>
                     * 
                     */
                    VoiceConversationTTSConfig GetTTSConfig() const;

                    /**
                     * 设置<p>语音合成配置。<strong>仅 <code>Cascade</code> 模式必填</strong>；<code>S2S</code> 模式忽略。</p>
                     * @param _tTSConfig <p>语音合成配置。<strong>仅 <code>Cascade</code> 模式必填</strong>；<code>S2S</code> 模式忽略。</p>
                     * 
                     */
                    void SetTTSConfig(const VoiceConversationTTSConfig& _tTSConfig);

                    /**
                     * 判断参数 TTSConfig 是否已赋值
                     * @return TTSConfig 是否已赋值
                     * 
                     */
                    bool TTSConfigHasBeenSet() const;

                    /**
                     * 获取<p>对话控制配置，<code>S2S</code> 模式不支持填写该参数。</p>
                     * @return DialogConfig <p>对话控制配置，<code>S2S</code> 模式不支持填写该参数。</p>
                     * 
                     */
                    VoiceConversationDialogConfig GetDialogConfig() const;

                    /**
                     * 设置<p>对话控制配置，<code>S2S</code> 模式不支持填写该参数。</p>
                     * @param _dialogConfig <p>对话控制配置，<code>S2S</code> 模式不支持填写该参数。</p>
                     * 
                     */
                    void SetDialogConfig(const VoiceConversationDialogConfig& _dialogConfig);

                    /**
                     * 判断参数 DialogConfig 是否已赋值
                     * @return DialogConfig 是否已赋值
                     * 
                     */
                    bool DialogConfigHasBeenSet() const;

                    /**
                     * 获取<p>视觉理解配置，<code>S2S</code> 模式不支持填写该参数。</p>
                     * @return VisionConfig <p>视觉理解配置，<code>S2S</code> 模式不支持填写该参数。</p>
                     * 
                     */
                    VoiceConversationVisionConfig GetVisionConfig() const;

                    /**
                     * 设置<p>视觉理解配置，<code>S2S</code> 模式不支持填写该参数。</p>
                     * @param _visionConfig <p>视觉理解配置，<code>S2S</code> 模式不支持填写该参数。</p>
                     * 
                     */
                    void SetVisionConfig(const VoiceConversationVisionConfig& _visionConfig);

                    /**
                     * 判断参数 VisionConfig 是否已赋值
                     * @return VisionConfig 是否已赋值
                     * 
                     */
                    bool VisionConfigHasBeenSet() const;

                private:

                    /**
                     * <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#sdkappid">SdkAppId</a>，和对话的房间所对应的SdkAppId相同。</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>TRTC的<a href="https://cloud.tencent.com/document/product/647/46351#roomid">RoomId</a>，对话的TRTC房间所对应的RoomId。注：房间号类型默认为整型，若房间号类型为字符串，请通过RoomIdType指定。</p>
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * <p>房间信息RoomType，必须和对话的房间所对应的RoomId类型相同，0为整型房间号，1为字符串房间号。</p><p>枚举值：</p><ul><li>0： 数字房间号</li><li>1： 字符串房间号</li></ul><p>默认值：0</p>
                     */
                    uint64_t m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                    /**
                     * <p>对话机器人相关配置。</p>
                     */
                    VoiceConversationConfig m_agentConfig;
                    bool m_agentConfigHasBeenSet;

                    /**
                     * <p>对话链路模式：<code>Cascade</code>（默认，三段式）/ <code>S2S</code>（端到端语音大模型）。</p><p>枚举值：</p><ul><li>Cascade： 默认，三段式</li><li>S2S： 端到端语音大模型</li></ul><p>默认值：Cascade</p>
                     */
                    std::string m_conversationMode;
                    bool m_conversationModeHasBeenSet;

                    /**
                     * <p>端到端语音大模型配置。<strong>仅 <code>S2S</code> 模式必填</strong>；<code>Cascade</code> 模式忽略。</p>
                     */
                    VoiceConversationS2SConfig m_s2SConfig;
                    bool m_s2SConfigHasBeenSet;

                    /**
                     * <p>语音识别配置。<strong>仅 <code>Cascade</code> 模式必填</strong>；<code>S2S</code> 模式忽略。</p>
                     */
                    VoiceConversationSTTConfig m_sTTConfig;
                    bool m_sTTConfigHasBeenSet;

                    /**
                     * <p>大模型配置。<strong>仅 <code>Cascade</code> 模式必填</strong>；<code>S2S</code> 模式忽略。</p>
                     */
                    VoiceConversationLLMConfig m_lLMConfig;
                    bool m_lLMConfigHasBeenSet;

                    /**
                     * <p>语音合成配置。<strong>仅 <code>Cascade</code> 模式必填</strong>；<code>S2S</code> 模式忽略。</p>
                     */
                    VoiceConversationTTSConfig m_tTSConfig;
                    bool m_tTSConfigHasBeenSet;

                    /**
                     * <p>对话控制配置，<code>S2S</code> 模式不支持填写该参数。</p>
                     */
                    VoiceConversationDialogConfig m_dialogConfig;
                    bool m_dialogConfigHasBeenSet;

                    /**
                     * <p>视觉理解配置，<code>S2S</code> 模式不支持填写该参数。</p>
                     */
                    VoiceConversationVisionConfig m_visionConfig;
                    bool m_visionConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CREATEVOICECONVERSATIONREQUEST_H_
