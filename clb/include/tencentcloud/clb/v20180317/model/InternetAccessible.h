/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_INTERNETACCESSIBLE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_INTERNETACCESSIBLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 网络计费模式，最大出带宽
                */
                class InternetAccessible : public AbstractModel
                {
                public:
                    InternetAccessible();
                    ~InternetAccessible() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TRAFFIC_POSTPAID_BY_HOUR 按流量按小时后计费 ; BANDWIDTH_POSTPAID_BY_HOUR 按带宽按小时后计费;
BANDWIDTH_PACKAGE 按带宽包计费;
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InternetChargeType TRAFFIC_POSTPAID_BY_HOUR 按流量按小时后计费 ; BANDWIDTH_POSTPAID_BY_HOUR 按带宽按小时后计费;
BANDWIDTH_PACKAGE 按带宽包计费;
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置TRAFFIC_POSTPAID_BY_HOUR 按流量按小时后计费 ; BANDWIDTH_POSTPAID_BY_HOUR 按带宽按小时后计费;
BANDWIDTH_PACKAGE 按带宽包计费;
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InternetChargeType TRAFFIC_POSTPAID_BY_HOUR 按流量按小时后计费 ; BANDWIDTH_POSTPAID_BY_HOUR 按带宽按小时后计费;
BANDWIDTH_PACKAGE 按带宽包计费;
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInternetChargeType(const std::string& _internetChargeType);

                    /**
                     * 判断参数 InternetChargeType 是否已赋值
                     * @return InternetChargeType 是否已赋值
                     */
                    bool InternetChargeTypeHasBeenSet() const;

                    /**
                     * 获取最大出带宽，单位Mbps，仅对公网属性的共享型、性能容量型和独占型 CLB 实例、以及内网属性的性能容量型 CLB 实例生效。
- 对于公网属性的共享型和独占型 CLB 实例，最大出带宽的范围为1Mbps-2048Mbps。
- 对于公网属性和内网属性的性能容量型 CLB实例
  - 默认为普通规格的性能容量型实例，SLA对应超强型1规格，最大出带宽的范围为1Mbps-10240Mbps。
  - 当您开通了超大型规格的性能容量型时，最大出带宽的范围为1Mbps-61440Mbps。超大型规格的性能容量型正在内测中，请提交 [工单申请](https://console.cloud.tencent.com/workorder/category)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InternetMaxBandwidthOut 最大出带宽，单位Mbps，仅对公网属性的共享型、性能容量型和独占型 CLB 实例、以及内网属性的性能容量型 CLB 实例生效。
- 对于公网属性的共享型和独占型 CLB 实例，最大出带宽的范围为1Mbps-2048Mbps。
- 对于公网属性和内网属性的性能容量型 CLB实例
  - 默认为普通规格的性能容量型实例，SLA对应超强型1规格，最大出带宽的范围为1Mbps-10240Mbps。
  - 当您开通了超大型规格的性能容量型时，最大出带宽的范围为1Mbps-61440Mbps。超大型规格的性能容量型正在内测中，请提交 [工单申请](https://console.cloud.tencent.com/workorder/category)。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置最大出带宽，单位Mbps，仅对公网属性的共享型、性能容量型和独占型 CLB 实例、以及内网属性的性能容量型 CLB 实例生效。
- 对于公网属性的共享型和独占型 CLB 实例，最大出带宽的范围为1Mbps-2048Mbps。
- 对于公网属性和内网属性的性能容量型 CLB实例
  - 默认为普通规格的性能容量型实例，SLA对应超强型1规格，最大出带宽的范围为1Mbps-10240Mbps。
  - 当您开通了超大型规格的性能容量型时，最大出带宽的范围为1Mbps-61440Mbps。超大型规格的性能容量型正在内测中，请提交 [工单申请](https://console.cloud.tencent.com/workorder/category)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InternetMaxBandwidthOut 最大出带宽，单位Mbps，仅对公网属性的共享型、性能容量型和独占型 CLB 实例、以及内网属性的性能容量型 CLB 实例生效。
- 对于公网属性的共享型和独占型 CLB 实例，最大出带宽的范围为1Mbps-2048Mbps。
- 对于公网属性和内网属性的性能容量型 CLB实例
  - 默认为普通规格的性能容量型实例，SLA对应超强型1规格，最大出带宽的范围为1Mbps-10240Mbps。
  - 当您开通了超大型规格的性能容量型时，最大出带宽的范围为1Mbps-61440Mbps。超大型规格的性能容量型正在内测中，请提交 [工单申请](https://console.cloud.tencent.com/workorder/category)。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取带宽包的类型，如SINGLEISP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BandwidthpkgSubType 带宽包的类型，如SINGLEISP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBandwidthpkgSubType() const;

                    /**
                     * 设置带宽包的类型，如SINGLEISP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BandwidthpkgSubType 带宽包的类型，如SINGLEISP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBandwidthpkgSubType(const std::string& _bandwidthpkgSubType);

                    /**
                     * 判断参数 BandwidthpkgSubType 是否已赋值
                     * @return BandwidthpkgSubType 是否已赋值
                     */
                    bool BandwidthpkgSubTypeHasBeenSet() const;

                private:

                    /**
                     * TRAFFIC_POSTPAID_BY_HOUR 按流量按小时后计费 ; BANDWIDTH_POSTPAID_BY_HOUR 按带宽按小时后计费;
BANDWIDTH_PACKAGE 按带宽包计费;
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * 最大出带宽，单位Mbps，仅对公网属性的共享型、性能容量型和独占型 CLB 实例、以及内网属性的性能容量型 CLB 实例生效。
- 对于公网属性的共享型和独占型 CLB 实例，最大出带宽的范围为1Mbps-2048Mbps。
- 对于公网属性和内网属性的性能容量型 CLB实例
  - 默认为普通规格的性能容量型实例，SLA对应超强型1规格，最大出带宽的范围为1Mbps-10240Mbps。
  - 当您开通了超大型规格的性能容量型时，最大出带宽的范围为1Mbps-61440Mbps。超大型规格的性能容量型正在内测中，请提交 [工单申请](https://console.cloud.tencent.com/workorder/category)。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * 带宽包的类型，如SINGLEISP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bandwidthpkgSubType;
                    bool m_bandwidthpkgSubTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_INTERNETACCESSIBLE_H_
