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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKLLMCONFIG_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKLLMCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/ADPConfig.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 大模型配置。基础对话必填；如使用平台默认能力，请显式设置 Type=default。
                */
                class TalkLLMConfig : public AbstractModel
                {
                public:
                    TalkLLMConfig();
                    ~TalkLLMConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>LLM类型：default-平台默认；openai-OpenAI兼容模型</p>
                     * @return Type <p>LLM类型：default-平台默认；openai-OpenAI兼容模型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>LLM类型：default-平台默认；openai-OpenAI兼容模型</p>
                     * @param _type <p>LLM类型：default-平台默认；openai-OpenAI兼容模型</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>系统提示词</p>
                     * @return SystemPrompt <p>系统提示词</p>
                     * 
                     */
                    std::string GetSystemPrompt() const;

                    /**
                     * 设置<p>系统提示词</p>
                     * @param _systemPrompt <p>系统提示词</p>
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
                     * 获取<p>采样温度，建议范围0-2</p>
                     * @return Temperature <p>采样温度，建议范围0-2</p>
                     * 
                     */
                    double GetTemperature() const;

                    /**
                     * 设置<p>采样温度，建议范围0-2</p>
                     * @param _temperature <p>采样温度，建议范围0-2</p>
                     * 
                     */
                    void SetTemperature(const double& _temperature);

                    /**
                     * 判断参数 Temperature 是否已赋值
                     * @return Temperature 是否已赋值
                     * 
                     */
                    bool TemperatureHasBeenSet() const;

                    /**
                     * 获取<p>上下文历史轮数，建议范围0-50</p>
                     * @return History <p>上下文历史轮数，建议范围0-50</p>
                     * 
                     */
                    int64_t GetHistory() const;

                    /**
                     * 设置<p>上下文历史轮数，建议范围0-50</p>
                     * @param _history <p>上下文历史轮数，建议范围0-50</p>
                     * 
                     */
                    void SetHistory(const int64_t& _history);

                    /**
                     * 判断参数 History 是否已赋值
                     * @return History 是否已赋值
                     * 
                     */
                    bool HistoryHasBeenSet() const;

                    /**
                     * 获取<p>超时时间，秒</p>
                     * @return Timeout <p>超时时间，秒</p>
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置<p>超时时间，秒</p>
                     * @param _timeout <p>超时时间，秒</p>
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>OpenAI兼容模型的Base URL，Type=openai时必填</p>
                     * @return BaseUrl <p>OpenAI兼容模型的Base URL，Type=openai时必填</p>
                     * 
                     */
                    std::string GetBaseUrl() const;

                    /**
                     * 设置<p>OpenAI兼容模型的Base URL，Type=openai时必填</p>
                     * @param _baseUrl <p>OpenAI兼容模型的Base URL，Type=openai时必填</p>
                     * 
                     */
                    void SetBaseUrl(const std::string& _baseUrl);

                    /**
                     * 判断参数 BaseUrl 是否已赋值
                     * @return BaseUrl 是否已赋值
                     * 
                     */
                    bool BaseUrlHasBeenSet() const;

                    /**
                     * 获取<p>模型名称，Type=openai时必填</p>
                     * @return Model <p>模型名称，Type=openai时必填</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>模型名称，Type=openai时必填</p>
                     * @param _model <p>模型名称，Type=openai时必填</p>
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
                     * 获取<p>模型API Key，Type=openai时必填</p>
                     * @return ApiKey <p>模型API Key，Type=openai时必填</p>
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 设置<p>模型API Key，Type=openai时必填</p>
                     * @param _apiKey <p>模型API Key，Type=openai时必填</p>
                     * 
                     */
                    void SetApiKey(const std::string& _apiKey);

                    /**
                     * 判断参数 ApiKey 是否已赋值
                     * @return ApiKey 是否已赋值
                     * 
                     */
                    bool ApiKeyHasBeenSet() const;

                    /**
                     * 获取<p>额外模型请求体参数，JSON对象字符串，只允许JSON object，不允许普通字符串</p>
                     * @return ExtraBody <p>额外模型请求体参数，JSON对象字符串，只允许JSON object，不允许普通字符串</p>
                     * 
                     */
                    std::string GetExtraBody() const;

                    /**
                     * 设置<p>额外模型请求体参数，JSON对象字符串，只允许JSON object，不允许普通字符串</p>
                     * @param _extraBody <p>额外模型请求体参数，JSON对象字符串，只允许JSON object，不允许普通字符串</p>
                     * 
                     */
                    void SetExtraBody(const std::string& _extraBody);

                    /**
                     * 判断参数 ExtraBody 是否已赋值
                     * @return ExtraBody 是否已赋值
                     * 
                     */
                    bool ExtraBodyHasBeenSet() const;

                    /**
                     * 获取<p>ADP 平台配置</p>
                     * @return ADP <p>ADP 平台配置</p>
                     * 
                     */
                    ADPConfig GetADP() const;

                    /**
                     * 设置<p>ADP 平台配置</p>
                     * @param _aDP <p>ADP 平台配置</p>
                     * 
                     */
                    void SetADP(const ADPConfig& _aDP);

                    /**
                     * 判断参数 ADP 是否已赋值
                     * @return ADP 是否已赋值
                     * 
                     */
                    bool ADPHasBeenSet() const;

                private:

                    /**
                     * <p>LLM类型：default-平台默认；openai-OpenAI兼容模型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>系统提示词</p>
                     */
                    std::string m_systemPrompt;
                    bool m_systemPromptHasBeenSet;

                    /**
                     * <p>采样温度，建议范围0-2</p>
                     */
                    double m_temperature;
                    bool m_temperatureHasBeenSet;

                    /**
                     * <p>上下文历史轮数，建议范围0-50</p>
                     */
                    int64_t m_history;
                    bool m_historyHasBeenSet;

                    /**
                     * <p>超时时间，秒</p>
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>OpenAI兼容模型的Base URL，Type=openai时必填</p>
                     */
                    std::string m_baseUrl;
                    bool m_baseUrlHasBeenSet;

                    /**
                     * <p>模型名称，Type=openai时必填</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>模型API Key，Type=openai时必填</p>
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                    /**
                     * <p>额外模型请求体参数，JSON对象字符串，只允许JSON object，不允许普通字符串</p>
                     */
                    std::string m_extraBody;
                    bool m_extraBodyHasBeenSet;

                    /**
                     * <p>ADP 平台配置</p>
                     */
                    ADPConfig m_aDP;
                    bool m_aDPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKLLMCONFIG_H_
