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
#include <tencentcloud/tdmq/v20200217/model/Tag.h>


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
                     * 获取接入点数量
                     * @return EndPointNum 接入点数量
                     * 
                     */
                    int64_t GetEndPointNum() const;

                    /**
                     * 设置接入点数量
                     * @param _endPointNum 接入点数量
                     * 
                     */
                    void SetEndPointNum(const int64_t& _endPointNum);

                    /**
                     * 判断参数 EndPointNum 是否已赋值
                     * @return EndPointNum 是否已赋值
                     * 
                     */
                    bool EndPointNumHasBeenSet() const;

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
                     * 获取集群是否健康，1表示健康，0表示异常
                     * @return Healthy 集群是否健康，1表示健康，0表示异常
                     * 
                     */
                    int64_t GetHealthy() const;

                    /**
                     * 设置集群是否健康，1表示健康，0表示异常
                     * @param _healthy 集群是否健康，1表示健康，0表示异常
                     * 
                     */
                    void SetHealthy(const int64_t& _healthy);

                    /**
                     * 判断参数 Healthy 是否已赋值
                     * @return Healthy 是否已赋值
                     * 
                     */
                    bool HealthyHasBeenSet() const;

                    /**
                     * 获取集群健康信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthyInfo 集群健康信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHealthyInfo() const;

                    /**
                     * 设置集群健康信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthyInfo 集群健康信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHealthyInfo(const std::string& _healthyInfo);

                    /**
                     * 判断参数 HealthyInfo 是否已赋值
                     * @return HealthyInfo 是否已赋值
                     * 
                     */
                    bool HealthyInfoHasBeenSet() const;

                    /**
                     * 获取集群状态，0:创建中，1:正常，2:销毁中，3:已删除，4: 隔离中，5:创建失败，6: 删除失败
                     * @return Status 集群状态，0:创建中，1:正常，2:销毁中，3:已删除，4: 隔离中，5:创建失败，6: 删除失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置集群状态，0:创建中，1:正常，2:销毁中，3:已删除，4: 隔离中，5:创建失败，6: 删除失败
                     * @param _status 集群状态，0:创建中，1:正常，2:销毁中，3:已删除，4: 隔离中，5:创建失败，6: 删除失败
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
                     * 获取最大命名空间数量
                     * @return MaxNamespaceNum 最大命名空间数量
                     * 
                     */
                    int64_t GetMaxNamespaceNum() const;

                    /**
                     * 设置最大命名空间数量
                     * @param _maxNamespaceNum 最大命名空间数量
                     * 
                     */
                    void SetMaxNamespaceNum(const int64_t& _maxNamespaceNum);

                    /**
                     * 判断参数 MaxNamespaceNum 是否已赋值
                     * @return MaxNamespaceNum 是否已赋值
                     * 
                     */
                    bool MaxNamespaceNumHasBeenSet() const;

                    /**
                     * 获取最大Topic数量
                     * @return MaxTopicNum 最大Topic数量
                     * 
                     */
                    int64_t GetMaxTopicNum() const;

                    /**
                     * 设置最大Topic数量
                     * @param _maxTopicNum 最大Topic数量
                     * 
                     */
                    void SetMaxTopicNum(const int64_t& _maxTopicNum);

                    /**
                     * 判断参数 MaxTopicNum 是否已赋值
                     * @return MaxTopicNum 是否已赋值
                     * 
                     */
                    bool MaxTopicNumHasBeenSet() const;

                    /**
                     * 获取最大QPS
                     * @return MaxQps 最大QPS
                     * 
                     */
                    int64_t GetMaxQps() const;

                    /**
                     * 设置最大QPS
                     * @param _maxQps 最大QPS
                     * 
                     */
                    void SetMaxQps(const int64_t& _maxQps);

                    /**
                     * 判断参数 MaxQps 是否已赋值
                     * @return MaxQps 是否已赋值
                     * 
                     */
                    bool MaxQpsHasBeenSet() const;

                    /**
                     * 获取最大消息保留时间，秒为单位
                     * @return MessageRetentionTime 最大消息保留时间，秒为单位
                     * 
                     */
                    int64_t GetMessageRetentionTime() const;

                    /**
                     * 设置最大消息保留时间，秒为单位
                     * @param _messageRetentionTime 最大消息保留时间，秒为单位
                     * 
                     */
                    void SetMessageRetentionTime(const int64_t& _messageRetentionTime);

                    /**
                     * 判断参数 MessageRetentionTime 是否已赋值
                     * @return MessageRetentionTime 是否已赋值
                     * 
                     */
                    bool MessageRetentionTimeHasBeenSet() const;

                    /**
                     * 获取最大存储容量
                     * @return MaxStorageCapacity 最大存储容量
                     * 
                     */
                    int64_t GetMaxStorageCapacity() const;

                    /**
                     * 设置最大存储容量
                     * @param _maxStorageCapacity 最大存储容量
                     * 
                     */
                    void SetMaxStorageCapacity(const int64_t& _maxStorageCapacity);

                    /**
                     * 判断参数 MaxStorageCapacity 是否已赋值
                     * @return MaxStorageCapacity 是否已赋值
                     * 
                     */
                    bool MaxStorageCapacityHasBeenSet() const;

                    /**
                     * 获取集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 集群版本
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取公网访问接入点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicEndPoint 公网访问接入点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicEndPoint() const;

                    /**
                     * 设置公网访问接入点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicEndPoint 公网访问接入点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicEndPoint(const std::string& _publicEndPoint);

                    /**
                     * 判断参数 PublicEndPoint 是否已赋值
                     * @return PublicEndPoint 是否已赋值
                     * 
                     */
                    bool PublicEndPointHasBeenSet() const;

                    /**
                     * 获取VPC访问接入点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcEndPoint VPC访问接入点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcEndPoint() const;

                    /**
                     * 设置VPC访问接入点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcEndPoint VPC访问接入点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcEndPoint(const std::string& _vpcEndPoint);

                    /**
                     * 判断参数 VpcEndPoint 是否已赋值
                     * @return VpcEndPoint 是否已赋值
                     * 
                     */
                    bool VpcEndPointHasBeenSet() const;

                    /**
                     * 获取命名空间数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceNum 命名空间数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNamespaceNum() const;

                    /**
                     * 设置命名空间数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceNum 命名空间数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespaceNum(const int64_t& _namespaceNum);

                    /**
                     * 判断参数 NamespaceNum 是否已赋值
                     * @return NamespaceNum 是否已赋值
                     * 
                     */
                    bool NamespaceNumHasBeenSet() const;

                    /**
                     * 获取已使用存储限制，MB为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsedStorageBudget 已使用存储限制，MB为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUsedStorageBudget() const;

                    /**
                     * 设置已使用存储限制，MB为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usedStorageBudget 已使用存储限制，MB为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsedStorageBudget(const int64_t& _usedStorageBudget);

                    /**
                     * 判断参数 UsedStorageBudget 是否已赋值
                     * @return UsedStorageBudget 是否已赋值
                     * 
                     */
                    bool UsedStorageBudgetHasBeenSet() const;

                    /**
                     * 获取最大生产消息速率，以条数为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxPublishRateInMessages 最大生产消息速率，以条数为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxPublishRateInMessages() const;

                    /**
                     * 设置最大生产消息速率，以条数为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxPublishRateInMessages 最大生产消息速率，以条数为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxPublishRateInMessages(const int64_t& _maxPublishRateInMessages);

                    /**
                     * 判断参数 MaxPublishRateInMessages 是否已赋值
                     * @return MaxPublishRateInMessages 是否已赋值
                     * 
                     */
                    bool MaxPublishRateInMessagesHasBeenSet() const;

                    /**
                     * 获取最大推送消息速率，以条数为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxDispatchRateInMessages 最大推送消息速率，以条数为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxDispatchRateInMessages() const;

                    /**
                     * 设置最大推送消息速率，以条数为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxDispatchRateInMessages 最大推送消息速率，以条数为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxDispatchRateInMessages(const int64_t& _maxDispatchRateInMessages);

                    /**
                     * 判断参数 MaxDispatchRateInMessages 是否已赋值
                     * @return MaxDispatchRateInMessages 是否已赋值
                     * 
                     */
                    bool MaxDispatchRateInMessagesHasBeenSet() const;

                    /**
                     * 获取最大生产消息速率，以字节为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxPublishRateInBytes 最大生产消息速率，以字节为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxPublishRateInBytes() const;

                    /**
                     * 设置最大生产消息速率，以字节为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxPublishRateInBytes 最大生产消息速率，以字节为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxPublishRateInBytes(const int64_t& _maxPublishRateInBytes);

                    /**
                     * 判断参数 MaxPublishRateInBytes 是否已赋值
                     * @return MaxPublishRateInBytes 是否已赋值
                     * 
                     */
                    bool MaxPublishRateInBytesHasBeenSet() const;

                    /**
                     * 获取最大推送消息速率，以字节为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxDispatchRateInBytes 最大推送消息速率，以字节为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxDispatchRateInBytes() const;

                    /**
                     * 设置最大推送消息速率，以字节为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxDispatchRateInBytes 最大推送消息速率，以字节为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxDispatchRateInBytes(const int64_t& _maxDispatchRateInBytes);

                    /**
                     * 判断参数 MaxDispatchRateInBytes 是否已赋值
                     * @return MaxDispatchRateInBytes 是否已赋值
                     * 
                     */
                    bool MaxDispatchRateInBytesHasBeenSet() const;

                    /**
                     * 获取已创建主题数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicNum 已创建主题数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTopicNum() const;

                    /**
                     * 设置已创建主题数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicNum 已创建主题数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicNum(const int64_t& _topicNum);

                    /**
                     * 判断参数 TopicNum 是否已赋值
                     * @return TopicNum 是否已赋值
                     * 
                     */
                    bool TopicNumHasBeenSet() const;

                    /**
                     * 获取最长消息延时，以秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxMessageDelayInSeconds 最长消息延时，以秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxMessageDelayInSeconds() const;

                    /**
                     * 设置最长消息延时，以秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxMessageDelayInSeconds 最长消息延时，以秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxMessageDelayInSeconds(const int64_t& _maxMessageDelayInSeconds);

                    /**
                     * 判断参数 MaxMessageDelayInSeconds 是否已赋值
                     * @return MaxMessageDelayInSeconds 是否已赋值
                     * 
                     */
                    bool MaxMessageDelayInSecondsHasBeenSet() const;

                    /**
                     * 获取是否开启公网访问，不填时默认开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicAccessEnabled 是否开启公网访问，不填时默认开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetPublicAccessEnabled() const;

                    /**
                     * 设置是否开启公网访问，不填时默认开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicAccessEnabled 是否开启公网访问，不填时默认开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicAccessEnabled(const bool& _publicAccessEnabled);

                    /**
                     * 判断参数 PublicAccessEnabled 是否已赋值
                     * @return PublicAccessEnabled 是否已赋值
                     * 
                     */
                    bool PublicAccessEnabledHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取计费模式：
