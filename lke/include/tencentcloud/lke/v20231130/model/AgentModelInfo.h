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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTMODELINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTMODELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/ModelParams.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Agent 配置里面的模型定义
                */
                class AgentModelInfo : public AbstractModel
                {
                public:
                    AgentModelInfo();
                    ~AgentModelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型名称
                     * @return ModelName 模型名称
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称
                     * @param _modelName 模型名称
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取模型别名
                     * @return ModelAliasName 模型别名
                     * 
                     */
                    std::string GetModelAliasName() const;

                    /**
                     * 设置模型别名
                     * @param _modelAliasName 模型别名
                     * 
                     */
                    void SetModelAliasName(const std::string& _modelAliasName);

                    /**
                     * 判断参数 ModelAliasName 是否已赋值
                     * @return ModelAliasName 是否已赋值
                     * 
                     */
                    bool ModelAliasNameHasBeenSet() const;

                    /**
                     * 获取模型温度
                     * @return Temperature 模型温度
                     * 
                     */
                    double GetTemperature() const;

                    /**
                     * 设置模型温度
                     * @param _temperature 模型温度
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
                     * 获取模型TopP
                     * @return TopP 模型TopP
                     * 
                     */
                    double GetTopP() const;

                    /**
                     * 设置模型TopP
                     * @param _topP 模型TopP
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
                     * 获取模型是否可用
                     * @return IsEnabled 模型是否可用
                     * 
                     */
                    bool GetIsEnabled() const;

                    /**
                     * 设置模型是否可用
                     * @param _isEnabled 模型是否可用
                     * 
                     */
                    void SetIsEnabled(const bool& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取对话历史条数限制
                     * @return HistoryLimit 对话历史条数限制
                     * 
                     */
                    uint64_t GetHistoryLimit() const;

                    /**
                     * 设置对话历史条数限制
                     * @param _historyLimit 对话历史条数限制
                     * 
                     */
                    void SetHistoryLimit(const uint64_t& _historyLimit);

                    /**
                     * 判断参数 HistoryLimit 是否已赋值
                     * @return HistoryLimit 是否已赋值
                     * 
                     */
                    bool HistoryLimitHasBeenSet() const;

                    /**
                     * 获取模型上下文长度字符限制
                     * @return ModelContextWordsLimit 模型上下文长度字符限制
                     * 
                     */
                    std::string GetModelContextWordsLimit() const;

                    /**
                     * 设置模型上下文长度字符限制
                     * @param _modelContextWordsLimit 模型上下文长度字符限制
                     * 
                     */
                    void SetModelContextWordsLimit(const std::string& _modelContextWordsLimit);

                    /**
                     * 判断参数 ModelContextWordsLimit 是否已赋值
                     * @return ModelContextWordsLimit 是否已赋值
                     * 
                     */
                    bool ModelContextWordsLimitHasBeenSet() const;

                    /**
                     * 获取指令长度字符限制
                     * @return InstructionsWordsLimit 指令长度字符限制
                     * 
                     */
                    uint64_t GetInstructionsWordsLimit() const;

                    /**
                     * 设置指令长度字符限制
                     * @param _instructionsWordsLimit 指令长度字符限制
                     * 
                     */
                    void SetInstructionsWordsLimit(const uint64_t& _instructionsWordsLimit);

                    /**
                     * 判断参数 InstructionsWordsLimit 是否已赋值
                     * @return InstructionsWordsLimit 是否已赋值
                     * 
                     */
                    bool InstructionsWordsLimitHasBeenSet() const;

                    /**
                     * 获取单次会话最大推理轮数
                     * @return MaxReasoningRound 单次会话最大推理轮数
                     * 
                     */
                    uint64_t GetMaxReasoningRound() const;

                    /**
                     * 设置单次会话最大推理轮数
                     * @param _maxReasoningRound 单次会话最大推理轮数
                     * 
                     */
                    void SetMaxReasoningRound(const uint64_t& _maxReasoningRound);

                    /**
                     * 判断参数 MaxReasoningRound 是否已赋值
                     * @return MaxReasoningRound 是否已赋值
                     * 
                     */
                    bool MaxReasoningRoundHasBeenSet() const;

                    /**
                     * 获取模型参数
                     * @return ModelParams 模型参数
                     * 
                     */
                    ModelParams GetModelParams() const;

                    /**
                     * 设置模型参数
                     * @param _modelParams 模型参数
                     * 
                     */
                    void SetModelParams(const ModelParams& _modelParams);

                    /**
                     * 判断参数 ModelParams 是否已赋值
                     * @return ModelParams 是否已赋值
                     * 
                     */
                    bool ModelParamsHasBeenSet() const;

                private:

                    /**
                     * 模型名称
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 模型别名
                     */
                    std::string m_modelAliasName;
                    bool m_modelAliasNameHasBeenSet;

                    /**
                     * 模型温度
                     */
                    double m_temperature;
                    bool m_temperatureHasBeenSet;

                    /**
                     * 模型TopP
                     */
                    double m_topP;
                    bool m_topPHasBeenSet;

                    /**
                     * 模型是否可用
                     */
                    bool m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * 对话历史条数限制
                     */
                    uint64_t m_historyLimit;
                    bool m_historyLimitHasBeenSet;

                    /**
                     * 模型上下文长度字符限制
                     */
                    std::string m_modelContextWordsLimit;
                    bool m_modelContextWordsLimitHasBeenSet;

                    /**
                     * 指令长度字符限制
                     */
                    uint64_t m_instructionsWordsLimit;
                    bool m_instructionsWordsLimitHasBeenSet;

                    /**
                     * 单次会话最大推理轮数
                     */
                    uint64_t m_maxReasoningRound;
                    bool m_maxReasoningRoundHasBeenSet;

                    /**
                     * 模型参数
                     */
                    ModelParams m_modelParams;
                    bool m_modelParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTMODELINFO_H_
