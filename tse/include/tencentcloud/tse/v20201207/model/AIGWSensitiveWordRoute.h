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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AIGWSENSITIVEWORDROUTE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AIGWSENSITIVEWORDROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
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
                     * 获取<p>命中敏感词后的候选模型服务 ID 列表。Enabled=true 时必填，成员不得为空或重复；数量受网关模型服务绑定配额限制。</p>
                     * @return ModelServiceRefs <p>命中敏感词后的候选模型服务 ID 列表。Enabled=true 时必填，成员不得为空或重复；数量受网关模型服务绑定配额限制。</p>
                     * 
                     */
                    std::vector<std::string> GetModelServiceRefs() const;

                    /**
                     * 设置<p>命中敏感词后的候选模型服务 ID 列表。Enabled=true 时必填，成员不得为空或重复；数量受网关模型服务绑定配额限制。</p>
                     * @param _modelServiceRefs <p>命中敏感词后的候选模型服务 ID 列表。Enabled=true 时必填，成员不得为空或重复；数量受网关模型服务绑定配额限制。</p>
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
                     * 获取<p>与 ModelServiceRefs 一一对应的模型服务名称列表，仅由查询接口返回；不作为请求路由配置。</p>
                     * @return ModelServiceNames <p>与 ModelServiceRefs 一一对应的模型服务名称列表，仅由查询接口返回；不作为请求路由配置。</p>
                     * 
                     */
                    std::vector<std::string> GetModelServiceNames() const;

                    /**
                     * 设置<p>与 ModelServiceRefs 一一对应的模型服务名称列表，仅由查询接口返回；不作为请求路由配置。</p>
                     * @param _modelServiceNames <p>与 ModelServiceRefs 一一对应的模型服务名称列表，仅由查询接口返回；不作为请求路由配置。</p>
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
                     * 获取<p>路由方法</p><p>枚举值：</p><ul><li>Weighted： 权重路由</li><li>ModelName： 按模型名称路由</li></ul>
                     * @return SelectedTypes <p>路由方法</p><p>枚举值：</p><ul><li>Weighted： 权重路由</li><li>ModelName： 按模型名称路由</li></ul>
                     * 
                     */
                    std::vector<std::string> GetSelectedTypes() const;

                    /**
                     * 设置<p>路由方法</p><p>枚举值：</p><ul><li>Weighted： 权重路由</li><li>ModelName： 按模型名称路由</li></ul>
                     * @param _selectedTypes <p>路由方法</p><p>枚举值：</p><ul><li>Weighted： 权重路由</li><li>ModelName： 按模型名称路由</li></ul>
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
                     * 获取<p>按请求模型名称匹配目标模型服务的路由配置，在 SelectedTypes=[ModelName] 时使用。</p>
                     * @return ModelNameConfig <p>按请求模型名称匹配目标模型服务的路由配置，在 SelectedTypes=[ModelName] 时使用。</p>
                     * 
                     */
                    std::vector<CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy> GetModelNameConfig() const;

                    /**
                     * 设置<p>按请求模型名称匹配目标模型服务的路由配置，在 SelectedTypes=[ModelName] 时使用。</p>
                     * @param _modelNameConfig <p>按请求模型名称匹配目标模型服务的路由配置，在 SelectedTypes=[ModelName] 时使用。</p>
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
                     * 获取<p>敏感词路由单模型直选时的标准模型名称。仅在 Enabled=true、SelectedTypes 为空且 ModelServiceRefs 只有一个模型服务时可设置；使用 Weighted 或 ModelName 策略时应在相应配置条目中填写。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     * @return StandardModelName <p>敏感词路由单模型直选时的标准模型名称。仅在 Enabled=true、SelectedTypes 为空且 ModelServiceRefs 只有一个模型服务时可设置；使用 Weighted 或 ModelName 策略时应在相应配置条目中填写。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     * 
                     */
                    std::string GetStandardModelName() const;

                    /**
                     * 设置<p>敏感词路由单模型直选时的标准模型名称。仅在 Enabled=true、SelectedTypes 为空且 ModelServiceRefs 只有一个模型服务时可设置；使用 Weighted 或 ModelName 策略时应在相应配置条目中填写。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     * @param _standardModelName <p>敏感词路由单模型直选时的标准模型名称。仅在 Enabled=true、SelectedTypes 为空且 ModelServiceRefs 只有一个模型服务时可设置；使用 Weighted 或 ModelName 策略时应在相应配置条目中填写。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     * 
                     */
                    void SetStandardModelName(const std::string& _standardModelName);

                    /**
                     * 判断参数 StandardModelName 是否已赋值
                     * @return StandardModelName 是否已赋值
                     * 
                     */
                    bool StandardModelNameHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>命中敏感词后的候选模型服务 ID 列表。Enabled=true 时必填，成员不得为空或重复；数量受网关模型服务绑定配额限制。</p>
                     */
                    std::vector<std::string> m_modelServiceRefs;
                    bool m_modelServiceRefsHasBeenSet;

                    /**
                     * <p>与 ModelServiceRefs 一一对应的模型服务名称列表，仅由查询接口返回；不作为请求路由配置。</p>
                     */
                    std::vector<std::string> m_modelServiceNames;
                    bool m_modelServiceNamesHasBeenSet;

                    /**
                     * <p>路由方法</p><p>枚举值：</p><ul><li>Weighted： 权重路由</li><li>ModelName： 按模型名称路由</li></ul>
                     */
                    std::vector<std::string> m_selectedTypes;
                    bool m_selectedTypesHasBeenSet;

                    /**
                     * <p>权重路由配置</p>
                     */
                    std::vector<CloudNativeAPIGatewayLLMModelServiceRouteWeightedStrategy> m_weightedConfig;
                    bool m_weightedConfigHasBeenSet;

                    /**
                     * <p>按请求模型名称匹配目标模型服务的路由配置，在 SelectedTypes=[ModelName] 时使用。</p>
                     */
                    std::vector<CloudNativeAPIGatewayLLMModelServiceRouteModelNameStrategy> m_modelNameConfig;
                    bool m_modelNameConfigHasBeenSet;

                    /**
                     * <p>敏感词路由单模型直选时的标准模型名称。仅在 Enabled=true、SelectedTypes 为空且 ModelServiceRefs 只有一个模型服务时可设置；使用 Weighted 或 ModelName 策略时应在相应配置条目中填写。仅对应 TIONE 模型服务时可配置。非空值最长 256 字节，支持中文、英文、数字、下划线和短横线，须以中文、英文或数字开头。同一网关内不同模型 API 不得使用相同的标准模型名称；同一模型 API 内同一模型服务在多处配置时须保持一致。</p>
                     */
                    std::string m_standardModelName;
                    bool m_standardModelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AIGWSENSITIVEWORDROUTE_H_