0: 按量计费
1: 包年包月
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayMode 计费模式：
0: 按量计费
1: 包年包月
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置计费模式：
0: 按量计费
1: 包年包月
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payMode 计费模式：
0: 按量计费
1: 包年包月
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取项目名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName 项目名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectName 项目名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取是否支持升级专业版实例
                     * @return UpgradeProInstance 是否支持升级专业版实例
                     * 
                     */
                    bool GetUpgradeProInstance() const;

                    /**
                     * 设置是否支持升级专业版实例
                     * @param _upgradeProInstance 是否支持升级专业版实例
                     * 
                     */
                    void SetUpgradeProInstance(const bool& _upgradeProInstance);

                    /**
                     * 判断参数 UpgradeProInstance 是否已赋值
                     * @return UpgradeProInstance 是否已赋值
                     * 
                     */
                    bool UpgradeProInstanceHasBeenSet() const;

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
                     * 集群状态，0:创建中，1:正常，2:销毁中，3:已删除，4: 隔离中，5:创建失败，6: 删除失败
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
                     * 最大消息保留时间，秒为单位
                     */
                    int64_t m_messageRetentionTime;
                    bool m_messageRetentionTimeHasBeenSet;

                    /**
                     * 最大存储容量
                     */
                    int64_t m_maxStorageCapacity;
                    bool m_maxStorageCapacityHasBeenSet;

                    /**
                     * 集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 公网访问接入点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicEndPoint;
                    bool m_publicEndPointHasBeenSet;

                    /**
                     * VPC访问接入点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcEndPoint;
                    bool m_vpcEndPointHasBeenSet;

                    /**
                     * 命名空间数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_namespaceNum;
                    bool m_namespaceNumHasBeenSet;

                    /**
                     * 已使用存储限制，MB为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_usedStorageBudget;
                    bool m_usedStorageBudgetHasBeenSet;

                    /**
                     * 最大生产消息速率，以条数为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxPublishRateInMessages;
                    bool m_maxPublishRateInMessagesHasBeenSet;

                    /**
                     * 最大推送消息速率，以条数为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxDispatchRateInMessages;
                    bool m_maxDispatchRateInMessagesHasBeenSet;

                    /**
                     * 最大生产消息速率，以字节为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxPublishRateInBytes;
                    bool m_maxPublishRateInBytesHasBeenSet;

                    /**
                     * 最大推送消息速率，以字节为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxDispatchRateInBytes;
                    bool m_maxDispatchRateInBytesHasBeenSet;

                    /**
                     * 已创建主题数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * 最长消息延时，以秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxMessageDelayInSeconds;
                    bool m_maxMessageDelayInSecondsHasBeenSet;

                    /**
                     * 是否开启公网访问，不填时默认开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_publicAccessEnabled;
                    bool m_publicAccessEnabledHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 计费模式：
0: 按量计费
1: 包年包月
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 是否支持升级专业版实例
                     */
                    bool m_upgradeProInstance;
                    bool m_upgradeProInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CLUSTER_H_
