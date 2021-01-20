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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CLUSTER_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * 集群信息集合
                */
                class Cluster : public AbstractModel
                {
                public:
                    Cluster();
                    ~Cluster() = default;
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
                     * 获取接入点数量
                     * @return EndPointNum 接入点数量
                     */
                    int64_t GetEndPointNum() const;

                    /**
                     * 设置接入点数量
                     * @param EndPointNum 接入点数量
                     */
                    void SetEndPointNum(const int64_t& _endPointNum);

                    /**
                     * 判断参数 EndPointNum 是否已赋值
                     * @return EndPointNum 是否已赋值
                     */
                    bool EndPointNumHasBeenSet() const;

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
                     * 获取集群是否健康，1表示健康，0表示异常
                     * @return Healthy 集群是否健康，1表示健康，0表示异常
                     */
                    int64_t GetHealthy() const;

                    /**
                     * 设置集群是否健康，1表示健康，0表示异常
                     * @param Healthy 集群是否健康，1表示健康，0表示异常
                     */
                    void SetHealthy(const int64_t& _healthy);

                    /**
                     * 判断参数 Healthy 是否已赋值
                     * @return Healthy 是否已赋值
                     */
                    bool HealthyHasBeenSet() const;

                    /**
                     * 获取集群健康信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthyInfo 集群健康信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHealthyInfo() const;

                    /**
                     * 设置集群健康信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HealthyInfo 集群健康信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHealthyInfo(const std::string& _healthyInfo);

                    /**
                     * 判断参数 HealthyInfo 是否已赋值
                     * @return HealthyInfo 是否已赋值
                     */
                    bool HealthyInfoHasBeenSet() const;

                    /**
                     * 获取集群状态，0:创建中，1:正常，2:删除中，3:已删除，5:创建失败，6: 删除失败
                     * @return Status 集群状态，0:创建中，1:正常，2:删除中，3:已删除，5:创建失败，6: 删除失败
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置集群状态，0:创建中，1:正常，2:删除中，3:已删除，5:创建失败，6: 删除失败
                     * @param Status 集群状态，0:创建中，1:正常，2:删除中，3:已删除，5:创建失败，6: 删除失败
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取最大命名空间数量
                     * @return MaxNamespaceNum 最大命名空间数量
                     */
                    int64_t GetMaxNamespaceNum() const;

                    /**
                     * 设置最大命名空间数量
                     * @param MaxNamespaceNum 最大命名空间数量
                     */
                    void SetMaxNamespaceNum(const int64_t& _maxNamespaceNum);

                    /**
                     * 判断参数 MaxNamespaceNum 是否已赋值
                     * @return MaxNamespaceNum 是否已赋值
                     */
                    bool MaxNamespaceNumHasBeenSet() const;

                    /**
                     * 获取最大Topic数量
                     * @return MaxTopicNum 最大Topic数量
                     */
                    int64_t GetMaxTopicNum() const;

                    /**
                     * 设置最大Topic数量
                     * @param MaxTopicNum 最大Topic数量
                     */
                    void SetMaxTopicNum(const int64_t& _maxTopicNum);

                    /**
                     * 判断参数 MaxTopicNum 是否已赋值
                     * @return MaxTopicNum 是否已赋值
                     */
                    bool MaxTopicNumHasBeenSet() const;

                    /**
                     * 获取最大QPS
                     * @return MaxQps 最大QPS
                     */
                    int64_t GetMaxQps() const;

                    /**
                     * 设置最大QPS
                     * @param MaxQps 最大QPS
                     */
                    void SetMaxQps(const int64_t& _maxQps);

                    /**
                     * 判断参数 MaxQps 是否已赋值
                     * @return MaxQps 是否已赋值
                     */
                    bool MaxQpsHasBeenSet() const;

                    /**
                     * 获取消息保留时间
                     * @return MessageRetentionTime 消息保留时间
                     */
                    int64_t GetMessageRetentionTime() const;

                    /**
                     * 设置消息保留时间
                     * @param MessageRetentionTime 消息保留时间
                     */
                    void SetMessageRetentionTime(const int64_t& _messageRetentionTime);

                    /**
                     * 判断参数 MessageRetentionTime 是否已赋值
                     * @return MessageRetentionTime 是否已赋值
                     */
                    bool MessageRetentionTimeHasBeenSet() const;

                    /**
                     * 获取最大存储容量
                     * @return MaxStorageCapacity 最大存储容量
                     */
                    int64_t GetMaxStorageCapacity() const;

                    /**
                     * 设置最大存储容量
                     * @param MaxStorageCapacity 最大存储容量
                     */
                    void SetMaxStorageCapacity(const int64_t& _maxStorageCapacity);

                    /**
                     * 判断参数 MaxStorageCapacity 是否已赋值
                     * @return MaxStorageCapacity 是否已赋值
                     */
                    bool MaxStorageCapacityHasBeenSet() const;

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
                     * 接入点数量
                     */
                    int64_t m_endPointNum;
                    bool m_endPointNumHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 集群是否健康，1表示健康，0表示异常
                     */
                    int64_t m_healthy;
                    bool m_healthyHasBeenSet;

                    /**
                     * 集群健康信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_healthyInfo;
                    bool m_healthyInfoHasBeenSet;

                    /**
                     * 集群状态，0:创建中，1:正常，2:删除中，3:已删除，5:创建失败，6: 删除失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 最大命名空间数量
                     */
                    int64_t m_maxNamespaceNum;
                    bool m_maxNamespaceNumHasBeenSet;

                    /**
                     * 最大Topic数量
                     */
                    int64_t m_maxTopicNum;
                    bool m_maxTopicNumHasBeenSet;

                    /**
                     * 最大QPS
                     */
                    int64_t m_maxQps;
                    bool m_maxQpsHasBeenSet;

                    /**
                     * 消息保留时间
                     */
                    int64_t m_messageRetentionTime;
                    bool m_messageRetentionTimeHasBeenSet;

                    /**
                     * 最大存储容量
                     */
                    int64_t m_maxStorageCapacity;
                    bool m_maxStorageCapacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CLUSTER_H_
