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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_LOADBALANCER_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_LOADBALANCER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Position.h>
#include <tencentcloud/ecm/v20190719/model/TagInfo.h>
#include <tencentcloud/ecm/v20190719/model/LoadBalancerInternetAccessible.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 负载均衡实例信息
                */
                class LoadBalancer : public AbstractModel
                {
                public:
                    LoadBalancer();
                    ~LoadBalancer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取区域。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 区域。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置区域。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Region 区域。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取位置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Position 位置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Position GetPosition() const;

                    /**
                     * 设置位置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Position 位置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPosition(const Position& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取负载均衡实例 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadBalancerId 负载均衡实例 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LoadBalancerId 负载均衡实例 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadBalancerName 负载均衡实例的名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置负载均衡实例的名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LoadBalancerName 负载均衡实例的名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的网络类型：OPEN：公网属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadBalancerType 负载均衡实例的网络类型：OPEN：公网属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置负载均衡实例的网络类型：OPEN：公网属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LoadBalancerType 负载均衡实例的网络类型：OPEN：公网属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的 VIP 列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadBalancerVips 负载均衡实例的 VIP 列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetLoadBalancerVips() const;

                    /**
                     * 设置负载均衡实例的 VIP 列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LoadBalancerVips 负载均衡实例的 VIP 列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLoadBalancerVips(const std::vector<std::string>& _loadBalancerVips);

                    /**
                     * 判断参数 LoadBalancerVips 是否已赋值
                     * @return LoadBalancerVips 是否已赋值
                     */
                    bool LoadBalancerVipsHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的状态，包括
 0：创建中，1：正常运行。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 负载均衡实例的状态，包括
 0：创建中，1：正常运行。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置负载均衡实例的状态，包括
 0：创建中，1：正常运行。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 负载均衡实例的状态，包括
 0：创建中，1：正常运行。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 负载均衡实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置负载均衡实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 负载均衡实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的上次状态转换时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusTime 负载均衡实例的上次状态转换时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatusTime() const;

                    /**
                     * 设置负载均衡实例的上次状态转换时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StatusTime 负载均衡实例的上次状态转换时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatusTime(const std::string& _statusTime);

                    /**
                     * 判断参数 StatusTime 是否已赋值
                     * @return StatusTime 是否已赋值
                     */
                    bool StatusTimeHasBeenSet() const;

                    /**
                     * 获取私有网络的 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 私有网络的 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络的 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VpcId 私有网络的 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 负载均衡实例的标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置负载均衡实例的标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 负载均衡实例的标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取负载均衡IP地址所属的ISP。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VipIsp 负载均衡IP地址所属的ISP。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVipIsp() const;

                    /**
                     * 设置负载均衡IP地址所属的ISP。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VipIsp 负载均衡IP地址所属的ISP。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVipIsp(const std::string& _vipIsp);

                    /**
                     * 判断参数 VipIsp 是否已赋值
                     * @return VipIsp 是否已赋值
                     */
                    bool VipIspHasBeenSet() const;

                    /**
                     * 获取负载均衡实例的网络属性。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkAttributes 负载均衡实例的网络属性。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LoadBalancerInternetAccessible GetNetworkAttributes() const;

                    /**
                     * 设置负载均衡实例的网络属性。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NetworkAttributes 负载均衡实例的网络属性。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNetworkAttributes(const LoadBalancerInternetAccessible& _networkAttributes);

                    /**
                     * 判断参数 NetworkAttributes 是否已赋值
                     * @return NetworkAttributes 是否已赋值
                     */
                    bool NetworkAttributesHasBeenSet() const;

                private:

                    /**
                     * 区域。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 位置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Position m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 负载均衡实例 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 负载均衡实例的名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 负载均衡实例的网络类型：OPEN：公网属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * 负载均衡实例的 VIP 列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_loadBalancerVips;
                    bool m_loadBalancerVipsHasBeenSet;

                    /**
                     * 负载均衡实例的状态，包括
 0：创建中，1：正常运行。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 负载均衡实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 负载均衡实例的上次状态转换时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusTime;
                    bool m_statusTimeHasBeenSet;

                    /**
                     * 私有网络的 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 负载均衡实例的标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 负载均衡IP地址所属的ISP。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vipIsp;
                    bool m_vipIspHasBeenSet;

                    /**
                     * 负载均衡实例的网络属性。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LoadBalancerInternetAccessible m_networkAttributes;
                    bool m_networkAttributesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_LOADBALANCER_H_
