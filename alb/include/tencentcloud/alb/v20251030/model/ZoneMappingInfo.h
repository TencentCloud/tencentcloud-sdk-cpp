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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_ZONEMAPPINGINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_ZONEMAPPINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/LoadBalancerAddress.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 可用区及子网映射结构体
                */
                class ZoneMappingInfo : public AbstractModel
                {
                public:
                    ZoneMappingInfo();
                    ~ZoneMappingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子网 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 子网 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId 子网 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取可用区ID。最多支持添加10个可用区。若当前地域支持2个及以上的可用区，至少需要添加2个可用区。
您可以通过调用[DescribeZones](~~36064~~)接口获取可用区ID对应的可用区的信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneId 可用区ID。最多支持添加10个可用区。若当前地域支持2个及以上的可用区，至少需要添加2个可用区。
您可以通过调用[DescribeZones](~~36064~~)接口获取可用区ID对应的可用区的信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置可用区ID。最多支持添加10个可用区。若当前地域支持2个及以上的可用区，至少需要添加2个可用区。
您可以通过调用[DescribeZones](~~36064~~)接口获取可用区ID对应的可用区的信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneId 可用区ID。最多支持添加10个可用区。若当前地域支持2个及以上的可用区，至少需要添加2个可用区。
您可以通过调用[DescribeZones](~~36064~~)接口获取可用区ID对应的可用区的信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取负载均衡 VIP/EIP 信息
                     * @return LoadBalancerAddress 负载均衡 VIP/EIP 信息
                     * 
                     */
                    LoadBalancerAddress GetLoadBalancerAddress() const;

                    /**
                     * 设置负载均衡 VIP/EIP 信息
                     * @param _loadBalancerAddress 负载均衡 VIP/EIP 信息
                     * 
                     */
                    void SetLoadBalancerAddress(const LoadBalancerAddress& _loadBalancerAddress);

                    /**
                     * 判断参数 LoadBalancerAddress 是否已赋值
                     * @return LoadBalancerAddress 是否已赋值
                     * 
                     */
                    bool LoadBalancerAddressHasBeenSet() const;

                    /**
                     * 获取可用区状态。取值：
- **Active**：运行中。
- **Stopped**：已停止。
- **Shifted**：已移除。
- **Starting**：启动中。
- **Stopping**：停止中。
                     * @return Status 可用区状态。取值：
- **Active**：运行中。
- **Stopped**：已停止。
- **Shifted**：已移除。
- **Starting**：启动中。
- **Stopping**：停止中。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置可用区状态。取值：
- **Active**：运行中。
- **Stopped**：已停止。
- **Shifted**：已移除。
- **Starting**：启动中。
- **Stopping**：停止中。
                     * @param _status 可用区状态。取值：
- **Active**：运行中。
- **Stopped**：已停止。
- **Shifted**：已移除。
- **Starting**：启动中。
- **Stopping**：停止中。
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
                     * 子网 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 可用区ID。最多支持添加10个可用区。若当前地域支持2个及以上的可用区，至少需要添加2个可用区。
您可以通过调用[DescribeZones](~~36064~~)接口获取可用区ID对应的可用区的信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 负载均衡 VIP/EIP 信息
                     */
                    LoadBalancerAddress m_loadBalancerAddress;
                    bool m_loadBalancerAddressHasBeenSet;

                    /**
                     * 可用区状态。取值：
- **Active**：运行中。
- **Stopped**：已停止。
- **Shifted**：已移除。
- **Starting**：启动中。
- **Stopping**：停止中。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_ZONEMAPPINGINFO_H_
