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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_SERVICEPROVIDERCOEFFICIENT_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_SERVICEPROVIDERCOEFFICIENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * BYOK 实例（ServiceProvider）维度积分系数明细
                */
                class ServiceProviderCoefficient : public AbstractModel
                {
                public:
                    ServiceProviderCoefficient();
                    ~ServiceProviderCoefficient() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>该 BYOK 实例（ServiceProvider）维度的积分系数。</p><p>可选字段：仅当该实例单独配置了 ServiceProvider 维度系数时返回，返回值即该实例的生效系数；未返回时表示该实例继承所属 ModelAlias 的 <code>Coefficient</code>。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Coefficient <p>该 BYOK 实例（ServiceProvider）维度的积分系数。</p><p>可选字段：仅当该实例单独配置了 ServiceProvider 维度系数时返回，返回值即该实例的生效系数；未返回时表示该实例继承所属 ModelAlias 的 <code>Coefficient</code>。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Coefficient GetCoefficient() const;

                    /**
                     * 设置<p>该 BYOK 实例（ServiceProvider）维度的积分系数。</p><p>可选字段：仅当该实例单独配置了 ServiceProvider 维度系数时返回，返回值即该实例的生效系数；未返回时表示该实例继承所属 ModelAlias 的 <code>Coefficient</code>。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coefficient <p>该 BYOK 实例（ServiceProvider）维度的积分系数。</p><p>可选字段：仅当该实例单独配置了 ServiceProvider 维度系数时返回，返回值即该实例的生效系数；未返回时表示该实例继承所属 ModelAlias 的 <code>Coefficient</code>。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>BYOK 实例（ServiceProvider）ID。</p>
                     * @return ServiceProviderId <p>BYOK 实例（ServiceProvider）ID。</p>
                     * 
                     */
                    std::string GetServiceProviderId() const;

                    /**
                     * 设置<p>BYOK 实例（ServiceProvider）ID。</p>
                     * @param _serviceProviderId <p>BYOK 实例（ServiceProvider）ID。</p>
                     * 
                     */
                    void SetServiceProviderId(const std::string& _serviceProviderId);

                    /**
                     * 判断参数 ServiceProviderId 是否已赋值
                     * @return ServiceProviderId 是否已赋值
                     * 
                     */
                    bool ServiceProviderIdHasBeenSet() const;

                    /**
                     * 获取<p>BYOK 实例（ServiceProvider）名称。</p>
                     * @return ServiceProviderName <p>BYOK 实例（ServiceProvider）名称。</p>
                     * 
                     */
                    std::string GetServiceProviderName() const;

                    /**
                     * 设置<p>BYOK 实例（ServiceProvider）名称。</p>
                     * @param _serviceProviderName <p>BYOK 实例（ServiceProvider）名称。</p>
                     * 
                     */
                    void SetServiceProviderName(const std::string& _serviceProviderName);

                    /**
                     * 判断参数 ServiceProviderName 是否已赋值
                     * @return ServiceProviderName 是否已赋值
                     * 
                     */
                    bool ServiceProviderNameHasBeenSet() const;

                private:

                    /**
                     * <p>该 BYOK 实例（ServiceProvider）维度的积分系数。</p><p>可选字段：仅当该实例单独配置了 ServiceProvider 维度系数时返回，返回值即该实例的生效系数；未返回时表示该实例继承所属 ModelAlias 的 <code>Coefficient</code>。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Coefficient m_coefficient;
                    bool m_coefficientHasBeenSet;

                    /**
                     * <p>BYOK 实例（ServiceProvider）ID。</p>
                     */
                    std::string m_serviceProviderId;
                    bool m_serviceProviderIdHasBeenSet;

                    /**
                     * <p>BYOK 实例（ServiceProvider）名称。</p>
                     */
                    std::string m_serviceProviderName;
                    bool m_serviceProviderNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_SERVICEPROVIDERCOEFFICIENT_H_
