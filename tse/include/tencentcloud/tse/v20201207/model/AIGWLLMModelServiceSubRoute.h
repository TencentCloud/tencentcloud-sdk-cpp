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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AIGWLLMMODELSERVICESUBROUTE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AIGWLLMMODELSERVICESUBROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy.h>
#include <tencentcloud/tse/v20201207/model/AIGWLatencyPriorityConfig.h>
#include <tencentcloud/tse/v20201207/model/AIGWRouteModelServiceConfig.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 模型服务二级路由配置
                */
                class AIGWLLMModelServiceSubRoute : public AbstractModel
                {
                public:
                    AIGWLLMModelServiceSubRoute();
                    ~AIGWLLMModelServiceSubRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>生效的路由算法类型：权重路由，模型名称路由、参数路由等Weighted/ModelName/Query (预留多个，暂时只能填写一个)</p>
                     * @return SelectedTypes <p>生效的路由算法类型：权重路由，模型名称路由、参数路由等Weighted/ModelName/Query (预留多个，暂时只能填写一个)</p>
                     * 
                     */
                    std::vector<std::string> GetSelectedTypes() const;

                    /**
                     * 设置<p>生效的路由算法类型：权重路由，模型名称路由、参数路由等Weighted/ModelName/Query (预留多个，暂时只能填写一个)</p>
                     * @param _selectedTypes <p>生效的路由算法类型：权重路由，模型名称路由、参数路由等Weighted/ModelName/Query (预留多个，暂时只能填写一个)</p>
                     * 
                     */
                    void SetSelectedTypes(const std::vector<std::string>& _selectedTypes);

                    /**
                     * 判断参数 SelectedTypes 是否已赋值
                     * @return SelectedTypes 是否已赋值
                     * 
                     */
                    bool SelectedTypesHasBeenSet() const;

                    /**
                     * 获取<p>权重路由配置，最多10个</p>
                     * @return WeightedConfig <p>权重路由配置，最多10个</p>
                     * 
                     */
                    std::vector<CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy> GetWeightedConfig() const;

                    /**
                     * 设置<p>权重路由配置，最多10个</p>
                     * @param _weightedConfig <p>权重路由配置，最多10个</p>
                     * 
                     */
                    void SetWeightedConfig(const std::vector<CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy>& _weightedConfig);

                    /**
                     * 判断参数 WeightedConfig 是否已赋值
                     * @return WeightedConfig 是否已赋值
                     * 
                     */
                    bool WeightedConfigHasBeenSet() const;

                    /**
                     * 获取<p>延迟路由</p>
                     * @return LatencyPriorityConfig <p>延迟路由</p>
                     * 
                     */
                    AIGWLatencyPriorityConfig GetLatencyPriorityConfig() const;

                    /**
                     * 设置<p>延迟路由</p>
                     * @param _latencyPriorityConfig <p>延迟路由</p>
                     * 
                     */
                    void SetLatencyPriorityConfig(const AIGWLatencyPriorityConfig& _latencyPriorityConfig);

                    /**
                     * 判断参数 LatencyPriorityConfig 是否已赋值
                     * @return LatencyPriorityConfig 是否已赋值
                     * 
                     */
                    bool LatencyPriorityConfigHasBeenSet() const;

                    /**
                     * 获取<p>指定模型路由（暂时只用在Token长度路由时的子路由选择）</p>
                     * @return ModelServiceConfig <p>指定模型路由（暂时只用在Token长度路由时的子路由选择）</p>
                     * 
                     */
                    AIGWRouteModelServiceConfig GetModelServiceConfig() const;

                    /**
                     * 设置<p>指定模型路由（暂时只用在Token长度路由时的子路由选择）</p>
                     * @param _modelServiceConfig <p>指定模型路由（暂时只用在Token长度路由时的子路由选择）</p>
                     * 
                     */
                    void SetModelServiceConfig(const AIGWRouteModelServiceConfig& _modelServiceConfig);

                    /**
                     * 判断参数 ModelServiceConfig 是否已赋值
                     * @return ModelServiceConfig 是否已赋值
                     * 
                     */
                    bool ModelServiceConfigHasBeenSet() const;

                private:

                    /**
                     * <p>生效的路由算法类型：权重路由，模型名称路由、参数路由等Weighted/ModelName/Query (预留多个，暂时只能填写一个)</p>
                     */
                    std::vector<std::string> m_selectedTypes;
                    bool m_selectedTypesHasBeenSet;

                    /**
                     * <p>权重路由配置，最多10个</p>
                     */
                    std::vector<CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy> m_weightedConfig;
                    bool m_weightedConfigHasBeenSet;

                    /**
                     * <p>延迟路由</p>
                     */
                    AIGWLatencyPriorityConfig m_latencyPriorityConfig;
                    bool m_latencyPriorityConfigHasBeenSet;

                    /**
                     * <p>指定模型路由（暂时只用在Token长度路由时的子路由选择）</p>
                     */
                    AIGWRouteModelServiceConfig m_modelServiceConfig;
                    bool m_modelServiceConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AIGWLLMMODELSERVICESUBROUTE_H_
