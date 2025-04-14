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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPINFO_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gwlb/v20240906/model/AssociationItem.h>
#include <tencentcloud/gwlb/v20240906/model/TargetGroupHealthCheck.h>
#include <tencentcloud/gwlb/v20240906/model/TagInfo.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
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
                     * 获取目标组的默认端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 目标组的默认端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置目标组的默认端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port 目标组的默认端口
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
                     * 获取网关负载均衡目标组协议。
- tencent_geneve ：GENEVE 标准协议
- aws_geneve：GENEVE 兼容协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol 网关负载均衡目标组协议。
- tencent_geneve ：GENEVE 标准协议
- aws_geneve：GENEVE 兼容协议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置网关负载均衡目标组协议。
- tencent_geneve ：GENEVE 标准协议
- aws_geneve：GENEVE 兼容协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocol 网关负载均衡目标组协议。
- tencent_geneve ：GENEVE 标准协议
- aws_geneve：GENEVE 兼容协议
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
                     * 获取均衡算法。
- ip_hash_3_elastic：弹性哈希
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleAlgorithm 均衡算法。
- ip_hash_3_elastic：弹性哈希
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleAlgorithm() const;

                    /**
                     * 设置均衡算法。
- ip_hash_3_elastic：弹性哈希
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleAlgorithm 均衡算法。
- ip_hash_3_elastic：弹性哈希
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheduleAlgorithm(const std::string& _scheduleAlgorithm);

                    /**
                     * 判断参数 ScheduleAlgorithm 是否已赋值
                     * @return ScheduleAlgorithm 是否已赋值
                     * 
                     */
                    bool ScheduleAlgorithmHasBeenSet() const;

                    /**
                     * 获取健康检查详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheck 健康检查详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TargetGroupHealthCheck GetHealthCheck() const;

                    /**
                     * 设置健康检查详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthCheck 健康检查详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHealthCheck(const TargetGroupHealthCheck& _healthCheck);

                    /**
                     * 判断参数 HealthCheck 是否已赋值
                     * @return HealthCheck 是否已赋值
                     * 
                     */
                    bool HealthCheckHasBeenSet() const;

                    /**
                     * 获取是否支持全死全活。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllDeadToAlive 是否支持全死全活。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAllDeadToAlive() const;

                    /**
                     * 设置是否支持全死全活。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allDeadToAlive 是否支持全死全活。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllDeadToAlive(const bool& _allDeadToAlive);

                    /**
                     * 判断参数 AllDeadToAlive 是否已赋值
                     * @return AllDeadToAlive 是否已赋值
                     * 
                     */
                    bool AllDeadToAliveHasBeenSet() const;

                    /**
                     * 获取目标组已关联的规则数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssociatedRuleCount 目标组已关联的规则数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAssociatedRuleCount() const;

                    /**
                     * 设置目标组已关联的规则数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _associatedRuleCount 目标组已关联的规则数。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegisteredInstancesCount 目标组内的实例数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRegisteredInstancesCount() const;

                    /**
                     * 设置目标组内的实例数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _registeredInstancesCount 目标组内的实例数量。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取目标组的标签。
                     * @return Tag 目标组的标签。
                     * 
                     */
                    std::vector<TagInfo> GetTag() const;

                    /**
                     * 设置目标组的标签。
                     * @param _tag 目标组的标签。
                     * 
                     */
                    void SetTag(const std::vector<TagInfo>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

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
                     * 目标组的默认端口
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
                     * 网关负载均衡目标组协议。
- tencent_geneve ：GENEVE 标准协议
- aws_geneve：GENEVE 兼容协议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 均衡算法。
- ip_hash_3_elastic：弹性哈希
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleAlgorithm;
                    bool m_scheduleAlgorithmHasBeenSet;

                    /**
                     * 健康检查详情。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TargetGroupHealthCheck m_healthCheck;
                    bool m_healthCheckHasBeenSet;

                    /**
                     * 是否支持全死全活。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_allDeadToAlive;
                    bool m_allDeadToAliveHasBeenSet;

                    /**
                     * 目标组已关联的规则数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_associatedRuleCount;
                    bool m_associatedRuleCountHasBeenSet;

                    /**
                     * 目标组内的实例数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_registeredInstancesCount;
                    bool m_registeredInstancesCountHasBeenSet;

                    /**
                     * 目标组的标签。
                     */
                    std::vector<TagInfo> m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_TARGETGROUPINFO_H_
