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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYMODELALIASATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYMODELALIASATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Coefficient.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyModelAliasAttributes请求参数结构体
                */
                class ModifyModelAliasAttributesRequest : public AbstractModel
                {
                public:
                    ModifyModelAliasAttributesRequest();
                    ~ModifyModelAliasAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型积分系数配置。</p><p>必填，包含 <code>InputCoefficient</code> 和 <code>OutputCoefficient</code>。</p><p><code>InputCoefficient</code> 为输入积分系数。</p><p><code>OutputCoefficient</code> 为输出积分系数。</p><p>取值范围：[1, 200]，最多支持 1 位小数。</p>
                     * @return Coefficient <p>模型积分系数配置。</p><p>必填，包含 <code>InputCoefficient</code> 和 <code>OutputCoefficient</code>。</p><p><code>InputCoefficient</code> 为输入积分系数。</p><p><code>OutputCoefficient</code> 为输出积分系数。</p><p>取值范围：[1, 200]，最多支持 1 位小数。</p>
                     * 
                     */
                    Coefficient GetCoefficient() const;

                    /**
                     * 设置<p>模型积分系数配置。</p><p>必填，包含 <code>InputCoefficient</code> 和 <code>OutputCoefficient</code>。</p><p><code>InputCoefficient</code> 为输入积分系数。</p><p><code>OutputCoefficient</code> 为输出积分系数。</p><p>取值范围：[1, 200]，最多支持 1 位小数。</p>
                     * @param _coefficient <p>模型积分系数配置。</p><p>必填，包含 <code>InputCoefficient</code> 和 <code>OutputCoefficient</code>。</p><p><code>InputCoefficient</code> 为输入积分系数。</p><p><code>OutputCoefficient</code> 为输出积分系数。</p><p>取值范围：[1, 200]，最多支持 1 位小数。</p>
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
                     * 获取<p>模型别名</p>
                     * @return ModelAliasNames <p>模型别名</p>
                     * 
                     */
                    std::vector<std::string> GetModelAliasNames() const;

                    /**
                     * 设置<p>模型别名</p>
                     * @param _modelAliasNames <p>模型别名</p>
                     * 
                     */
                    void SetModelAliasNames(const std::vector<std::string>& _modelAliasNames);

                    /**
                     * 判断参数 ModelAliasNames 是否已赋值
                     * @return ModelAliasNames 是否已赋值
                     * 
                     */
                    bool ModelAliasNamesHasBeenSet() const;

                    /**
                     * 获取<p>BYOK 实例（ServiceProvider）ID 列表。</p><p>可选，数组。传入时按 ServiceProvider 维度修改：把同一份 Coefficient 批量应用到数组内每一个实例（覆盖配置，仅作用于这些实例），此时 <code>ModelAliasNames</code> 只能传 1 个别名（即 1 别名 × N ServiceProvider）；数组需去重、非空、上限 100，任一实例不归属/不存在/该实例下无该别名将整批返回错误。不传时按 ModelAlias（账号）维度修改，作用于该别名下未单独配置覆盖的全部实例。</p>
                     * @return ServiceProviderIds <p>BYOK 实例（ServiceProvider）ID 列表。</p><p>可选，数组。传入时按 ServiceProvider 维度修改：把同一份 Coefficient 批量应用到数组内每一个实例（覆盖配置，仅作用于这些实例），此时 <code>ModelAliasNames</code> 只能传 1 个别名（即 1 别名 × N ServiceProvider）；数组需去重、非空、上限 100，任一实例不归属/不存在/该实例下无该别名将整批返回错误。不传时按 ModelAlias（账号）维度修改，作用于该别名下未单独配置覆盖的全部实例。</p>
                     * 
                     */
                    std::vector<std::string> GetServiceProviderIds() const;

                    /**
                     * 设置<p>BYOK 实例（ServiceProvider）ID 列表。</p><p>可选，数组。传入时按 ServiceProvider 维度修改：把同一份 Coefficient 批量应用到数组内每一个实例（覆盖配置，仅作用于这些实例），此时 <code>ModelAliasNames</code> 只能传 1 个别名（即 1 别名 × N ServiceProvider）；数组需去重、非空、上限 100，任一实例不归属/不存在/该实例下无该别名将整批返回错误。不传时按 ModelAlias（账号）维度修改，作用于该别名下未单独配置覆盖的全部实例。</p>
                     * @param _serviceProviderIds <p>BYOK 实例（ServiceProvider）ID 列表。</p><p>可选，数组。传入时按 ServiceProvider 维度修改：把同一份 Coefficient 批量应用到数组内每一个实例（覆盖配置，仅作用于这些实例），此时 <code>ModelAliasNames</code> 只能传 1 个别名（即 1 别名 × N ServiceProvider）；数组需去重、非空、上限 100，任一实例不归属/不存在/该实例下无该别名将整批返回错误。不传时按 ModelAlias（账号）维度修改，作用于该别名下未单独配置覆盖的全部实例。</p>
                     * 
                     */
                    void SetServiceProviderIds(const std::vector<std::string>& _serviceProviderIds);

                    /**
                     * 判断参数 ServiceProviderIds 是否已赋值
                     * @return ServiceProviderIds 是否已赋值
                     * 
                     */
                    bool ServiceProviderIdsHasBeenSet() const;

                    /**
                     * 获取<p>模型能力</p>
                     * @return Capability <p>模型能力</p>
                     * 
                     */
                    std::string GetCapability() const;

                    /**
                     * 设置<p>模型能力</p>
                     * @param _capability <p>模型能力</p>
                     * 
                     */
                    void SetCapability(const std::string& _capability);

                    /**
                     * 判断参数 Capability 是否已赋值
                     * @return Capability 是否已赋值
                     * 
                     */
                    bool CapabilityHasBeenSet() const;

                private:

                    /**
                     * <p>模型积分系数配置。</p><p>必填，包含 <code>InputCoefficient</code> 和 <code>OutputCoefficient</code>。</p><p><code>InputCoefficient</code> 为输入积分系数。</p><p><code>OutputCoefficient</code> 为输出积分系数。</p><p>取值范围：[1, 200]，最多支持 1 位小数。</p>
                     */
                    Coefficient m_coefficient;
                    bool m_coefficientHasBeenSet;

                    /**
                     * <p>模型别名</p>
                     */
                    std::vector<std::string> m_modelAliasNames;
                    bool m_modelAliasNamesHasBeenSet;

                    /**
                     * <p>BYOK 实例（ServiceProvider）ID 列表。</p><p>可选，数组。传入时按 ServiceProvider 维度修改：把同一份 Coefficient 批量应用到数组内每一个实例（覆盖配置，仅作用于这些实例），此时 <code>ModelAliasNames</code> 只能传 1 个别名（即 1 别名 × N ServiceProvider）；数组需去重、非空、上限 100，任一实例不归属/不存在/该实例下无该别名将整批返回错误。不传时按 ModelAlias（账号）维度修改，作用于该别名下未单独配置覆盖的全部实例。</p>
                     */
                    std::vector<std::string> m_serviceProviderIds;
                    bool m_serviceProviderIdsHasBeenSet;

                    /**
                     * <p>模型能力</p>
                     */
                    std::string m_capability;
                    bool m_capabilityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYMODELALIASATTRIBUTESREQUEST_H_
