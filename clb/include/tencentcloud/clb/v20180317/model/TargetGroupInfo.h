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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/AssociationItem.h>
#include <tencentcloud/clb/v20180317/model/TagInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 目标组信息
                */
                class TargetGroupInfo : public AbstractModel
                {
                public:
                    TargetGroupInfo();
                    ~TargetGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标组ID
                     * @return TargetGroupId 目标组ID
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置目标组ID
                     * @param _targetGroupId 目标组ID
                     * 
                     */
                    void SetTargetGroupId(const std::string& _targetGroupId);

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     * 
                     */
                    bool TargetGroupIdHasBeenSet() const;

                    /**
                     * 获取目标组的vpcid
                     * @return VpcId 目标组的vpcid
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置目标组的vpcid
                     * @param _vpcId 目标组的vpcid
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取目标组的名字
                     * @return TargetGroupName 目标组的名字
                     * 
                     */
                    std::string GetTargetGroupName() const;

                    /**
                     * 设置目标组的名字
                     * @param _targetGroupName 目标组的名字
                     * 
                     */
                    void SetTargetGroupName(const std::string& _targetGroupName);

                    /**
                     * 判断参数 TargetGroupName 是否已赋值
                     * @return TargetGroupName 是否已赋值
                     * 
                     */
                    bool TargetGroupNameHasBeenSet() const;

                    /**
                     * 获取目标组的默认端口，全监听目标组此字段返回0，表示无效端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 目标组的默认端口，全监听目标组此字段返回0，表示无效端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置目标组的默认端口，全监听目标组此字段返回0，表示无效端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port 目标组的默认端口，全监听目标组此字段返回0，表示无效端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取目标组的创建时间
                     * @return CreatedTime 目标组的创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置目标组的创建时间
                     * @param _createdTime 目标组的创建时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取目标组的修改时间
                     * @return UpdatedTime 目标组的修改时间
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置目标组的修改时间
                     * @param _updatedTime 目标组的修改时间
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取关联到的规则数组。在DescribeTargetGroupList接口调用时无法获取到该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssociatedRule 关联到的规则数组。在DescribeTargetGroupList接口调用时无法获取到该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AssociationItem> GetAssociatedRule() const;

                    /**
                     * 设置关联到的规则数组。在DescribeTargetGroupList接口调用时无法获取到该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _associatedRule 关联到的规则数组。在DescribeTargetGroupList接口调用时无法获取到该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssociatedRule(const std::vector<AssociationItem>& _associatedRule);

                    /**
                     * 判断参数 AssociatedRule 是否已赋值
                     * @return AssociatedRule 是否已赋值
                     * 
                     */
                    bool AssociatedRuleHasBeenSet() const;

                    /**
                     * 获取后端转发协议类型，支持类型TCP， UDP。仅V2新版目标组支持返回该参数。

注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol 后端转发协议类型，支持类型TCP， UDP。仅V2新版目标组支持返回该参数。

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置后端转发协议类型，支持类型TCP， UDP。仅V2新版目标组支持返回该参数。

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocol 后端转发协议类型，支持类型TCP， UDP。仅V2新版目标组支持返回该参数。

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取目标组类型，当前支持v1(旧版目标组), v2(新版目标组), gwlb(全局负载均衡目标组)。
                     * @return TargetGroupType 目标组类型，当前支持v1(旧版目标组), v2(新版目标组), gwlb(全局负载均衡目标组)。
                     * 
                     */
                    std::string GetTargetGroupType() const;

                    /**
                     * 设置目标组类型，当前支持v1(旧版目标组), v2(新版目标组), gwlb(全局负载均衡目标组)。
                     * @param _targetGroupType 目标组类型，当前支持v1(旧版目标组), v2(新版目标组), gwlb(全局负载均衡目标组)。
                     * 
                     */
                    void SetTargetGroupType(const std::string& _targetGroupType);

                    /**
                     * 判断参数 TargetGroupType 是否已赋值
                     * @return TargetGroupType 是否已赋值
                     * 
                     */
                    bool TargetGroupTypeHasBeenSet() const;

                    /**
                     * 获取目标组已关联的规则数。
                     * @return AssociatedRuleCount 目标组已关联的规则数。
                     * 
                     */
                    int64_t GetAssociatedRuleCount() const;

                    /**
                     * 设置目标组已关联的规则数。
                     * @param _associatedRuleCount 目标组已关联的规则数。
                     * 
                     */
                    void SetAssociatedRuleCount(const int64_t& _associatedRuleCount);

                    /**
                     * 判断参数 AssociatedRuleCount 是否已赋值
                     * @return AssociatedRuleCount 是否已赋值
                     * 
                     */
                    bool AssociatedRuleCountHasBeenSet() const;

                    /**
                     * 获取目标组内的实例数量。
                     * @return RegisteredInstancesCount 目标组内的实例数量。
                     * 
                     */
                    int64_t GetRegisteredInstancesCount() const;

                    /**
                     * 设置目标组内的实例数量。
                     * @param _registeredInstancesCount 目标组内的实例数量。
                     * 
                     */
                    void SetRegisteredInstancesCount(const int64_t& _registeredInstancesCount);

                    /**
                     * 判断参数 RegisteredInstancesCount 是否已赋值
                     * @return RegisteredInstancesCount 是否已赋值
                     * 
                     */
                    bool RegisteredInstancesCountHasBeenSet() const;

                    /**
                     * 获取标签。
                     * @return Tag 标签。
                     * 
                     */
                    std::vector<TagInfo> GetTag() const;

                    /**
                     * 设置标签。
                     * @param _tag 标签。
                     * 
                     */
                    void SetTag(const std::vector<TagInfo>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取默认权重。只有v2类型目标组返回该字段。当返回为NULL时， 表示未设置默认权重。
                     * @return Weight 默认权重。只有v2类型目标组返回该字段。当返回为NULL时， 表示未设置默认权重。
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置默认权重。只有v2类型目标组返回该字段。当返回为NULL时， 表示未设置默认权重。
                     * @param _weight 默认权重。只有v2类型目标组返回该字段。当返回为NULL时， 表示未设置默认权重。
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取是否全监听目标组
                     * @return FullListenSwitch 是否全监听目标组
                     * 
                     */
                    bool GetFullListenSwitch() const;

                    /**
                     * 设置是否全监听目标组
                     * @param _fullListenSwitch 是否全监听目标组
                     * 
                     */
                    void SetFullListenSwitch(const bool& _fullListenSwitch);

                    /**
                     * 判断参数 FullListenSwitch 是否已赋值
                     * @return FullListenSwitch 是否已赋值
                     * 
                     */
                    bool FullListenSwitchHasBeenSet() const;

                private:

                    /**
                     * 目标组ID
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * 目标组的vpcid
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 目标组的名字
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                    /**
                     * 目标组的默认端口，全监听目标组此字段返回0，表示无效端口。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 目标组的创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 目标组的修改时间
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * 关联到的规则数组。在DescribeTargetGroupList接口调用时无法获取到该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AssociationItem> m_associatedRule;
                    bool m_associatedRuleHasBeenSet;

                    /**
                     * 后端转发协议类型，支持类型TCP， UDP。仅V2新版目标组支持返回该参数。

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 目标组类型，当前支持v1(旧版目标组), v2(新版目标组), gwlb(全局负载均衡目标组)。
                     */
                    std::string m_targetGroupType;
                    bool m_targetGroupTypeHasBeenSet;

                    /**
                     * 目标组已关联的规则数。
                     */
                    int64_t m_associatedRuleCount;
                    bool m_associatedRuleCountHasBeenSet;

                    /**
                     * 目标组内的实例数量。
                     */
                    int64_t m_registeredInstancesCount;
                    bool m_registeredInstancesCountHasBeenSet;

                    /**
                     * 标签。
                     */
                    std::vector<TagInfo> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 默认权重。只有v2类型目标组返回该字段。当返回为NULL时， 表示未设置默认权重。
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 是否全监听目标组
                     */
                    bool m_fullListenSwitch;
                    bool m_fullListenSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPINFO_H_
