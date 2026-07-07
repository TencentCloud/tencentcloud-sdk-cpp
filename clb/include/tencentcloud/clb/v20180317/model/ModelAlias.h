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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODELALIAS_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODELALIAS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Coefficient.h>
#include <tencentcloud/clb/v20180317/model/ServiceProviderCoefficient.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 模型别名对象
                */
                class ModelAlias : public AbstractModel
                {
                public:
                    ModelAlias();
                    ~ModelAlias() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型积分系数配置，包含 <code>InputCoefficient</code>、<code>InputCachedCoefficient</code> 和 <code>OutputCoefficient</code>。</p><p>未配置时输入系数默认为 25，缓存命中输入系数默认为 3，输出系数默认为 100。</p>
                     * @return Coefficient <p>模型积分系数配置，包含 <code>InputCoefficient</code>、<code>InputCachedCoefficient</code> 和 <code>OutputCoefficient</code>。</p><p>未配置时输入系数默认为 25，缓存命中输入系数默认为 3，输出系数默认为 100。</p>
                     * 
                     */
                    Coefficient GetCoefficient() const;

                    /**
                     * 设置<p>模型积分系数配置，包含 <code>InputCoefficient</code>、<code>InputCachedCoefficient</code> 和 <code>OutputCoefficient</code>。</p><p>未配置时输入系数默认为 25，缓存命中输入系数默认为 3，输出系数默认为 100。</p>
                     * @param _coefficient <p>模型积分系数配置，包含 <code>InputCoefficient</code>、<code>InputCachedCoefficient</code> 和 <code>OutputCoefficient</code>。</p><p>未配置时输入系数默认为 25，缓存命中输入系数默认为 3，输出系数默认为 100。</p>
                     * 
                     */
                    void SetCoefficient(const Coefficient& _coefficient);

                    /**
                     * 判断参数 Coefficient 是否已赋值
                     * @return Coefficient 是否已赋值
                     * 
                     */
                    bool CoefficientHasBeenSet() const;

                    /**
                     * 获取<p>模型别名名称。</p><p>若用户配置了模型别名，则为该别名；未配置时为原始模型名称。</p>
                     * @return ModelAliasName <p>模型别名名称。</p><p>若用户配置了模型别名，则为该别名；未配置时为原始模型名称。</p>
                     * 
                     */
                    std::string GetModelAliasName() const;

                    /**
                     * 设置<p>模型别名名称。</p><p>若用户配置了模型别名，则为该别名；未配置时为原始模型名称。</p>
                     * @param _modelAliasName <p>模型别名名称。</p><p>若用户配置了模型别名，则为该别名；未配置时为原始模型名称。</p>
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
                     * 获取<p>该模型别名下各 BYOK 实例（ServiceProvider）的积分系数明细，体现 ModelAlias 与 ServiceProvider 的层级关系。</p><p>默认返回该别名引用的全部实例；某实例返回 <code>Coefficient</code> 表示其单独配置了 ServiceProvider 维度系数，否则继承顶层 ModelAlias 的 <code>Coefficient</code>。</p><p>该别名当前无有效 BYOK 引用时返回空数组。</p>
                     * @return ServiceProviderCoefficientSet <p>该模型别名下各 BYOK 实例（ServiceProvider）的积分系数明细，体现 ModelAlias 与 ServiceProvider 的层级关系。</p><p>默认返回该别名引用的全部实例；某实例返回 <code>Coefficient</code> 表示其单独配置了 ServiceProvider 维度系数，否则继承顶层 ModelAlias 的 <code>Coefficient</code>。</p><p>该别名当前无有效 BYOK 引用时返回空数组。</p>
                     * 
                     */
                    std::vector<ServiceProviderCoefficient> GetServiceProviderCoefficientSet() const;

                    /**
                     * 设置<p>该模型别名下各 BYOK 实例（ServiceProvider）的积分系数明细，体现 ModelAlias 与 ServiceProvider 的层级关系。</p><p>默认返回该别名引用的全部实例；某实例返回 <code>Coefficient</code> 表示其单独配置了 ServiceProvider 维度系数，否则继承顶层 ModelAlias 的 <code>Coefficient</code>。</p><p>该别名当前无有效 BYOK 引用时返回空数组。</p>
                     * @param _serviceProviderCoefficientSet <p>该模型别名下各 BYOK 实例（ServiceProvider）的积分系数明细，体现 ModelAlias 与 ServiceProvider 的层级关系。</p><p>默认返回该别名引用的全部实例；某实例返回 <code>Coefficient</code> 表示其单独配置了 ServiceProvider 维度系数，否则继承顶层 ModelAlias 的 <code>Coefficient</code>。</p><p>该别名当前无有效 BYOK 引用时返回空数组。</p>
                     * 
                     */
                    void SetServiceProviderCoefficientSet(const std::vector<ServiceProviderCoefficient>& _serviceProviderCoefficientSet);

                    /**
                     * 判断参数 ServiceProviderCoefficientSet 是否已赋值
                     * @return ServiceProviderCoefficientSet 是否已赋值
                     * 
                     */
                    bool ServiceProviderCoefficientSetHasBeenSet() const;

                    /**
                     * 获取<p>模型来源。</p><p>枚举值：</p><ul><li>BYOK：用户 BYOK 配置的模型。</li></ul>
                     * @return Source <p>模型来源。</p><p>枚举值：</p><ul><li>BYOK：用户 BYOK 配置的模型。</li></ul>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>模型来源。</p><p>枚举值：</p><ul><li>BYOK：用户 BYOK 配置的模型。</li></ul>
                     * @param _source <p>模型来源。</p><p>枚举值：</p><ul><li>BYOK：用户 BYOK 配置的模型。</li></ul>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>状态</p><p>枚举值：</p><ul><li>Active： 正常可用</li><li>Configuring： 变配中</li><li>ConfigureFailed： 变配失败</li></ul>
                     * @return Status <p>状态</p><p>枚举值：</p><ul><li>Active： 正常可用</li><li>Configuring： 变配中</li><li>ConfigureFailed： 变配失败</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态</p><p>枚举值：</p><ul><li>Active： 正常可用</li><li>Configuring： 变配中</li><li>ConfigureFailed： 变配失败</li></ul>
                     * @param _status <p>状态</p><p>枚举值：</p><ul><li>Active： 正常可用</li><li>Configuring： 变配中</li><li>ConfigureFailed： 变配失败</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>模型积分系数配置，包含 <code>InputCoefficient</code>、<code>InputCachedCoefficient</code> 和 <code>OutputCoefficient</code>。</p><p>未配置时输入系数默认为 25，缓存命中输入系数默认为 3，输出系数默认为 100。</p>
                     */
                    Coefficient m_coefficient;
                    bool m_coefficientHasBeenSet;

                    /**
                     * <p>模型别名名称。</p><p>若用户配置了模型别名，则为该别名；未配置时为原始模型名称。</p>
                     */
                    std::string m_modelAliasName;
                    bool m_modelAliasNameHasBeenSet;

                    /**
                     * <p>该模型别名下各 BYOK 实例（ServiceProvider）的积分系数明细，体现 ModelAlias 与 ServiceProvider 的层级关系。</p><p>默认返回该别名引用的全部实例；某实例返回 <code>Coefficient</code> 表示其单独配置了 ServiceProvider 维度系数，否则继承顶层 ModelAlias 的 <code>Coefficient</code>。</p><p>该别名当前无有效 BYOK 引用时返回空数组。</p>
                     */
                    std::vector<ServiceProviderCoefficient> m_serviceProviderCoefficientSet;
                    bool m_serviceProviderCoefficientSetHasBeenSet;

                    /**
                     * <p>模型来源。</p><p>枚举值：</p><ul><li>BYOK：用户 BYOK 配置的模型。</li></ul>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>状态</p><p>枚举值：</p><ul><li>Active： 正常可用</li><li>Configuring： 变配中</li><li>ConfigureFailed： 变配失败</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODELALIAS_H_
