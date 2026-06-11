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
                     * 获取<p>集群Id。</p>
                     * @return ClusterId <p>集群Id。</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群Id。</p>
                     * @param _clusterId <p>集群Id。</p>
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
                     * 获取<p>集群名称。</p>
                     * @return ClusterName <p>集群名称。</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称。</p>
                     * @param _clusterName <p>集群名称。</p>
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
                     * 获取<p>说明信息。</p>
                     * @return Remark <p>说明信息。</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>说明信息。</p>
                     * @param _remark <p>说明信息。</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>集群状态，0:创建中，1:正常，2:隔离</p>
                     * @return Status <p>集群状态，0:创建中，1:正常，2:隔离</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>集群状态，0:创建中，1:正常，2:隔离</p>
                     * @param _status <p>集群状态，0:创建中，1:正常，2:隔离</p>
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
                     * 获取<p>集群版本</p>
                     * @return Version <p>集群版本</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>集群版本</p>
                     * @param _version <p>集群版本</p>
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
                     * 获取<p>节点分布情况</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeDistribution <p>节点分布情况</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceNodeDistribution> GetNodeDistribution() const;

                    /**
                     * 设置<p>节点分布情况</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeDistribution <p>节点分布情况</p>
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
                     * 获取<p>最大储存容量，单位：MB</p>
                     * @return MaxStorage <p>最大储存容量，单位：MB</p>
                     * 
                     */
                    uint64_t GetMaxStorage() const;

                    /**
                     * 设置<p>最大储存容量，单位：MB</p>
                     * @param _maxStorage <p>最大储存容量，单位：MB</p>
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
                     * 获取<p>是否可以修改路由</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanEditRoute <p>是否可以修改路由</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCanEditRoute() const;

                    /**
                     * 设置<p>是否可以修改路由</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _canEditRoute <p>是否可以修改路由</p>
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
                     * 获取<p>代表是专业版和小规格专业版的不同计费规格PULSAR.P1固定存储PULSAR.P2弹性存储</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingLabelVersion <p>代表是专业版和小规格专业版的不同计费规格PULSAR.P1固定存储PULSAR.P2弹性存储</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBillingLabelVersion() const;

                    /**
                     * 设置<p>代表是专业版和小规格专业版的不同计费规格PULSAR.P1固定存储PULSAR.P2弹性存储</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billingLabelVersion <p>代表是专业版和小规格专业版的不同计费规格PULSAR.P1固定存储PULSAR.P2弹性存储</p>
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
                     * 获取<p>实例到期时间戳，毫秒级精度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime <p>实例到期时间戳，毫秒级精度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置<p>实例到期时间戳，毫秒级精度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime <p>实例到期时间戳，毫秒级精度。</p>
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
                     * 获取<p>是否开启自动创建主题<br>true就是开启了，false是关闭</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoCreateTopicStatus <p>是否开启自动创建主题<br>true就是开启了，false是关闭</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAutoCreateTopicStatus() const;

                    /**
                     * 设置<p>是否开启自动创建主题<br>true就是开启了，false是关闭</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoCreateTopicStatus <p>是否开启自动创建主题<br>true就是开启了，false是关闭</p>
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
                     * 获取<p>自动创建主题的默认分区数，如果没开启就是0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultPartitionNumber <p>自动创建主题的默认分区数，如果没开启就是0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDefaultPartitionNumber() const;

                    /**
                     * 设置<p>自动创建主题的默认分区数，如果没开启就是0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultPartitionNumber <p>自动创建主题的默认分区数，如果没开启就是0</p>
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
                     * 获取<p>用户自定义的租户别名，如果没有，会复用专业集群 ID</p>
                     * @return Tenant <p>用户自定义的租户别名，如果没有，会复用专业集群 ID</p>
                     * 
                     */
                    std::string GetTenant() const;

                    /**
                     * 设置<p>用户自定义的租户别名，如果没有，会复用专业集群 ID</p>
                     * @param _tenant <p>用户自定义的租户别名，如果没有，会复用专业集群 ID</p>
                     * 
                     */
                    void SetTenant(const std::string& _tenant);

                    /**
                     * 判断参数 Tenant 是否已赋值
                     * @return Tenant 是否已赋值
                     * 
                     */
                    bool TenantHasBeenSet() const;

                    /**
                     * 获取<p>删除保护开关标识</p>
                     * @return DeleteProtection <p>删除保护开关标识</p>
                     * 
                     */
                    int64_t GetDeleteProtection() const;

                    /**
                     * 设置<p>删除保护开关标识</p>
                     * @param _deleteProtection <p>删除保护开关标识</p>
                     * 
                     */
                    void SetDeleteProtection(const int64_t& _deleteProtection);

                    /**
                     * 判断参数 DeleteProtection 是否已赋值
                     * @return DeleteProtection 是否已赋值
                     * 
                     */
                    bool DeleteProtectionHasBeenSet() const;

                    /**
                     * 获取<p>是否开启弹性tps</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul>
                     * @return ElasticTpsEnabled <p>是否开启弹性tps</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul>
                     * 
                     */
                    int64_t GetElasticTpsEnabled() const;

                    /**
                     * 设置<p>是否开启弹性tps</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul>
                     * @param _elasticTpsEnabled <p>是否开启弹性tps</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul>
                     * 
                     */
                    void SetElasticTpsEnabled(const int64_t& _elasticTpsEnabled);

                    /**
                     * 判断参数 ElasticTpsEnabled 是否已赋值
                     * @return ElasticTpsEnabled 是否已赋值
                     * 
                     */
                    bool ElasticTpsEnabledHasBeenSet() const;

                    /**
                     * 获取<p>是否开启数据加密</p><p>枚举值：</p><ul><li>0： 关闭数据加密</li><li>1： 开启数据加密</li></ul>
                     * @return EncryptionStatus <p>是否开启数据加密</p><p>枚举值：</p><ul><li>0： 关闭数据加密</li><li>1： 开启数据加密</li></ul>
                     * 
                     */
                    int64_t GetEncryptionStatus() const;

                    /**
                     * 设置<p>是否开启数据加密</p><p>枚举值：</p><ul><li>0： 关闭数据加密</li><li>1： 开启数据加密</li></ul>
                     * @param _encryptionStatus <p>是否开启数据加密</p><p>枚举值：</p><ul><li>0： 关闭数据加密</li><li>1： 开启数据加密</li></ul>
                     * 
                     */
                    void SetEncryptionStatus(const int64_t& _encryptionStatus);

                    /**
                     * 判断参数 EncryptionStatus 是否已赋值
                     * @return EncryptionStatus 是否已赋值
                     * 
                     */
                    bool EncryptionStatusHasBeenSet() const;

                private:

                    /**
                     * <p>集群Id。</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群名称。</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>说明信息。</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>集群状态，0:创建中，1:正常，2:隔离</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>集群版本</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>节点分布情况</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceNodeDistribution> m_nodeDistribution;
                    bool m_nodeDistributionHasBeenSet;

                    /**
                     * <p>最大储存容量，单位：MB</p>
                     */
                    uint64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * <p>是否可以修改路由</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_canEditRoute;
                    bool m_canEditRouteHasBeenSet;

                    /**
                     * <p>代表是专业版和小规格专业版的不同计费规格PULSAR.P1固定存储PULSAR.P2弹性存储</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_billingLabelVersion;
                    bool m_billingLabelVersionHasBeenSet;

                    /**
                     * <p>实例到期时间戳，毫秒级精度。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>是否开启自动创建主题<br>true就是开启了，false是关闭</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoCreateTopicStatus;
                    bool m_autoCreateTopicStatusHasBeenSet;

                    /**
                     * <p>自动创建主题的默认分区数，如果没开启就是0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_defaultPartitionNumber;
                    bool m_defaultPartitionNumberHasBeenSet;

                    /**
                     * <p>用户自定义的租户别名，如果没有，会复用专业集群 ID</p>
                     */
                    std::string m_tenant;
                    bool m_tenantHasBeenSet;

                    /**
                     * <p>删除保护开关标识</p>
                     */
                    int64_t m_deleteProtection;
                    bool m_deleteProtectionHasBeenSet;

                    /**
                     * <p>是否开启弹性tps</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul>
                     */
                    int64_t m_elasticTpsEnabled;
                    bool m_elasticTpsEnabledHasBeenSet;

                    /**
                     * <p>是否开启数据加密</p><p>枚举值：</p><ul><li>0： 关闭数据加密</li><li>1： 开启数据加密</li></ul>
                     */
                    int64_t m_encryptionStatus;
                    bool m_encryptionStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARPROCLUSTERINFO_H_
