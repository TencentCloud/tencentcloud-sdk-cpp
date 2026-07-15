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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CLOUDNATIVEAPIGATEWAYLLMMODELSERVICEROUTE_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CLOUDNATIVEAPIGATEWAYLLMMODELSERVICEROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy.h>
#include <tencentcloud/cngw/v20230418/model/CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy.h>
#include <tencentcloud/cngw/v20230418/model/AIGWIntentRoute.h>
#include <tencentcloud/cngw/v20230418/model/AIGWLatencyPriorityConfig.h>
#include <tencentcloud/cngw/v20230418/model/AIGWCacheAwareRouteConfig.h>
#include <tencentcloud/cngw/v20230418/model/AIGWTokenLengthRoute.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 模型服务路由配置
                */
                class CloudNativeAPIGatewayLLMModelServiceRoute : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayLLMModelServiceRoute();
                    ~CloudNativeAPIGatewayLLMModelServiceRoute() = default;
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
                     * 获取<p>模型名称路由配置，最多10个</p>
                     * @return ModelNameConfig <p>模型名称路由配置，最多10个</p>
                     * 
                     */
                    std::vector<CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy> GetModelNameConfig() const;

                    /**
                     * 设置<p>模型名称路由配置，最多10个</p>
                     * @param _modelNameConfig <p>模型名称路由配置，最多10个</p>
                     * 
                     */
                    void SetModelNameConfig(const std::vector<CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy>& _modelNameConfig);

                    /**
                     * 判断参数 ModelNameConfig 是否已赋值
                     * @return ModelNameConfig 是否已赋值
                     * 
                     */
                    bool ModelNameConfigHasBeenSet() const;

                    /**
                     * 获取<p>意图识别</p>
                     * @return IntentRouteConfig <p>意图识别</p>
                     * 
                     */
                    AIGWIntentRoute GetIntentRouteConfig() const;

                    /**
                     * 设置<p>意图识别</p>
                     * @param _intentRouteConfig <p>意图识别</p>
                     * 
                     */
                    void SetIntentRouteConfig(const AIGWIntentRoute& _intentRouteConfig);

                    /**
                     * 判断参数 IntentRouteConfig 是否已赋值
                     * @return IntentRouteConfig 是否已赋值
                     * 
                     */
                    bool IntentRouteConfigHasBeenSet() const;

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
                     * 获取<p>前缀缓存感知路由</p>
                     * @return CacheAwareRouteConfig <p>前缀缓存感知路由</p>
                     * 
                     */
                    AIGWCacheAwareRouteConfig GetCacheAwareRouteConfig() const;

                    /**
                     * 设置<p>前缀缓存感知路由</p>
                     * @param _cacheAwareRouteConfig <p>前缀缓存感知路由</p>
                     * 
                     */
                    void SetCacheAwareRouteConfig(const AIGWCacheAwareRouteConfig& _cacheAwareRouteConfig);

                    /**
                     * 判断参数 CacheAwareRouteConfig 是否已赋值
                     * @return CacheAwareRouteConfig 是否已赋值
                     * 
                     */
                    bool CacheAwareRouteConfigHasBeenSet() const;

                    /**
                     * 获取<p>token 长度路</p>
                     * @return TokenLengthRouteConfig <p>token 长度路</p>
                     * 
                     */
                    AIGWTokenLengthRoute GetTokenLengthRouteConfig() const;

                    /**
                     * 设置<p>token 长度路</p>
                     * @param _tokenLengthRouteConfig <p>token 长度路</p>
                     * 
                     */
                    void SetTokenLengthRouteConfig(const AIGWTokenLengthRoute& _tokenLengthRouteConfig);

                    /**
                     * 判断参数 TokenLengthRouteConfig 是否已赋值
                     * @return TokenLengthRouteConfig 是否已赋值
                     * 
                     */
                    bool TokenLengthRouteConfigHasBeenSet() const;

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
                     * <p>模型名称路由配置，最多10个</p>
                     */
                    std::vector<CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy> m_modelNameConfig;
                    bool m_modelNameConfigHasBeenSet;

                    /**
                     * <p>意图识别</p>
                     */
                    AIGWIntentRoute m_intentRouteConfig;
                    bool m_intentRouteConfigHasBeenSet;

                    /**
                     * <p>延迟路由</p>
                     */
                    AIGWLatencyPriorityConfig m_latencyPriorityConfig;
                    bool m_latencyPriorityConfigHasBeenSet;

                    /**
                     * <p>前缀缓存感知路由</p>
                     */
                    AIGWCacheAwareRouteConfig m_cacheAwareRouteConfig;
                    bool m_cacheAwareRouteConfigHasBeenSet;

                    /**
                     * <p>token 长度路</p>
                     */
                    AIGWTokenLengthRoute m_tokenLengthRouteConfig;
                    bool m_tokenLengthRouteConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CLOUDNATIVEAPIGATEWAYLLMMODELSERVICEROUTE_H_
