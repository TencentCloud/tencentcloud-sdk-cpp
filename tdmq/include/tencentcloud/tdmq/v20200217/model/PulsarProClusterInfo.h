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
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群Id。
                     * @param ClusterId 集群Id。
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取集群名称。
                     * @return ClusterName 集群名称。
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称。
                     * @param ClusterName 集群名称。
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取说明信息。
                     * @return Remark 说明信息。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明信息。
                     * @param Remark 说明信息。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取集群状态，0:创建中，1:正常，2:隔离
                     * @return Status 集群状态，0:创建中，1:正常，2:隔离
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置集群状态，0:创建中，1:正常，2:隔离
                     * @param Status 集群状态，0:创建中，1:正常，2:隔离
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取集群版本
                     * @return Version 集群版本
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置集群版本
                     * @param Version 集群版本
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取节点分布情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeDistribution 节点分布情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceNodeDistribution> GetNodeDistribution() const;

                    /**
                     * 设置节点分布情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NodeDistribution 节点分布情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNodeDistribution(const std::vector<InstanceNodeDistribution>& _nodeDistribution);

                    /**
                     * 判断参数 NodeDistribution 是否已赋值
                     * @return NodeDistribution 是否已赋值
                     */
                    bool NodeDistributionHasBeenSet() const;

                    /**
                     * 获取最大储存容量，单位：MB
                     * @return MaxStorage 最大储存容量，单位：MB
                     */
                    uint64_t GetMaxStorage() const;

                    /**
                     * 设置最大储存容量，单位：MB
                     * @param MaxStorage 最大储存容量，单位：MB
                     */
                    void SetMaxStorage(const uint64_t& _maxStorage);

                    /**
                     * 判断参数 MaxStorage 是否已赋值
                     * @return MaxStorage 是否已赋值
                     */
                    bool MaxStorageHasBeenSet() const;

                    /**
                     * 获取是否可以修改路由
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanEditRoute 是否可以修改路由
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetCanEditRoute() const;

                    /**
                     * 设置是否可以修改路由
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CanEditRoute 是否可以修改路由
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCanEditRoute(const bool& _canEditRoute);

                    /**
                     * 判断参数 CanEditRoute 是否已赋值
                     * @return CanEditRoute 是否已赋值
                     */
                    bool CanEditRouteHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARPROCLUSTERINFO_H_
