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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKBASICCONFIGINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKBASICCONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 基础配置信息。
                */
                class TalkBasicConfigInfo : public AbstractModel
                {
                public:
                    TalkBasicConfigInfo();
                    ~TalkBasicConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取系统提示词
                     * @return SystemPrompt 系统提示词
                     * 
                     */
                    std::string GetSystemPrompt() const;

                    /**
                     * 设置系统提示词
                     * @param _systemPrompt 系统提示词
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
                     * 获取欢迎语，支持多个欢迎语随机切换，格式：字符串数组，JSON字符串。
                     * @return GreetingMessage 欢迎语，支持多个欢迎语随机切换，格式：字符串数组，JSON字符串。
                     * 
                     */
                    std::string GetGreetingMessage() const;

                    /**
                     * 设置欢迎语，支持多个欢迎语随机切换，格式：字符串数组，JSON字符串。
                     * @param _greetingMessage 欢迎语，支持多个欢迎语随机切换，格式：字符串数组，JSON字符串。
                     * 
                     */
                    void SetGreetingMessage(const std::string& _greetingMessage);

                    /**
                     * 判断参数 GreetingMessage 是否已赋值
                     * @return GreetingMessage 是否已赋值
                     * 
                     */
                    bool GreetingMessageHasBeenSet() const;

                    /**
                     * 获取音色，支持的音色列表：100510000-阅读男声智逍遥；101001-情感女声智瑜；101002-通用女声智聆；101003-客服女声智美；101004-通用男声智云；101005-通用女声智莉；101006-助手女声智言；101008-客服女声智琪；101009-知性女声智芸；101010-通用男声智华；101011-新闻女声智燕；101012-新闻女声智丹；101013-新闻男声智辉；101014 -新闻男声智宁；101015-男童声智萌；101016-女童声智甜；101017-情感女声智蓉；101018-情感男声智靖；101019-粤语女声智彤。
                     * @return DefaultVoiceType 音色，支持的音色列表：100510000-阅读男声智逍遥；101001-情感女声智瑜；101002-通用女声智聆；101003-客服女声智美；101004-通用男声智云；101005-通用女声智莉；101006-助手女声智言；101008-客服女声智琪；101009-知性女声智芸；101010-通用男声智华；101011-新闻女声智燕；101012-新闻女声智丹；101013-新闻男声智辉；101014 -新闻男声智宁；101015-男童声智萌；101016-女童声智甜；101017-情感女声智蓉；101018-情感男声智靖；101019-粤语女声智彤。
                     * 
                     */
                    int64_t GetDefaultVoiceType() const;

                    /**
                     * 设置音色，支持的音色列表：100510000-阅读男声智逍遥；101001-情感女声智瑜；101002-通用女声智聆；101003-客服女声智美；101004-通用男声智云；101005-通用女声智莉；101006-助手女声智言；101008-客服女声智琪；101009-知性女声智芸；101010-通用男声智华；101011-新闻女声智燕；101012-新闻女声智丹；101013-新闻男声智辉；101014 -新闻男声智宁；101015-男童声智萌；101016-女童声智甜；101017-情感女声智蓉；101018-情感男声智靖；101019-粤语女声智彤。
                     * @param _defaultVoiceType 音色，支持的音色列表：100510000-阅读男声智逍遥；101001-情感女声智瑜；101002-通用女声智聆；101003-客服女声智美；101004-通用男声智云；101005-通用女声智莉；101006-助手女声智言；101008-客服女声智琪；101009-知性女声智芸；101010-通用男声智华；101011-新闻女声智燕；101012-新闻女声智丹；101013-新闻男声智辉；101014 -新闻男声智宁；101015-男童声智萌；101016-女童声智甜；101017-情感女声智蓉；101018-情感男声智靖；101019-粤语女声智彤。
                     * 
                     */
                    void SetDefaultVoiceType(const int64_t& _defaultVoiceType);

                    /**
                     * 判断参数 DefaultVoiceType 是否已赋值
                     * @return DefaultVoiceType 是否已赋值
                     * 
                     */
                    bool DefaultVoiceTypeHasBeenSet() const;

                    /**
                     * 获取复刻音色ID，当不为空时，DefaultVoiceType为200000000
                     * @return FastVoiceType 复刻音色ID，当不为空时，DefaultVoiceType为200000000
                     * 
                     */
                    std::string GetFastVoiceType() const;

                    /**
                     * 设置复刻音色ID，当不为空时，DefaultVoiceType为200000000
                     * @param _fastVoiceType 复刻音色ID，当不为空时，DefaultVoiceType为200000000
                     * 
                     */
                    void SetFastVoiceType(const std::string& _fastVoiceType);

                    /**
                     * 判断参数 FastVoiceType 是否已赋值
                     * @return FastVoiceType 是否已赋值
                     * 
                     */
                    bool FastVoiceTypeHasBeenSet() const;

                private:

                    /**
                     * 系统提示词
                     */
                    std::string m_systemPrompt;
                    bool m_systemPromptHasBeenSet;

                    /**
                     * 欢迎语，支持多个欢迎语随机切换，格式：字符串数组，JSON字符串。
                     */
                    std::string m_greetingMessage;
                    bool m_greetingMessageHasBeenSet;

                    /**
                     * 音色，支持的音色列表：100510000-阅读男声智逍遥；101001-情感女声智瑜；101002-通用女声智聆；101003-客服女声智美；101004-通用男声智云；101005-通用女声智莉；101006-助手女声智言；101008-客服女声智琪；101009-知性女声智芸；101010-通用男声智华；101011-新闻女声智燕；101012-新闻女声智丹；101013-新闻男声智辉；101014 -新闻男声智宁；101015-男童声智萌；101016-女童声智甜；101017-情感女声智蓉；101018-情感男声智靖；101019-粤语女声智彤。
                     */
                    int64_t m_defaultVoiceType;
                    bool m_defaultVoiceTypeHasBeenSet;

                    /**
                     * 复刻音色ID，当不为空时，DefaultVoiceType为200000000
                     */
                    std::string m_fastVoiceType;
                    bool m_fastVoiceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKBASICCONFIGINFO_H_
