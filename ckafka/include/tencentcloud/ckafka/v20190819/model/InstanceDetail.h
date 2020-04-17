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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEDETAIL_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/VipEntity.h>
#include <tencentcloud/ckafka/v20190819/model/Tag.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 实例详情
                */
                class InstanceDetail : public AbstractModel
                {
                public:
                    InstanceDetail();
                    ~InstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param InstanceId 实例id
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param InstanceName 实例名称
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取访问实例的vip 信息
                     * @return Vip 访问实例的vip 信息
                     */
                    std::string GetVip() const;

                    /**
                     * 设置访问实例的vip 信息
                     * @param Vip 访问实例的vip 信息
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取访问实例的端口信息
                     * @return Vport 访问实例的端口信息
                     */
                    std::string GetVport() const;

                    /**
                     * 设置访问实例的端口信息
                     * @param Vport 访问实例的端口信息
                     */
                    void SetVport(const std::string& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取虚拟IP列表
                     * @return VipList 虚拟IP列表
                     */
                    std::vector<VipEntity> GetVipList() const;

                    /**
                     * 设置虚拟IP列表
                     * @param VipList 虚拟IP列表
                     */
                    void SetVipList(const std::vector<VipEntity>& _vipList);

                    /**
                     * 判断参数 VipList 是否已赋值
                     * @return VipList 是否已赋值
                     */
                    bool VipListHasBeenSet() const;

                    /**
                     * 获取实例的状态。0：创建中，1：运行中，2：删除中：5隔离中， -1 创建失败
                     * @return Status 实例的状态。0：创建中，1：运行中，2：删除中：5隔离中， -1 创建失败
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例的状态。0：创建中，1：运行中，2：删除中：5隔离中， -1 创建失败
                     * @param Status 实例的状态。0：创建中，1：运行中，2：删除中：5隔离中， -1 创建失败
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例带宽，单位Mbps
                     * @return Bandwidth 实例带宽，单位Mbps
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置实例带宽，单位Mbps
                     * @param Bandwidth 实例带宽，单位Mbps
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取实例的存储大小，单位GB
                     * @return DiskSize 实例的存储大小，单位GB
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置实例的存储大小，单位GB
                     * @param DiskSize 实例的存储大小，单位GB
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取可用区域ID
                     * @return ZoneId 可用区域ID
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置可用区域ID
                     * @param ZoneId 可用区域ID
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取vpcId，如果为空，说明是基础网络
                     * @return VpcId vpcId，如果为空，说明是基础网络
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpcId，如果为空，说明是基础网络
                     * @param VpcId vpcId，如果为空，说明是基础网络
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网id
                     * @return SubnetId 子网id
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网id
                     * @param SubnetId 子网id
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取实例是否续费，int  枚举值：1表示自动续费，2表示明确不自动续费
                     * @return RenewFlag 实例是否续费，int  枚举值：1表示自动续费，2表示明确不自动续费
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置实例是否续费，int  枚举值：1表示自动续费，2表示明确不自动续费
                     * @param RenewFlag 实例是否续费，int  枚举值：1表示自动续费，2表示明确不自动续费
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取实例状态 int：0表示健康，1表示告警，2 表示实例状态异常
                     * @return Healthy 实例状态 int：0表示健康，1表示告警，2 表示实例状态异常
                     */
                    int64_t GetHealthy() const;

                    /**
                     * 设置实例状态 int：0表示健康，1表示告警，2 表示实例状态异常
                     * @param Healthy 实例状态 int：0表示健康，1表示告警，2 表示实例状态异常
                     */
                    void SetHealthy(const int64_t& _healthy);

                    /**
                     * 判断参数 Healthy 是否已赋值
                     * @return Healthy 是否已赋值
                     */
                    bool HealthyHasBeenSet() const;

                    /**
                     * 获取实例状态信息
                     * @return HealthyMessage 实例状态信息
                     */
                    std::string GetHealthyMessage() const;

                    /**
                     * 设置实例状态信息
                     * @param HealthyMessage 实例状态信息
                     */
                    void SetHealthyMessage(const std::string& _healthyMessage);

                    /**
                     * 判断参数 HealthyMessage 是否已赋值
                     * @return HealthyMessage 是否已赋值
                     */
                    bool HealthyMessageHasBeenSet() const;

                    /**
                     * 获取实例创建时间时间
                     * @return CreateTime 实例创建时间时间
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置实例创建时间时间
                     * @param CreateTime 实例创建时间时间
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取实例过期时间
                     * @return ExpireTime 实例过期时间
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置实例过期时间
                     * @param ExpireTime 实例过期时间
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取是否为内部客户。值为1 表示内部客户
                     * @return IsInternal 是否为内部客户。值为1 表示内部客户
                     */
                    int64_t GetIsInternal() const;

                    /**
                     * 设置是否为内部客户。值为1 表示内部客户
                     * @param IsInternal 是否为内部客户。值为1 表示内部客户
                     */
                    void SetIsInternal(const int64_t& _isInternal);

                    /**
                     * 判断参数 IsInternal 是否已赋值
                     * @return IsInternal 是否已赋值
                     */
                    bool IsInternalHasBeenSet() const;

                    /**
                     * 获取Topic个数
                     * @return TopicNum Topic个数
                     */
                    int64_t GetTopicNum() const;

                    /**
                     * 设置Topic个数
                     * @param TopicNum Topic个数
                     */
                    void SetTopicNum(const int64_t& _topicNum);

                    /**
                     * 判断参数 TopicNum 是否已赋值
                     * @return TopicNum 是否已赋值
                     */
                    bool TopicNumHasBeenSet() const;

                    /**
                     * 获取标识tag
                     * @return Tags 标识tag
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标识tag
                     * @param Tags 标识tag
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取kafka版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version kafka版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置kafka版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Version kafka版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取跨可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneIds 跨可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置跨可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ZoneIds 跨可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetZoneIds(const std::vector<int64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取ckafka售卖类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cvm ckafka售卖类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCvm() const;

                    /**
                     * 设置ckafka售卖类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Cvm ckafka售卖类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCvm(const int64_t& _cvm);

                    /**
                     * 判断参数 Cvm 是否已赋值
                     * @return Cvm 是否已赋值
                     */
                    bool CvmHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 访问实例的vip 信息
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 访问实例的端口信息
                     */
                    std::string m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 虚拟IP列表
                     */
                    std::vector<VipEntity> m_vipList;
                    bool m_vipListHasBeenSet;

                    /**
                     * 实例的状态。0：创建中，1：运行中，2：删除中：5隔离中， -1 创建失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例带宽，单位Mbps
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 实例的存储大小，单位GB
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 可用区域ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * vpcId，如果为空，说明是基础网络
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 实例是否续费，int  枚举值：1表示自动续费，2表示明确不自动续费
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 实例状态 int：0表示健康，1表示告警，2 表示实例状态异常
                     */
                    int64_t m_healthy;
                    bool m_healthyHasBeenSet;

                    /**
                     * 实例状态信息
                     */
                    std::string m_healthyMessage;
                    bool m_healthyMessageHasBeenSet;

                    /**
                     * 实例创建时间时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例过期时间
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 是否为内部客户。值为1 表示内部客户
                     */
                    int64_t m_isInternal;
                    bool m_isInternalHasBeenSet;

                    /**
                     * Topic个数
                     */
                    int64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * 标识tag
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * kafka版本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 跨可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * ckafka售卖类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cvm;
                    bool m_cvmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INSTANCEDETAIL_H_
