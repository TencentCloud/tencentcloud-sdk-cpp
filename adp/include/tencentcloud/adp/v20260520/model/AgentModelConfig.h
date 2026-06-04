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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTMODELCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTMODELCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ModelParams.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Agent 配置里面的模型定义
                */
                class AgentModelConfig : public AbstractModel
                {
                public:
                    AgentModelConfig();
                    ~AgentModelConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型唯一id</p>
                     * @return ModelId <p>模型唯一id</p>
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置<p>模型唯一id</p>
                     * @param _modelId <p>模型唯一id</p>
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取<p>模型别名</p>
                     * @return Alias <p>模型别名</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>模型别名</p>
                     * @param _alias <p>模型别名</p>
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取<p>模型上下文长度字符限制</p>
                     * @return ContextWordsLimit <p>模型上下文长度字符限制</p>
                     * 
                     */
                    uint64_t GetContextWordsLimit() const;

                    /**
                     * 设置<p>模型上下文长度字符限制</p>
                     * @param _contextWordsLimit <p>模型上下文长度字符限制</p>
                     * 
                     */
                    void SetContextWordsLimit(const uint64_t& _contextWordsLimit);

                    /**
                     * 判断参数 ContextWordsLimit 是否已赋值
                     * @return ContextWordsLimit 是否已赋值
                     * 
                     */
                    bool ContextWordsLimitHasBeenSet() const;

                    /**
                     * 获取<p>指令长度字符限制</p>
                     * @return InstructionsWordsLimit <p>指令长度字符限制</p>
                     * 
                     */
                    uint64_t GetInstructionsWordsLimit() const;

                    /**
                     * 设置<p>指令长度字符限制</p>
                     * @param _instructionsWordsLimit <p>指令长度字符限制</p>
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
                     * 获取<p>模型参数</p>
                     * @return ModelParameters <p>模型参数</p>
                     * 
                     */
                    ModelParams GetModelParameters() const;

                    /**
                     * 设置<p>模型参数</p>
                     * @param _modelParameters <p>模型参数</p>
                     * 
                     */
                    void SetModelParameters(const ModelParams& _modelParameters);

                    /**
                     * 判断参数 ModelParameters 是否已赋值
                     * @return ModelParameters 是否已赋值
                     * 
                     */
                    bool ModelParametersHasBeenSet() const;

                private:

                    /**
                     * <p>模型唯一id</p>
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * <p>模型别名</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>模型上下文长度字符限制</p>
                     */
                    uint64_t m_contextWordsLimit;
                    bool m_contextWordsLimitHasBeenSet;

                    /**
                     * <p>指令长度字符限制</p>
                     */
                    uint64_t m_instructionsWordsLimit;
                    bool m_instructionsWordsLimitHasBeenSet;

                    /**
                     * <p>模型参数</p>
                     */
                    ModelParams m_modelParameters;
                    bool m_modelParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTMODELCONFIG_H_
