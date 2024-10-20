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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAICALLREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAICALLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * CreateAICall请求参数结构体
                */
                class CreateAICallRequest : public AbstractModel
                {
                public:
                    CreateAICallRequest();
                    ~CreateAICallRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @return SdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @param _sdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取被叫
                     * @return Callee 被叫
                     * 
                     */
                    std::string GetCallee() const;

                    /**
                     * 设置被叫
                     * @param _callee 被叫
                     * 
                     */
                    void SetCallee(const std::string& _callee);

                    /**
                     * 判断参数 Callee 是否已赋值
                     * @return Callee 是否已赋值
                     * 
                     */
                    bool CalleeHasBeenSet() const;

                    /**
                     * 获取用于设定AI座席人设、说话规则、任务等的全局提示词。
                     * @return SystemPrompt 用于设定AI座席人设、说话规则、任务等的全局提示词。
                     * 
                     */
                    std::string GetSystemPrompt() const;

                    /**
                     * 设置用于设定AI座席人设、说话规则、任务等的全局提示词。
                     * @param _systemPrompt 用于设定AI座席人设、说话规则、任务等的全局提示词。
                     * 
                     */
                    void SetSystemPrompt(const std::string& _systemPrompt);

                    /**
                     * 判断参数 SystemPrompt 是否已赋值
                     * @return SystemPrompt 是否已赋值
                     * 
                     */
                    bool SystemPromptHasBeenSet() const;

                    /**
                     * 获取LLM类型
目前有两种
openai(兼容openai协议的模型)
azure
                     * @return LLMType LLM类型
目前有两种
openai(兼容openai协议的模型)
azure
                     * 
                     */
                    std::string GetLLMType() const;

                    /**
                     * 设置LLM类型
目前有两种
openai(兼容openai协议的模型)
azure
                     * @param _lLMType LLM类型
目前有两种
openai(兼容openai协议的模型)
azure
                     * 
                     */
                    void SetLLMType(const std::string& _lLMType);

                    /**
                     * 判断参数 LLMType 是否已赋值
                     * @return LLMType 是否已赋值
                     * 
                     */
                    bool LLMTypeHasBeenSet() const;

                    /**
                     * 获取模型（当前仅支持openai协议的模型）
                     * @return Model 模型（当前仅支持openai协议的模型）
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置模型（当前仅支持openai协议的模型）
                     * @param _model 模型（当前仅支持openai协议的模型）
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取API密钥
                     * @return APIKey API密钥
                     * 
                     */
                    std::string GetAPIKey() const;

                    /**
                     * 设置API密钥
                     * @param _aPIKey API密钥
                     * 
                     */
                    void SetAPIKey(const std::string& _aPIKey);

                    /**
                     * 判断参数 APIKey 是否已赋值
                     * @return APIKey 是否已赋值
                     * 
                     */
                    bool APIKeyHasBeenSet() const;

                    /**
                     * 获取API URL，仅支持兼容openai协议的模型，填写url时后缀不要带/chat/completions；
llmType为azure时,URL填写格式需为：https://{your-resource-name}.openai.azure.com?api-version={api-version},填写url时后缀不要带/openai/deployments/{deployment-id}/chat/completions，系统会自动帮你填充后缀
                     * @return APIUrl API URL，仅支持兼容openai协议的模型，填写url时后缀不要带/chat/completions；
llmType为azure时,URL填写格式需为：https://{your-resource-name}.openai.azure.com?api-version={api-version},填写url时后缀不要带/openai/deployments/{deployment-id}/chat/completions，系统会自动帮你填充后缀
                     * 
                     */
                    std::string GetAPIUrl() const;

                    /**
                     * 设置API URL，仅支持兼容openai协议的模型，填写url时后缀不要带/chat/completions；
llmType为azure时,URL填写格式需为：https://{your-resource-name}.openai.azure.com?api-version={api-version},填写url时后缀不要带/openai/deployments/{deployment-id}/chat/completions，系统会自动帮你填充后缀
                     * @param _aPIUrl API URL，仅支持兼容openai协议的模型，填写url时后缀不要带/chat/completions；
llmType为azure时,URL填写格式需为：https://{your-resource-name}.openai.azure.com?api-version={api-version},填写url时后缀不要带/openai/deployments/{deployment-id}/chat/completions，系统会自动帮你填充后缀
                     * 
                     */
                    void SetAPIUrl(const std::string& _aPIUrl);

                    /**
                     * 判断参数 APIUrl 是否已赋值
                     * @return APIUrl 是否已赋值
                     * 
                     */
                    bool APIUrlHasBeenSet() const;

                    /**
                     * 获取音色，目前仅支持以下音色:
汉语：
ZhiMei：智美，客服女声
ZhiXi： 智希 通用女声
ZhiQi：智琪 客服女声
ZhiTian：智甜 女童声
AiXiaoJing：爱小静 对话女声

英语:
WeRose：英文女声
Monika：英文女声

日语：
Nanami

韩语：
SunHi

印度尼西亚语(印度尼西亚)：
Gadis

马来语（马来西亚）:
Yasmin

 泰米尔语（马来西亚）:
Kani

泰语（泰国）:
Achara

越南语(越南):
HoaiMy


                     * @return VoiceType 音色，目前仅支持以下音色:
汉语：
ZhiMei：智美，客服女声
ZhiXi： 智希 通用女声
ZhiQi：智琪 客服女声
ZhiTian：智甜 女童声
AiXiaoJing：爱小静 对话女声

英语:
WeRose：英文女声
Monika：英文女声

日语：
Nanami

韩语：
SunHi

印度尼西亚语(印度尼西亚)：
Gadis

马来语（马来西亚）:
Yasmin

 泰米尔语（马来西亚）:
Kani

泰语（泰国）:
Achara

越南语(越南):
HoaiMy


                     * 
                     */
                    std::string GetVoiceType() const;

                    /**
                     * 设置音色，目前仅支持以下音色:
汉语：
ZhiMei：智美，客服女声
ZhiXi： 智希 通用女声
ZhiQi：智琪 客服女声
ZhiTian：智甜 女童声
AiXiaoJing：爱小静 对话女声

英语:
WeRose：英文女声
Monika：英文女声

日语：
Nanami

韩语：
SunHi

印度尼西亚语(印度尼西亚)：
Gadis

马来语（马来西亚）:
Yasmin

 泰米尔语（马来西亚）:
Kani

泰语（泰国）:
Achara

越南语(越南):
HoaiMy


                     * @param _voiceType 音色，目前仅支持以下音色:
汉语：
ZhiMei：智美，客服女声
ZhiXi： 智希 通用女声
ZhiQi：智琪 客服女声
ZhiTian：智甜 女童声
AiXiaoJing：爱小静 对话女声

英语:
WeRose：英文女声
Monika：英文女声

日语：
Nanami

韩语：
SunHi

印度尼西亚语(印度尼西亚)：
Gadis

马来语（马来西亚）:
Yasmin

 泰米尔语（马来西亚）:
Kani

泰语（泰国）:
Achara

越南语(越南):
HoaiMy


                     * 
                     */
                    void SetVoiceType(const std::string& _voiceType);

                    /**
                     * 判断参数 VoiceType 是否已赋值
                     * @return VoiceType 是否已赋值
                     * 
                     */
                    bool VoiceTypeHasBeenSet() const;

                    /**
                     * 获取主叫号码列表
                     * @return Callers 主叫号码列表
                     * 
                     */
                    std::vector<std::string> GetCallers() const;

                    /**
                     * 设置主叫号码列表
                     * @param _callers 主叫号码列表
                     * 
                     */
                    void SetCallers(const std::vector<std::string>& _callers);

                    /**
                     * 判断参数 Callers 是否已赋值
                     * @return Callers 是否已赋值
                     * 
                     */
                    bool CallersHasBeenSet() const;

                    /**
                     * 获取用于设定AI座席欢迎语。
                     * @return WelcomeMessage 用于设定AI座席欢迎语。
                     * 
                     */
                    std::string GetWelcomeMessage() const;

                    /**
                     * 设置用于设定AI座席欢迎语。
                     * @param _welcomeMessage 用于设定AI座席欢迎语。
                     * 
                     */
                    void SetWelcomeMessage(const std::string& _welcomeMessage);

                    /**
                     * 判断参数 WelcomeMessage 是否已赋值
                     * @return WelcomeMessage 是否已赋值
                     * 
                     */
                    bool WelcomeMessageHasBeenSet() const;

                    /**
                     * 获取0：使用welcomeMessage(为空时，被叫先说话；不为空时，机器人先说话)
1:   使用ai根据prompt自动生成welcomeMessage并先说话
                     * @return WelcomeType 0：使用welcomeMessage(为空时，被叫先说话；不为空时，机器人先说话)
1:   使用ai根据prompt自动生成welcomeMessage并先说话
                     * 
                     */
                    int64_t GetWelcomeType() const;

                    /**
                     * 设置0：使用welcomeMessage(为空时，被叫先说话；不为空时，机器人先说话)
1:   使用ai根据prompt自动生成welcomeMessage并先说话
                     * @param _welcomeType 0：使用welcomeMessage(为空时，被叫先说话；不为空时，机器人先说话)
1:   使用ai根据prompt自动生成welcomeMessage并先说话
                     * 
                     */
                    void SetWelcomeType(const int64_t& _welcomeType);

                    /**
                     * 判断参数 WelcomeType 是否已赋值
                     * @return WelcomeType 是否已赋值
                     * 
                     */
                    bool WelcomeTypeHasBeenSet() const;

                    /**
                     * 获取最大等待时长(毫秒)，默认60秒，超过这个时间用户没说话，自动挂断
                     * @return MaxDuration 最大等待时长(毫秒)，默认60秒，超过这个时间用户没说话，自动挂断
                     * 
                     */
                    int64_t GetMaxDuration() const;

                    /**
                     * 设置最大等待时长(毫秒)，默认60秒，超过这个时间用户没说话，自动挂断
                     * @param _maxDuration 最大等待时长(毫秒)，默认60秒，超过这个时间用户没说话，自动挂断
                     * 
                     */
                    void SetMaxDuration(const int64_t& _maxDuration);

                    /**
                     * 判断参数 MaxDuration 是否已赋值
                     * @return MaxDuration 是否已赋值
                     * 
                     */
                    bool MaxDurationHasBeenSet() const;

                    /**
                     * 获取语音识别支持的语言, 默认是"zh" 中文,
填写数组,最长4个语言，第一个语言为主要识别语言，后面为可选语言，
注意:主要语言为中国方言时，可选语言无效
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循ISO639：
1. Chinese = "zh" # 中文
2. Chinese_TW = "zh-TW" # 中国台湾
3. Chinese_DIALECT = "zh-dialect" # 中国方言
4. English = "en" # 英语
5. Vietnamese = "vi" # 越南语
6. Japanese = "ja" # 日语
7. Korean = "ko" # 汉语
8. Indonesia = "id" # 印度尼西亚语
9. Thai = "th" # 泰语
10. Portuguese = "pt" # 葡萄牙语
11. Turkish = "tr" # 土耳其语
12. Arabic = "ar" # 阿拉伯语
13. Spanish = "es" # 西班牙语
14. Hindi = "hi" # 印地语
15. French = "fr" # 法语
16. Malay = "ms" # 马来语
17. Filipino = "fil" # 菲律宾语
18. German = "de" # 德语
19. Italian = "it" # 意大利语
20. Russian = "ru" # 俄语
                     * @return Languages 语音识别支持的语言, 默认是"zh" 中文,
填写数组,最长4个语言，第一个语言为主要识别语言，后面为可选语言，
注意:主要语言为中国方言时，可选语言无效
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循ISO639：
1. Chinese = "zh" # 中文
2. Chinese_TW = "zh-TW" # 中国台湾
3. Chinese_DIALECT = "zh-dialect" # 中国方言
4. English = "en" # 英语
5. Vietnamese = "vi" # 越南语
6. Japanese = "ja" # 日语
7. Korean = "ko" # 汉语
8. Indonesia = "id" # 印度尼西亚语
9. Thai = "th" # 泰语
10. Portuguese = "pt" # 葡萄牙语
11. Turkish = "tr" # 土耳其语
12. Arabic = "ar" # 阿拉伯语
13. Spanish = "es" # 西班牙语
14. Hindi = "hi" # 印地语
15. French = "fr" # 法语
16. Malay = "ms" # 马来语
17. Filipino = "fil" # 菲律宾语
18. German = "de" # 德语
19. Italian = "it" # 意大利语
20. Russian = "ru" # 俄语
                     * 
                     */
                    std::vector<std::string> GetLanguages() const;

                    /**
                     * 设置语音识别支持的语言, 默认是"zh" 中文,
填写数组,最长4个语言，第一个语言为主要识别语言，后面为可选语言，
注意:主要语言为中国方言时，可选语言无效
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循ISO639：
1. Chinese = "zh" # 中文
2. Chinese_TW = "zh-TW" # 中国台湾
3. Chinese_DIALECT = "zh-dialect" # 中国方言
4. English = "en" # 英语
5. Vietnamese = "vi" # 越南语
6. Japanese = "ja" # 日语
7. Korean = "ko" # 汉语
8. Indonesia = "id" # 印度尼西亚语
9. Thai = "th" # 泰语
10. Portuguese = "pt" # 葡萄牙语
11. Turkish = "tr" # 土耳其语
12. Arabic = "ar" # 阿拉伯语
13. Spanish = "es" # 西班牙语
14. Hindi = "hi" # 印地语
15. French = "fr" # 法语
16. Malay = "ms" # 马来语
17. Filipino = "fil" # 菲律宾语
18. German = "de" # 德语
19. Italian = "it" # 意大利语
20. Russian = "ru" # 俄语
                     * @param _languages 语音识别支持的语言, 默认是"zh" 中文,
填写数组,最长4个语言，第一个语言为主要识别语言，后面为可选语言，
注意:主要语言为中国方言时，可选语言无效
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循ISO639：
1. Chinese = "zh" # 中文
2. Chinese_TW = "zh-TW" # 中国台湾
3. Chinese_DIALECT = "zh-dialect" # 中国方言
4. English = "en" # 英语
5. Vietnamese = "vi" # 越南语
6. Japanese = "ja" # 日语
7. Korean = "ko" # 汉语
8. Indonesia = "id" # 印度尼西亚语
9. Thai = "th" # 泰语
10. Portuguese = "pt" # 葡萄牙语
11. Turkish = "tr" # 土耳其语
12. Arabic = "ar" # 阿拉伯语
13. Spanish = "es" # 西班牙语
14. Hindi = "hi" # 印地语
15. French = "fr" # 法语
16. Malay = "ms" # 马来语
17. Filipino = "fil" # 菲律宾语
18. German = "de" # 德语
19. Italian = "it" # 意大利语
20. Russian = "ru" # 俄语
                     * 
                     */
                    void SetLanguages(const std::vector<std::string>& _languages);

                    /**
                     * 判断参数 Languages 是否已赋值
                     * @return Languages 是否已赋值
                     * 
                     */
                    bool LanguagesHasBeenSet() const;

                    /**
                     * 获取打断AI说话模式，默认为0，0表示服务端自动打断，1表示服务端不打断，由端上发送打断信令进行打断
                     * @return InterruptMode 打断AI说话模式，默认为0，0表示服务端自动打断，1表示服务端不打断，由端上发送打断信令进行打断
                     * 
                     */
                    int64_t GetInterruptMode() const;

                    /**
                     * 设置打断AI说话模式，默认为0，0表示服务端自动打断，1表示服务端不打断，由端上发送打断信令进行打断
                     * @param _interruptMode 打断AI说话模式，默认为0，0表示服务端自动打断，1表示服务端不打断，由端上发送打断信令进行打断
                     * 
                     */
                    void SetInterruptMode(const int64_t& _interruptMode);

                    /**
                     * 判断参数 InterruptMode 是否已赋值
                     * @return InterruptMode 是否已赋值
                     * 
                     */
                    bool InterruptModeHasBeenSet() const;

                    /**
                     * 获取InterruptMode为0时使用，单位为毫秒，默认为500ms。表示服务端检测到持续InterruptSpeechDuration毫秒的人声则进行打断。
                     * @return InterruptSpeechDuration InterruptMode为0时使用，单位为毫秒，默认为500ms。表示服务端检测到持续InterruptSpeechDuration毫秒的人声则进行打断。
                     * 
                     */
                    int64_t GetInterruptSpeechDuration() const;

                    /**
                     * 设置InterruptMode为0时使用，单位为毫秒，默认为500ms。表示服务端检测到持续InterruptSpeechDuration毫秒的人声则进行打断。
                     * @param _interruptSpeechDuration InterruptMode为0时使用，单位为毫秒，默认为500ms。表示服务端检测到持续InterruptSpeechDuration毫秒的人声则进行打断。
                     * 
                     */
                    void SetInterruptSpeechDuration(const int64_t& _interruptSpeechDuration);

                    /**
                     * 判断参数 InterruptSpeechDuration 是否已赋值
                     * @return InterruptSpeechDuration 是否已赋值
                     * 
                     */
                    bool InterruptSpeechDurationHasBeenSet() const;

                    /**
                     * 获取模型是否支持(或者开启)call_end function calling
                     * @return EndFunctionEnable 模型是否支持(或者开启)call_end function calling
                     * 
                     */
                    bool GetEndFunctionEnable() const;

                    /**
                     * 设置模型是否支持(或者开启)call_end function calling
                     * @param _endFunctionEnable 模型是否支持(或者开启)call_end function calling
                     * 
                     */
                    void SetEndFunctionEnable(const bool& _endFunctionEnable);

                    /**
                     * 判断参数 EndFunctionEnable 是否已赋值
                     * @return EndFunctionEnable 是否已赋值
                     * 
                     */
                    bool EndFunctionEnableHasBeenSet() const;

                    /**
                     * 获取EndFunctionEnable为true时生效；call_end function calling的desc，默认为 "End the call when user has to leave (like says bye) or you are instructed to do so."
                     * @return EndFunctionDesc EndFunctionEnable为true时生效；call_end function calling的desc，默认为 "End the call when user has to leave (like says bye) or you are instructed to do so."
                     * 
                     */
                    std::string GetEndFunctionDesc() const;

                    /**
                     * 设置EndFunctionEnable为true时生效；call_end function calling的desc，默认为 "End the call when user has to leave (like says bye) or you are instructed to do so."
                     * @param _endFunctionDesc EndFunctionEnable为true时生效；call_end function calling的desc，默认为 "End the call when user has to leave (like says bye) or you are instructed to do so."
                     * 
                     */
                    void SetEndFunctionDesc(const std::string& _endFunctionDesc);

                    /**
                     * 判断参数 EndFunctionDesc 是否已赋值
                     * @return EndFunctionDesc 是否已赋值
                     * 
                     */
                    bool EndFunctionDescHasBeenSet() const;

                    /**
                     * 获取用户多久没说话提示时长,最小10秒,默认10秒
                     * @return NotifyDuration 用户多久没说话提示时长,最小10秒,默认10秒
                     * 
                     */
                    int64_t GetNotifyDuration() const;

                    /**
                     * 设置用户多久没说话提示时长,最小10秒,默认10秒
                     * @param _notifyDuration 用户多久没说话提示时长,最小10秒,默认10秒
                     * 
                     */
                    void SetNotifyDuration(const int64_t& _notifyDuration);

                    /**
                     * 判断参数 NotifyDuration 是否已赋值
                     * @return NotifyDuration 是否已赋值
                     * 
                     */
                    bool NotifyDurationHasBeenSet() const;

                    /**
                     * 获取用户NotifyDuration没说话，ai提示的语句，默认是"抱歉，我没听清。您可以重复下吗？"
                     * @return NotifyMessage 用户NotifyDuration没说话，ai提示的语句，默认是"抱歉，我没听清。您可以重复下吗？"
                     * 
                     */
                    std::string GetNotifyMessage() const;

                    /**
                     * 设置用户NotifyDuration没说话，ai提示的语句，默认是"抱歉，我没听清。您可以重复下吗？"
                     * @param _notifyMessage 用户NotifyDuration没说话，ai提示的语句，默认是"抱歉，我没听清。您可以重复下吗？"
                     * 
                     */
                    void SetNotifyMessage(const std::string& _notifyMessage);

                    /**
                     * 判断参数 NotifyMessage 是否已赋值
                     * @return NotifyMessage 是否已赋值
                     * 
                     */
                    bool NotifyMessageHasBeenSet() const;

                    /**
                     * 获取和voiceType字段需要选填一个，这里是使用自己自定义的TTS，voiceType是系统内置的一些音色

tencent TTS:
{ 
       "TTSType": "tencent", // String TTS类型, 目前支持"tencent" 和 “minixmax”， 其他的厂商支持中
       "AppId": "您的应用ID", // String 必填
       "SecretId": "您的密钥ID", // String 必填
       "SecretKey":  "您的密钥Key", // String 必填
       "VoiceType": 101001, // Integer  必填，音色 ID，包括标准音色与精品音色，精品音色拟真度更高，价格不同于标准音色，请参见语音合成计费概述。完整的音色 ID 列表请参见语音合成音色列表。
       "Speed": 1.25, // Integer 非必填，语速，范围：[-2，6]，分别对应不同语速： -2: 代表0.6倍 -1: 代表0.8倍 0: 代表1.0倍（默认） 1: 代表1.2倍 2: 代表1.5倍  6: 代表2.5倍  如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。 参数值与实际语速转换，可参考 语速转换
       "Volume": 5, // Integer 非必填，音量大小，范围：[0，10]，分别对应11个等级的音量，默认值为0，代表正常音量。
       "PrimaryLanguage": 1, // Integer 可选 主要语言 1-中文（默认） 2-英文 3-日文
       "FastVoiceType": "xxxx"   //  可选参数， 快速声音复刻的参数 
  }

参考：https://cloud.tencent.com/document/product/1073/92668#55924b56-1a73-4663-a7a1-a8dd82d6e823 

minimax TTS
{
        "TTSType": "minimax",  // String TTS类型, 
        "Model": "speech-01-turbo",
        "APIUrl": "https://api.minimax.chat/v1/t2a_v2",
        "APIKey": "eyxxxx",
        "GroupId": "181000000000000",
        "VoiceType":"female-tianmei-jingpin",
        "Speed": 1.2
}

参考：https://platform.minimaxi.com/document/T2A%20V2?key=66719005a427f0c8a5701643 
限频参考：https://platform.minimaxi.com/document/Rate%20limits?key=66b19417290299a26b234572   可能会导致回答卡顿



volcengine TTS
{
    "TTSType": "volcengine",  // 必填：String TTS类型
    "AppId" : "xxxxxxxx",   // 必填：String 火山引擎分配的Appid
    "Token" : "TY9d4sQXHxxxxxxx", // 必填： String类型 火山引擎的访问token
    "Speed" : 1.0,            // 可选参数 语速，默认为1.0
    "Volume": 1.0,            // 可选参数， 音量大小， 默认为1.0
    "Cluster" : "volcano_tts", // 可选参数，业务集群, 默认是 volcano_tts
    "VoiceType" : "zh_male_aojiaobazong_moon_bigtts"   // 音色类型， 默认为大模型语音合成的音色。 如果使用普通语音合成，则需要填写对应的音色类型。 音色类型填写错误会导致没有声音。
}



火山引擎音色类型参考：
https://www.volcengine.com/docs/6561/162929 
语音合成音色列表--语音技术-火山引擎
大模型语音合成音色列表--语音技术-火山引擎


Azure TTS
{
    "TTSType": "azure", // 必填：String TTS类型
    "SubscriptionKey": "xxxxxxxx", // 必填：String 订阅的Key
    "Region": "chinanorth3",  // 必填：String 订阅的地区
    "VoiceName": "zh-CN-XiaoxiaoNeural", // 必填：String 音色名必填
    "Language": "zh-CN", // 必填：String 合成的语言  
    "Rate": 1 // 选填：float 语速  0.5～2 默认为 1
}

参考：
https://docs.azure.cn/zh-cn/ai-services/speech-service/speech-synthesis-markup-voice 


自定义 TTS 
{
  "TTSType": "custom", // String 必填
  "APIKey": "ApiKey", // String 必填 用来鉴权
  "APIUrl": "http://0.0.0.0:8080/stream-audio" // String，必填，TTS API URL
  "AudioFormat": "wav", // String, 非必填，期望输出的音频格式，如mp3， ogg_opus，pcm，wav，默认为 wav，目前只支持pcm和wav，
  "SampleRate": 16000,  // Integer，非必填，音频采样率，默认为16000(16k)，推荐值为16000
  "AudioChannel": 1,    // Integer，非必填，音频通道数，取值：1 或 2  默认为1  
}


具体协议规范： 
https://doc.weixin.qq.com/doc/w3_ANQAiAbdAFwHILbJBmtSqSbV1WZ3L?scode=AJEAIQdfAAo5a1xajYANQAiAbdAFw 



                     * @return CustomTTSConfig 和voiceType字段需要选填一个，这里是使用自己自定义的TTS，voiceType是系统内置的一些音色

tencent TTS:
{ 
       "TTSType": "tencent", // String TTS类型, 目前支持"tencent" 和 “minixmax”， 其他的厂商支持中
       "AppId": "您的应用ID", // String 必填
       "SecretId": "您的密钥ID", // String 必填
       "SecretKey":  "您的密钥Key", // String 必填
       "VoiceType": 101001, // Integer  必填，音色 ID，包括标准音色与精品音色，精品音色拟真度更高，价格不同于标准音色，请参见语音合成计费概述。完整的音色 ID 列表请参见语音合成音色列表。
       "Speed": 1.25, // Integer 非必填，语速，范围：[-2，6]，分别对应不同语速： -2: 代表0.6倍 -1: 代表0.8倍 0: 代表1.0倍（默认） 1: 代表1.2倍 2: 代表1.5倍  6: 代表2.5倍  如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。 参数值与实际语速转换，可参考 语速转换
       "Volume": 5, // Integer 非必填，音量大小，范围：[0，10]，分别对应11个等级的音量，默认值为0，代表正常音量。
       "PrimaryLanguage": 1, // Integer 可选 主要语言 1-中文（默认） 2-英文 3-日文
       "FastVoiceType": "xxxx"   //  可选参数， 快速声音复刻的参数 
  }

参考：https://cloud.tencent.com/document/product/1073/92668#55924b56-1a73-4663-a7a1-a8dd82d6e823 

minimax TTS
{
        "TTSType": "minimax",  // String TTS类型, 
        "Model": "speech-01-turbo",
        "APIUrl": "https://api.minimax.chat/v1/t2a_v2",
        "APIKey": "eyxxxx",
        "GroupId": "181000000000000",
        "VoiceType":"female-tianmei-jingpin",
        "Speed": 1.2
}

参考：https://platform.minimaxi.com/document/T2A%20V2?key=66719005a427f0c8a5701643 
限频参考：https://platform.minimaxi.com/document/Rate%20limits?key=66b19417290299a26b234572   可能会导致回答卡顿



volcengine TTS
{
    "TTSType": "volcengine",  // 必填：String TTS类型
    "AppId" : "xxxxxxxx",   // 必填：String 火山引擎分配的Appid
    "Token" : "TY9d4sQXHxxxxxxx", // 必填： String类型 火山引擎的访问token
    "Speed" : 1.0,            // 可选参数 语速，默认为1.0
    "Volume": 1.0,            // 可选参数， 音量大小， 默认为1.0
    "Cluster" : "volcano_tts", // 可选参数，业务集群, 默认是 volcano_tts
    "VoiceType" : "zh_male_aojiaobazong_moon_bigtts"   // 音色类型， 默认为大模型语音合成的音色。 如果使用普通语音合成，则需要填写对应的音色类型。 音色类型填写错误会导致没有声音。
}



火山引擎音色类型参考：
https://www.volcengine.com/docs/6561/162929 
语音合成音色列表--语音技术-火山引擎
大模型语音合成音色列表--语音技术-火山引擎


Azure TTS
{
    "TTSType": "azure", // 必填：String TTS类型
    "SubscriptionKey": "xxxxxxxx", // 必填：String 订阅的Key
    "Region": "chinanorth3",  // 必填：String 订阅的地区
    "VoiceName": "zh-CN-XiaoxiaoNeural", // 必填：String 音色名必填
    "Language": "zh-CN", // 必填：String 合成的语言  
    "Rate": 1 // 选填：float 语速  0.5～2 默认为 1
}

参考：
https://docs.azure.cn/zh-cn/ai-services/speech-service/speech-synthesis-markup-voice 


自定义 TTS 
{
  "TTSType": "custom", // String 必填
  "APIKey": "ApiKey", // String 必填 用来鉴权
  "APIUrl": "http://0.0.0.0:8080/stream-audio" // String，必填，TTS API URL
  "AudioFormat": "wav", // String, 非必填，期望输出的音频格式，如mp3， ogg_opus，pcm，wav，默认为 wav，目前只支持pcm和wav，
  "SampleRate": 16000,  // Integer，非必填，音频采样率，默认为16000(16k)，推荐值为16000
  "AudioChannel": 1,    // Integer，非必填，音频通道数，取值：1 或 2  默认为1  
}


具体协议规范： 
https://doc.weixin.qq.com/doc/w3_ANQAiAbdAFwHILbJBmtSqSbV1WZ3L?scode=AJEAIQdfAAo5a1xajYANQAiAbdAFw 



                     * 
                     */
                    std::string GetCustomTTSConfig() const;

                    /**
                     * 设置和voiceType字段需要选填一个，这里是使用自己自定义的TTS，voiceType是系统内置的一些音色

tencent TTS:
{ 
       "TTSType": "tencent", // String TTS类型, 目前支持"tencent" 和 “minixmax”， 其他的厂商支持中
       "AppId": "您的应用ID", // String 必填
       "SecretId": "您的密钥ID", // String 必填
       "SecretKey":  "您的密钥Key", // String 必填
       "VoiceType": 101001, // Integer  必填，音色 ID，包括标准音色与精品音色，精品音色拟真度更高，价格不同于标准音色，请参见语音合成计费概述。完整的音色 ID 列表请参见语音合成音色列表。
       "Speed": 1.25, // Integer 非必填，语速，范围：[-2，6]，分别对应不同语速： -2: 代表0.6倍 -1: 代表0.8倍 0: 代表1.0倍（默认） 1: 代表1.2倍 2: 代表1.5倍  6: 代表2.5倍  如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。 参数值与实际语速转换，可参考 语速转换
       "Volume": 5, // Integer 非必填，音量大小，范围：[0，10]，分别对应11个等级的音量，默认值为0，代表正常音量。
       "PrimaryLanguage": 1, // Integer 可选 主要语言 1-中文（默认） 2-英文 3-日文
       "FastVoiceType": "xxxx"   //  可选参数， 快速声音复刻的参数 
  }

参考：https://cloud.tencent.com/document/product/1073/92668#55924b56-1a73-4663-a7a1-a8dd82d6e823 

minimax TTS
{
        "TTSType": "minimax",  // String TTS类型, 
        "Model": "speech-01-turbo",
        "APIUrl": "https://api.minimax.chat/v1/t2a_v2",
        "APIKey": "eyxxxx",
        "GroupId": "181000000000000",
        "VoiceType":"female-tianmei-jingpin",
        "Speed": 1.2
}

参考：https://platform.minimaxi.com/document/T2A%20V2?key=66719005a427f0c8a5701643 
限频参考：https://platform.minimaxi.com/document/Rate%20limits?key=66b19417290299a26b234572   可能会导致回答卡顿



volcengine TTS
{
    "TTSType": "volcengine",  // 必填：String TTS类型
    "AppId" : "xxxxxxxx",   // 必填：String 火山引擎分配的Appid
    "Token" : "TY9d4sQXHxxxxxxx", // 必填： String类型 火山引擎的访问token
    "Speed" : 1.0,            // 可选参数 语速，默认为1.0
    "Volume": 1.0,            // 可选参数， 音量大小， 默认为1.0
    "Cluster" : "volcano_tts", // 可选参数，业务集群, 默认是 volcano_tts
    "VoiceType" : "zh_male_aojiaobazong_moon_bigtts"   // 音色类型， 默认为大模型语音合成的音色。 如果使用普通语音合成，则需要填写对应的音色类型。 音色类型填写错误会导致没有声音。
}



火山引擎音色类型参考：
https://www.volcengine.com/docs/6561/162929 
语音合成音色列表--语音技术-火山引擎
大模型语音合成音色列表--语音技术-火山引擎


Azure TTS
{
    "TTSType": "azure", // 必填：String TTS类型
    "SubscriptionKey": "xxxxxxxx", // 必填：String 订阅的Key
    "Region": "chinanorth3",  // 必填：String 订阅的地区
    "VoiceName": "zh-CN-XiaoxiaoNeural", // 必填：String 音色名必填
    "Language": "zh-CN", // 必填：String 合成的语言  
    "Rate": 1 // 选填：float 语速  0.5～2 默认为 1
}

参考：
https://docs.azure.cn/zh-cn/ai-services/speech-service/speech-synthesis-markup-voice 


自定义 TTS 
{
  "TTSType": "custom", // String 必填
  "APIKey": "ApiKey", // String 必填 用来鉴权
  "APIUrl": "http://0.0.0.0:8080/stream-audio" // String，必填，TTS API URL
  "AudioFormat": "wav", // String, 非必填，期望输出的音频格式，如mp3， ogg_opus，pcm，wav，默认为 wav，目前只支持pcm和wav，
  "SampleRate": 16000,  // Integer，非必填，音频采样率，默认为16000(16k)，推荐值为16000
  "AudioChannel": 1,    // Integer，非必填，音频通道数，取值：1 或 2  默认为1  
}


具体协议规范： 
https://doc.weixin.qq.com/doc/w3_ANQAiAbdAFwHILbJBmtSqSbV1WZ3L?scode=AJEAIQdfAAo5a1xajYANQAiAbdAFw 



                     * @param _customTTSConfig 和voiceType字段需要选填一个，这里是使用自己自定义的TTS，voiceType是系统内置的一些音色

tencent TTS:
{ 
       "TTSType": "tencent", // String TTS类型, 目前支持"tencent" 和 “minixmax”， 其他的厂商支持中
       "AppId": "您的应用ID", // String 必填
       "SecretId": "您的密钥ID", // String 必填
       "SecretKey":  "您的密钥Key", // String 必填
       "VoiceType": 101001, // Integer  必填，音色 ID，包括标准音色与精品音色，精品音色拟真度更高，价格不同于标准音色，请参见语音合成计费概述。完整的音色 ID 列表请参见语音合成音色列表。
       "Speed": 1.25, // Integer 非必填，语速，范围：[-2，6]，分别对应不同语速： -2: 代表0.6倍 -1: 代表0.8倍 0: 代表1.0倍（默认） 1: 代表1.2倍 2: 代表1.5倍  6: 代表2.5倍  如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。 参数值与实际语速转换，可参考 语速转换
       "Volume": 5, // Integer 非必填，音量大小，范围：[0，10]，分别对应11个等级的音量，默认值为0，代表正常音量。
       "PrimaryLanguage": 1, // Integer 可选 主要语言 1-中文（默认） 2-英文 3-日文
       "FastVoiceType": "xxxx"   //  可选参数， 快速声音复刻的参数 
  }

参考：https://cloud.tencent.com/document/product/1073/92668#55924b56-1a73-4663-a7a1-a8dd82d6e823 

minimax TTS
{
        "TTSType": "minimax",  // String TTS类型, 
        "Model": "speech-01-turbo",
        "APIUrl": "https://api.minimax.chat/v1/t2a_v2",
        "APIKey": "eyxxxx",
        "GroupId": "181000000000000",
        "VoiceType":"female-tianmei-jingpin",
        "Speed": 1.2
}

参考：https://platform.minimaxi.com/document/T2A%20V2?key=66719005a427f0c8a5701643 
限频参考：https://platform.minimaxi.com/document/Rate%20limits?key=66b19417290299a26b234572   可能会导致回答卡顿



volcengine TTS
{
    "TTSType": "volcengine",  // 必填：String TTS类型
    "AppId" : "xxxxxxxx",   // 必填：String 火山引擎分配的Appid
    "Token" : "TY9d4sQXHxxxxxxx", // 必填： String类型 火山引擎的访问token
    "Speed" : 1.0,            // 可选参数 语速，默认为1.0
    "Volume": 1.0,            // 可选参数， 音量大小， 默认为1.0
    "Cluster" : "volcano_tts", // 可选参数，业务集群, 默认是 volcano_tts
    "VoiceType" : "zh_male_aojiaobazong_moon_bigtts"   // 音色类型， 默认为大模型语音合成的音色。 如果使用普通语音合成，则需要填写对应的音色类型。 音色类型填写错误会导致没有声音。
}



火山引擎音色类型参考：
https://www.volcengine.com/docs/6561/162929 
语音合成音色列表--语音技术-火山引擎
大模型语音合成音色列表--语音技术-火山引擎


Azure TTS
{
    "TTSType": "azure", // 必填：String TTS类型
    "SubscriptionKey": "xxxxxxxx", // 必填：String 订阅的Key
    "Region": "chinanorth3",  // 必填：String 订阅的地区
    "VoiceName": "zh-CN-XiaoxiaoNeural", // 必填：String 音色名必填
    "Language": "zh-CN", // 必填：String 合成的语言  
    "Rate": 1 // 选填：float 语速  0.5～2 默认为 1
}

参考：
https://docs.azure.cn/zh-cn/ai-services/speech-service/speech-synthesis-markup-voice 


自定义 TTS 
{
  "TTSType": "custom", // String 必填
  "APIKey": "ApiKey", // String 必填 用来鉴权
  "APIUrl": "http://0.0.0.0:8080/stream-audio" // String，必填，TTS API URL
  "AudioFormat": "wav", // String, 非必填，期望输出的音频格式，如mp3， ogg_opus，pcm，wav，默认为 wav，目前只支持pcm和wav，
  "SampleRate": 16000,  // Integer，非必填，音频采样率，默认为16000(16k)，推荐值为16000
  "AudioChannel": 1,    // Integer，非必填，音频通道数，取值：1 或 2  默认为1  
}


具体协议规范： 
https://doc.weixin.qq.com/doc/w3_ANQAiAbdAFwHILbJBmtSqSbV1WZ3L?scode=AJEAIQdfAAo5a1xajYANQAiAbdAFw 



                     * 
                     */
                    void SetCustomTTSConfig(const std::string& _customTTSConfig);

                    /**
                     * 判断参数 CustomTTSConfig 是否已赋值
                     * @return CustomTTSConfig 是否已赋值
                     * 
                     */
                    bool CustomTTSConfigHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 被叫
                     */
                    std::string m_callee;
                    bool m_calleeHasBeenSet;

                    /**
                     * 用于设定AI座席人设、说话规则、任务等的全局提示词。
                     */
                    std::string m_systemPrompt;
                    bool m_systemPromptHasBeenSet;

                    /**
                     * LLM类型
目前有两种
openai(兼容openai协议的模型)
azure
                     */
                    std::string m_lLMType;
                    bool m_lLMTypeHasBeenSet;

                    /**
                     * 模型（当前仅支持openai协议的模型）
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * API密钥
                     */
                    std::string m_aPIKey;
                    bool m_aPIKeyHasBeenSet;

                    /**
                     * API URL，仅支持兼容openai协议的模型，填写url时后缀不要带/chat/completions；
llmType为azure时,URL填写格式需为：https://{your-resource-name}.openai.azure.com?api-version={api-version},填写url时后缀不要带/openai/deployments/{deployment-id}/chat/completions，系统会自动帮你填充后缀
                     */
                    std::string m_aPIUrl;
                    bool m_aPIUrlHasBeenSet;

                    /**
                     * 音色，目前仅支持以下音色:
汉语：
ZhiMei：智美，客服女声
ZhiXi： 智希 通用女声
ZhiQi：智琪 客服女声
ZhiTian：智甜 女童声
AiXiaoJing：爱小静 对话女声

英语:
WeRose：英文女声
Monika：英文女声

日语：
Nanami

韩语：
SunHi

印度尼西亚语(印度尼西亚)：
Gadis

马来语（马来西亚）:
Yasmin

 泰米尔语（马来西亚）:
Kani

泰语（泰国）:
Achara

越南语(越南):
HoaiMy


                     */
                    std::string m_voiceType;
                    bool m_voiceTypeHasBeenSet;

                    /**
                     * 主叫号码列表
                     */
                    std::vector<std::string> m_callers;
                    bool m_callersHasBeenSet;

                    /**
                     * 用于设定AI座席欢迎语。
                     */
                    std::string m_welcomeMessage;
                    bool m_welcomeMessageHasBeenSet;

                    /**
                     * 0：使用welcomeMessage(为空时，被叫先说话；不为空时，机器人先说话)
1:   使用ai根据prompt自动生成welcomeMessage并先说话
                     */
                    int64_t m_welcomeType;
                    bool m_welcomeTypeHasBeenSet;

                    /**
                     * 最大等待时长(毫秒)，默认60秒，超过这个时间用户没说话，自动挂断
                     */
                    int64_t m_maxDuration;
                    bool m_maxDurationHasBeenSet;

                    /**
                     * 语音识别支持的语言, 默认是"zh" 中文,
填写数组,最长4个语言，第一个语言为主要识别语言，后面为可选语言，
注意:主要语言为中国方言时，可选语言无效
目前全量支持的语言如下，等号左面是语言英文名，右面是Language字段需要填写的值，该值遵循ISO639：
1. Chinese = "zh" # 中文
2. Chinese_TW = "zh-TW" # 中国台湾
3. Chinese_DIALECT = "zh-dialect" # 中国方言
4. English = "en" # 英语
5. Vietnamese = "vi" # 越南语
6. Japanese = "ja" # 日语
7. Korean = "ko" # 汉语
8. Indonesia = "id" # 印度尼西亚语
9. Thai = "th" # 泰语
10. Portuguese = "pt" # 葡萄牙语
11. Turkish = "tr" # 土耳其语
12. Arabic = "ar" # 阿拉伯语
13. Spanish = "es" # 西班牙语
14. Hindi = "hi" # 印地语
15. French = "fr" # 法语
16. Malay = "ms" # 马来语
17. Filipino = "fil" # 菲律宾语
18. German = "de" # 德语
19. Italian = "it" # 意大利语
20. Russian = "ru" # 俄语
                     */
                    std::vector<std::string> m_languages;
                    bool m_languagesHasBeenSet;

                    /**
                     * 打断AI说话模式，默认为0，0表示服务端自动打断，1表示服务端不打断，由端上发送打断信令进行打断
                     */
                    int64_t m_interruptMode;
                    bool m_interruptModeHasBeenSet;

                    /**
                     * InterruptMode为0时使用，单位为毫秒，默认为500ms。表示服务端检测到持续InterruptSpeechDuration毫秒的人声则进行打断。
                     */
                    int64_t m_interruptSpeechDuration;
                    bool m_interruptSpeechDurationHasBeenSet;

                    /**
                     * 模型是否支持(或者开启)call_end function calling
                     */
                    bool m_endFunctionEnable;
                    bool m_endFunctionEnableHasBeenSet;

                    /**
                     * EndFunctionEnable为true时生效；call_end function calling的desc，默认为 "End the call when user has to leave (like says bye) or you are instructed to do so."
                     */
                    std::string m_endFunctionDesc;
                    bool m_endFunctionDescHasBeenSet;

                    /**
                     * 用户多久没说话提示时长,最小10秒,默认10秒
                     */
                    int64_t m_notifyDuration;
                    bool m_notifyDurationHasBeenSet;

                    /**
                     * 用户NotifyDuration没说话，ai提示的语句，默认是"抱歉，我没听清。您可以重复下吗？"
                     */
                    std::string m_notifyMessage;
                    bool m_notifyMessageHasBeenSet;

                    /**
                     * 和voiceType字段需要选填一个，这里是使用自己自定义的TTS，voiceType是系统内置的一些音色

tencent TTS:
{ 
       "TTSType": "tencent", // String TTS类型, 目前支持"tencent" 和 “minixmax”， 其他的厂商支持中
       "AppId": "您的应用ID", // String 必填
       "SecretId": "您的密钥ID", // String 必填
       "SecretKey":  "您的密钥Key", // String 必填
       "VoiceType": 101001, // Integer  必填，音色 ID，包括标准音色与精品音色，精品音色拟真度更高，价格不同于标准音色，请参见语音合成计费概述。完整的音色 ID 列表请参见语音合成音色列表。
       "Speed": 1.25, // Integer 非必填，语速，范围：[-2，6]，分别对应不同语速： -2: 代表0.6倍 -1: 代表0.8倍 0: 代表1.0倍（默认） 1: 代表1.2倍 2: 代表1.5倍  6: 代表2.5倍  如果需要更细化的语速，可以保留小数点后 2 位，例如0.5/1.25/2.81等。 参数值与实际语速转换，可参考 语速转换
       "Volume": 5, // Integer 非必填，音量大小，范围：[0，10]，分别对应11个等级的音量，默认值为0，代表正常音量。
       "PrimaryLanguage": 1, // Integer 可选 主要语言 1-中文（默认） 2-英文 3-日文
       "FastVoiceType": "xxxx"   //  可选参数， 快速声音复刻的参数 
  }

参考：https://cloud.tencent.com/document/product/1073/92668#55924b56-1a73-4663-a7a1-a8dd82d6e823 

minimax TTS
{
        "TTSType": "minimax",  // String TTS类型, 
        "Model": "speech-01-turbo",
        "APIUrl": "https://api.minimax.chat/v1/t2a_v2",
        "APIKey": "eyxxxx",
        "GroupId": "181000000000000",
        "VoiceType":"female-tianmei-jingpin",
        "Speed": 1.2
}

参考：https://platform.minimaxi.com/document/T2A%20V2?key=66719005a427f0c8a5701643 
限频参考：https://platform.minimaxi.com/document/Rate%20limits?key=66b19417290299a26b234572   可能会导致回答卡顿



volcengine TTS
{
    "TTSType": "volcengine",  // 必填：String TTS类型
    "AppId" : "xxxxxxxx",   // 必填：String 火山引擎分配的Appid
    "Token" : "TY9d4sQXHxxxxxxx", // 必填： String类型 火山引擎的访问token
    "Speed" : 1.0,            // 可选参数 语速，默认为1.0
    "Volume": 1.0,            // 可选参数， 音量大小， 默认为1.0
    "Cluster" : "volcano_tts", // 可选参数，业务集群, 默认是 volcano_tts
    "VoiceType" : "zh_male_aojiaobazong_moon_bigtts"   // 音色类型， 默认为大模型语音合成的音色。 如果使用普通语音合成，则需要填写对应的音色类型。 音色类型填写错误会导致没有声音。
}



火山引擎音色类型参考：
https://www.volcengine.com/docs/6561/162929 
语音合成音色列表--语音技术-火山引擎
大模型语音合成音色列表--语音技术-火山引擎


Azure TTS
{
    "TTSType": "azure", // 必填：String TTS类型
    "SubscriptionKey": "xxxxxxxx", // 必填：String 订阅的Key
    "Region": "chinanorth3",  // 必填：String 订阅的地区
    "VoiceName": "zh-CN-XiaoxiaoNeural", // 必填：String 音色名必填
    "Language": "zh-CN", // 必填：String 合成的语言  
    "Rate": 1 // 选填：float 语速  0.5～2 默认为 1
}

参考：
https://docs.azure.cn/zh-cn/ai-services/speech-service/speech-synthesis-markup-voice 


自定义 TTS 
{
  "TTSType": "custom", // String 必填
  "APIKey": "ApiKey", // String 必填 用来鉴权
  "APIUrl": "http://0.0.0.0:8080/stream-audio" // String，必填，TTS API URL
  "AudioFormat": "wav", // String, 非必填，期望输出的音频格式，如mp3， ogg_opus，pcm，wav，默认为 wav，目前只支持pcm和wav，
  "SampleRate": 16000,  // Integer，非必填，音频采样率，默认为16000(16k)，推荐值为16000
  "AudioChannel": 1,    // Integer，非必填，音频通道数，取值：1 或 2  默认为1  
}


具体协议规范： 
https://doc.weixin.qq.com/doc/w3_ANQAiAbdAFwHILbJBmtSqSbV1WZ3L?scode=AJEAIQdfAAo5a1xajYANQAiAbdAFw 



                     */
                    std::string m_customTTSConfig;
                    bool m_customTTSConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAICALLREQUEST_H_
