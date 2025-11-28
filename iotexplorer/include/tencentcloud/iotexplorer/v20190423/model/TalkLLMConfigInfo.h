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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKLLMCONFIGINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKLLMCONFIGINFO_H_

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
                * LLM配置信息。
                */
                class TalkLLMConfigInfo : public AbstractModel
                {
                public:
                    TalkLLMConfigInfo();
                    ~TalkLLMConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取支持的LLM类型，openai-OPENAI格式。
                     * @return LLMType 支持的LLM类型，openai-OPENAI格式。
                     * 
                     */
                    std::string GetLLMType() const;

                    /**
                     * 设置支持的LLM类型，openai-OPENAI格式。
                     * @param _lLMType 支持的LLM类型，openai-OPENAI格式。
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
                     * 获取是否开启
                     * @return Enabled 是否开启
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否开启
                     * @param _enabled 是否开启
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取模型
                     * @return Model 模型
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置模型
                     * @param _model 模型
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
                     * 获取是否开启
                     * @return Streaming 是否开启
                     * 
                     */
                    bool GetStreaming() const;

                    /**
                     * 设置是否开启
                     * @param _streaming 是否开启
                     * 
                     */
                    void SetStreaming(const bool& _streaming);

                    /**
                     * 判断参数 Streaming 是否已赋值
                     * @return Streaming 是否已赋值
                     * 
                     */
                    bool StreamingHasBeenSet() const;

                    /**
                     * 获取配置信息JSON字符串，根据`LLMType`进行不同的值匹配。例如`LLMType`是`openai`，`Config`值是`{\"ApiKey\":\"sk-09***\",\"ApiUrl\":\"base_url\",\"SystemPrompt\":\"你是一个语音助手\",\"Timeout\":30,\"History\":0,\"MetaInfo\":{\"productID\":\"test\"}}`

## openai
```
{
   "ApiKey": "sk-XXXXXXXXXXXX",
   "ApiUrl": "https://api.openai.com/v1",
   "SystemPrompt": "一个小小助手",
  "Timeout":20,
  "History":10,
  "MetaInfo":{}
}
```
                     * @return Config 配置信息JSON字符串，根据`LLMType`进行不同的值匹配。例如`LLMType`是`openai`，`Config`值是`{\"ApiKey\":\"sk-09***\",\"ApiUrl\":\"base_url\",\"SystemPrompt\":\"你是一个语音助手\",\"Timeout\":30,\"History\":0,\"MetaInfo\":{\"productID\":\"test\"}}`

## openai
```
{
   "ApiKey": "sk-XXXXXXXXXXXX",
   "ApiUrl": "https://api.openai.com/v1",
   "SystemPrompt": "一个小小助手",
  "Timeout":20,
  "History":10,
  "MetaInfo":{}
}
```
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置配置信息JSON字符串，根据`LLMType`进行不同的值匹配。例如`LLMType`是`openai`，`Config`值是`{\"ApiKey\":\"sk-09***\",\"ApiUrl\":\"base_url\",\"SystemPrompt\":\"你是一个语音助手\",\"Timeout\":30,\"History\":0,\"MetaInfo\":{\"productID\":\"test\"}}`

## openai
```
{
   "ApiKey": "sk-XXXXXXXXXXXX",
   "ApiUrl": "https://api.openai.com/v1",
   "SystemPrompt": "一个小小助手",
  "Timeout":20,
  "History":10,
  "MetaInfo":{}
}
```
                     * @param _config 配置信息JSON字符串，根据`LLMType`进行不同的值匹配。例如`LLMType`是`openai`，`Config`值是`{\"ApiKey\":\"sk-09***\",\"ApiUrl\":\"base_url\",\"SystemPrompt\":\"你是一个语音助手\",\"Timeout\":30,\"History\":0,\"MetaInfo\":{\"productID\":\"test\"}}`

## openai
```
{
   "ApiKey": "sk-XXXXXXXXXXXX",
   "ApiUrl": "https://api.openai.com/v1",
   "SystemPrompt": "一个小小助手",
  "Timeout":20,
  "History":10,
  "MetaInfo":{}
}
```
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取温度
                     * @return Temperature 温度
                     * 
                     */
                    double GetTemperature() const;

                    /**
                     * 设置温度
                     * @param _temperature 温度
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
                     * 获取最大token数
                     * @return MaxTokens 最大token数
                     * 
                     */
                    int64_t GetMaxTokens() const;

                    /**
                     * 设置最大token数
                     * @param _maxTokens 最大token数
                     * 
                     */
                    void SetMaxTokens(const int64_t& _maxTokens);

                    /**
                     * 判断参数 MaxTokens 是否已赋值
                     * @return MaxTokens 是否已赋值
                     * 
                     */
                    bool MaxTokensHasBeenSet() const;

                    /**
                     * 获取topP
                     * @return TopP topP
                     * 
                     */
                    double GetTopP() const;

                    /**
                     * 设置topP
                     * @param _topP topP
                     * 
                     */
                    void SetTopP(const double& _topP);

                    /**
                     * 判断参数 TopP 是否已赋值
                     * @return TopP 是否已赋值
                     * 
                     */
                    bool TopPHasBeenSet() const;

                    /**
                     * 获取工具ID列表
                     * @return Tools 工具ID列表
                     * 
                     */
                    std::vector<std::string> GetTools() const;

                    /**
                     * 设置工具ID列表
                     * @param _tools 工具ID列表
                     * 
                     */
                    void SetTools(const std::vector<std::string>& _tools);

                    /**
                     * 判断参数 Tools 是否已赋值
                     * @return Tools 是否已赋值
                     * 
                     */
                    bool ToolsHasBeenSet() const;

                private:

                    /**
                     * 支持的LLM类型，openai-OPENAI格式。
                     */
                    std::string m_lLMType;
                    bool m_lLMTypeHasBeenSet;

                    /**
                     * 是否开启
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 模型
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 是否开启
                     */
                    bool m_streaming;
                    bool m_streamingHasBeenSet;

                    /**
                     * 配置信息JSON字符串，根据`LLMType`进行不同的值匹配。例如`LLMType`是`openai`，`Config`值是`{\"ApiKey\":\"sk-09***\",\"ApiUrl\":\"base_url\",\"SystemPrompt\":\"你是一个语音助手\",\"Timeout\":30,\"History\":0,\"MetaInfo\":{\"productID\":\"test\"}}`

## openai
```
{
   "ApiKey": "sk-XXXXXXXXXXXX",
   "ApiUrl": "https://api.openai.com/v1",
   "SystemPrompt": "一个小小助手",
  "Timeout":20,
  "History":10,
  "MetaInfo":{}
}
```
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 温度
                     */
                    double m_temperature;
                    bool m_temperatureHasBeenSet;

                    /**
                     * 最大token数
                     */
                    int64_t m_maxTokens;
                    bool m_maxTokensHasBeenSet;

                    /**
                     * topP
                     */
                    double m_topP;
                    bool m_topPHasBeenSet;

                    /**
                     * 工具ID列表
                     */
                    std::vector<std::string> m_tools;
                    bool m_toolsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKLLMCONFIGINFO_H_
