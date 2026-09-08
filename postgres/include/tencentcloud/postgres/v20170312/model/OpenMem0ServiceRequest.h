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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_OPENMEM0SERVICEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_OPENMEM0SERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * OpenMem0Service请求参数结构体
                */
                class OpenMem0ServiceRequest : public AbstractModel
                {
                public:
                    OpenMem0ServiceRequest();
                    ~OpenMem0ServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return DBInstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _dBInstanceId <p>实例ID</p>
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>AgenticBaseID，开启Mem0服务前请先开通AgenticBase套餐</p>
                     * @return AgenticBaseId <p>AgenticBaseID，开启Mem0服务前请先开通AgenticBase套餐</p>
                     * 
                     */
                    std::string GetAgenticBaseId() const;

                    /**
                     * 设置<p>AgenticBaseID，开启Mem0服务前请先开通AgenticBase套餐</p>
                     * @param _agenticBaseId <p>AgenticBaseID，开启Mem0服务前请先开通AgenticBase套餐</p>
                     * 
                     */
                    void SetAgenticBaseId(const std::string& _agenticBaseId);

                    /**
                     * 判断参数 AgenticBaseId 是否已赋值
                     * @return AgenticBaseId 是否已赋值
                     * 
                     */
                    bool AgenticBaseIdHasBeenSet() const;

                    /**
                     * 获取<p>Mem0服务使用的LLM模型</p><p>枚举值：</p><ul><li>auto： 自动选择合适的模型</li><li>deepseek-v4-flash： deepseek-v4-flash</li><li>deepseek-v4-pro： deepseek-v4-pro</li><li>glm-5： glm-5</li><li>glm-5-turbo： glm-5-turbo</li><li>glm-5.1： glm-5.1</li><li>kimi-k2.5： kimi-k2.5</li><li>kimi-k2.6： kimi-k2.6</li><li>minimax-m2.5： minimax-m2.5</li><li>minimax-m2.7： minimax-m2.7</li></ul>
                     * @return LLMModel <p>Mem0服务使用的LLM模型</p><p>枚举值：</p><ul><li>auto： 自动选择合适的模型</li><li>deepseek-v4-flash： deepseek-v4-flash</li><li>deepseek-v4-pro： deepseek-v4-pro</li><li>glm-5： glm-5</li><li>glm-5-turbo： glm-5-turbo</li><li>glm-5.1： glm-5.1</li><li>kimi-k2.5： kimi-k2.5</li><li>kimi-k2.6： kimi-k2.6</li><li>minimax-m2.5： minimax-m2.5</li><li>minimax-m2.7： minimax-m2.7</li></ul>
                     * 
                     */
                    std::string GetLLMModel() const;

                    /**
                     * 设置<p>Mem0服务使用的LLM模型</p><p>枚举值：</p><ul><li>auto： 自动选择合适的模型</li><li>deepseek-v4-flash： deepseek-v4-flash</li><li>deepseek-v4-pro： deepseek-v4-pro</li><li>glm-5： glm-5</li><li>glm-5-turbo： glm-5-turbo</li><li>glm-5.1： glm-5.1</li><li>kimi-k2.5： kimi-k2.5</li><li>kimi-k2.6： kimi-k2.6</li><li>minimax-m2.5： minimax-m2.5</li><li>minimax-m2.7： minimax-m2.7</li></ul>
                     * @param _lLMModel <p>Mem0服务使用的LLM模型</p><p>枚举值：</p><ul><li>auto： 自动选择合适的模型</li><li>deepseek-v4-flash： deepseek-v4-flash</li><li>deepseek-v4-pro： deepseek-v4-pro</li><li>glm-5： glm-5</li><li>glm-5-turbo： glm-5-turbo</li><li>glm-5.1： glm-5.1</li><li>kimi-k2.5： kimi-k2.5</li><li>kimi-k2.6： kimi-k2.6</li><li>minimax-m2.5： minimax-m2.5</li><li>minimax-m2.7： minimax-m2.7</li></ul>
                     * 
                     */
                    void SetLLMModel(const std::string& _lLMModel);

                    /**
                     * 判断参数 LLMModel 是否已赋值
                     * @return LLMModel 是否已赋值
                     * 
                     */
                    bool LLMModelHasBeenSet() const;

                    /**
                     * 获取<p>请前往腾讯云Tokenhub开通服务将ApiKey填入</p>
                     * @return EmbeddingApiKey <p>请前往腾讯云Tokenhub开通服务将ApiKey填入</p>
                     * 
                     */
                    std::string GetEmbeddingApiKey() const;

                    /**
                     * 设置<p>请前往腾讯云Tokenhub开通服务将ApiKey填入</p>
                     * @param _embeddingApiKey <p>请前往腾讯云Tokenhub开通服务将ApiKey填入</p>
                     * 
                     */
                    void SetEmbeddingApiKey(const std::string& _embeddingApiKey);

                    /**
                     * 判断参数 EmbeddingApiKey 是否已赋值
                     * @return EmbeddingApiKey 是否已赋值
                     * 
                     */
                    bool EmbeddingApiKeyHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>AgenticBaseID，开启Mem0服务前请先开通AgenticBase套餐</p>
                     */
                    std::string m_agenticBaseId;
                    bool m_agenticBaseIdHasBeenSet;

                    /**
                     * <p>Mem0服务使用的LLM模型</p><p>枚举值：</p><ul><li>auto： 自动选择合适的模型</li><li>deepseek-v4-flash： deepseek-v4-flash</li><li>deepseek-v4-pro： deepseek-v4-pro</li><li>glm-5： glm-5</li><li>glm-5-turbo： glm-5-turbo</li><li>glm-5.1： glm-5.1</li><li>kimi-k2.5： kimi-k2.5</li><li>kimi-k2.6： kimi-k2.6</li><li>minimax-m2.5： minimax-m2.5</li><li>minimax-m2.7： minimax-m2.7</li></ul>
                     */
                    std::string m_lLMModel;
                    bool m_lLMModelHasBeenSet;

                    /**
                     * <p>请前往腾讯云Tokenhub开通服务将ApiKey填入</p>
                     */
                    std::string m_embeddingApiKey;
                    bool m_embeddingApiKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_OPENMEM0SERVICEREQUEST_H_
