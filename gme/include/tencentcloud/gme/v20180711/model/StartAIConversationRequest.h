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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_STARTAICONVERSATIONREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_STARTAICONVERSATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/AgentConfig.h>
#include <tencentcloud/gme/v20180711/model/STTConfig.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
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
                     * 获取GME的SdkAppId和开启转录任务的房间使用的SdkAppId相同。
                     * @return SdkAppId GME的SdkAppId和开启转录任务的房间使用的SdkAppId相同。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置GME的SdkAppId和开启转录任务的房间使用的SdkAppId相同。
                     * @param _sdkAppId GME的SdkAppId和开启转录任务的房间使用的SdkAppId相同。
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
                     * 获取GME的RoomId表示开启对话任务的房间号。
                     * @return RoomId GME的RoomId表示开启对话任务的房间号。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置GME的RoomId表示开启对话任务的房间号。
                     * @param _roomId GME的RoomId表示开启对话任务的房间号。
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
                     * 获取LLM配置。需符合openai规范，为JSON字符串，示例如下：
<pre> { <br> &emsp;  "LLMType": "大模型类型",  // String 必填，如："openai" <br> &emsp;  "Model": "您的模型名称", // String 必填，指定使用的模型<br>    "APIKey": "您的LLM API密钥", // String 必填 <br> &emsp;  "APIUrl": "https://api.xxx.com/chat/completions", // String 必填，LLM API访问的URL<br> &emsp;  "Streaming": true // Boolean 非必填，指定是否使用流式传输<br> &emsp;} </pre>

                     * @return LLMConfig LLM配置。需符合openai规范，为JSON字符串，示例如下：
<pre> { <br> &emsp;  "LLMType": "大模型类型",  // String 必填，如："openai" <br> &emsp;  "Model": "您的模型名称", // String 必填，指定使用的模型<br>    "APIKey": "您的LLM API密钥", // String 必填 <br> &emsp;  "APIUrl": "https://api.xxx.com/chat/completions", // String 必填，LLM API访问的URL<br> &emsp;  "Streaming": true // Boolean 非必填，指定是否使用流式传输<br> &emsp;} </pre>

                     * 
                     */
                    std::string GetLLMConfig() const;

                    /**
                     * 设置LLM配置。需符合openai规范，为JSON字符串，示例如下：
<pre> { <br> &emsp;  "LLMType": "大模型类型",  // String 必填，如："openai" <br> &emsp;  "Model": "您的模型名称", // String 必填，指定使用的模型<br>    "APIKey": "您的LLM API密钥", // String 必填 <br> &emsp;  "APIUrl": "https://api.xxx.com/chat/completions", // String 必填，LLM API访问的URL<br> &emsp;  "Streaming": true // Boolean 非必填，指定是否使用流式传输<br> &emsp;} </pre>

                     * @param _lLMConfig LLM配置。需符合openai规范，为JSON字符串，示例如下：
<pre> { <br> &emsp;  "LLMType": "大模型类型",  // String 必填，如："openai" <br> &emsp;  "Model": "您的模型名称", // String 必填，指定使用的模型<br>    "APIKey": "您的LLM API密钥", // String 必填 <br> &emsp;  "APIUrl": "https://api.xxx.com/chat/completions", // String 必填，LLM API访问的URL<br> &emsp;  "Streaming": true // Boolean 非必填，指定是否使用流式传输<br> &emsp;} </pre>

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
                     * 获取                                        "description": "TTS配置，为JSON字符串，腾讯云TTS示例如下： <pre>{ <br> &emsp; \"AppId\": 您的应用ID, // Integer 必填<br> &emsp; \"TTSType\": \"TTS类型\", // String TTS类型, 固定为\"tencent\"<br> &emsp; \"SecretId\": \"您的密钥ID\", // String 必填<br> &emsp; \"SecretKey\":  \"您的密钥Key\", // String 必填<br> &emsp; \"VoiceType\": 101001, // Integer  必填，音色 ID，包括标准音色与精品音色，精品音色拟真度更高，价格不同于标准音色。<br> &emsp; \"Speed\": 1.25, // Integer 非必填，语速，范围：[-2，6]，分别对应不同语速： -2: 代表0.6倍 -1: 代表0.8倍 0: 代表1.0倍（默认） 1: 代表1.2倍 2: 代表1.5倍  6: 代表2.5倍  如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。 参数值与实际语速转换\"Volume\": 5, // Integer 非必填，音量大小，范围：[0，10]，分别对应11个等级的音量，默认值为0，代表正常音量。<br> &emsp; \"EmotionCategory\":  \"angry\", // String 非必填 控制合成音频的情感，仅支持多情感音色使用。取值: neutral(中性)、sad(悲伤)、happy(高兴)、angry(生气)、fear(恐惧)、news(新闻)、story(故事)、radio(广播)、poetry(诗歌)、call(客服)、sajiao(撒娇)、disgusted(厌恶)、amaze(震惊)、peaceful(平静)、exciting(兴奋)、aojiao(傲娇)、jieshuo(解说)。<br> &emsp; \"EmotionIntensity\":  150 // Integer 非必填 控制合成音频情感程度，取值范围为 [50,200]，默认为 100；只有 EmotionCategory 不为空时生效。<br> &emsp; }</pre>",
                     * @return TTSConfig                                         "description": "TTS配置，为JSON字符串，腾讯云TTS示例如下： <pre>{ <br> &emsp; \"AppId\": 您的应用ID, // Integer 必填<br> &emsp; \"TTSType\": \"TTS类型\", // String TTS类型, 固定为\"tencent\"<br> &emsp; \"SecretId\": \"您的密钥ID\", // String 必填<br> &emsp; \"SecretKey\":  \"您的密钥Key\", // String 必填<br> &emsp; \"VoiceType\": 101001, // Integer  必填，音色 ID，包括标准音色与精品音色，精品音色拟真度更高，价格不同于标准音色。<br> &emsp; \"Speed\": 1.25, // Integer 非必填，语速，范围：[-2，6]，分别对应不同语速： -2: 代表0.6倍 -1: 代表0.8倍 0: 代表1.0倍（默认） 1: 代表1.2倍 2: 代表1.5倍  6: 代表2.5倍  如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。 参数值与实际语速转换\"Volume\": 5, // Integer 非必填，音量大小，范围：[0，10]，分别对应11个等级的音量，默认值为0，代表正常音量。<br> &emsp; \"EmotionCategory\":  \"angry\", // String 非必填 控制合成音频的情感，仅支持多情感音色使用。取值: neutral(中性)、sad(悲伤)、happy(高兴)、angry(生气)、fear(恐惧)、news(新闻)、story(故事)、radio(广播)、poetry(诗歌)、call(客服)、sajiao(撒娇)、disgusted(厌恶)、amaze(震惊)、peaceful(平静)、exciting(兴奋)、aojiao(傲娇)、jieshuo(解说)。<br> &emsp; \"EmotionIntensity\":  150 // Integer 非必填 控制合成音频情感程度，取值范围为 [50,200]，默认为 100；只有 EmotionCategory 不为空时生效。<br> &emsp; }</pre>",
                     * 
                     */
                    std::string GetTTSConfig() const;

                    /**
                     * 设置                                        "description": "TTS配置，为JSON字符串，腾讯云TTS示例如下： <pre>{ <br> &emsp; \"AppId\": 您的应用ID, // Integer 必填<br> &emsp; \"TTSType\": \"TTS类型\", // String TTS类型, 固定为\"tencent\"<br> &emsp; \"SecretId\": \"您的密钥ID\", // String 必填<br> &emsp; \"SecretKey\":  \"您的密钥Key\", // String 必填<br> &emsp; \"VoiceType\": 101001, // Integer  必填，音色 ID，包括标准音色与精品音色，精品音色拟真度更高，价格不同于标准音色。<br> &emsp; \"Speed\": 1.25, // Integer 非必填，语速，范围：[-2，6]，分别对应不同语速： -2: 代表0.6倍 -1: 代表0.8倍 0: 代表1.0倍（默认） 1: 代表1.2倍 2: 代表1.5倍  6: 代表2.5倍  如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。 参数值与实际语速转换\"Volume\": 5, // Integer 非必填，音量大小，范围：[0，10]，分别对应11个等级的音量，默认值为0，代表正常音量。<br> &emsp; \"EmotionCategory\":  \"angry\", // String 非必填 控制合成音频的情感，仅支持多情感音色使用。取值: neutral(中性)、sad(悲伤)、happy(高兴)、angry(生气)、fear(恐惧)、news(新闻)、story(故事)、radio(广播)、poetry(诗歌)、call(客服)、sajiao(撒娇)、disgusted(厌恶)、amaze(震惊)、peaceful(平静)、exciting(兴奋)、aojiao(傲娇)、jieshuo(解说)。<br> &emsp; \"EmotionIntensity\":  150 // Integer 非必填 控制合成音频情感程度，取值范围为 [50,200]，默认为 100；只有 EmotionCategory 不为空时生效。<br> &emsp; }</pre>",
                     * @param _tTSConfig                                         "description": "TTS配置，为JSON字符串，腾讯云TTS示例如下： <pre>{ <br> &emsp; \"AppId\": 您的应用ID, // Integer 必填<br> &emsp; \"TTSType\": \"TTS类型\", // String TTS类型, 固定为\"tencent\"<br> &emsp; \"SecretId\": \"您的密钥ID\", // String 必填<br> &emsp; \"SecretKey\":  \"您的密钥Key\", // String 必填<br> &emsp; \"VoiceType\": 101001, // Integer  必填，音色 ID，包括标准音色与精品音色，精品音色拟真度更高，价格不同于标准音色。<br> &emsp; \"Speed\": 1.25, // Integer 非必填，语速，范围：[-2，6]，分别对应不同语速： -2: 代表0.6倍 -1: 代表0.8倍 0: 代表1.0倍（默认） 1: 代表1.2倍 2: 代表1.5倍  6: 代表2.5倍  如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。 参数值与实际语速转换\"Volume\": 5, // Integer 非必填，音量大小，范围：[0，10]，分别对应11个等级的音量，默认值为0，代表正常音量。<br> &emsp; \"EmotionCategory\":  \"angry\", // String 非必填 控制合成音频的情感，仅支持多情感音色使用。取值: neutral(中性)、sad(悲伤)、happy(高兴)、angry(生气)、fear(恐惧)、news(新闻)、story(故事)、radio(广播)、poetry(诗歌)、call(客服)、sajiao(撒娇)、disgusted(厌恶)、amaze(震惊)、peaceful(平静)、exciting(兴奋)、aojiao(傲娇)、jieshuo(解说)。<br> &emsp; \"EmotionIntensity\":  150 // Integer 非必填 控制合成音频情感程度，取值范围为 [50,200]，默认为 100；只有 EmotionCategory 不为空时生效。<br> &emsp; }</pre>",
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
                     * GME的SdkAppId和开启转录任务的房间使用的SdkAppId相同。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * GME的RoomId表示开启对话任务的房间号。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 机器人参数
                     */
                    AgentConfig m_agentConfig;
                    bool m_agentConfigHasBeenSet;

                    /**
                     * 语音识别配置。
                     */
                    STTConfig m_sTTConfig;
                    bool m_sTTConfigHasBeenSet;

                    /**
                     * LLM配置。需符合openai规范，为JSON字符串，示例如下：
<pre> { <br> &emsp;  "LLMType": "大模型类型",  // String 必填，如："openai" <br> &emsp;  "Model": "您的模型名称", // String 必填，指定使用的模型<br>    "APIKey": "您的LLM API密钥", // String 必填 <br> &emsp;  "APIUrl": "https://api.xxx.com/chat/completions", // String 必填，LLM API访问的URL<br> &emsp;  "Streaming": true // Boolean 非必填，指定是否使用流式传输<br> &emsp;} </pre>

                     */
                    std::string m_lLMConfig;
                    bool m_lLMConfigHasBeenSet;

                    /**
                     *                                         "description": "TTS配置，为JSON字符串，腾讯云TTS示例如下： <pre>{ <br> &emsp; \"AppId\": 您的应用ID, // Integer 必填<br> &emsp; \"TTSType\": \"TTS类型\", // String TTS类型, 固定为\"tencent\"<br> &emsp; \"SecretId\": \"您的密钥ID\", // String 必填<br> &emsp; \"SecretKey\":  \"您的密钥Key\", // String 必填<br> &emsp; \"VoiceType\": 101001, // Integer  必填，音色 ID，包括标准音色与精品音色，精品音色拟真度更高，价格不同于标准音色。<br> &emsp; \"Speed\": 1.25, // Integer 非必填，语速，范围：[-2，6]，分别对应不同语速： -2: 代表0.6倍 -1: 代表0.8倍 0: 代表1.0倍（默认） 1: 代表1.2倍 2: 代表1.5倍  6: 代表2.5倍  如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。 参数值与实际语速转换\"Volume\": 5, // Integer 非必填，音量大小，范围：[0，10]，分别对应11个等级的音量，默认值为0，代表正常音量。<br> &emsp; \"EmotionCategory\":  \"angry\", // String 非必填 控制合成音频的情感，仅支持多情感音色使用。取值: neutral(中性)、sad(悲伤)、happy(高兴)、angry(生气)、fear(恐惧)、news(新闻)、story(故事)、radio(广播)、poetry(诗歌)、call(客服)、sajiao(撒娇)、disgusted(厌恶)、amaze(震惊)、peaceful(平静)、exciting(兴奋)、aojiao(傲娇)、jieshuo(解说)。<br> &emsp; \"EmotionIntensity\":  150 // Integer 非必填 控制合成音频情感程度，取值范围为 [50,200]，默认为 100；只有 EmotionCategory 不为空时生效。<br> &emsp; }</pre>",
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

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_STARTAICONVERSATIONREQUEST_H_
