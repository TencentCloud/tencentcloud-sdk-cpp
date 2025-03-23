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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARPROCLUSTERINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARPROCLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/InstanceNodeDistribution.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Pulsar专业版集群信息
                */
                class PulsarProClusterInfo : public AbstractModel
                {
                public:
                    PulsarProClusterInfo();
                    ~PulsarProClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群Id。
                     * @return ClusterId 集群Id。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群Id。
                     * @param _clusterId 集群Id。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取集群名称。
                     * @return ClusterName 集群名称。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称。
                     * @param _clusterName 集群名称。
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取说明信息。
                     * @return Remark 说明信息。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明信息。
                     * @param _remark 说明信息。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取集群状态，0:创建中，1:正常，2:隔离
                     * @return Status 集群状态，0:创建中，1:正常，2:隔离
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置集群状态，0:创建中，1:正常，2:隔离
                     * @param _status 集群状态，0:创建中，1:正常，2:隔离
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取集群版本
                     * @return Version 集群版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置集群版本
                     * @param _version 集群版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取节点分布情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeDistribution 节点分布情况
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceNodeDistribution> GetNodeDistribution() const;

                    /**
                     * 设置节点分布情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeDistribution 节点分布情况
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeDistribution(const std::vector<InstanceNodeDistribution>& _nodeDistribution);

                    /**
                     * 判断参数 NodeDistribution 是否已赋值
                     * @return NodeDistribution 是否已赋值
                     * 
                     */
                    bool NodeDistributionHasBeenSet() const;

                    /**
                     * 获取最大储存容量，单位：MB
                     * @return MaxStorage 最大储存容量，单位：MB
                     * 
                     */
                    uint64_t GetMaxStorage() const;

                    /**
                     * 设置最大储存容量，单位：MB
                     * @param _maxStorage 最大储存容量，单位：MB
                     * 
                     */
                    void SetMaxStorage(const uint64_t& _maxStorage);

                    /**
                     * 判断参数 MaxStorage 是否已赋值
                     * @return MaxStorage 是否已赋值
                     * 
                     */
                    bool MaxStorageHasBeenSet() const;

                    /**
                     * 获取是否可以修改路由
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanEditRoute 是否可以修改路由
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCanEditRoute() const;

                    /**
                     * 设置是否可以修改路由
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _canEditRoute 是否可以修改路由
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCanEditRoute(const bool& _canEditRoute);

                    /**
                     * 判断参数 CanEditRoute 是否已赋值
                     * @return CanEditRoute 是否已赋值
                     * 
                     */
                    bool CanEditRouteHasBeenSet() const;

                    /**
                     * 获取代表是专业版和小规格专业版的不同计费规格PULSAR.P1固定存储PULSAR.P2弹性存储
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingLabelVersion 代表是专业版和小规格专业版的不同计费规格PULSAR.P1固定存储PULSAR.P2弹性存储
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBillingLabelVersion() const;

                    /**
                     * 设置代表是专业版和小规格专业版的不同计费规格PULSAR.P1固定存储PULSAR.P2弹性存储
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billingLabelVersion 代表是专业版和小规格专业版的不同计费规格PULSAR.P1固定存储PULSAR.P2弹性存储
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBillingLabelVersion(const std::string& _billingLabelVersion);

                    /**
                     * 判断参数 BillingLabelVersion 是否已赋值
                     * @return BillingLabelVersion 是否已赋值
                     * 
                     */
                    bool BillingLabelVersionHasBeenSet() const;

                    /**
                     * 获取实例到期时间戳，毫秒级精度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 实例到期时间戳，毫秒级精度。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置实例到期时间戳，毫秒级精度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 实例到期时间戳，毫秒级精度。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取是否开启自动创建主题
true就是开启了，false是关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoCreateTopicStatus 是否开启自动创建主题
true就是开启了，false是关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAutoCreateTopicStatus() const;

                    /**
                     * 设置是否开启自动创建主题
true就是开启了，false是关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoCreateTopicStatus 是否开启自动创建主题
true就是开启了，false是关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoCreateTopicStatus(const bool& _autoCreateTopicStatus);

                    /**
                     * 判断参数 AutoCreateTopicStatus 是否已赋值
                     * @return AutoCreateTopicStatus 是否已赋值
                     * 
                     */
                    bool AutoCreateTopicStatusHasBeenSet() const;

                    /**
                     * 获取自动创建主题的默认分区数，如果没开启就是0
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultPartitionNumber 自动创建主题的默认分区数，如果没开启就是0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDefaultPartitionNumber() const;

                    /**
                     * 设置自动创建主题的默认分区数，如果没开启就是0
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultPartitionNumber 自动创建主题的默认分区数，如果没开启就是0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefaultPartitionNumber(const int64_t& _defaultPartitionNumber);

                    /**
                     * 判断参数 DefaultPartitionNumber 是否已赋值
                     * @return DefaultPartitionNumber 是否已赋值
                     * 
                     */
                    bool DefaultPartitionNumberHasBeenSet() const;

                    /**
                     * 获取用户自定义的租户别名，如果没有，会复用专业集群 ID

                     * @return Tenant 用户自定义的租户别名，如果没有，会复用专业集群 ID

                     * 
                     */
                    std::string GetTenant() const;

                    /**
                     * 设置用户自定义的租户别名，如果没有，会复用专业集群 ID

                     * @param _tenant 用户自定义的租户别名，如果没有，会复用专业集群 ID

                     * 
                     */
                    void SetTenant(const std::string& _tenant);

                    /**
                     * 判断参数 Tenant 是否已赋值
                     * @return Tenant 是否已赋值
                     * 
                     */
                    bool TenantHasBeenSet() const;

                private:

                    /**
                     * 集群Id。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名称。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 说明信息。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 集群状态，0:创建中，1:正常，2:隔离
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 集群版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 节点分布情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceNodeDistribution> m_nodeDistribution;
                    bool m_nodeDistributionHasBeenSet;

                    /**
                     * 最大储存容量，单位：MB
                     */
                    uint64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * 是否可以修改路由
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_canEditRoute;
                    bool m_canEditRouteHasBeenSet;

                    /**
                     * 代表是专业版和小规格专业版的不同计费规格PULSAR.P1固定存储PULSAR.P2弹性存储
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_billingLabelVersion;
                    bool m_billingLabelVersionHasBeenSet;

                    /**
                     * 实例到期时间戳，毫秒级精度。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 是否开启自动创建主题
true就是开启了，false是关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoCreateTopicStatus;
                    bool m_autoCreateTopicStatusHasBeenSet;

                    /**
                     * 自动创建主题的默认分区数，如果没开启就是0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_defaultPartitionNumber;
                    bool m_defaultPartitionNumberHasBeenSet;

                    /**
                     * 用户自定义的租户别名，如果没有，会复用专业集群 ID

                     */
                    std::string m_tenant;
                    bool m_tenantHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARPROCLUSTERINFO_H_
