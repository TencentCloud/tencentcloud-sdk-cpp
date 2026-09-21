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
#include <tencentcloud/clb/v20180317/model/CoefficientTier.h>
#include <tencentcloud/clb/v20180317/model/CoefficientScheduleRule.h>


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
                     * 获取<p>基础积分系数配置，选填。不传时保留原配置。各系数字段均为选填，取值范围为 [0, 5000]，最多支持 6 位小数，0 表示零价。传入本参数时，至少填写一项有效系数，不能传空对象。</p>
                     * @return Coefficient <p>基础积分系数配置，选填。不传时保留原配置。各系数字段均为选填，取值范围为 [0, 5000]，最多支持 6 位小数，0 表示零价。传入本参数时，至少填写一项有效系数，不能传空对象。</p>
                     * 
                     */
                    Coefficient GetCoefficient() const;

                    /**
                     * 设置<p>基础积分系数配置，选填。不传时保留原配置。各系数字段均为选填，取值范围为 [0, 5000]，最多支持 6 位小数，0 表示零价。传入本参数时，至少填写一项有效系数，不能传空对象。</p>
                     * @param _coefficient <p>基础积分系数配置，选填。不传时保留原配置。各系数字段均为选填，取值范围为 [0, 5000]，最多支持 6 位小数，0 表示零价。传入本参数时，至少填写一项有效系数，不能传空对象。</p>
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
                     * 获取<p>模型输出模态</p><p>枚举值：</p><ul><li>chat： 文本</li><li>embedding： 向量</li><li>video： 视频</li><li>rerank： 重排序</li></ul>
                     * @return Capability <p>模型输出模态</p><p>枚举值：</p><ul><li>chat： 文本</li><li>embedding： 向量</li><li>video： 视频</li><li>rerank： 重排序</li></ul>
                     * 
                     */
                    std::string GetCapability() const;

                    /**
                     * 设置<p>模型输出模态</p><p>枚举值：</p><ul><li>chat： 文本</li><li>embedding： 向量</li><li>video： 视频</li><li>rerank： 重排序</li></ul>
                     * @param _capability <p>模型输出模态</p><p>枚举值：</p><ul><li>chat： 文本</li><li>embedding： 向量</li><li>video： 视频</li><li>rerank： 重排序</li></ul>
                     * 
                     */
                    void SetCapability(const std::string& _capability);

                    /**
                     * 判断参数 Capability 是否已赋值
                     * @return Capability 是否已赋值
                     * 
                     */
                    bool CapabilityHasBeenSet() const;

                    /**
                     * 获取<p>积分梯度设置</p>
                     * @return CoefficientTiers <p>积分梯度设置</p>
                     * 
                     */
                    std::vector<CoefficientTier> GetCoefficientTiers() const;

                    /**
                     * 设置<p>积分梯度设置</p>
                     * @param _coefficientTiers <p>积分梯度设置</p>
                     * 
                     */
                    void SetCoefficientTiers(const std::vector<CoefficientTier>& _coefficientTiers);

                    /**
                     * 判断参数 CoefficientTiers 是否已赋值
                     * @return CoefficientTiers 是否已赋值
                     * 
                     */
                    bool CoefficientTiersHasBeenSet() const;

                    /**
                     * 获取<p>积分峰谷设置</p>
                     * @return CoefficientSchedule <p>积分峰谷设置</p>
                     * 
                     */
                    std::vector<CoefficientScheduleRule> GetCoefficientSchedule() const;

                    /**
                     * 设置<p>积分峰谷设置</p>
                     * @param _coefficientSchedule <p>积分峰谷设置</p>
                     * 
                     */
                    void SetCoefficientSchedule(const std::vector<CoefficientScheduleRule>& _coefficientSchedule);

                    /**
                     * 判断参数 CoefficientSchedule 是否已赋值
                     * @return CoefficientSchedule 是否已赋值
                     * 
                     */
                    bool CoefficientScheduleHasBeenSet() const;

                private:

                    /**
                     * <p>模型别名</p>
                     */
                    std::vector<std::string> m_modelAliasNames;
                    bool m_modelAliasNamesHasBeenSet;

                    /**
                     * <p>基础积分系数配置，选填。不传时保留原配置。各系数字段均为选填，取值范围为 [0, 5000]，最多支持 6 位小数，0 表示零价。传入本参数时，至少填写一项有效系数，不能传空对象。</p>
                     */
                    Coefficient m_coefficient;
                    bool m_coefficientHasBeenSet;

                    /**
                     * <p>BYOK 实例（ServiceProvider）ID 列表。</p><p>可选，数组。传入时按 ServiceProvider 维度修改：把同一份 Coefficient 批量应用到数组内每一个实例（覆盖配置，仅作用于这些实例），此时 <code>ModelAliasNames</code> 只能传 1 个别名（即 1 别名 × N ServiceProvider）；数组需去重、非空、上限 100，任一实例不归属/不存在/该实例下无该别名将整批返回错误。不传时按 ModelAlias（账号）维度修改，作用于该别名下未单独配置覆盖的全部实例。</p>
                     */
                    std::vector<std::string> m_serviceProviderIds;
                    bool m_serviceProviderIdsHasBeenSet;

                    /**
                     * <p>模型输出模态</p><p>枚举值：</p><ul><li>chat： 文本</li><li>embedding： 向量</li><li>video： 视频</li><li>rerank： 重排序</li></ul>
                     */
                    std::string m_capability;
                    bool m_capabilityHasBeenSet;

                    /**
                     * <p>积分梯度设置</p>
                     */
                    std::vector<CoefficientTier> m_coefficientTiers;
                    bool m_coefficientTiersHasBeenSet;

                    /**
                     * <p>积分峰谷设置</p>
                     */
                    std::vector<CoefficientScheduleRule> m_coefficientSchedule;
                    bool m_coefficientScheduleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYMODELALIASATTRIBUTESREQUEST_H_
