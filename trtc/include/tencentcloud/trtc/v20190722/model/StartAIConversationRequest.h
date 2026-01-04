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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_STARTAICONVERSATIONREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_STARTAICONVERSATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/AgentConfig.h>
#include <tencentcloud/trtc/v20190722/model/STTConfig.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * StartAIConversation请求参数结构体
                */
                class StartAIConversationRequest : public AbstractModel
                {
                public:
                    StartAIConversationRequest();
                    ~StartAIConversationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和开启转录任务的房间使用的SdkAppId相同。
                     * @return SdkAppId TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和开启转录任务的房间使用的SdkAppId相同。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和开启转录任务的房间使用的SdkAppId相同。
                     * @param _sdkAppId TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和开启转录任务的房间使用的SdkAppId相同。
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
                     * 获取TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，表示开启对话任务的房间号。
                     * @return RoomId TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，表示开启对话任务的房间号。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，表示开启对话任务的房间号。
                     * @param _roomId TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，表示开启对话任务的房间号。
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
                     * 获取机器人参数
                     * @return AgentConfig 机器人参数
                     * 
                     */
                    AgentConfig GetAgentConfig() const;

                    /**
                     * 设置机器人参数
                     * @param _agentConfig 机器人参数
                     * 
                     */
                    void SetAgentConfig(const AgentConfig& _agentConfig);

                    /**
                     * 判断参数 AgentConfig 是否已赋值
                     * @return AgentConfig 是否已赋值
                     * 
                     */
                    bool AgentConfigHasBeenSet() const;

                    /**
                     * 获取调用方传入的唯一Id，可用于客户侧防止重复发起任务以及可以通过该字段查询任务状态。
                     * @return SessionId 调用方传入的唯一Id，可用于客户侧防止重复发起任务以及可以通过该字段查询任务状态。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置调用方传入的唯一Id，可用于客户侧防止重复发起任务以及可以通过该字段查询任务状态。
                     * @param _sessionId 调用方传入的唯一Id，可用于客户侧防止重复发起任务以及可以通过该字段查询任务状态。
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取TRTC房间号的类型，0代表数字房间号，1代表字符串房间号。不填默认是数字房间号。
                     * @return RoomIdType TRTC房间号的类型，0代表数字房间号，1代表字符串房间号。不填默认是数字房间号。
                     * 
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置TRTC房间号的类型，0代表数字房间号，1代表字符串房间号。不填默认是数字房间号。
                     * @param _roomIdType TRTC房间号的类型，0代表数字房间号，1代表字符串房间号。不填默认是数字房间号。
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
                     * 获取语音识别配置。
                     * @return STTConfig 语音识别配置。
                     * 
                     */
                    STTConfig GetSTTConfig() const;

                    /**
                     * 设置语音识别配置。
                     * @param _sTTConfig 语音识别配置。
                     * 
                     */
                    void SetSTTConfig(const STTConfig& _sTTConfig);

                    /**
                     * 判断参数 STTConfig 是否已赋值
                     * @return STTConfig 是否已赋值
                     * 
                     */
                    bool STTConfigHasBeenSet() const;

                    /**
                     * 获取必填参数，LLM配置。需符合openai规范，为JSON字符串，示例如下：<pre> { <br> &emsp;  "LLMType": "大模型类型",  // String 必填，如："openai" <br> &emsp;  "Model": "您的模型名称", // String 必填，指定使用的模型<br>    "APIKey": "您的LLM API密钥", // String 必填 <br> &emsp;  "APIUrl": "https://api.xxx.com/chat/completions", // String 必填，LLM API访问的URL<br> &emsp;  "History": 10, // Integer 选填，设置 LLM 的上下文轮次，默认值为0，最大值50<br> &emsp;  "HistoryMode": 1, // Integer 选填，1表示LLM上下文中的内容会和播放音频做同步，没有播放的音频对应的文本不会出现在上下文中。0表示不会做同步，默认值为0<br> &emsp;  "Streaming": true // Boolean 非必填，指定是否使用流式传输<br> &emsp;} </pre>
                     * @return LLMConfig 必填参数，LLM配置。需符合openai规范，为JSON字符串，示例如下：<pre> { <br> &emsp;  "LLMType": "大模型类型",  // String 必填，如："openai" <br> &emsp;  "Model": "您的模型名称", // String 必填，指定使用的模型<br>    "APIKey": "您的LLM API密钥", // String 必填 <br> &emsp;  "APIUrl": "https://api.xxx.com/chat/completions", // String 必填，LLM API访问的URL<br> &emsp;  "History": 10, // Integer 选填，设置 LLM 的上下文轮次，默认值为0，最大值50<br> &emsp;  "HistoryMode": 1, // Integer 选填，1表示LLM上下文中的内容会和播放音频做同步，没有播放的音频对应的文本不会出现在上下文中。0表示不会做同步，默认值为0<br> &emsp;  "Streaming": true // Boolean 非必填，指定是否使用流式传输<br> &emsp;} </pre>
                     * 
                     */
                    std::string GetLLMConfig() const;

                    /**
                     * 设置必填参数，LLM配置。需符合openai规范，为JSON字符串，示例如下：<pre> { <br> &emsp;  "LLMType": "大模型类型",  // String 必填，如："openai" <br> &emsp;  "Model": "您的模型名称", // String 必填，指定使用的模型<br>    "APIKey": "您的LLM API密钥", // String 必填 <br> &emsp;  "APIUrl": "https://api.xxx.com/chat/completions", // String 必填，LLM API访问的URL<br> &emsp;  "History": 10, // Integer 选填，设置 LLM 的上下文轮次，默认值为0，最大值50<br> &emsp;  "HistoryMode": 1, // Integer 选填，1表示LLM上下文中的内容会和播放音频做同步，没有播放的音频对应的文本不会出现在上下文中。0表示不会做同步，默认值为0<br> &emsp;  "Streaming": true // Boolean 非必填，指定是否使用流式传输<br> &emsp;} </pre>
                     * @param _lLMConfig 必填参数，LLM配置。需符合openai规范，为JSON字符串，示例如下：<pre> { <br> &emsp;  "LLMType": "大模型类型",  // String 必填，如："openai" <br> &emsp;  "Model": "您的模型名称", // String 必填，指定使用的模型<br>    "APIKey": "您的LLM API密钥", // String 必填 <br> &emsp;  "APIUrl": "https://api.xxx.com/chat/completions", // String 必填，LLM API访问的URL<br> &emsp;  "History": 10, // Integer 选填，设置 LLM 的上下文轮次，默认值为0，最大值50<br> &emsp;  "HistoryMode": 1, // Integer 选填，1表示LLM上下文中的内容会和播放音频做同步，没有播放的音频对应的文本不会出现在上下文中。0表示不会做同步，默认值为0<br> &emsp;  "Streaming": true // Boolean 非必填，指定是否使用流式传输<br> &emsp;} </pre>
                     * 
                     */
                    void SetLLMConfig(const std::string& _lLMConfig);

                    /**
                     * 判断参数 LLMConfig 是否已赋值
                     * @return LLMConfig 是否已赋值
                     * 
                     */
                    bool LLMConfigHasBeenSet() const;

                    /**
                     * 获取必填参数，TTS配置，详见 [TTS配置说明](https://cloud.tencent.com/document/product/647/115414 )， 为JSON字符串: TRTC TTS的配置如下：```{  "TTSType": "flow",  // 【必填】固定为此值  "VoiceId": "v-female-R2s4N9qJ", // 【必填】精品音色 ID /克隆音色 ID, 可选择不同音色, ID 库参考下方音色列表  "Model": "flow_01_turbo", // 【必填】当前默认的 TTS 模型版本（对应 Flash 版本）  "Speed": 1.0,    //【可选】调节语速 范围 [0.5-2.0],默认 1.0; 取值越大，语速越快  "Volume": 1.0,   // 【可选】调节音量 [0, 10] 默认值 1.0; 取值越大，音量越高  "Pitch": 0,   // 【可选】调节语调 [-12,12],默认值为 0,其中 0 为原音色输出。  "Language": "zh" //【可选】建议填写，目前支持填写中文：zh 英文：en 粤语方言：yue; 参数参考：(ISO 639-1) }```
                     * @return TTSConfig 必填参数，TTS配置，详见 [TTS配置说明](https://cloud.tencent.com/document/product/647/115414 )， 为JSON字符串: TRTC TTS的配置如下：```{  "TTSType": "flow",  // 【必填】固定为此值  "VoiceId": "v-female-R2s4N9qJ", // 【必填】精品音色 ID /克隆音色 ID, 可选择不同音色, ID 库参考下方音色列表  "Model": "flow_01_turbo", // 【必填】当前默认的 TTS 模型版本（对应 Flash 版本）  "Speed": 1.0,    //【可选】调节语速 范围 [0.5-2.0],默认 1.0; 取值越大，语速越快  "Volume": 1.0,   // 【可选】调节音量 [0, 10] 默认值 1.0; 取值越大，音量越高  "Pitch": 0,   // 【可选】调节语调 [-12,12],默认值为 0,其中 0 为原音色输出。  "Language": "zh" //【可选】建议填写，目前支持填写中文：zh 英文：en 粤语方言：yue; 参数参考：(ISO 639-1) }```
                     * 
                     */
                    std::string GetTTSConfig() const;

                    /**
                     * 设置必填参数，TTS配置，详见 [TTS配置说明](https://cloud.tencent.com/document/product/647/115414 )， 为JSON字符串: TRTC TTS的配置如下：```{  "TTSType": "flow",  // 【必填】固定为此值  "VoiceId": "v-female-R2s4N9qJ", // 【必填】精品音色 ID /克隆音色 ID, 可选择不同音色, ID 库参考下方音色列表  "Model": "flow_01_turbo", // 【必填】当前默认的 TTS 模型版本（对应 Flash 版本）  "Speed": 1.0,    //【可选】调节语速 范围 [0.5-2.0],默认 1.0; 取值越大，语速越快  "Volume": 1.0,   // 【可选】调节音量 [0, 10] 默认值 1.0; 取值越大，音量越高  "Pitch": 0,   // 【可选】调节语调 [-12,12],默认值为 0,其中 0 为原音色输出。  "Language": "zh" //【可选】建议填写，目前支持填写中文：zh 英文：en 粤语方言：yue; 参数参考：(ISO 639-1) }```
                     * @param _tTSConfig 必填参数，TTS配置，详见 [TTS配置说明](https://cloud.tencent.com/document/product/647/115414 )， 为JSON字符串: TRTC TTS的配置如下：```{  "TTSType": "flow",  // 【必填】固定为此值  "VoiceId": "v-female-R2s4N9qJ", // 【必填】精品音色 ID /克隆音色 ID, 可选择不同音色, ID 库参考下方音色列表  "Model": "flow_01_turbo", // 【必填】当前默认的 TTS 模型版本（对应 Flash 版本）  "Speed": 1.0,    //【可选】调节语速 范围 [0.5-2.0],默认 1.0; 取值越大，语速越快  "Volume": 1.0,   // 【可选】调节音量 [0, 10] 默认值 1.0; 取值越大，音量越高  "Pitch": 0,   // 【可选】调节语调 [-12,12],默认值为 0,其中 0 为原音色输出。  "Language": "zh" //【可选】建议填写，目前支持填写中文：zh 英文：en 粤语方言：yue; 参数参考：(ISO 639-1) }```
                     * 
                     */
                    void SetTTSConfig(const std::string& _tTSConfig);

                    /**
                     * 判断参数 TTSConfig 是否已赋值
                     * @return TTSConfig 是否已赋值
                     * 
                     */
                    bool TTSConfigHasBeenSet() const;

                    /**
                     * 获取数字人配置，为JSON字符串。**数字人配置需要提工单加白后才能使用**
                     * @return AvatarConfig 数字人配置，为JSON字符串。**数字人配置需要提工单加白后才能使用**
                     * 
                     */
                    std::string GetAvatarConfig() const;

                    /**
                     * 设置数字人配置，为JSON字符串。**数字人配置需要提工单加白后才能使用**
                     * @param _avatarConfig 数字人配置，为JSON字符串。**数字人配置需要提工单加白后才能使用**
                     * 
                     */
                    void SetAvatarConfig(const std::string& _avatarConfig);

                    /**
                     * 判断参数 AvatarConfig 是否已赋值
                     * @return AvatarConfig 是否已赋值
                     * 
                     */
                    bool AvatarConfigHasBeenSet() const;

                    /**
                     * 获取实验性参数,联系后台使用
                     * @return ExperimentalParams 实验性参数,联系后台使用
                     * 
                     */
                    std::string GetExperimentalParams() const;

                    /**
                     * 设置实验性参数,联系后台使用
                     * @param _experimentalParams 实验性参数,联系后台使用
                     * 
                     */
                    void SetExperimentalParams(const std::string& _experimentalParams);

                    /**
                     * 判断参数 ExperimentalParams 是否已赋值
                     * @return ExperimentalParams 是否已赋值
                     * 
                     */
                    bool ExperimentalParamsHasBeenSet() const;

                private:

                    /**
                     * TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和开启转录任务的房间使用的SdkAppId相同。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，表示开启对话任务的房间号。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 机器人参数
                     */
                    AgentConfig m_agentConfig;
                    bool m_agentConfigHasBeenSet;

                    /**
                     * 调用方传入的唯一Id，可用于客户侧防止重复发起任务以及可以通过该字段查询任务状态。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * TRTC房间号的类型，0代表数字房间号，1代表字符串房间号。不填默认是数字房间号。
                     */
                    uint64_t m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                    /**
                     * 语音识别配置。
                     */
                    STTConfig m_sTTConfig;
                    bool m_sTTConfigHasBeenSet;

                    /**
                     * 必填参数，LLM配置。需符合openai规范，为JSON字符串，示例如下：<pre> { <br> &emsp;  "LLMType": "大模型类型",  // String 必填，如："openai" <br> &emsp;  "Model": "您的模型名称", // String 必填，指定使用的模型<br>    "APIKey": "您的LLM API密钥", // String 必填 <br> &emsp;  "APIUrl": "https://api.xxx.com/chat/completions", // String 必填，LLM API访问的URL<br> &emsp;  "History": 10, // Integer 选填，设置 LLM 的上下文轮次，默认值为0，最大值50<br> &emsp;  "HistoryMode": 1, // Integer 选填，1表示LLM上下文中的内容会和播放音频做同步，没有播放的音频对应的文本不会出现在上下文中。0表示不会做同步，默认值为0<br> &emsp;  "Streaming": true // Boolean 非必填，指定是否使用流式传输<br> &emsp;} </pre>
                     */
                    std::string m_lLMConfig;
                    bool m_lLMConfigHasBeenSet;

                    /**
                     * 必填参数，TTS配置，详见 [TTS配置说明](https://cloud.tencent.com/document/product/647/115414 )， 为JSON字符串: TRTC TTS的配置如下：```{  "TTSType": "flow",  // 【必填】固定为此值  "VoiceId": "v-female-R2s4N9qJ", // 【必填】精品音色 ID /克隆音色 ID, 可选择不同音色, ID 库参考下方音色列表  "Model": "flow_01_turbo", // 【必填】当前默认的 TTS 模型版本（对应 Flash 版本）  "Speed": 1.0,    //【可选】调节语速 范围 [0.5-2.0],默认 1.0; 取值越大，语速越快  "Volume": 1.0,   // 【可选】调节音量 [0, 10] 默认值 1.0; 取值越大，音量越高  "Pitch": 0,   // 【可选】调节语调 [-12,12],默认值为 0,其中 0 为原音色输出。  "Language": "zh" //【可选】建议填写，目前支持填写中文：zh 英文：en 粤语方言：yue; 参数参考：(ISO 639-1) }```
                     */
                    std::string m_tTSConfig;
                    bool m_tTSConfigHasBeenSet;

                    /**
                     * 数字人配置，为JSON字符串。**数字人配置需要提工单加白后才能使用**
                     */
                    std::string m_avatarConfig;
                    bool m_avatarConfigHasBeenSet;

                    /**
                     * 实验性参数,联系后台使用
                     */
                    std::string m_experimentalParams;
                    bool m_experimentalParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STARTAICONVERSATIONREQUEST_H_
