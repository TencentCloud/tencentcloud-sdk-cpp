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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_LOADBALANCERBILLINGCONFIG_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_LOADBALANCERBILLINGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 应用型负载均衡实例计费配置。
                */
                class LoadBalancerBillingConfig : public AbstractModel
                {
                public:
                    LoadBalancerBillingConfig();
                    ~LoadBalancerBillingConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例的计费类型。

取值**POSTPAID_BY_HOUR**：表示按量计费。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeType 实例的计费类型。

取值**POSTPAID_BY_HOUR**：表示按量计费。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置实例的计费类型。

取值**POSTPAID_BY_HOUR**：表示按量计费。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chargeType 实例的计费类型。

取值**POSTPAID_BY_HOUR**：表示按量计费。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取共享带宽包 ID。
                     * @return BandwidthPackageId 共享带宽包 ID。
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置共享带宽包 ID。
                     * @param _bandwidthPackageId 共享带宽包 ID。
                     * 
                     */
                    void SetBandwidthPackageId(const std::string& _bandwidthPackageId);

                    /**
                     * 判断参数 BandwidthPackageId 是否已赋值
                     * @return BandwidthPackageId 是否已赋值
                     * 
                     */
                    bool BandwidthPackageIdHasBeenSet() const;

                private:

                    /**
                     * 实例的计费类型。

取值**POSTPAID_BY_HOUR**：表示按量计费。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 共享带宽包 ID。
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_LOADBALANCERBILLINGCONFIG_H_
