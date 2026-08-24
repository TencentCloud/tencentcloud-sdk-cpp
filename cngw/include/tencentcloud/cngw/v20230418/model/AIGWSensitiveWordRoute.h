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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWSENSITIVEWORDROUTE_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWSENSITIVEWORDROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy.h>
#include <tencentcloud/cngw/v20230418/model/CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * AI GW Sensitive Word Route
                */
                class AIGWSensitiveWordRoute : public AbstractModel
                {
                public:
                    AIGWSensitiveWordRoute();
                    ~AIGWSensitiveWordRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否开启</p>
                     * @return Enabled <p>是否开启</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否开启</p>
                     * @param _enabled <p>是否开启</p>
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
                     * 获取<p>模型API ID列表</p>
                     * @return ModelServiceRefs <p>模型API ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetModelServiceRefs() const;

                    /**
                     * 设置<p>模型API ID列表</p>
                     * @param _modelServiceRefs <p>模型API ID列表</p>
                     * 
                     */
                    void SetModelServiceRefs(const std::vector<std::string>& _modelServiceRefs);

                    /**
                     * 判断参数 ModelServiceRefs 是否已赋值
                     * @return ModelServiceRefs 是否已赋值
                     * 
                     */
                    bool ModelServiceRefsHasBeenSet() const;

                    /**
                     * 获取<p>查询接口会返回模型API的Name列表</p>
                     * @return ModelServiceNames <p>查询接口会返回模型API的Name列表</p>
                     * 
                     */
                    std::vector<std::string> GetModelServiceNames() const;

                    /**
                     * 设置<p>查询接口会返回模型API的Name列表</p>
                     * @param _modelServiceNames <p>查询接口会返回模型API的Name列表</p>
                     * 
                     */
                    void SetModelServiceNames(const std::vector<std::string>& _modelServiceNames);

                    /**
                     * 判断参数 ModelServiceNames 是否已赋值
                     * @return ModelServiceNames 是否已赋值
                     * 
                     */
                    bool ModelServiceNamesHasBeenSet() const;

                    /**
                     * 获取<p>路由方式</p><p>枚举值：</p><ul><li>Weighted： 权重路由</li><li>ModelName： 按模型名称路由</li></ul>
                     * @return SelectedTypes <p>路由方式</p><p>枚举值：</p><ul><li>Weighted： 权重路由</li><li>ModelName： 按模型名称路由</li></ul>
                     * 
                     */
                    std::vector<std::string> GetSelectedTypes() const;

                    /**
                     * 设置<p>路由方式</p><p>枚举值：</p><ul><li>Weighted： 权重路由</li><li>ModelName： 按模型名称路由</li></ul>
                     * @param _selectedTypes <p>路由方式</p><p>枚举值：</p><ul><li>Weighted： 权重路由</li><li>ModelName： 按模型名称路由</li></ul>
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
                     * 获取<p>权重路由配置</p>
                     * @return WeightedConfig <p>权重路由配置</p>
                     * 
                     */
                    std::vector<CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy> GetWeightedConfig() const;

                    /**
                     * 设置<p>权重路由配置</p>
                     * @param _weightedConfig <p>权重路由配置</p>
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
                     * 获取<p>路由名称路由配置</p>
                     * @return ModelNameConfig <p>路由名称路由配置</p>
                     * 
                     */
                    std::vector<CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy> GetModelNameConfig() const;

                    /**
                     * 设置<p>路由名称路由配置</p>
                     * @param _modelNameConfig <p>路由名称路由配置</p>
                     * 
                     */
                    void SetModelNameConfig(const std::vector<CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy>& _modelNameConfig);

                    /**
                     * 判断参数 ModelNameConfig 是否已赋值
                     * @return ModelNameConfig 是否已赋值
                     * 
                     */
                    bool ModelNameConfigHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>模型API ID列表</p>
                     */
                    std::vector<std::string> m_modelServiceRefs;
                    bool m_modelServiceRefsHasBeenSet;

                    /**
                     * <p>查询接口会返回模型API的Name列表</p>
                     */
                    std::vector<std::string> m_modelServiceNames;
                    bool m_modelServiceNamesHasBeenSet;

                    /**
                     * <p>路由方式</p><p>枚举值：</p><ul><li>Weighted： 权重路由</li><li>ModelName： 按模型名称路由</li></ul>
                     */
                    std::vector<std::string> m_selectedTypes;
                    bool m_selectedTypesHasBeenSet;

                    /**
                     * <p>权重路由配置</p>
                     */
                    std::vector<CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy> m_weightedConfig;
                    bool m_weightedConfigHasBeenSet;

                    /**
                     * <p>路由名称路由配置</p>
                     */
                    std::vector<CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy> m_modelNameConfig;
                    bool m_modelNameConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWSENSITIVEWORDROUTE_H_
